/*
 * XREFs of KiAreCodePatchesAllowed @ 0x140B958F0
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140B17354 (CcInitializeBcbProfiler.c)
 *     KeCheckedKernelInitialize @ 0x140B17B50 (KeCheckedKernelInitialize.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 *     VslConnectSwInterrupt @ 0x140B728D4 (VslConnectSwInterrupt.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1403405B0 (VslGetNestedPageProtectionFlags.c)
 */

_BOOL8 KiAreCodePatchesAllowed()
{
  return (VslGetNestedPageProtectionFlags() & 0x500) != 0;
}
