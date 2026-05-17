/*
 * XREFs of LdrpCfgDispatchRoutineCallback @ 0x18002D7E0
 * Callers:
 *     LdrpXfgTableDispatchRoutineCallback @ 0x18002D720 (LdrpXfgTableDispatchRoutineCallback.c)
 *     LdrpXfgDispatchRoutineCallback @ 0x18002D760 (LdrpXfgDispatchRoutineCallback.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180021AD0 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 */

__int64 (__fastcall *LdrpCfgDispatchRoutineCallback())()
{
  int v0; // eax
  __int16 v1; // dx
  __int64 (__fastcall **v2)(); // r8
  __int64 (__fastcall *result)(); // rax

  LOBYTE(v0) = LdrControlFlowGuardEnforcedWithExportSuppression();
  if ( !v0 || (result = LdrpDispatchUserCallTargetES, (v1 & 0x4000) == 0) )
    result = LdrpDispatchUserCallTarget;
  *v2 = result;
  return result;
}
