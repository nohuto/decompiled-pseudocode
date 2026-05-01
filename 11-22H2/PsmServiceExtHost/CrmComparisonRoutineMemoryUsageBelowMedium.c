/*
 * XREFs of CrmComparisonRoutineMemoryUsageBelowMedium @ 0x18004B590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineMemoryUsageBelowMedium(__int64 a1, _DWORD *a2)
{
  int v2; // eax

  v2 = 0;
  if ( *a2 )
    LOBYTE(v2) = a2[3] < 1;
  return (unsigned int)(2 * v2);
}
