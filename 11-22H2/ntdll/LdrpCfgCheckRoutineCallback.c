/*
 * XREFs of LdrpCfgCheckRoutineCallback @ 0x18002D9E0
 * Callers:
 *     LdrpXfgCheckRoutineCallback @ 0x18002D970 (LdrpXfgCheckRoutineCallback.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180021CB0 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 */

__int64 (__fastcall *LdrpCfgCheckRoutineCallback())()
{
  int v0; // eax
  __int16 v1; // dx
  __int64 (__fastcall **v2)(); // r8
  __int64 (__fastcall *result)(); // rax

  LOBYTE(v0) = LdrControlFlowGuardEnforcedWithExportSuppression();
  if ( !v0 || (result = LdrpValidateUserCallTargetES, (v1 & 0x4000) == 0) )
    result = LdrpValidateUserCallTarget;
  *v2 = result;
  return result;
}
