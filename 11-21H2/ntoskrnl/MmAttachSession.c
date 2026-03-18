/*
 * XREFs of MmAttachSession @ 0x1402312E0
 * Callers:
 *     MiLockStealSystemVm @ 0x140230F28 (MiLockStealSystemVm.c)
 *     MiTrimSharedPageFromViews @ 0x14027B820 (MiTrimSharedPageFromViews.c)
 *     ExpHpCompactSessionPools @ 0x1402A0EF8 (ExpHpCompactSessionPools.c)
 *     MiEmptyAccessLogs @ 0x140375ED0 (MiEmptyAccessLogs.c)
 *     PopWatchdogWorker @ 0x1403A0B60 (PopWatchdogWorker.c)
 *     PopPowerButtonWorkCallback @ 0x1405D89F0 (PopPowerButtonWorkCallback.c)
 *     PspChangeProcessExecutionState @ 0x140687754 (PspChangeProcessExecutionState.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406A1000 (ObpProcessRemoveObjectQueue.c)
 *     ExGetSessionPoolTagInformation @ 0x1406A8B68 (ExGetSessionPoolTagInformation.c)
 *     PspAttachSession @ 0x1406A8EEC (PspAttachSession.c)
 *     ExCallSessionCallBack @ 0x1406A8F48 (ExCallSessionCallBack.c)
 *     MmPrefetchVirtualMemory @ 0x1406EC048 (MmPrefetchVirtualMemory.c)
 *     PnpNotifyDriverCallback @ 0x14078D3DC (PnpNotifyDriverCallback.c)
 *     EtwpEnableGuid @ 0x14079028C (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x140790CF8 (EtwpSendDataBlock.c)
 *     MmEnumerateSystemImages @ 0x140814DC0 (MmEnumerateSystemImages.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x1409234E0 (CmFcpChangeSubscriptionWrapper.c)
 *     TtmpSessionWorker @ 0x1409A5C10 (TtmpSessionWorker.c)
 *     EtwpPoolRunDown @ 0x1409EAB74 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1409F5D80 (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyPristineToAllSession @ 0x140A93644 (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140A937C4 (VfThunkApplyWdmThunkToAllSession.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmAttachSession(ULONG_PTR BugCheckParameter1)
{
  __int64 v1; // rdi
  ULONG_PTR v2; // rbx
  _KPROCESS *Process; // rsi
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rbp
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v11; // eax
  bool v12; // zf
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r8
  int v16; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter1 + 1368);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = BugCheckParameter1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = Process[1].Affinity.StaticBitmap[25];
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  if ( (*(_DWORD *)(v1 + 4) & 2) != 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    return 3221225738LL;
  }
  else
  {
    ++*(_DWORD *)(v1 + 92);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v5 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && LockHandle.OldIrql <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = v14->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v12 = (v16 & v15[5]) == 0;
          v15[5] &= v16;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
    }
    __writecr8(v5);
    if ( v4 && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 && v4 == v1 )
      v2 = (ULONG_PTR)Process;
    KiStackAttachProcess(v2);
    return 0LL;
  }
}
