/*
 * XREFs of KiIsKernelCfgActive @ 0x140B76EA8
 * Callers:
 *     KiInitializeKernel @ 0x140A8C770 (KiInitializeKernel.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14033FE30 (VslGetNestedPageProtectionFlags.c)
 */

__int64 KiIsKernelCfgActive()
{
  return ((unsigned int)VslGetNestedPageProtectionFlags() >> 7) & 1;
}
