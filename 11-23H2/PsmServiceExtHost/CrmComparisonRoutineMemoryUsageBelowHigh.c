/*
 * XREFs of CrmComparisonRoutineMemoryUsageBelowHigh @ 0x18004B4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineMemoryUsageBelowHigh(__int64 a1, _DWORD *a2)
{
  int v2; // eax

  v2 = 0;
  if ( *a2 )
    LOBYTE(v2) = a2[3] < 2;
  return (unsigned int)(2 * v2);
}
