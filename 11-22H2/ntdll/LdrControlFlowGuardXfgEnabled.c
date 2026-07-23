/*
 * XREFs of LdrControlFlowGuardXfgEnabled @ 0x18002C538
 * Callers:
 *     LdrpXfgTableDispatchRoutineCallback @ 0x18002D8F0 (LdrpXfgTableDispatchRoutineCallback.c)
 *     LdrpXfgDispatchRoutineCallback @ 0x18002D930 (LdrpXfgDispatchRoutineCallback.c)
 *     LdrpXfgCheckRoutineCallback @ 0x18002D970 (LdrpXfgCheckRoutineCallback.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x18010A6B0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002C570 (LdrControlFlowGuardEnforced.c)
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
