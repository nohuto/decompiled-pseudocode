/*
 * XREFs of sub_1C00403E4 @ 0x1C00403E4
 * Callers:
 *     sub_1C00196D4 @ 0x1C00196D4 (sub_1C00196D4.c)
 *     sub_1C005EDA0 @ 0x1C005EDA0 (sub_1C005EDA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C00403E4(int *a1, int a2)
{
  int v2; // r8d
  int v3; // eax

  v2 = *a1;
  v3 = *a1 | 1;
  *a1 = v3;
  if ( a2 )
  {
    if ( a2 == 1 )
      *a1 = v2 | 3;
  }
  else
  {
    *a1 = v3 | 4;
  }
  return 0LL;
}
