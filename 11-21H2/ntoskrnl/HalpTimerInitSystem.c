/*
 * XREFs of HalpTimerInitSystem @ 0x1403BB0A0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     HalpInterruptModel @ 0x14036FA84 (HalpInterruptModel.c)
 *     HalpMmAllocCtxAlloc @ 0x1403B1F04 (HalpMmAllocCtxAlloc.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1403B54DC (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTimerInitPowerManagement @ 0x1403B9904 (HalpTimerInitPowerManagement.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403BA9B4 (HalpTimerSchedulePeriodicQueries.c)
 *     HalpTimerConfigureQpcBypass @ 0x1403BAA84 (HalpTimerConfigureQpcBypass.c)
 *     HalpTscReserveResources @ 0x1403BAB70 (HalpTscReserveResources.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403BACF8 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpTimerInitializeClock @ 0x1403BAF00 (HalpTimerInitializeClock.c)
 *     HalpTimerInitializeProfiling @ 0x1403BB340 (HalpTimerInitializeProfiling.c)
 *     HalpTimerSaveProcessorFrequency @ 0x1403BB3F0 (HalpTimerSaveProcessorFrequency.c)
 *     HalpTimerInitializeClockPn @ 0x1403BB500 (HalpTimerInitializeClockPn.c)
 *     HalpInitializePnTimers @ 0x1403BB5A0 (HalpInitializePnTimers.c)
 *     HalpInitializeTimers @ 0x1403BBAC8 (HalpInitializeTimers.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x1403BBDD4 (HalpTimerInitializeEarlyStallSource.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x140502E6C (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTscFallbackToPlatformSource @ 0x14050DC38 (HalpTscFallbackToPlatformSource.c)
 *     HalpTimerInitializeSystemWatchdog @ 0x14050E930 (HalpTimerInitializeSystemWatchdog.c)
 *     HalpTimerMeasureAllProcessorFrequencies @ 0x14050F964 (HalpTimerMeasureAllProcessorFrequencies.c)
 *     HalpTimerTraceTimingHardware @ 0x140822E6C (HalpTimerTraceTimingHardware.c)
 *     HalpTscReportSyncStatus @ 0x140822FF8 (HalpTscReportSyncStatus.c)
 *     HalpTimerWatchdogLogReset @ 0x1408247DC (HalpTimerWatchdogLogReset.c)
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
  __int64 v13; // rcx
  unsigned int MaximumProcessorCount; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  unsigned __int8 v24; // cl
  const EVENT_DESCRIPTOR *v25; // rcx
  LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp+20h] BYREF

  inited = 0;
  v4 = a1 - 1;
  if ( !v4 )
  {
    inited = HalpTimerInitializeEarlyStallSource(a3);
    off_140C01D88[0] = (__int64 (__fastcall *)())HalpTimerNotifyProcessorFreeze;
    return inited;
  }
  v5 = v4 - 7;
  if ( !v5 )
  {
    v24 = byte_140C4C08C;
    if ( !byte_140C4C08C )
      v24 = 50;
    HalpCmosCenturyOffset = v24;
    return inited;
  }
  v6 = v5 - 6;
  if ( !v6 )
  {
    if ( (unsigned int)HalpInterruptModel() == 1 )
      off_140C01D00[0] = HalpTscSynchronization;
    off_140C01EC8 = (__int64 (__fastcall *)())HalpTimerClockActivate;
    off_140C01ED0[0] = HalpTimerClockInitialize;
    off_140C01ED8[0] = HalpTimerClockStop;
    off_140C01EE0[0] = (__int64 (__fastcall *)())HalpTimerClockArm;
    off_140C01EC0[0] = HalpTimerGetClockConfiguration;
    off_140C01EE8[0] = (__int64 (__fastcall *)())HalpTimerOnlyClockInterruptPending;
    off_140C01E40 = HalpTimerQueryCycleCounter;
    off_140C02050 = (__int64 (__fastcall *)())HalpTimerGetReferencePage;
    off_140C01F78[0] = HalpTimerConvertAuxiliaryCounterToPerformanceCounter;
    off_140C01F70[0] = HalpTimerConvertPerformanceCounterToAuxiliaryCounter;
    off_140C01F80[0] = HalpTimerQueryAuxiliaryCounterFrequency;
    HalpInitializeTimers(v18);
    ((void (*)(void))HalpTimerSaveProcessorFrequency)();
    HalpTimerInitializeClock(v20, v19, v21, v22);
    KiProfileIrql = 15;
    v23 = HalpTimerInitializeProfiling();
    inited = v23;
    if ( v23 < 0 )
      KeBugCheckEx(0x5Cu, 0x110uLL, v23, 0LL, 0LL);
    HalpTimerPropagateQpcBiasUpdate(HalpPerformanceCounter);
    return inited;
  }
  v7 = v6 - 3;
  if ( v7 )
  {
    v8 = (unsigned int)(v7 - 2);
    if ( !(_DWORD)v8 )
    {
      if ( !qword_140C4C488 )
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
            off_140C01F98[0] = (__int64 (__fastcall *)())HalpTimerQueryAndResetRtcErrors;
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
    off_140C02030[0] = HalpTimerQueryHostPerformanceCounter;
    if ( (unsigned int)HalpInterruptModel() == 1 )
    {
      if ( !HalpTimerProcessorFrequencyKnown && *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
        HalpTimerMeasureAllProcessorFrequencies();
      if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
      {
        if ( HalpTscSynchronizationFailureFallback )
        {
          v25 = (const EVENT_DESCRIPTOR *)HAL_ETW_EVENT_UNEXPECTED_FALLBACK;
        }
        else
        {
          if ( !HalpTscProcessorFeatureFallback )
            goto LABEL_25;
          v25 = &HAL_ETW_EVENT_EXPECTED_FALLBACK;
        }
        HalpTscFallbackToPlatformSource(v25);
      }
    }
LABEL_25:
    PerformanceFrequency.QuadPart = 0LL;
    v13 = HalpAuxiliaryCounter;
    if ( HalpAuxiliaryCounter )
    {
      if ( HalpTimerAuxiliaryClockEnabled )
      {
        if ( (*(_DWORD *)(HalpAuxiliaryCounter + 224) & 0x6000) != 0 )
        {
          v13 = 0LL;
          HalpAuxiliaryCounter = 0LL;
        }
        if ( v13 )
        {
          if ( !HalpTimerQpcFreqForAuxQpcConversion )
          {
            KeQueryPerformanceCounter(&PerformanceFrequency);
            HalpTimerQpcFreqForAuxQpcConversion = PerformanceFrequency.QuadPart;
          }
          HalpTimerEarliestQpcAllowedToConvert = KeQueryPerformanceCounter(0LL).QuadPart;
          HalpTimerCaptureCloestAuxiliaryQpcPair();
        }
      }
      else
      {
        HalpAuxiliaryCounter = 0LL;
      }
    }
    return inited;
  }
  HalpTscReserveResources();
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  HalpTimerSavedProcessorCounter = HalpMmAllocCtxAlloc(v15, 8LL * MaximumProcessorCount);
  if ( HalpTimerSavedProcessorCounter )
  {
    if ( (unsigned int)HalpInterruptModel() == 1 )
      HalpTimerInitializeHypervisorTimer(v17, v16);
    return inited;
  }
  return 3221225626LL;
}
