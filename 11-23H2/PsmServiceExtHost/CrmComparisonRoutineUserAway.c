/*
 * XREFs of CrmComparisonRoutineUserAway @ 0x1800140C0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineUserAway @ 0x18004BA2C (CrmStateRoutineUserAway.c)
 */

__int64 __fastcall CrmComparisonRoutineUserAway(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = CrmStateRoutineUserAway(a2);
  return CrmStateRoutineLogicalToComparisonState(v2);
}
