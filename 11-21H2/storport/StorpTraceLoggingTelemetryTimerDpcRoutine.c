/*
 * XREFs of StorpTraceLoggingTelemetryTimerDpcRoutine @ 0x1C0003470
 * Callers:
 *     <none>
 * Callees:
 *     StorEtwResetCounters @ 0x1C0002B64 (StorEtwResetCounters.c)
 *     StorpLogStatistics @ 0x1C00037DC (StorpLogStatistics.c)
 */

void __fastcall StorpTraceLoggingTelemetryTimerDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int16 v5; // di
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KDPC *v10; // rbx
  __int64 v11; // rdx
  struct _KTIMER *v12; // rcx
  ULONG v13; // r9d
  LARGE_INTEGER v14; // rdx

  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  v8 = v6 * (int)KeQueryTimeIncrement();
  v10 = &g_StorpTraceLoggingPerformanceTimerDpc;
  *(_QWORD *)&g_SystemUptime_s = v8 / 10000000;
  if ( Dpc == &g_StorpTraceLoggingPerformanceTimerDpc )
  {
    StorEtwResetCounters(v7, v8 / 10000000, v8, v9);
    if ( g_StorpTraceLoggingPerformanceEnabled )
      v5 = 4;
    if ( g_StorpTraceLoggingErrorDataEnabled )
      v5 |= 0x10u;
    StorpLogStatistics((unsigned __int16)v5 | 0x60u);
    v11 = g_StorpTraceLoggingPerformancePeriod;
    v12 = &g_StorpTraceLoggingPerformanceTimer;
    v13 = 300000;
  }
  else
  {
    v10 = &g_StorpTraceLoggingDeviceHealthTimerDpc;
    if ( Dpc == &g_StorpTraceLoggingDeviceHealthTimerDpc )
    {
      StorpLogStatistics(128LL);
      v11 = g_StorpTraceLoggingDeviceHealthPeriod;
      v12 = &g_StorpTraceLoggingDeviceHealthTimer;
      v13 = 300000;
    }
    else
    {
      v10 = &g_StorpTraceLoggingHierarchicalResetTimerDpc;
      if ( Dpc == &g_StorpTraceLoggingHierarchicalResetTimerDpc )
      {
        StorpLogStatistics(3LL);
        v14.QuadPart = -138000000000LL;
        v12 = &g_StorpTraceLoggingHierarchicalResetTimer;
        v13 = 300000;
        goto LABEL_13;
      }
      v10 = &g_StorpTraceLoggingDailyTimerDpc;
      if ( Dpc == &g_StorpTraceLoggingDailyTimerDpc )
      {
        StorpLogStatistics(8LL);
        v14.QuadPart = -864000000000LL;
        v12 = &g_StorpTraceLoggingDailyTimer;
        v13 = 900000;
        goto LABEL_13;
      }
      v10 = &g_StorpTraceLoggingDeviceLogPagesTimerDpc;
      if ( Dpc != &g_StorpTraceLoggingDeviceLogPagesTimerDpc )
        return;
      StorpLogStatistics(256LL);
      v11 = g_StorpTraceLoggingDeviceLogPagesPeriod;
      v12 = &g_StorpTraceLoggingDeviceLogPagesTimer;
      v13 = 900000;
    }
  }
  v14.QuadPart = -v11;
LABEL_13:
  KeSetCoalescableTimer(v12, v14, 0, v13, v10);
}
