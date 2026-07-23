/*
 * XREFs of MmGetSessionById @ 0x1402C1E00
 * Callers:
 *     MmGetSessionObjectById @ 0x1402C0B30 (MmGetSessionObjectById.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     PopWatchdogWorker @ 0x1403D5C40 (PopWatchdogWorker.c)
 *     PopPowerButtonWorkCallback @ 0x140599180 (PopPowerButtonWorkCallback.c)
 *     CmFcpFeatureUsageProviderSubscriptionWrapper @ 0x14067F990 (CmFcpFeatureUsageProviderSubscriptionWrapper.c)
 *     PnpNotifyDriverCallback @ 0x140687B60 (PnpNotifyDriverCallback.c)
 *     PspChangeProcessExecutionState @ 0x1406A6C04 (PspChangeProcessExecutionState.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14071333C (ExpWnfCaptureScopeInstanceId.c)
 *     PsGetSiloBySessionId @ 0x140742388 (PsGetSiloBySessionId.c)
 *     EtwpEnableGuid @ 0x140780210 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x140781500 (EtwpSendDataBlock.c)
 *     PiUEventBroadcastEventWorker @ 0x1407AA660 (PiUEventBroadcastEventWorker.c)
 *     PspAttachSession @ 0x1407C61A0 (PspAttachSession.c)
 *     ExCallSessionCallBack @ 0x1407C6220 (ExCallSessionCallBack.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x140959B60 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140959BEC (PiUEventBroadcastPortsChangedEvent.c)
 *     TtmpSessionWorker @ 0x1409A59E0 (TtmpSessionWorker.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x140A27BA0 (CmFcpChangeSubscriptionWrapper.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetCurrentServerSilo @ 0x140289E70 (PsGetCurrentServerSilo.c)
 *     MiSelectSessionAttachProcess @ 0x1402C1EB8 (MiSelectSessionAttachProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmGetSessionById(unsigned int a1)
{
  __int64 v2; // rsi
  __int64 CurrentServerSilo; // rdi
  __int64 v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  CurrentServerSilo = PsGetCurrentServerSilo();
  KeAcquireInStackQueuedSpinLock(&qword_140C698C0, &LockHandle);
  v5 = (_QWORD *)qword_140C65AF0;
  while ( v5 )
  {
    if ( a1 > *((_DWORD *)v5 - 32) )
    {
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      if ( a1 >= *((_DWORD *)v5 - 32) )
        break;
      v5 = (_QWORD *)*v5;
    }
  }
  if ( v5 )
  {
    v6 = v5 - 17;
    if ( (!CurrentServerSilo || v6[98] == CurrentServerSilo) && *((_DWORD *)v6 + 2) == a1 )
      v2 = MiSelectSessionAttachProcess(v6, v4);
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return v2;
}
