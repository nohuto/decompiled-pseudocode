/*
 * XREFs of MmDetachSession @ 0x140356450
 * Callers:
 *     MiEmptyAccessLogs @ 0x1402005B0 (MiEmptyAccessLogs.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFEEC (MiTrimSharedPageFromViews.c)
 *     MiUnlockStealVm @ 0x1403BDC60 (MiUnlockStealVm.c)
 *     PopWatchdogWorker @ 0x1403D6480 (PopWatchdogWorker.c)
 *     CmFcpFeatureUsageProviderSubscriptionWrapper @ 0x14067F990 (CmFcpFeatureUsageProviderSubscriptionWrapper.c)
 *     MmPrefetchVirtualMemory @ 0x140681A70 (MmPrefetchVirtualMemory.c)
 *     PnpNotifyDriverCallback @ 0x140687B60 (PnpNotifyDriverCallback.c)
 *     PspChangeProcessExecutionState @ 0x1406A6C04 (PspChangeProcessExecutionState.c)
 *     ObpProcessRemoveObjectQueue @ 0x140749730 (ObpProcessRemoveObjectQueue.c)
 *     EtwpEnableGuid @ 0x14077FEF0 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x1407811E0 (EtwpSendDataBlock.c)
 *     PspDetachSession @ 0x1407C5F3C (PspDetachSession.c)
 *     ExCallSessionCallBack @ 0x1407C5F60 (ExCallSessionCallBack.c)
 *     MmEnumerateSystemImages @ 0x140820ED0 (MmEnumerateSystemImages.c)
 *     TtmpSessionWorker @ 0x1409A5B30 (TtmpSessionWorker.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x140A27DA0 (CmFcpChangeSubscriptionWrapper.c)
 *     VfThunkApplyPristineToAllSession @ 0x140ADB2EC (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140ADB46C (VfThunkApplyWdmThunkToAllSession.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSignalGate @ 0x14035D4DC (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmDetachSession(__int64 a1, $115DCDF994C6370D29323EAB0E0C9502 *a2)
{
  __int64 v2; // rbx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 1368);
  memset(&v11, 0, sizeof(v11));
  KeAcquireInStackQueuedSpinLock(&qword_140C697C0, &v11);
  --*(_DWORD *)(v2 + 76);
  if ( (*(_DWORD *)(v2 + 4) & 2) == 0 || *(_DWORD *)(v2 + 76) )
    v2 = 0LL;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v11);
  OldIrql = v11.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v11.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v9 = ~(unsigned __int16)(-1LL << (v11.OldIrql + 1));
      v10 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  KiUnstackDetachProcess(a2);
  if ( v2 )
    KeSignalGate(v2 + 80, 1LL);
  return 0LL;
}
