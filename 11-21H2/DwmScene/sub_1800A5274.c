/*
 * XREFs of sub_1800A5274 @ 0x1800A5274
 * Callers:
 *     sub_1800A4B70 @ 0x1800A4B70 (sub_1800A4B70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800A5274(float *a1, __int64 a2, float *a3, _OWORD *a4)
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
        return sub_1800A4C3C(a1, a2, v6);
      ++a4;
    }
    v8 = *(_OWORD *)a1;
    a1 += 4;
    *a4++ = v8;
  }
  while ( a1 != (float *)a2 );
  a2 = (__int64)a3;
  a1 = v5;
  return sub_1800A4C3C(a1, a2, v6);
}
