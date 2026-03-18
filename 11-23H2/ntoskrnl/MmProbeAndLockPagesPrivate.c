/*
 * XREFs of MmProbeAndLockPagesPrivate @ 0x1402FBEF8
 * Callers:
 *     sub_140762140 @ 0x140762140 (sub_140762140.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140764E94 (WbMakeUserExecutablePagesKernelWritable.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1402FC270 (MiProbeAndLockPages.c)
 */

__int64 __fastcall MmProbeAndLockPagesPrivate(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return MiProbeAndLockPages(a1, a2, 3LL);
}
