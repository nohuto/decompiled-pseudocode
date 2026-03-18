/*
 * XREFs of SeTokenFromAccessInformation @ 0x1403685D0
 * Callers:
 *     <none>
 * Callees:
 *     SepTokenFromAccessInformation @ 0x14022822C (SepTokenFromAccessInformation.c)
 */

__int64 __fastcall SeTokenFromAccessInformation(unsigned int **a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  if ( a3 < 0x498 )
  {
    *a4 = 1176;
    return 3221225507LL;
  }
  else
  {
    SepTokenFromAccessInformation(a1, a2);
    return 0LL;
  }
}
