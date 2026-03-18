/*
 * XREFs of KeSetTimer2 @ 0x140250150
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140302E90 (NtSetInformationWorkerFactory.c)
 *     ExSetTimer @ 0x14031DDF0 (ExSetTimer.c)
 *     ExpSetTimerObject2 @ 0x140339824 (ExpSetTimerObject2.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140389E70 (PopThermalUpdateTelemetryClientCount.c)
 *     MiStoreEvictThread @ 0x1403A8650 (MiStoreEvictThread.c)
 *     KiInitializeIdealProcessorRebalancer @ 0x1403B4718 (KiInitializeIdealProcessorRebalancer.c)
 *     KiProcessPendingForegroundBoosts @ 0x1403D08A0 (KiProcessPendingForegroundBoosts.c)
 *     KiTriggerForegroundBoostDpc @ 0x1403D5170 (KiTriggerForegroundBoostDpc.c)
 *     ?SmHighMemPriorityTimerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140464F50 (-SmHighMemPriorityTimerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x14058702C (PopDirectedDripsStartDisengageTimer.c)
 *     PopThermalEventTransitionDisableDeepSleep @ 0x14058F948 (PopThermalEventTransitionDisableDeepSleep.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x14059039C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopPowerButtonWorkCallback @ 0x1405990F0 (PopPowerButtonWorkCallback.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14059E178 (PopIdleArmAoAcDozeS4Timer.c)
 *     NtCreateWorkerFactory @ 0x140785B90 (NtCreateWorkerFactory.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x1407A7654 (PopPowerRequestHandleRequestUpdate.c)
 *     EtwpEnableKernelTrace @ 0x1407D5090 (EtwpEnableKernelTrace.c)
 *     EtwpCoverageRecord @ 0x1407DD580 (EtwpCoverageRecord.c)
 *     PpmRegisterPerfStates @ 0x14082E54C (PpmRegisterPerfStates.c)
 *     ExpWorkQueueManagerThread @ 0x140838DC0 (ExpWorkQueueManagerThread.c)
 *     PopThermalWorker @ 0x140847830 (PopThermalWorker.c)
 *     PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x14085537C (PopPowerRequestSetExecutionRequiredTimeoutTimer.c)
 *     EtwpCoverageEnsureContext @ 0x140856AD4 (EtwpCoverageEnsureContext.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x14085B2C0 (SshpSessionManagerFlushControlEventBuffer.c)
 *     PopSleepstudyStartNextSession @ 0x140878644 (PopSleepstudyStartNextSession.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x140981560 (PopPowerRequestDebounceTimerWorker.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x140993F20 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopNetArmDsEvaluationTimer @ 0x140996564 (PopNetArmDsEvaluationTimer.c)
 *     PopNetArmRefreshTimer @ 0x1409965C0 (PopNetArmRefreshTimer.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x14099C6A8 (PopDripsWatchdogScheduleNextTimer.c)
 *     ExpTimeRefreshWork @ 0x140A92380 (ExpTimeRefreshWork.c)
 *     ExInitializeTimeRefresh @ 0x140B394EC (ExInitializeTimeRefresh.c)
 *     HalpBlkInitSystem @ 0x140B48F28 (HalpBlkInitSystem.c)
 *     KiInitializeDpcRuntimeHistoryHashTables @ 0x140B4EC40 (KiInitializeDpcRuntimeHistoryHashTables.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140226E10 (RtlGetSystemTimePrecise.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x14024F5B0 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1402500B4 (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1402500F8 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KeIsForceIdleEngaged @ 0x14025012C (KeIsForceIdleEngaged.c)
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402515B0 (KxAcquireSpinLock.c)
 *     KiRemoveTimer2 @ 0x1402518B0 (KiRemoveTimer2.c)
 *     KiShouldActivateHRTimerClock @ 0x140251FF0 (KiShouldActivateHRTimerClock.c)
 *     PsTimerResolutionActive @ 0x140255200 (PsTimerResolutionActive.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1402B2E20 (KiHvEnlightenedGuestPriorityKick.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C42E0 (RtlGetInterruptTimePrecise.c)
 *     KiRequestTimer2Expiration @ 0x1403188A0 (KiRequestTimer2Expiration.c)
 *     KiSendClockInterruptToClockOwner @ 0x1403650B8 (KiSendClockInterruptToClockOwner.c)
 *     KiUpdateTimer2Collections @ 0x1403C7958 (KiUpdateTimer2Collections.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceSetTimer2 @ 0x14057D5A4 (KiTraceSetTimer2.c)
 */

