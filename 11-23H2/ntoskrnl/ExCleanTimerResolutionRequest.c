/*
 * XREFs of ExCleanTimerResolutionRequest @ 0x140201B70
 * Callers:
 *     PspExitProcess @ 0x140751624 (PspExitProcess.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ZwSetTimerResolution @ 0x14041E8D0 (ZwSetTimerResolution.c)
 *     PoDiagFreeUsermodeStack @ 0x1406831B8 (PoDiagFreeUsermodeStack.c)
 *     ExReleaseTimeRefreshLock @ 0x14075FB20 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x14075FB44 (ExAcquireTimeRefreshLock.c)
 */

__int64 __fastcall ExCleanTimerResolutionRequest(__int64 a1)
{
  _KPROCESS *Process; // rbx
  unsigned __int64 v2; // rdi
  unsigned __int64 KernelWaitTime; // r8
  _KPROCESS **UserWaitTime; // rdx
  unsigned __int64 LastRebalanceQpc; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  ULONG ActualTime; // [rsp+30h] [rbp+8h] BYREF

  ActualTime = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x100000000000LL) != 0 )
    ZwSetTimerResolution(KeMaximumIncrement, 0, &ActualTime);
  LOBYTE(a1) = 1;
  ExAcquireTimeRefreshLock(a1);
  v2 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  KernelWaitTime = Process[1].KernelWaitTime;
  UserWaitTime = (_KPROCESS **)Process[1].UserWaitTime;
  if ( *(_KPROCESS **)(KernelWaitTime + 8) != (_KPROCESS *)&Process[1].KernelWaitTime
    || *UserWaitTime != (_KPROCESS *)&Process[1].KernelWaitTime )
  {
    __fastfail(3u);
  }
  *UserWaitTime = (_KPROCESS *)KernelWaitTime;
  *(_QWORD *)(KernelWaitTime + 8) = UserWaitTime;
  KxReleaseSpinLock(&ExpKernelResolutionLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  LastRebalanceQpc = Process[1].LastRebalanceQpc;
  Process[1].LastRebalanceQpc = 0LL;
  result = ExReleaseTimeRefreshLock();
  if ( LastRebalanceQpc )
    return PoDiagFreeUsermodeStack(LastRebalanceQpc);
  return result;
}
