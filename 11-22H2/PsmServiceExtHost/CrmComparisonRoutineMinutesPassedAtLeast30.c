/*
 * XREFs of CrmComparisonRoutineMinutesPassedAtLeast30 @ 0x180048E90
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineULONGValueAtLeastFloor @ 0x18004BAA8 (CrmStateRoutineULONGValueAtLeastFloor.c)
 */

__int64 __fastcall CrmComparisonRoutineMinutesPassedAtLeast30(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = CrmStateRoutineULONGValueAtLeastFloor(a2);
  return CrmStateRoutineLogicalToComparisonState(v2);
}
