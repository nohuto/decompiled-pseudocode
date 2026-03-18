/*
 * XREFs of DbgkpWerAllocatePool @ 0x14093B6E4
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x14053C1B8 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall DbgkpWerAllocatePool(__int64 a1)
{
  return ExAllocatePool2(256LL, a1, 1466393156LL);
}
