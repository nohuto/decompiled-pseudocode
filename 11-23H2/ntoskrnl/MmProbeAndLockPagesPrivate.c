/*
 * XREFs of MmProbeAndLockPagesPrivate @ 0x1402FC188
 * Callers:
 *     sub_140762330 @ 0x140762330 (sub_140762330.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140765084 (WbMakeUserExecutablePagesKernelWritable.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1402FC500 (MiProbeAndLockPages.c)
 */

__int64 __fastcall MmProbeAndLockPagesPrivate(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return MiProbeAndLockPages(a1, a2, 3LL);
}
