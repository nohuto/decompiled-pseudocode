/*
 * XREFs of ApiSetQueryApiSetPresenceEx @ 0x1800884E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetQueryApiSetPresenceEx(unsigned __int16 *a1, bool *a2, bool *a3)
{
  return ApiSetQuerySchemaInfo((__int64)NtCurrentPeb()->ApiSetMap, a1, a2, a3);
}
