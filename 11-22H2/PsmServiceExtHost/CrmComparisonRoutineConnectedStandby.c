/*
 * XREFs of CrmComparisonRoutineConnectedStandby @ 0x180047730
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineConnectedStandby @ 0x18004BA2C (CrmStateRoutineConnectedStandby.c)
 */

__int64 __fastcall CrmComparisonRoutineConnectedStandby(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = CrmStateRoutineConnectedStandby(a2);
  return CrmStateRoutineLogicalToComparisonState(v2);
}
