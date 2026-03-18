/*
 * XREFs of DbgQueryDebugFilterState @ 0x1405A77C0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDebugFilterState @ 0x14032A910 (NtQueryDebugFilterState.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
