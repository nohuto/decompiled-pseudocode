/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x1402C4570
 * Callers:
 *     KeIntSteerSnapPerf @ 0x140221D60 (KeIntSteerSnapPerf.c)
 *     KeSetTimer2 @ 0x140250220 (KeSetTimer2.c)
 *     KiExpireTimer2 @ 0x140251B40 (KiExpireTimer2.c)
 *     KePrepareNonClockOwnerForIdle @ 0x1402C1F6C (KePrepareNonClockOwnerForIdle.c)
 *     PpmIdleEvaluateConstraints @ 0x1402C2718 (PpmIdleEvaluateConstraints.c)
 *     KiSetClockTimer @ 0x1402C2828 (KiSetClockTimer.c)
 *     KiCheckWaitNext @ 0x1402C29B0 (KiCheckWaitNext.c)
 *     KiSetClockTickRate @ 0x1402C2B20 (KiSetClockTickRate.c)
 *     HalpTimerClockInterrupt @ 0x1402C4310 (HalpTimerClockInterrupt.c)
 *     KeClockInterruptNotify @ 0x1402C4930 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C72F0 (KeResumeClockTimerFromIdle.c)
 *     PopFxIdleComponent @ 0x140313250 (PopFxIdleComponent.c)
 *     PpmCheckStart @ 0x14032C354 (PpmCheckStart.c)
 *     KiShouldRearmClockTimer @ 0x1403410CC (KiShouldRearmClockTimer.c)
 *     KePrepareClockTimerForIdle @ 0x1403475C4 (KePrepareClockTimerForIdle.c)
 *     PopFxResidentTimeoutRoutine @ 0x14034C560 (PopFxResidentTimeoutRoutine.c)
 *     KiCheckAndRearmForceIdle @ 0x14036E814 (KiCheckAndRearmForceIdle.c)
 *     PopSetWatchdog @ 0x14037024C (PopSetWatchdog.c)
 *     PopSetModernStandbyTransitionReason @ 0x1403C804C (PopSetModernStandbyTransitionReason.c)
 *     PopWatchdogWorker @ 0x1403D6480 (PopWatchdogWorker.c)
 *     PopWatchdogDpc @ 0x1403D6BF0 (PopWatchdogDpc.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x14050A000 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x14050A1B0 (HalpVpptArmTimer.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x14050A750 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpWatchdogCheckPreResetNMI @ 0x14050C280 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpWatchdogDelayExpiration @ 0x14050C370 (HalpWatchdogDelayExpiration.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14051EDA0 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpTimerWatchdogPreResetInterrupt @ 0x14051F090 (HalpTimerWatchdogPreResetInterrupt.c)
 *     KeGetNextClockTickDuration @ 0x14056FE50 (KeGetNextClockTickDuration.c)
 *     KiResumeClockTimer @ 0x140570388 (KiResumeClockTimer.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14057058C (KiSetClockIntervalToMinimumRequested.c)
 *     KeSetForceIdle @ 0x14057D184 (KeSetForceIdle.c)
 *     KiResetForceIdle @ 0x14057D63C (KiResetForceIdle.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1405854CC (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmIdlePrevetoWatchdog @ 0x140585740 (PpmIdlePrevetoWatchdog.c)
 *     PpmUpdateIdleVeto @ 0x140586920 (PpmUpdateIdleVeto.c)
 *     PpmResetPerfEngineForProcessor @ 0x14058DB08 (PpmResetPerfEngineForProcessor.c)
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058F5F4 (PoPushPowerStateTransitionRecordWithCallback.c)
 *     PopCalculateCsSummary @ 0x140591824 (PopCalculateCsSummary.c)
 *     PpmEventTracePreVetoAccounting @ 0x14059C390 (PpmEventTracePreVetoAccounting.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x14059DD8C (PopIdleWakeNotifyDevicesActive.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x14059DE84 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x14059DFE4 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1405A2DC8 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     MiSessionCreate @ 0x1407A91FC (MiSessionCreate.c)
 *     PopPowerAggregatorRecordIntent @ 0x1407A97A4 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x1407A98B4 (PopPowerAggregatorAllocateLogEntry.c)
 *     PopSleepstudyStartNextSession @ 0x140878884 (PopSleepstudyStartNextSession.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x140993618 (PopSleepstudySnapModernStandbySessionData.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140996FEC (PopEnableSystemSleepCheckpoint.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x14099AA60 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     ExProcessCounterSetCallback @ 0x1409F6060 (ExProcessCounterSetCallback.c)
 *     PopSleepstudyInitialize @ 0x140B51FE0 (PopSleepstudyInitialize.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __cdecl RtlGetInterruptTimePrecise(PLARGE_INTEGER PerformanceCounter)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  LARGE_INTEGER v4; // rbp
  LARGE_INTEGER v5; // rdx
  LONGLONG v6; // rdx
  LARGE_INTEGER result; // rax

  while ( 1 )
  {
    v2 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v3 = MEMORY[0xFFFFF78000000350];
      v4.QuadPart = MEMORY[0xFFFFF78000000008];
      v5 = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v2 )
        break;
    }
    _mm_pause();
  }
  *PerformanceCounter = v5;
  if ( v5.QuadPart <= v3 )
  {
    return v4;
  }
  else
  {
    v6 = v5.QuadPart - v3 - 1;
    if ( MEMORY[0xFFFFF78000000369] )
      v6 <<= MEMORY[0xFFFFF78000000369];
    result.QuadPart = (((unsigned __int64)v6 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64) + v4.QuadPart;
  }
  return result;
}
