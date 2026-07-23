/*
 * XREFs of DbgSetDebugFilterState @ 0x1403C3F10
 * Callers:
 *     <none>
 * Callees:
 *     sub_14082CCC0 @ 0x14082CCC0 (sub_14082CCC0.c)
 */

NTSTATUS __stdcall DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return sub_14082CCC0(ComponentId, Level, State);
}
