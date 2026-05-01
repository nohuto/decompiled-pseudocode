/*
 * XREFs of CrmComparisonRoutineUserPresent @ 0x180042F90
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineUserAway @ 0x18004BA2C (CrmStateRoutineUserAway.c)
 */

__int64 __fastcall CrmComparisonRoutineUserPresent(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = CrmStateRoutineUserAway(a2);
  return CrmStateRoutineLogicalToComparisonState(v2 == 0);
}
