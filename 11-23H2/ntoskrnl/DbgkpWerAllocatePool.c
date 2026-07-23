/*
 * XREFs of DbgkpWerAllocatePool @ 0x14093B834
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x14053C658 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall DbgkpWerAllocatePool(__int64 a1)
{
  return ExAllocatePool2(256LL, a1, 1466393156LL);
}
