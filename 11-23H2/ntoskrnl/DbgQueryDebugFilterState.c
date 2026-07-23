/*
 * XREFs of DbgQueryDebugFilterState @ 0x1405A7D30
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDebugFilterState @ 0x14032ABA0 (NtQueryDebugFilterState.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
