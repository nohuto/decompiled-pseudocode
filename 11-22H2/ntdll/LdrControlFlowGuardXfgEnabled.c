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

__int64 __fastcall LdrControlFlowGuardXfgEnabled(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = LdrControlFlowGuardEnforced(a1, a2);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  LOBYTE(v3) = (BYTE1(qword_1801993B0) & 3) == 1;
  return v3;
}
