/*
 * XREFs of CrmComparisonRoutineGameModeOff @ 0x180012C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineGameModeOff(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rcx

  v2 = 0LL;
  if ( !*a2 )
    return CrmStateRoutineLogicalToComparisonState(1LL);
  LOBYTE(v2) = a2[2] == 0;
  return CrmStateRoutineLogicalToComparisonState(v2);
}
