/*
 * XREFs of DbgUiSetThreadDebugObject @ 0x1800D7EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl DbgUiSetThreadDebugObject(HANDLE DebugObject)
{
  NtCurrentTeb()->DbgSsReserved[1] = DebugObject;
}
