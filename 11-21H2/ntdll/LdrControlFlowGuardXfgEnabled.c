/*
 * XREFs of LdrControlFlowGuardXfgEnabled @ 0x180034238
 * Callers:
 *     LdrpXfgCheckRoutineCallback @ 0x1800337C0 (LdrpXfgCheckRoutineCallback.c)
 *     LdrpXfgDispatchRoutineCallback @ 0x180033800 (LdrpXfgDispatchRoutineCallback.c)
 *     LdrpXfgTableDispatchRoutineCallback @ 0x180033840 (LdrpXfgTableDispatchRoutineCallback.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x18010A4F0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x1800342E0 (LdrControlFlowGuardEnforced.c)
 */

__int64 LdrControlFlowGuardXfgEnabled()
{
  int v0; // eax
  __int64 result; // rax

  LOBYTE(v0) = LdrControlFlowGuardEnforced();
  if ( !v0 )
    return 0LL;
  result = 1LL;
  if ( (BYTE1(LdrSystemDllInitBlock.MitigationOptionsMap.Map[2]) & 3) != 1 )
    return 0LL;
  return result;
}
