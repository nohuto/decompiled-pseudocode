/*
 * XREFs of CrmComparisonRoutineUserPresent @ 0x180043010
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineUserAway @ 0x18004BABC (CrmStateRoutineUserAway.c)
 */

__int64 __fastcall CrmComparisonRoutineUserPresent(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = CrmStateRoutineUserAway(a2);
  return CrmStateRoutineLogicalToComparisonState(v2 == 0);
}
