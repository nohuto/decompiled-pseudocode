/*
 * XREFs of KelvinToCelsius @ 0x1C0014C94
 * Callers:
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0014008 (IoctlQueryTemperatureInfoProcess.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0019AF0 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0019CC0 (QueryTemperatureThresholdCompletion.c)
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
