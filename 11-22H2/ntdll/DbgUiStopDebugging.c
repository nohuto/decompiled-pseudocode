/*
 * XREFs of DbgUiStopDebugging @ 0x1800D8520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DbgUiStopDebugging()
{
  return ZwRemoveProcessDebug();
}
