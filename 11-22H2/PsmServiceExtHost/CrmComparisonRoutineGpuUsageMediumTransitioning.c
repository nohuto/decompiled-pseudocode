/*
 * XREFs of CrmComparisonRoutineGpuUsageMediumTransitioning @ 0x18004B540
 * Callers:
 *     <none>
 * Callees:
 *     CrmComparisonRoutineULONGValueOpensUnderClosesOver @ 0x18004B63C (CrmComparisonRoutineULONGValueOpensUnderClosesOver.c)
 */

__int64 __fastcall CrmComparisonRoutineGpuUsageMediumTransitioning(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ecx

  v2 = CrmComparisonRoutineULONGValueOpensUnderClosesOver(a1, a2, 30LL);
  v3 = 0;
  if ( v2 == 1 )
    return 2;
  return v3;
}
