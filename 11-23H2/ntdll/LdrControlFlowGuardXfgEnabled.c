/*
 * XREFs of LdrControlFlowGuardXfgEnabled @ 0x18002C368
 * Callers:
 *     LdrpXfgTableDispatchRoutineCallback @ 0x18002D720 (LdrpXfgTableDispatchRoutineCallback.c)
 *     LdrpXfgDispatchRoutineCallback @ 0x18002D760 (LdrpXfgDispatchRoutineCallback.c)
 *     LdrpXfgCheckRoutineCallback @ 0x18002D7A0 (LdrpXfgCheckRoutineCallback.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x18010BB50 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002C3A0 (LdrControlFlowGuardEnforced.c)
 */

__int64 __fastcall LdrControlFlowGuardXfgEnabled(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = LdrControlFlowGuardEnforced(a1, a2);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  LOBYTE(v3) = (BYTE1(qword_18019C3C0) & 3) == 1;
  return v3;
}
