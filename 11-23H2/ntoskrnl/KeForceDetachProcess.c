/*
 * XREFs of KeForceDetachProcess @ 0x14035573C
 * Callers:
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFEEC (MiTrimSharedPageFromViews.c)
 *     MmQueryCommitReleaseState @ 0x140366AC8 (MmQueryCommitReleaseState.c)
 *     MiUnlockStealVm @ 0x1403BDC60 (MiUnlockStealVm.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140619458 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140619638 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406197C8 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x140619D98 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x140AA7F8C (PopHandleNextState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall KeForceDetachProcess($115DCDF994C6370D29323EAB0E0C9502 *a1)
{
  $115DCDF994C6370D29323EAB0E0C9502 *v2; // rcx
  _OWORD v4[3]; // [rsp+20h] [rbp-48h] BYREF

  v2 = ($115DCDF994C6370D29323EAB0E0C9502 *)v4;
  v4[0] = 0LL;
  if ( a1 )
    v2 = a1;
  memset(&v4[1], 0, 32);
  return KiUnstackDetachProcess(v2);
}