_BOOL8 __fastcall KeSetTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v6; // rsi
  char v8; // r12
  __int64 CurrentIrql; // rcx
  char v10; // r13
  unsigned __int64 InterruptTimePrecise; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  bool v15; // r15
  unsigned int v16; // ebp
  char v17; // al
  __int64 v18; // rdx
  volatile signed __int32 v19; // edx
  __int64 v20; // r9
  signed __int32 v21; // eax
  unsigned __int8 v22; // bl
  _DWORD *SchedulerAssist; // r8
  __int64 v25; // r9
  char v26; // r8
  char v27; // dl
  __int64 SystemTimePrecise; // rdx
  __int64 v29; // rax
  signed __int32 v30; // r8d
  unsigned __int8 v31; // cl
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *v33; // r9
  int v34; // edx
  bool v35; // zf
  bool v36; // [rsp+70h] [rbp+8h] BYREF
  char v37; // [rsp+78h] [rbp+10h] BYREF
  __int64 v38; // [rsp+80h] [rbp+18h]
  __int64 v39; // [rsp+88h] [rbp+20h] BYREF

  v39 = 0LL;
  v5 = a3;
  v6 = a2;
  if ( a3 && a3 < (unsigned int)KeMinimumIncrement )
    v5 = (unsigned int)KeMinimumIncrement;
  v8 = *(_BYTE *)(a1 + 129);
  CurrentIrql = KeGetCurrentIrql();
  v38 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)CurrentIrql == 2 )
      LODWORD(v25) = 4;
    else
      v25 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v25;
  }
  v10 = 0;
  if ( a2 > 0 )
  {
    v10 = 1;
    if ( (v8 & 4) != 0 )
      SystemTimePrecise = RtlGetSystemTimePrecise();
    else
      SystemTimePrecise = MEMORY[0xFFFFF78000000014];
    v29 = 0LL;
    if ( v6 > SystemTimePrecise )
      v29 = SystemTimePrecise - v6;
    v6 = v29;
  }
  if ( (v8 & 4) != 0 )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v39);
  else
    InterruptTimePrecise = MEMORY[0xFFFFF78000000008];
  v12 = InterruptTimePrecise - v6;
  if ( InterruptTimePrecise >= v6 || v12 == -1LL )
    v12 = -2LL;
  v13 = v12;
  if ( a4 && *(_BYTE *)(a1 + 130) != 21 )
  {
    v14 = *(_QWORD *)(a4 + 8);
    if ( v14 == -1 )
    {
      v13 = -1LL;
    }
    else
    {
      v13 = v14 + v12;
      if ( v14 + v12 < v12 || v13 == -1 )
        v13 = -2LL;
    }
  }
  v15 = 0;
  v37 = 0;
  v16 = 1;
  if ( !KiAcquireTimer2LockUnlessDisabled(a1) )
  {
    if ( KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      KxReleaseSpinLock(&KiTimer2CollectionLock);
      v15 = 1;
    }
    else
    {
      v17 = *(_BYTE *)(a1 + 1);
      if ( (v17 & 0xF) != 0 )
      {
        v16 = 8;
        v15 = (v17 & 4) == 0;
      }
    }
    *(_QWORD *)(a1 + 72) = v12;
    *(_QWORD *)(a1 + 80) = v13;
    v18 = *(unsigned __int8 *)(a1 + 129);
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 88) = v5;
    *(_BYTE *)(a1 + 128) = v10;
    if ( KiGlobalTimerResolutionRequests )
    {
      if ( (v18 & 0x10) != 0 )
      {
LABEL_19:
        v36 = 0;
        if ( v16 == 1 )
        {
          KxAcquireSpinLock(&KiTimer2CollectionLock);
          KiInsertTimer2WithCollectionLockHeld(a1, 1, &v37, &v36);
        }
        if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        {
          KiTraceSetTimer2(a1, v15, v16);
        }
        else
        {
          v19 = *(_DWORD *)a1;
          v20 = v16 << 8;
          v21 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)a1,
                  v20 | *(_DWORD *)a1 & 0xFFFFF07F,
                  *(_DWORD *)a1);
          if ( v19 != v21 )
          {
            do
            {
              v30 = v21;
              v21 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v20 | v21 & 0xFFFFF07F, v21);
            }
            while ( v30 != v21 );
          }
          if ( v16 == 1 )
            KxReleaseSpinLock(&KiTimer2CollectionLock);
        }
        if ( v36 )
          KiHvEnlightenedGuestPriorityKick(
            KeGetCurrentPrcb(),
            KiProcessorBlock[(unsigned int)KiClockTimerOwner],
            (unsigned int)KiVpThreadSystemWorkPriority,
            v20);
        if ( !KeIsForceIdleEngaged() )
        {
          if ( v37 )
          {
            KiRequestTimer2Expiration();
          }
          else if ( (v8 & 4) != 0 && (unsigned __int8)KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], v12) )
          {
            KiSendClockInterruptToClockOwner();
          }
        }
        goto LABEL_30;
      }
    }
    else
    {
      if ( (v18 & 0xE) != 0 )
        goto LABEL_19;
      if ( !(unsigned __int8)PsTimerResolutionActive(KeGetCurrentThread()->ApcState.Process, v18, v18 & 0x10) )
      {
        if ( !v26 )
          goto LABEL_19;
        v27 = v18 & 0xEF;
LABEL_51:
        *(_BYTE *)(a1 + 129) = v27;
        KiUpdateTimer2Collections(a1);
        goto LABEL_19;
      }
      if ( v26 )
        goto LABEL_19;
    }
    v27 = v18 | 0x10;
    goto LABEL_51;
  }
LABEL_30:
  v22 = v38;
  if ( KiIrqlFlags )
  {
    v31 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v31 <= 0xFu && (unsigned __int8)v38 <= 0xFu && v31 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v33 = CurrentPrcb->SchedulerAssist;
      v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
      v35 = (v34 & v33[5]) == 0;
      v33[5] &= v34;
      if ( v35 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v22);
  return v15;
}
