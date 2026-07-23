/*
 * XREFs of ZwDeleteWnfStateData @ 0x14041D300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteWnfStateData(PCWNF_STATE_NAME StateName, const void *ExplicitScope)
{
  _disable();
  __readeflags();
  return sub_140433F80(StateName, ExplicitScope);
}
