/*
 * XREFs of KeForceDetachProcess @ 0x14035559C
 * Callers:
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MmQueryCommitReleaseState @ 0x140366928 (MmQueryCommitReleaseState.c)
 *     MiUnlockStealVm @ 0x1403BDA80 (MiUnlockStealVm.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140618F08 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1406190E8 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140619278 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x140619848 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x140AA811C (PopHandleNextState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14022D9C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
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
