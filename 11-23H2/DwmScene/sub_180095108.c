/*
 * XREFs of sub_180095108 @ 0x180095108
 * Callers:
 *     sub_180094A10 @ 0x180094A10 (sub_180094A10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180095108(float *a1, __int64 a2, float *a3, _OWORD *a4)
{
  float *v5; // rax
  void *v6; // r8
  __int128 v7; // xmm0
  __int128 v8; // xmm0

  v5 = (float *)a2;
  do
  {
    while ( 1 )
    {
      v6 = a4 + 1;
      if ( *a1 <= *v5 )
        break;
      v7 = *(_OWORD *)v5;
      v5 += 4;
      *a4 = v7;
      if ( v5 == a3 )
        return sub_180094ACC(a1, a2, v6);
      ++a4;
    }
    v8 = *(_OWORD *)a1;
    a1 += 4;
    *a4++ = v8;
  }
  while ( a1 != (float *)a2 );
  a2 = (__int64)a3;
  a1 = v5;
  return sub_180094ACC(a1, a2, v6);
}
