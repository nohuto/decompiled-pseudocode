/*
 * XREFs of MmGetSessionById @ 0x1402DF880
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x14027B820 (MiTrimSharedPageFromViews.c)
 *     MmGetSessionObjectById @ 0x1402DF7D8 (MmGetSessionObjectById.c)
 *     PopWatchdogWorker @ 0x1403A0B60 (PopWatchdogWorker.c)
 *     PopPowerButtonWorkCallback @ 0x1405D89F0 (PopPowerButtonWorkCallback.c)
 *     PspChangeProcessExecutionState @ 0x140687754 (PspChangeProcessExecutionState.c)
 *     PspAttachSession @ 0x1406A8EEC (PspAttachSession.c)
 *     ExCallSessionCallBack @ 0x1406A8F48 (ExCallSessionCallBack.c)
 *     PsGetSiloBySessionId @ 0x14077D624 (PsGetSiloBySessionId.c)
 *     PnpNotifyDriverCallback @ 0x14078D3DC (PnpNotifyDriverCallback.c)
 *     EtwpEnableGuid @ 0x14079028C (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x140790CF8 (EtwpSendDataBlock.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1407947BC (ExpWnfCaptureScopeInstanceId.c)
 *     PiUEventBroadcastEventWorker @ 0x1407F4BB0 (PiUEventBroadcastEventWorker.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x1409234E0 (CmFcpChangeSubscriptionWrapper.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x140947DA4 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140947E30 (PiUEventBroadcastPortsChangedEvent.c)
 *     TtmpSessionWorker @ 0x1409A5C10 (TtmpSessionWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSelectSessionAttachProcess @ 0x1402DF940 (MiSelectSessionAttachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmGetSessionById(unsigned int a1)
{
  __int64 v2; // rsi
  __int64 ThreadServerSilo; // rdi
  _QWORD *v4; // rax
  unsigned int v5; // ecx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v4 = (_QWORD *)qword_140C50638;
  while ( v4 )
  {
    v5 = *((_DWORD *)v4 - 32);
    if ( a1 > v5 )
    {
      v4 = (_QWORD *)v4[1];
    }
    else
    {
      if ( a1 >= v5 )
      {
        if ( (!ThreadServerSilo || v4[93] == ThreadServerSilo) && v5 == a1 )
          v2 = MiSelectSessionAttachProcess(v4 - 17);
        break;
      }
      v4 = (_QWORD *)*v4;
    }
  }
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
  return v2;
}
