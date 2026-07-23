/*
 * XREFs of MmAttachSession @ 0x140355D50
 * Callers:
 *     MiEmptyAccessLogs @ 0x1402005B0 (MiEmptyAccessLogs.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiLockStealSystemVm @ 0x14039875C (MiLockStealSystemVm.c)
 *     PopWatchdogWorker @ 0x1403D5C40 (PopWatchdogWorker.c)
 *     PopPowerButtonWorkCallback @ 0x140599180 (PopPowerButtonWorkCallback.c)
 *     CmFcpFeatureUsageProviderSubscriptionWrapper @ 0x14067F990 (CmFcpFeatureUsageProviderSubscriptionWrapper.c)
 *     MmPrefetchVirtualMemory @ 0x140681A70 (MmPrefetchVirtualMemory.c)
 *     PnpNotifyDriverCallback @ 0x140687B60 (PnpNotifyDriverCallback.c)
 *     PspChangeProcessExecutionState @ 0x1406A6C04 (PspChangeProcessExecutionState.c)
 *     ObpProcessRemoveObjectQueue @ 0x140749A50 (ObpProcessRemoveObjectQueue.c)
 *     EtwpEnableGuid @ 0x140780210 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x140781500 (EtwpSendDataBlock.c)
 *     PspAttachSession @ 0x1407C61A0 (PspAttachSession.c)
 *     ExCallSessionCallBack @ 0x1407C6220 (ExCallSessionCallBack.c)
 *     MmEnumerateSystemImages @ 0x140828110 (MmEnumerateSystemImages.c)
 *     TtmpSessionWorker @ 0x1409A59E0 (TtmpSessionWorker.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x140A27BA0 (CmFcpChangeSubscriptionWrapper.c)
 *     VfThunkApplyPristineToAllSession @ 0x140ADC2CC (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140ADC44C (VfThunkApplyWdmThunkToAllSession.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmAttachSession(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  _KPROCESS *v4; // rbx
  _KPROCESS *Process; // rsi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbp
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v13; // eax
  bool v14; // zf
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r8
  int v18; // eax
  struct _KLOCK_QUEUE_HANDLE v19[2]; // [rsp+20h] [rbp-38h] BYREF

  v2 = BugCheckParameter1[1].Affinity.StaticBitmap[25];
  memset(v19, 0, 24);
  v4 = BugCheckParameter1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = Process[1].Affinity.StaticBitmap[25];
  KeAcquireInStackQueuedSpinLock(&qword_140C698C0, v19);
  if ( (*(_DWORD *)(v2 + 4) & 2) != 0 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)v19);
    OldIrql = v19[0].OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v19[0].OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (v19[0].OldIrql + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    return 3221225738LL;
  }
  else
  {
    ++*(_DWORD *)(v2 + 76);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)v19);
    v7 = v19[0].OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      v15 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v15 <= 0xFu && v19[0].OldIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (v19[0].OldIrql + 1));
        v14 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    __writecr8(v7);
    if ( v6 && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 && v6 == v2 )
      v4 = Process;
    KiStackAttachProcess(v4, 0, a2);
    return 0LL;
  }
}
