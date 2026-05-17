/*
 * XREFs of LdrpCfgDispatchRoutineCallback @ 0x180034270
 * Callers:
 *     LdrpXfgDispatchRoutineCallback @ 0x180033800 (LdrpXfgDispatchRoutineCallback.c)
 *     LdrpXfgTableDispatchRoutineCallback @ 0x180033840 (LdrpXfgTableDispatchRoutineCallback.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800342A8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 */

__int64 (__fastcall *__fastcall LdrpCfgDispatchRoutineCallback(__int64 (__fastcall **a1)(), __int16 a2))()
{
  __int64 (__fastcall *result)(); // rax

  if ( !(unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression()
    || (result = LdrpDispatchUserCallTargetES, (a2 & 0x4000) == 0) )
  {
    result = LdrpDispatchUserCallTarget;
  }
  *a1 = result;
  return result;
}
