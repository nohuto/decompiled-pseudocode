/*
 * XREFs of CrmStateRoutineConnectedStandby @ 0x18004BA2C
 * Callers:
 *     CrmComparisonRoutineConnectedStandbyOff @ 0x180014270 (CrmComparisonRoutineConnectedStandbyOff.c)
 *     CrmComparisonRoutineConnectedStandby @ 0x180047730 (CrmComparisonRoutineConnectedStandby.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CrmStateRoutineConnectedStandby(_DWORD *a1)
{
  return (unsigned int)(*a1 - 1) <= 0xFFFFFFFD;
}
