/*
 * XREFs of CrmComparisonRoutineMoreThanFiveMinutes @ 0x18006CC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineMoreThanFiveMinutes(__int64 a1, _DWORD *a2)
{
  return CrmStateRoutineLogicalToComparisonState(*a2 > 0x12Cu);
}
