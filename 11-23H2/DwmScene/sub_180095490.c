/*
 * XREFs of sub_180095490 @ 0x180095490
 * Callers:
 *     sub_1800953B8 @ 0x1800953B8 (sub_1800953B8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180095490(float *a1, float *a2, float *a3, _OWORD *a4)
{
  float *v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm0

  v4 = a2;
  while ( *v4 > *a1 )
  {
    v5 = *(_OWORD *)v4;
    v4 += 4;
    *a4 = v5;
    if ( v4 == a3 )
      return sub_180095530(a1, a2, a4 + 1);
LABEL_6:
    ++a4;
  }
  v6 = *(_OWORD *)a1;
  a1 += 4;
  *a4 = v6;
  if ( a1 != a2 )
    goto LABEL_6;
  a2 = a3;
  a1 = v4;
  return sub_180095530(a1, a2, a4 + 1);
}
