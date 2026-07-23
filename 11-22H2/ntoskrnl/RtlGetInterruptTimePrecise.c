/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x1402C42B0
 * Callers:
 *     KeIntSteerSnapPerf @ 0x140221D80 (KeIntSteerSnapPerf.c)
 *     KeSetTimer2 @ 0x140250130 (KeSetTimer2.c)
 *     KiExpireTimer2 @ 0x140251960 (KiExpireTimer2.c)
 *     KePrepareNonClockOwnerForIdle @ 0x1402C1CAC (KePrepareNonClockOwnerForIdle.c)
 *     PpmIdleEvaluateConstraints @ 0x1402C2458 (PpmIdleEvaluateConstraints.c)
 *     KiSetClockTimer @ 0x1402C2568 (KiSetClockTimer.c)
 *     KiCheckWaitNext @ 0x1402C26F0 (KiCheckWaitNext.c)
 *     KiSetClockTickRate @ 0x1402C2860 (KiSetClockTickRate.c)
 *     HalpTimerClockInterrupt @ 0x1402C4050 (HalpTimerClockInterrupt.c)
 *     KeClockInterruptNotify @ 0x1402C4670 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C7030 (KeResumeClockTimerFromIdle.c)
 *     PopFxIdleComponent @ 0x140312DE0 (PopFxIdleComponent.c)
 *     PpmCheckStart @ 0x14032BEE4 (PpmCheckStart.c)
 *     KiShouldRearmClockTimer @ 0x14034094C (KiShouldRearmClockTimer.c)
 *     KePrepareClockTimerForIdle @ 0x140346E44 (KePrepareClockTimerForIdle.c)
 *     PopFxResidentTimeoutRoutine @ 0x14034BDC0 (PopFxResidentTimeoutRoutine.c)
 *     KiCheckAndRearmForceIdle @ 0x14036E024 (KiCheckAndRearmForceIdle.c)
 *     PopSetWatchdog @ 0x14036FA5C (PopSetWatchdog.c)
 *     PopSetModernStandbyTransitionReason @ 0x1403C780C (PopSetModernStandbyTransitionReason.c)
 *     PopWatchdogWorker @ 0x1403D5C40 (PopWatchdogWorker.c)
 *     PopWatchdogDpc @ 0x1403D63B0 (PopWatchdogDpc.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x140509740 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x1405098F0 (HalpVpptArmTimer.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x140509E90 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpWatchdogCheckPreResetNMI @ 0x14050B9A0 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpWatchdogDelayExpiration @ 0x14050BA90 (HalpWatchdogDelayExpiration.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14051E910 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpTimerWatchdogPreResetInterrupt @ 0x14051EC00 (HalpTimerWatchdogPreResetInterrupt.c)
 *     KeGetNextClockTickDuration @ 0x14056F9B0 (KeGetNextClockTickDuration.c)
 *     KiResumeClockTimer @ 0x14056FEE8 (KiResumeClockTimer.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1405700EC (KiSetClockIntervalToMinimumRequested.c)
 *     KeSetForceIdle @ 0x14057CD24 (KeSetForceIdle.c)
 *     KiResetForceIdle @ 0x14057D1DC (KiResetForceIdle.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x14058506C (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmIdlePrevetoWatchdog @ 0x1405852E0 (PpmIdlePrevetoWatchdog.c)
 *     PpmUpdateIdleVeto @ 0x1405864C0 (PpmUpdateIdleVeto.c)
 *     PpmResetPerfEngineForProcessor @ 0x14058D6A8 (PpmResetPerfEngineForProcessor.c)
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058F194 (PoPushPowerStateTransitionRecordWithCallback.c)
 *     PopCalculateCsSummary @ 0x1405913C4 (PopCalculateCsSummary.c)
 *     PpmEventTracePreVetoAccounting @ 0x14059BF30 (PpmEventTracePreVetoAccounting.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x14059D92C (PopIdleWakeNotifyDevicesActive.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x14059DA24 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x14059DB84 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1405A2968 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     MiSessionCreate @ 0x1407A95BC (MiSessionCreate.c)
 *     PopPowerAggregatorRecordIntent @ 0x1407A9B64 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x1407A9C74 (PopPowerAggregatorAllocateLogEntry.c)
 *     PopSleepstudyStartNextSession @ 0x140878B14 (PopSleepstudyStartNextSession.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x1409934C8 (PopSleepstudySnapModernStandbySessionData.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140996E9C (PopEnableSystemSleepCheckpoint.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x14099A910 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     ExProcessCounterSetCallback @ 0x1409F5E80 (ExProcessCounterSetCallback.c)
 *     PopSleepstudyInitialize @ 0x140B51F54 (PopSleepstudyInitialize.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
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
