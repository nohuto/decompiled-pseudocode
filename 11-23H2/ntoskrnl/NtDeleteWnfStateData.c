/*
 * XREFs of NtDeleteWnfStateData @ 0x14085C090
 * Callers:
 *     <none>
 * Callees:
 *     ExpNtDeleteWnfStateData @ 0x14085C0AC (ExpNtDeleteWnfStateData.c)
 */

NTSTATUS __cdecl NtDeleteWnfStateData(PCWNF_STATE_NAME StateName, const void *ExplicitScope)
{
  return ExpNtDeleteWnfStateData(StateName, ExplicitScope, 1LL);
}
