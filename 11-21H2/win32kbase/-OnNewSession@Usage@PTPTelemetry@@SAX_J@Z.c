/*
 * XREFs of ?OnNewSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x1C01DEA7C
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01DEAD0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PTPTelemetry::Usage::OnNewSession(__int64 a1)
{
  LARGE_INTEGER PerformanceCounter; // rax

  if ( PTPTelemetry::Usage::gTPTelemTimings >= a1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    dword_1C0296B3C = 0;
    qword_1C0296B28 = PerformanceCounter.QuadPart;
  }
  else
  {
    PTPTelemetry::Usage::gTPTelemTimings = KeQueryPerformanceCounter(0LL);
  }
}
