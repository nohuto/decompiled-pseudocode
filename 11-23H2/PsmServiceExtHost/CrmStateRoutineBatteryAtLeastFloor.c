/*
 * XREFs of CrmStateRoutineBatteryAtLeastFloor @ 0x18004B98C
 * Callers:
 *     CrmComparisonRoutineBatteryUnder50 @ 0x180048750 (CrmComparisonRoutineBatteryUnder50.c)
 *     CrmComparisonRoutineBatteryOver50 @ 0x180048780 (CrmComparisonRoutineBatteryOver50.c)
 *     CrmComparisonRoutineBatteryOver75 @ 0x180048D60 (CrmComparisonRoutineBatteryOver75.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CrmStateRoutineBatteryAtLeastFloor(unsigned int *a1, unsigned int a2)
{
  return *a1 >= a2;
}
