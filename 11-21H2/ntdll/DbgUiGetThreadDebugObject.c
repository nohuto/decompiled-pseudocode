/*
 * XREFs of DbgUiGetThreadDebugObject @ 0x1800D8100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE DbgUiGetThreadDebugObject(void)
{
  return NtCurrentTeb()->DbgSsReserved[1];
}
