/*
 * XREFs of KeForceAttachProcess @ 0x140352F38
 * Callers:
 *     MiSharePages @ 0x1402161D0 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MmQueryCommitReleaseState @ 0x1403662D8 (MmQueryCommitReleaseState.c)
 *     MiLockStealUserVm @ 0x1403BD8B8 (MiLockStealUserVm.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140618F78 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140619158 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406192E8 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x1406198B8 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x140AA81DC (PopHandleNextState.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
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
