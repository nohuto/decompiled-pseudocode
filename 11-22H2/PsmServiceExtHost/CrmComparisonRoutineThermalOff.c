/*
 * XREFs of CrmComparisonRoutineThermalOff @ 0x180013500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineThermalOff(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rcx

  v2 = 0LL;
  if ( !*a2 || !a2[2] )
    v2 = 1LL;
  return CrmStateRoutineLogicalToComparisonState(v2);
}
