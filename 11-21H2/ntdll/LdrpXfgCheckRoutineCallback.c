/*
 * XREFs of LdrpXfgCheckRoutineCallback @ 0x1800337C0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpCfgCheckRoutineCallback @ 0x180034200 (LdrpCfgCheckRoutineCallback.c)
 *     LdrControlFlowGuardXfgEnabled @ 0x180034238 (LdrControlFlowGuardXfgEnabled.c)
 */

__int64 (__fastcall *__fastcall LdrpXfgCheckRoutineCallback(_QWORD *a1, unsigned int a2))()
{
  __int64 (__fastcall *result)(); // rax

  if ( !(unsigned int)LdrControlFlowGuardXfgEnabled() || (a2 & 0x800000) == 0 )
    return (__int64 (__fastcall *)())LdrpCfgCheckRoutineCallback(a1, a2);
  result = LdrpValidateUserCallTargetXFG;
  *a1 = LdrpValidateUserCallTargetXFG;
  return result;
}
