/*
 * XREFs of StorpRegisterTraceLogging @ 0x1C00AAC7C
 * Callers:
 *     RaInitializeDriver @ 0x1C00A865C (RaInitializeDriver.c)
 * Callees:
 *     StorpInitializePerfTelemetry @ 0x1C006C180 (StorpInitializePerfTelemetry.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C00AAFF8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

char StorpRegisterTraceLogging()
{
  int v0; // eax

  if ( g_StorpTraceLoggingPerformanceEnabled )
    StorpInitializePerfTelemetry();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00920C8) >= 0 )
    TelemetryProviderInitialized = 1;
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0092000) >= 0 )
    OnDemandDataProviderInitialized = 1;
  v0 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0092038);
  if ( v0 >= 0 )
    NotificationProviderInitialized = 1;
  if ( TelemetryProviderInitialized )
  {
    KeInitializeTimer(&g_StorpTraceLoggingDailyTimer);
    KeInitializeDpc(
      &g_StorpTraceLoggingDailyTimerDpc,
      (PKDEFERRED_ROUTINE)StorpTraceLoggingTelemetryTimerDpcRoutine,
      0LL);
    KeSetCoalescableTimer(
      &g_StorpTraceLoggingDailyTimer,
      (LARGE_INTEGER)-6000000000LL,
      0,
      0xEA60u,
      &g_StorpTraceLoggingDailyTimerDpc);
    KeInitializeTimer(&g_StorpTraceLoggingHierarchicalResetTimer);
    KeInitializeDpc(
      &g_StorpTraceLoggingHierarchicalResetTimerDpc,
      (PKDEFERRED_ROUTINE)StorpTraceLoggingTelemetryTimerDpcRoutine,
      0LL);
    KeSetCoalescableTimer(
      &g_StorpTraceLoggingHierarchicalResetTimer,
      (LARGE_INTEGER)-138000000000LL,
      0,
      0x493E0u,
      &g_StorpTraceLoggingHierarchicalResetTimerDpc);
    if ( g_StorpTraceLoggingPerformanceEnabled || g_StorpTraceLoggingErrorDataEnabled )
    {
      KeInitializeTimer(&g_StorpTraceLoggingPerformanceTimer);
      KeInitializeDpc(
        &g_StorpTraceLoggingPerformanceTimerDpc,
        (PKDEFERRED_ROUTINE)StorpTraceLoggingTelemetryTimerDpcRoutine,
        0LL);
      KeSetCoalescableTimer(
        &g_StorpTraceLoggingPerformanceTimer,
        (LARGE_INTEGER)-6000000000LL,
        0,
        0xEA60u,
        &g_StorpTraceLoggingPerformanceTimerDpc);
    }
    if ( g_StorpTraceLoggingDeviceHealthEnabled )
    {
      KeInitializeTimer(&g_StorpTraceLoggingDeviceHealthTimer);
      KeInitializeDpc(
        &g_StorpTraceLoggingDeviceHealthTimerDpc,
        (PKDEFERRED_ROUTINE)StorpTraceLoggingTelemetryTimerDpcRoutine,
        0LL);
      KeSetCoalescableTimer(
        &g_StorpTraceLoggingDeviceHealthTimer,
        (LARGE_INTEGER)-6000000000LL,
        0,
        0xEA60u,
        &g_StorpTraceLoggingDeviceHealthTimerDpc);
    }
    KeInitializeTimer(&g_StorpTraceLoggingDeviceLogPagesTimer);
    KeInitializeDpc(
      &g_StorpTraceLoggingDeviceLogPagesTimerDpc,
      (PKDEFERRED_ROUTINE)StorpTraceLoggingTelemetryTimerDpcRoutine,
      0LL);
    LOBYTE(v0) = KeSetCoalescableTimer(
                   &g_StorpTraceLoggingDeviceLogPagesTimer,
                   (LARGE_INTEGER)-6000000000LL,
                   0,
                   0xEA60u,
                   &g_StorpTraceLoggingDeviceLogPagesTimerDpc);
  }
  return v0;
}
