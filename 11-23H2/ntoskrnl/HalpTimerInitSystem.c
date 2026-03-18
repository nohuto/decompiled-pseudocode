/*
 * XREFs of HalpTimerInitSystem @ 0x14037AA30
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14031FADC (HalpInterruptModel.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x14037A720 (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTimerInitializeProfiling @ 0x14037ACC0 (HalpTimerInitializeProfiling.c)
 *     HalpTimerSaveProcessorFrequency @ 0x14037AEF8 (HalpTimerSaveProcessorFrequency.c)
 *     HalpInitializePnTimers @ 0x14037B12C (HalpInitializePnTimers.c)
 *     HalpTimerInitializeClockPn @ 0x14037D0BC (HalpTimerInitializeClockPn.c)
 *     HalQueryMaximumProcessorCount @ 0x14037F8A0 (HalQueryMaximumProcessorCount.c)
 *     HalpTimerInitPowerManagement @ 0x140396F38 (HalpTimerInitPowerManagement.c)
 *     HalpMmAllocCtxAlloc @ 0x14039AE20 (HalpMmAllocCtxAlloc.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x1403A4044 (HalpTimerInitializeEarlyStallSource.c)
 *     HalpInitializeTimers @ 0x1403A4134 (HalpInitializeTimers.c)
 *     HalpTimerFinalizeAuxiliaryCounter @ 0x1403AC830 (HalpTimerFinalizeAuxiliaryCounter.c)
 *     HalpTimerInitializeClock @ 0x1403B19B0 (HalpTimerInitializeClock.c)
 *     HalpTscReserveResources @ 0x1403B1D48 (HalpTscReserveResources.c)
 *     HalpTimerConfigureQpcBypass @ 0x1403B3104 (HalpTimerConfigureQpcBypass.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403B3AA4 (HalpTimerSchedulePeriodicQueries.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403B6700 (HalpTimerInitializeHypervisorTimer.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     HalpTscFallbackToPlatformSource @ 0x14050A734 (HalpTscFallbackToPlatformSource.c)
 *     HalpTimerInitializeSystemWatchdog @ 0x14050B9DC (HalpTimerInitializeSystemWatchdog.c)
 *     HalpTimerMeasureAllProcessorFrequencies @ 0x14050CA7C (HalpTimerMeasureAllProcessorFrequencies.c)
 *     HalpTimerTraceTimingHardware @ 0x140861670 (HalpTimerTraceTimingHardware.c)
 *     HalpTscReportSyncStatus @ 0x140861AF4 (HalpTscReportSyncStatus.c)
 *     HalpTimerWatchdogLogReset @ 0x140865B48 (HalpTimerWatchdogLogReset.c)
 */

