/*
 * XREFs of CrmComparisonRoutineDC @ 0x1800486E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineDC(__int64 a1, _DWORD *a2)
{
  return CrmStateRoutineLogicalToComparisonState(*a2 == 1);
}
