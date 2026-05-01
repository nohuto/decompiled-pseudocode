/*
 * XREFs of CrmComparisonRoutineConnectedStandbyOff @ 0x180014270
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineConnectedStandby @ 0x18004B99C (CrmStateRoutineConnectedStandby.c)
 */

__int64 __fastcall CrmComparisonRoutineConnectedStandbyOff(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = CrmStateRoutineConnectedStandby(a2);
  return CrmStateRoutineLogicalToComparisonState(v2 == 0);
}
