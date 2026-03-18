/*
 * XREFs of KelvinToCelsius @ 0x1C0014B64
 * Callers:
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0013ED8 (IoctlQueryTemperatureInfoProcess.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0019980 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0019B50 (QueryTemperatureThresholdCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KelvinToCelsius(__int16 a1)
{
  if ( a1 )
    return (unsigned __int16)(a1 - 273);
  else
    return 4294934528LL;
}
