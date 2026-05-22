/*
 * XREFs of ?GetTimeElapsedSec@WinKeyScenarioTelemetry@@CA_KXZ @ 0x1800FB59C
 * Callers:
 *     ?UpdateForegroundTarget@DWMInputRouter@@UEAAX_KIII@Z @ 0x180015E60 (-UpdateForegroundTarget@DWMInputRouter@@UEAAX_KIII@Z.c)
 *     ?UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ @ 0x1800FB8B4 (-UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ.c)
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
