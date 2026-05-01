/*
 * XREFs of ?RmpCpuSetManagerCompareScores@@YAHPEAXPEBX1@Z @ 0x180086260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpCpuSetManagerCompareScores(_DWORD *a1, int *a2, _DWORD *a3)
{
  unsigned int v4; // eax

  if ( a2[2] < 0 )
  {
    if ( (a3[2] & 0x80000000) != 0 )
      return 0LL;
    return 0xFFFFFFFFLL;
  }
  if ( (a3[2] & 0x80000000) != 0 )
    return 1LL;
  if ( (unsigned int)*a2 < *a3 )
    goto LABEL_6;
  if ( (unsigned int)*a2 > *a3 )
  {
    if ( (a1[67] & 2) != 0 )
      return 1LL;
    return 0xFFFFFFFFLL;
  }
  v4 = a3[2];
  if ( a2[2] > v4 )
    return 0xFFFFFFFFLL;
  if ( a2[2] < v4 )
    return 1LL;
  if ( (unsigned int)a2[1] < a3[1] )
  {
LABEL_6:
    if ( (a1[67] & 2) == 0 )
      return 1LL;
    return 0xFFFFFFFFLL;
  }
  return (a1[67] & 2) != 0 ? 1 : -1;
}
