/*
 * XREFs of CrmStateRoutineULONGValueAtLeastFloor @ 0x18004BA18
 * Callers:
 *     CrmComparisonRoutineMinutesPassedAtLeast30 @ 0x180048E00 (CrmComparisonRoutineMinutesPassedAtLeast30.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CrmStateRoutineULONGValueAtLeastFloor(_DWORD *a1)
{
  return *a1 >= 0x708u;
}
