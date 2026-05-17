/*
 * XREFs of DbgUiStopDebugging @ 0x1800D7ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DbgUiStopDebugging()
{
  return ZwRemoveProcessDebug();
}
