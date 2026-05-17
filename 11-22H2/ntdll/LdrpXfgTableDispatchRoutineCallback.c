/*
 * XREFs of LdrpXfgTableDispatchRoutineCallback @ 0x18002D8F0
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardXfgEnabled @ 0x18002C538 (LdrControlFlowGuardXfgEnabled.c)
 *     LdrpCfgDispatchRoutineCallback @ 0x18002D9B0 (LdrpCfgDispatchRoutineCallback.c)
 */

__int64 (__fastcall *__fastcall LdrpXfgTableDispatchRoutineCallback(_QWORD *a1, __int64 a2))()
{
  unsigned int v2; // edi
  __int64 (__fastcall *result)(); // rax

  v2 = a2;
  if ( !(unsigned int)LdrControlFlowGuardXfgEnabled((__int64)a1, a2) || (v2 & 0x800000) == 0 )
    return (__int64 (__fastcall *)())LdrpCfgDispatchRoutineCallback(a1, v2);
  result = LdrpTableDispatchUserCallTargetXFG;
  *a1 = LdrpTableDispatchUserCallTargetXFG;
  return result;
}
