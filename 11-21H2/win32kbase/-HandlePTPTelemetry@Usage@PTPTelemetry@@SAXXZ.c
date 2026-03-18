/*
 * XREFs of ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x1C00D4710
 * Callers:
 *     ?OnEndSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x1C01DE50C (-OnEndSession@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01DEAD0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x1C01DFC88 (-TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z.c)
 *     ?TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z @ 0x1C01E0090 (-TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z.c)
 */

void PTPTelemetry::Usage::HandlePTPTelemetry(void)
{
  if ( dword_1C029D8DC )
  {
    TraceLoggingPTPGestureUsageEvent((const struct tagTPTELEMSTATE *)&PTPTelemetry::Usage::gTPTelemState);
    if ( qword_1C029D8E0 > 0 || qword_1C029D8F8 > 0 || dword_1C029D890 || dword_1C029D898 )
      TraceLoggingPTPUsageDetailsEvent(
        (const struct tagTPTELEMSTATE *)&PTPTelemetry::Usage::gTPTelemState,
        gliQpcFreq.QuadPart);
    memset(&PTPTelemetry::Usage::gTPTelemState, 0, 0x90uLL);
  }
}
