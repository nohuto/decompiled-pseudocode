/*
 * XREFs of KeForceAttachProcess @ 0x140353538
 * Callers:
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MmQueryCommitReleaseState @ 0x140366928 (MmQueryCommitReleaseState.c)
 *     MiLockStealUserVm @ 0x1403BDF18 (MiLockStealUserVm.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140618F08 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1406190E8 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140619278 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x140619848 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x140AA811C (PopHandleNextState.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D600 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

int __fastcall KeForceAttachProcess(_KPROCESS *BugCheckParameter1, _OWORD *a2, char a3)
{
  _OWORD *v4; // r8
  struct _KTHREAD *CurrentThread; // r8
  _OWORD v7[3]; // [rsp+30h] [rbp-48h] BYREF

  v4 = a2;
  memset(v7, 0, sizeof(v7));
  if ( !a2 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->ApcStateIndex )
      KeBugCheckEx(
        5u,
        (ULONG_PTR)BugCheckParameter1,
        (ULONG_PTR)CurrentThread->ApcState.Process,
        CurrentThread->ApcStateIndex,
        0LL);
    v4 = v7;
  }
  return KiStackAttachProcess(BugCheckParameter1, 2 * (a3 & 1) + 1, (__int64)v4);
}
