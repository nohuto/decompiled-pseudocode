/*
 * XREFs of DbgSetDebugFilterState @ 0x140393AD0
 * Callers:
 *     <none>
 * Callees:
 *     NtSetDebugFilterState @ 0x14082F570 (NtSetDebugFilterState.c)
 */

NTSTATUS __stdcall DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return NtSetDebugFilterState(ComponentId, Level, State);
}
