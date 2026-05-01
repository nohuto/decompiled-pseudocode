/*
 * XREFs of CrmComparisonRoutineBatteryOver50 @ 0x180048780
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineBatteryAtLeastFloor @ 0x18004B98C (CrmStateRoutineBatteryAtLeastFloor.c)
 */

__int64 __fastcall CrmComparisonRoutineBatteryOver50(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = CrmStateRoutineBatteryAtLeastFloor(a2, 50LL);
  return CrmStateRoutineLogicalToComparisonState(v2);
}
