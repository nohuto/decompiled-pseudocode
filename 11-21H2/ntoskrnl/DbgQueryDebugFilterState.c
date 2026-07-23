/*
 * XREFs of DbgQueryDebugFilterState @ 0x1405E41C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140369DB0 @ 0x140369DB0 (sub_140369DB0.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return sub_140369DB0(ComponentId, Level);
}
