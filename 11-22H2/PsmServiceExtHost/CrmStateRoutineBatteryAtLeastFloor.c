/*
 * XREFs of CrmStateRoutineBatteryAtLeastFloor @ 0x18004BA1C
 * Callers:
 *     CrmComparisonRoutineBatteryUnder50 @ 0x1800487E0 (CrmComparisonRoutineBatteryUnder50.c)
 *     CrmComparisonRoutineBatteryOver50 @ 0x180048810 (CrmComparisonRoutineBatteryOver50.c)
 *     CrmComparisonRoutineBatteryOver75 @ 0x180048DF0 (CrmComparisonRoutineBatteryOver75.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CrmStateRoutineBatteryAtLeastFloor(unsigned int *a1, unsigned int a2)
{
  return *a1 >= a2;
}
