/*
 * XREFs of KiIsKernelCfgActive @ 0x140B75F18
 * Callers:
 *     KiInitializeKernel @ 0x140A8BF10 (KiInitializeKernel.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x140340320 (VslGetNestedPageProtectionFlags.c)
 */

__int64 KiIsKernelCfgActive()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 7) & 1;
}
