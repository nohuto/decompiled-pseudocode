/*
 * XREFs of StorpTraceLoggingTelemetryTimerDpcRoutine @ 0x1C00213E0
 * Callers:
 *     <none>
 * Callees:
 *     StorpLogStatistics @ 0x1C001B410 (StorpLogStatistics.c)
 *     StorEtwResetCounters @ 0x1C00214EC (StorEtwResetCounters.c)
 */

void __fastcall StorpTraceLoggingTelemetryTimerDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int16 v5; // di
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KDPC *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  struct _KTIMER *v15; // rcx
  ULONG v16; // r9d
  LARGE_INTEGER v17; // rdx

  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  v7 = v6 * (int)KeQueryTimeIncrement();
  v9 = &g_StorpTraceLoggingPerformanceTimerDpc;
  v10 = v7 / 10000000;
  *(_QWORD *)&g_SystemUptime_s = v7 / 10000000;
  if ( Dpc == &g_StorpTraceLoggingPerformanceTimerDpc )
  {
    StorEtwResetCounters();
    if ( g_StorpTraceLoggingPerformanceEnabled )
      v5 = 4;
    if ( g_StorpTraceLoggingErrorDataEnabled )
      v5 |= 0x10u;
    StorpLogStatistics(v5 | 0x60, v11, v12, v13);
    v14 = g_StorpTraceLoggingPerformancePeriod;
    v15 = &g_StorpTraceLoggingPerformanceTimer;
    v16 = 300000;
    goto LABEL_7;
  }
  v9 = &g_StorpTraceLoggingDeviceHealthTimerDpc;
  if ( Dpc == &g_StorpTraceLoggingDeviceHealthTimerDpc )
  {
    StorpLogStatistics(0x80u, v10, v7, v8);
    v14 = g_StorpTraceLoggingDeviceHealthPeriod;
    v15 = &g_StorpTraceLoggingDeviceHealthTimer;
    v16 = 300000;
LABEL_7:
    v17.QuadPart = -v14;
LABEL_8:
    KeSetCoalescableTimer(v15, v17, 0, v16, v9);
    return;
  }
  v9 = &g_StorpTraceLoggingHierarchicalResetTimerDpc;
  if ( Dpc == &g_StorpTraceLoggingHierarchicalResetTimerDpc )
  {
    StorpLogStatistics(3u, v10, v7, v8);
    v17.QuadPart = -138000000000LL;
    v15 = &g_StorpTraceLoggingHierarchicalResetTimer;
    v16 = 300000;
    goto LABEL_8;
  }
  v9 = &g_StorpTraceLoggingDailyTimerDpc;
  if ( Dpc == &g_StorpTraceLoggingDailyTimerDpc )
  {
    StorpLogStatistics(8u, v10, v7, v8);
    v17.QuadPart = -864000000000LL;
    v15 = &g_StorpTraceLoggingDailyTimer;
    v16 = 900000;
    goto LABEL_8;
  }
  v9 = &g_StorpTraceLoggingDeviceLogPagesTimerDpc;
  if ( Dpc == &g_StorpTraceLoggingDeviceLogPagesTimerDpc )
  {
    StorpLogStatistics(0x100u, v10, v7, v8);
    v14 = g_StorpTraceLoggingDeviceLogPagesPeriod;
    v15 = &g_StorpTraceLoggingDeviceLogPagesTimer;
    v16 = 900000;
    goto LABEL_7;
  }
}
