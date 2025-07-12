/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>

int main(void)
{
	while (1) {
		printk("Hello, World!\n");
		k_msleep(1000);
	}
	return 0;
}
