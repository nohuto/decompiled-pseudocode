/*
 * XREFs of LdrControlFlowGuardXfgEnabled @ 0x18002C368
 * Callers:
 *     LdrpXfgTableDispatchRoutineCallback @ 0x18002D720 (LdrpXfgTableDispatchRoutineCallback.c)
 *     LdrpXfgDispatchRoutineCallback @ 0x18002D760 (LdrpXfgDispatchRoutineCallback.c)
 *     LdrpXfgCheckRoutineCallback @ 0x18002D7A0 (LdrpXfgCheckRoutineCallback.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x18010BB20 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002C3A0 (LdrControlFlowGuardEnforced.c)
 */

__int64 LdrControlFlowGuardXfgEnabled()
{
  int v0; // eax
  unsigned int v1; // edx

  LOBYTE(v0) = LdrControlFlowGuardEnforced();
  v1 = 0;
  if ( !v0 )
    return 0LL;
  LOBYTE(v1) = (BYTE1(LdrSystemDllInitBlock.MitigationOptionsMap.Map[2]) & 3) == 1;
  return v1;
}
