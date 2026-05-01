/*
 * XREFs of CrmComparisonRoutineConstrainedModeOff @ 0x1800132C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineConstrainedModeOff(__int64 a1, _DWORD *a2)
{
  int v2; // ecx

  v2 = 0;
  if ( *a2 )
    v2 = a2[2] & 1;
  return CrmStateRoutineLogicalToComparisonState(v2 ^ 1u);
}
