/*
 * XREFs of LdrpXfgCheckRoutineCallback @ 0x18002D7A0
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardXfgEnabled @ 0x18002C368 (LdrControlFlowGuardXfgEnabled.c)
 *     LdrpCfgCheckRoutineCallback @ 0x18002D810 (LdrpCfgCheckRoutineCallback.c)
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
