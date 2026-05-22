/*
 * XREFs of ?GetTimeElapsedSec@WinKeyScenarioTelemetry@@CA_KXZ @ 0x18011759C
 * Callers:
 *     ?UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ @ 0x18001DBAC (-UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ.c)
 * Callees:
 *     <none>
 */

LONGLONG WinKeyScenarioTelemetry::GetTimeElapsedSec(void)
{
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  if ( !WinKeyScenarioTelemetry::s_frequency.QuadPart )
    QueryPerformanceFrequency(&WinKeyScenarioTelemetry::s_frequency);
  QueryPerformanceCounter(&PerformanceCount);
  if ( WinKeyScenarioTelemetry::s_startTime.QuadPart <= 0
    || WinKeyScenarioTelemetry::s_frequency.QuadPart <= 0
    || PerformanceCount.QuadPart <= 0 )
  {
    return 6LL;
  }
  else
  {
    return (PerformanceCount.QuadPart - WinKeyScenarioTelemetry::s_startTime.QuadPart)
         / WinKeyScenarioTelemetry::s_frequency.QuadPart;
  }
}
