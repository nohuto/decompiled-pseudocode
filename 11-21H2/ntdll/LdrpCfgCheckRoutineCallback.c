/*
 * XREFs of LdrpCfgCheckRoutineCallback @ 0x180034200
 * Callers:
 *     LdrpXfgCheckRoutineCallback @ 0x1800337C0 (LdrpXfgCheckRoutineCallback.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800342A8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 */

__int64 (__fastcall *__fastcall LdrpCfgCheckRoutineCallback(__int64 (__fastcall **a1)(), __int16 a2))()
{
  __int64 (__fastcall *result)(); // rax

  if ( !(unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression()
    || (result = LdrpValidateUserCallTargetES, (a2 & 0x4000) == 0) )
  {
    result = LdrpValidateUserCallTarget;
  }
  *a1 = result;
  return result;
}
