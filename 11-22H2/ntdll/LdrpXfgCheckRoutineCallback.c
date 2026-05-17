/*
 * XREFs of LdrpXfgCheckRoutineCallback @ 0x18002D970
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardXfgEnabled @ 0x18002C538 (LdrControlFlowGuardXfgEnabled.c)
 *     LdrpCfgCheckRoutineCallback @ 0x18002D9E0 (LdrpCfgCheckRoutineCallback.c)
 */

__int64 (__fastcall *__fastcall LdrpXfgCheckRoutineCallback(_QWORD *a1, __int64 a2))()
{
  unsigned int v2; // edi
  __int64 (__fastcall *result)(); // rax

  v2 = a2;
  if ( !(unsigned int)LdrControlFlowGuardXfgEnabled((__int64)a1, a2) || (v2 & 0x800000) == 0 )
    return (__int64 (__fastcall *)())LdrpCfgCheckRoutineCallback(a1, v2);
  result = LdrpValidateUserCallTargetXFG;
  *a1 = LdrpValidateUserCallTargetXFG;
  return result;
}
