/*
 * XREFs of KeForceAttachProcess @ 0x1402393FC
 * Callers:
 *     MmQueryCommitReleaseState @ 0x14024DC34 (MmQueryCommitReleaseState.c)
 *     MiTrimSharedPageFromViews @ 0x14027B820 (MiTrimSharedPageFromViews.c)
 *     MiLockStealUserVm @ 0x1402EACBC (MiLockStealUserVm.c)
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiAttachWorkingSet @ 0x140374958 (MiAttachWorkingSet.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140580DB8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140580FA4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140581158 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x140581748 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x140A4B5A0 (PopHandleNextState.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall KeForceAttachProcess(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r8
  ULONG_PTR ApcStateIndex; // rcx

  if ( !a2 )
  {
    CurrentThread = KeGetCurrentThread();
    ApcStateIndex = CurrentThread->ApcStateIndex;
    if ( (_BYTE)ApcStateIndex )
      KeBugCheckEx(5u, BugCheckParameter1, (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
  }
  return KiStackAttachProcess(BugCheckParameter1);
}
