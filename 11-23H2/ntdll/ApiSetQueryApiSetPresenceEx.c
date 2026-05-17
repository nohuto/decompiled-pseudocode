/*
 * XREFs of ApiSetQueryApiSetPresenceEx @ 0x180088CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetQueryApiSetPresenceEx(unsigned __int16 *a1, bool *a2, bool *a3)
{
  return ApiSetQuerySchemaInfo((_BYTE *)NtCurrentPeb()->ApiSetMap, a1, a2, a3);
}
