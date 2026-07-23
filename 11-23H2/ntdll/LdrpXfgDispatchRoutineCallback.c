/*
 * XREFs of LdrpXfgDispatchRoutineCallback @ 0x18002D760
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardXfgEnabled @ 0x18002C368 (LdrControlFlowGuardXfgEnabled.c)
 *     LdrpCfgDispatchRoutineCallback @ 0x18002D7E0 (LdrpCfgDispatchRoutineCallback.c)
 */

__int64 (__fastcall *__fastcall LdrpXfgDispatchRoutineCallback(_QWORD *a1, unsigned int a2))()
{
  __int64 (__fastcall *result)(); // rax

  if ( !(unsigned int)LdrControlFlowGuardXfgEnabled() || (a2 & 0x800000) == 0 )
    return (__int64 (__fastcall *)())LdrpCfgDispatchRoutineCallback(a1, a2);
  result = LdrpDispatchUserCallTargetXFG;
  *a1 = LdrpDispatchUserCallTargetXFG;
  return result;
}
