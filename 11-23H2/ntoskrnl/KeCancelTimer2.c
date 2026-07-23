/*
 * XREFs of KeCancelTimer2 @ 0x14031E170
 * Callers:
 *     ExpShutdownWorkerFactory @ 0x14031DB98 (ExpShutdownWorkerFactory.c)
 *     ExCancelTimer @ 0x14031E110 (ExCancelTimer.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14032F250 (PopIdleCancelAoAcDozeS4Timer.c)
 *     ExpSetTimerObject2 @ 0x140339AB4 (ExpSetTimerObject2.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x14038A050 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x14058751C (PopDirectedDripsStartDisengageTimer.c)
 *     PopThermalEventTransitionEnableDeepSleep @ 0x14058FF28 (PopThermalEventTransitionEnableDeepSleep.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140590820 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopUpdatePdcSystemIdleState @ 0x1407A71EC (PopUpdatePdcSystemIdleState.c)
 *     EtwpDisableKernelTrace @ 0x1407D56D4 (EtwpDisableKernelTrace.c)
 *     EtwpCoverageFlushPending @ 0x1407E8B64 (EtwpCoverageFlushPending.c)
 *     SshpAlpcOpenTraceSessionUnsafe @ 0x14084C670 (SshpAlpcOpenTraceSessionUnsafe.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x1408555E0 (PopPowerRequestExecutionRequiredSettingCallback.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x140981760 (PopPowerRequestDebounceTimerWorker.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140996C30 (PopNetWnfLowPowerEpochCallback.c)
 *     PdcPoNetworkResiliency @ 0x140997B30 (PdcPoNetworkResiliency.c)
 *     ExpPartitionDestroy @ 0x140A00B78 (ExpPartitionDestroy.c)
 * Callees:
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x140250184 (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1402501C8 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KiRemoveTimer2 @ 0x140251970 (KiRemoveTimer2.c)
 *     KiUpdateTimer2Flags @ 0x14031E2A8 (KiUpdateTimer2Flags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceCancelTimer2 @ 0x140462DE8 (KiTraceCancelTimer2.c)
 */

char __fastcall KeCancelTimer2(__int64 a1)
{
  unsigned int v1; // r12d
  char v3; // si
  unsigned int v4; // r14d
  char v5; // r15
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rdx
  unsigned __int8 v11; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf

  v1 = 0;
  v3 = 0;
  v4 = 2;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 96);
    v5 = 1;
  }
  else
  {
    v5 = 0;
    v6 = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v10) = 4;
    else
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v10;
  }
  if ( !KiAcquireTimer2LockUnlessDisabled(a1) )
  {
    if ( KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      KxReleaseSpinLock((volatile signed __int64 *)&KiTimer2CollectionLock);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 1) & 0xA) == 0 )
      {
LABEL_7:
        KiUpdateTimer2Flags(a1, v1, v4);
        goto LABEL_8;
      }
      v1 = 4;
    }
    v3 = 1;
    v4 = 0;
    goto LABEL_7;
  }
LABEL_8:
  if ( (_DWORD)KiIrqlFlags )
  {
    v11 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v15 = (v14 & v13[5]) == 0;
      v13[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( v5 && v3 )
    KiTraceCancelTimer2(a1, KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ v6, KiWaitNever)));
  return v3;
}
