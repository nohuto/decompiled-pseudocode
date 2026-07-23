/*
 * XREFs of ExpApplyRewaitBoost @ 0x14036B9E0
 * Callers:
 *     <none>
 * Callees:
 *     ExpApplyPriorityBoost @ 0x1402A87D0 (ExpApplyPriorityBoost.c)
 */

__int64 __fastcall ExpApplyRewaitBoost(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ExpApplyPriorityBoost(a1, 65280LL, (__int64)KeGetCurrentThread(), a4);
}
