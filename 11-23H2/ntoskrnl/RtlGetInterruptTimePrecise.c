/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x1402C42E0
 * Callers:
 *     KeIntSteerSnapPerf @ 0x140221D60 (KeIntSteerSnapPerf.c)
 *     KeSetTimer2 @ 0x140250150 (KeSetTimer2.c)
 *     KiExpireTimer2 @ 0x140251A80 (KiExpireTimer2.c)
 *     KePrepareNonClockOwnerForIdle @ 0x1402C1CDC (KePrepareNonClockOwnerForIdle.c)
 *     PpmIdleEvaluateConstraints @ 0x1402C2488 (PpmIdleEvaluateConstraints.c)
 *     KiSetClockTimer @ 0x1402C2598 (KiSetClockTimer.c)
 *     KiCheckWaitNext @ 0x1402C2720 (KiCheckWaitNext.c)
 *     KiSetClockTickRate @ 0x1402C2890 (KiSetClockTickRate.c)
 *     HalpTimerClockInterrupt @ 0x1402C4080 (HalpTimerClockInterrupt.c)
 *     KeClockInterruptNotify @ 0x1402C46A0 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C7060 (KeResumeClockTimerFromIdle.c)
 *     PopFxIdleComponent @ 0x140312FC0 (PopFxIdleComponent.c)
 *     PpmCheckStart @ 0x14032C0C4 (PpmCheckStart.c)
 *     KiShouldRearmClockTimer @ 0x140340E3C (KiShouldRearmClockTimer.c)
 *     KePrepareClockTimerForIdle @ 0x140347334 (KePrepareClockTimerForIdle.c)
 *     PopFxResidentTimeoutRoutine @ 0x14034C3C0 (PopFxResidentTimeoutRoutine.c)
 *     KiCheckAndRearmForceIdle @ 0x14036E674 (KiCheckAndRearmForceIdle.c)
 *     PopSetWatchdog @ 0x1403700AC (PopSetWatchdog.c)
 *     PopSetModernStandbyTransitionReason @ 0x1403C7E6C (PopSetModernStandbyTransitionReason.c)
 *     PopWatchdogWorker @ 0x1403D62A0 (PopWatchdogWorker.c)
 *     PopWatchdogDpc @ 0x1403D6A10 (PopWatchdogDpc.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x140509AB0 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x140509C60 (HalpVpptArmTimer.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x14050A200 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpWatchdogCheckPreResetNMI @ 0x14050BD30 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpWatchdogDelayExpiration @ 0x14050BE20 (HalpWatchdogDelayExpiration.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14051E850 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpTimerWatchdogPreResetInterrupt @ 0x14051EB40 (HalpTimerWatchdogPreResetInterrupt.c)
 *     KeGetNextClockTickDuration @ 0x14056F910 (KeGetNextClockTickDuration.c)
 *     KiResumeClockTimer @ 0x14056FE48 (KiResumeClockTimer.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14057004C (KiSetClockIntervalToMinimumRequested.c)
 *     KeSetForceIdle @ 0x14057CC94 (KeSetForceIdle.c)
 *     KiResetForceIdle @ 0x14057D14C (KiResetForceIdle.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140584FDC (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmIdlePrevetoWatchdog @ 0x140585250 (PpmIdlePrevetoWatchdog.c)
 *     PpmUpdateIdleVeto @ 0x140586430 (PpmUpdateIdleVeto.c)
 *     PpmResetPerfEngineForProcessor @ 0x14058D618 (PpmResetPerfEngineForProcessor.c)
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058F104 (PoPushPowerStateTransitionRecordWithCallback.c)
 *     PopCalculateCsSummary @ 0x140591334 (PopCalculateCsSummary.c)
 *     PpmEventTracePreVetoAccounting @ 0x14059BEA0 (PpmEventTracePreVetoAccounting.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x14059D89C (PopIdleWakeNotifyDevicesActive.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x14059D994 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x14059DAF4 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1405A28D8 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     MiSessionCreate @ 0x1407A900C (MiSessionCreate.c)
 *     PopPowerAggregatorRecordIntent @ 0x1407A95B4 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x1407A96C4 (PopPowerAggregatorAllocateLogEntry.c)
 *     PopSleepstudyStartNextSession @ 0x140878644 (PopSleepstudyStartNextSession.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x140993418 (PopSleepstudySnapModernStandbySessionData.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140996DEC (PopEnableSystemSleepCheckpoint.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x14099A860 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     ExProcessCounterSetCallback @ 0x1409F5DD0 (ExProcessCounterSetCallback.c)
 *     PopSleepstudyInitialize @ 0x140B51FE0 (PopSleepstudyInitialize.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall RtlGetInterruptTimePrecise(LARGE_INTEGER *a1)
{
  __int64 v2; // rbx
  LARGE_INTEGER v3; // rdi
  __int64 v4; // rbp
  LARGE_INTEGER PerformanceCounter; // rdx
  LONGLONG v6; // rdx

  while ( 1 )
  {
    v2 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v3.QuadPart = MEMORY[0xFFFFF78000000350];
      v4 = MEMORY[0xFFFFF78000000008];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v2 )
        break;
    }
    _mm_pause();
  }
  *a1 = PerformanceCounter;
  if ( PerformanceCounter.QuadPart <= (unsigned __int64)v3.QuadPart )
    return v4;
  v6 = PerformanceCounter.QuadPart - v3.QuadPart - 1;
  if ( MEMORY[0xFFFFF78000000369] )
    v6 <<= MEMORY[0xFFFFF78000000369];
  return (((unsigned __int64)v6 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64) + v4;
}