__int64 __fastcall HalpTimerInitSystem(int a1, __int64 a2, __int64 a3)
{
  unsigned int inited; // ebx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rcx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int MaximumProcessorCount; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  unsigned __int8 v19; // cl
  const EVENT_DESCRIPTOR *v20; // rcx

  inited = 0;
  v4 = a1 - 1;
  if ( !v4 )
  {
    inited = HalpTimerInitializeEarlyStallSource(a3);
    off_140C01B48 = (__int64 (__fastcall *)())HalpTimerNotifyProcessorFreeze;
    return inited;
  }
  v5 = v4 - 7;
  if ( !v5 )
  {
    v19 = byte_140C6208C;
    if ( !byte_140C6208C )
      v19 = 50;
    HalpCmosCenturyOffset = v19;
    return inited;
  }
  v6 = v5 - 6;
  if ( !v6 )
  {
    if ( (unsigned int)HalpInterruptModel() == 1 )
      off_140C01AC0[0] = HalpTscSynchronization;
    off_140C01C88[0] = HalpTimerClockActivate;
    off_140C01C90[0] = HalpTimerClockInitialize;
    off_140C01C98[0] = HalpTimerClockStop;
    off_140C01CA0[0] = (__int64 (__fastcall *)())HalpTimerClockArm;
    off_140C01C80[0] = HalpTimerGetClockConfiguration;
    off_140C01CA8[0] = HalpTimerOnlyClockInterruptPending;
    off_140C01C00 = (__int64 (__fastcall *)())HalpTimerQueryCycleCounter;
    off_140C01E10 = (__int64 (__fastcall *)())HalpTimerGetReferencePage;
    off_140C01D38[0] = HalpTimerConvertAuxiliaryCounterToPerformanceCounter;
    off_140C01D30[0] = HalpTimerConvertPerformanceCounterToAuxiliaryCounter;
    off_140C01D40[0] = HalpTimerQueryAuxiliaryCounterFrequency;
    HalpInitializeTimers(v17);
    ((void (*)(void))HalpTimerSaveProcessorFrequency)();
    HalpTimerInitializeClock();
    KiProfileIrql = 15;
    v18 = HalpTimerInitializeProfiling();
    inited = v18;
    if ( v18 < 0 )
      KeBugCheckEx(0x5Cu, 0x110uLL, v18, 0LL, 0LL);
    HalpTimerPropagateQpcBiasUpdate(HalpPerformanceCounter);
    return inited;
  }
  v7 = v6 - 3;
  if ( v7 )
  {
    v8 = (unsigned int)(v7 - 2);
    if ( !(_DWORD)v8 )
    {
      if ( !qword_140C624A8 )
      {
        v8 = 16LL;
        __writemsr(0x10u, 0LL);
      }
      HalpTimerSaveProcessorFrequency(v8);
      HalpInitializePnTimers();
      HalpTimerInitializeClockPn();
      return (unsigned int)HalpTimerInitializeProfiling();
    }
    v9 = v8 - 2;
    if ( v9 )
    {
      v10 = v9 - 4;
      if ( v10 )
      {
        v11 = v10 - 4;
        if ( v11 )
        {
          if ( v11 == 3 )
          {
            off_140C01D58[0] = HalpTimerQueryAndResetRtcErrors;
            HalpTimerTraceTimingHardware();
            HalpTscReportSyncStatus();
          }
        }
        else
        {
          inited = HalpTimerInitPowerManagement();
          HalpTimerWatchdogLogReset();
        }
      }
      else if ( HalpWatchdogTimer )
      {
        HalpTimerInitializeSystemWatchdog();
      }
      return inited;
    }
    HalpTimerSchedulePeriodicQueries();
    HalpTimerConfigureQpcBypass();
    off_140C01DF0[0] = HalpTimerQueryHostPerformanceCounter;
    if ( (unsigned int)HalpInterruptModel() != 1 )
      goto LABEL_25;
    if ( !HalpTimerProcessorFrequencyKnown && *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
      HalpTimerMeasureAllProcessorFrequencies();
    if ( *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
      goto LABEL_25;
    if ( HalpTscSynchronizationFailureFallback )
    {
      v20 = (const EVENT_DESCRIPTOR *)HAL_ETW_EVENT_UNEXPECTED_FALLBACK;
    }
    else
    {
      if ( !HalpTscProcessorFeatureFallback )
      {
LABEL_25:
        HalpTimerFinalizeAuxiliaryCounter();
        return inited;
      }
      v20 = &HAL_ETW_EVENT_EXPECTED_FALLBACK;
    }
    HalpTscFallbackToPlatformSource(v20);
    goto LABEL_25;
  }
  HalpTscReserveResources();
  MaximumProcessorCount = HalQueryMaximumProcessorCount(v14, v13);
  HalpTimerSavedProcessorCounter = HalpMmAllocCtxAlloc(v16, 8LL * MaximumProcessorCount);
  if ( HalpTimerSavedProcessorCounter )
  {
    if ( (unsigned int)HalpInterruptModel() == 1 )
      HalpTimerInitializeHypervisorTimer();
    return inited;
  }
  return 3221225626LL;
}
