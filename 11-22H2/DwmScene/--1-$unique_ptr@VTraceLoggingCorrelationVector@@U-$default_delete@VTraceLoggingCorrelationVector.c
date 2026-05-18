/*
 * XREFs of ??1?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAA@XZ @ 0x180021D1C
 * Callers:
 *     ??0TelemetryTraceLoggerWin@Utils@Spectre@@QEAA@XZ @ 0x1800219A8 (--0TelemetryTraceLoggerWin@Utils@Spectre@@QEAA@XZ.c)
 *     ??1TelemetryTraceLoggerWin@Utils@Spectre@@UEAA@XZ @ 0x180021D44 (--1TelemetryTraceLoggerWin@Utils@Spectre@@UEAA@XZ.c)
 *     _Spectre::Utils::TelemetryTraceLoggerWin::TelemetryTraceLoggerWin_::_1_::dtor$6 @ 0x1800E4AE0 (_Spectre--Utils--TelemetryTraceLoggerWin--TelemetryTraceLoggerWin_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    _aligned_free(v1);
}
