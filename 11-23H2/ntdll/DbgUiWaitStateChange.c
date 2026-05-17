/*
 * XREFs of DbgUiWaitStateChange @ 0x1800D7EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DbgUiWaitStateChange()
{
  return ZwWaitForDebugEvent();
}
