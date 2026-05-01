/*
 * XREFs of CrmComparisonRoutineNotDcDisplayOff @ 0x180014120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineNotDcDisplayOff(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = 0LL;
  if ( !(unsigned int)*a2 || HIDWORD(*a2) )
    v2 = 1LL;
  return CrmStateRoutineLogicalToComparisonState(v2);
}
