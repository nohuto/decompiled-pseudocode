/*
 * XREFs of CrmComparisonRoutineAC @ 0x1800142A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineAC(__int64 a1, _DWORD *a2)
{
  return CrmStateRoutineLogicalToComparisonState(*a2 == 0);
}
