/*
 * XREFs of LdrpXfgDispatchRoutineCallback @ 0x18002D760
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardXfgEnabled @ 0x18002C368 (LdrControlFlowGuardXfgEnabled.c)
 *     LdrpCfgDispatchRoutineCallback @ 0x18002D7E0 (LdrpCfgDispatchRoutineCallback.c)
 */

__int64 (__fastcall *__fastcall LdrpXfgDispatchRoutineCallback(_QWORD *a1, __int64 a2))()
{
  unsigned int v2; // edi
  __int64 (__fastcall *result)(); // rax

  v2 = a2;
  if ( !(unsigned int)LdrControlFlowGuardXfgEnabled((__int64)a1, a2) || (v2 & 0x800000) == 0 )
    return (__int64 (__fastcall *)())LdrpCfgDispatchRoutineCallback(a1, v2);
  result = LdrpDispatchUserCallTargetXFG;
  *a1 = LdrpDispatchUserCallTargetXFG;
  return result;
}
