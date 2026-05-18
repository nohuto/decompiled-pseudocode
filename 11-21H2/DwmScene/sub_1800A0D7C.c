/*
 * XREFs of sub_1800A0D7C @ 0x1800A0D7C
 * Callers:
 *     sub_18009F81C @ 0x18009F81C (sub_18009F81C.c)
 *     sub_18009FB44 @ 0x18009FB44 (sub_18009FB44.c)
 * Callees:
 *     sub_18005C5EC @ 0x18005C5EC (sub_18005C5EC.c)
 *     sub_18009EC10 @ 0x18009EC10 (sub_18009EC10.c)
 */

unsigned __int64 __fastcall sub_1800A0D7C(_QWORD *a1, __int64 a2, float **a3)
{
  float v3; // xmm2_4
  unsigned __int64 v5; // r10
  float *i; // rax
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  unsigned __int64 result; // rax
  __int64 v16; // r15
  int v17; // edi
  int v18; // ebx

  v3 = 0.0;
  a1[17] = a2;
  v5 = a2 * a2 * a2;
  a1[18] = a2;
  a1[19] = v5;
  for ( i = *a3; i != a3[1]; i += 4 )
  {
    v7 = i[1];
    v8 = fmaxf(*i, v3);
    v9 = i[2];
    v3 = fmaxf(v9, fmaxf(v7, v8));
  }
  v10 = a1 + 14;
  v11 = a1[14];
  v12 = (a1[15] - v11) >> 2;
  if ( v5 >= v12 )
  {
    if ( v5 <= v12 )
      goto LABEL_11;
    if ( v5 > (v10[2] - v11) >> 2 )
    {
      sub_18009EC10((__int64)v10, v5);
      goto LABEL_11;
    }
    v13 = sub_18005C5EC(v10[1], v5 - v12);
  }
  else
  {
    v13 = v11 + 4 * v5;
  }
  v10[1] = v13;
LABEL_11:
  v14 = 0LL;
  result = ((char *)a3[1] - (char *)*a3) >> 4;
  if ( result )
  {
    v16 = 0LL;
    do
    {
      v17 = (int)o_roundf();
      v18 = (int)o_roundf();
      v16 += 16LL;
      *(_DWORD *)(*v10 + 4 * v14++) = (int)o_roundf() | ((v18 | (v17 << 8)) << 8);
      result = ((char *)a3[1] - (char *)*a3) >> 4;
    }
    while ( v14 < result );
  }
  return result;
}
