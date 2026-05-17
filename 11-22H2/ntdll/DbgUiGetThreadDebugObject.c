/*
 * XREFs of DbgUiGetThreadDebugObject @ 0x1800D8410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *DbgUiGetThreadDebugObject()
{
  return NtCurrentTeb()->DbgSsReserved[1];
}
