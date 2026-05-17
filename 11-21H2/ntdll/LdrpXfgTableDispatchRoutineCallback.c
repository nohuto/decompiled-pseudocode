/*
 * XREFs of LdrpXfgTableDispatchRoutineCallback @ 0x180033840
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardXfgEnabled @ 0x180034238 (LdrControlFlowGuardXfgEnabled.c)
 *     LdrpCfgDispatchRoutineCallback @ 0x180034270 (LdrpCfgDispatchRoutineCallback.c)
 */

__int64 (__fastcall *__fastcall LdrpXfgTableDispatchRoutineCallback(_QWORD *a1, unsigned int a2))()
{
  __int64 (__fastcall *result)(); // rax

  if ( !(unsigned int)LdrControlFlowGuardXfgEnabled() || (a2 & 0x800000) == 0 )
    return (__int64 (__fastcall *)())LdrpCfgDispatchRoutineCallback(a1, a2);
  result = LdrpTableDispatchUserCallTargetXFG;
  *a1 = LdrpTableDispatchUserCallTargetXFG;
  return result;
}
