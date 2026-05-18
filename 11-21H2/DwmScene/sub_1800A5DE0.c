/*
 * XREFs of sub_1800A5DE0 @ 0x1800A5DE0
 * Callers:
 *     sub_1800A5B30 @ 0x1800A5B30 (sub_1800A5B30.c)
 *     sub_1800A5DE0 @ 0x1800A5DE0 (sub_1800A5DE0.c)
 * Callees:
 *     sub_180040FB8 @ 0x180040FB8 (sub_180040FB8.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_1800A4C74 @ 0x1800A4C74 (sub_1800A4C74.c)
 *     sub_1800A5DE0 @ 0x1800A5DE0 (sub_1800A5DE0.c)
 */

__int64 __fastcall sub_1800A5DE0(int a1, _QWORD *a2, unsigned __int64 *a3, __int64 *a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
  __int64 result; // rax
  unsigned __int64 *v11; // rax
  __int64 v12; // rdx
  __m128 v13; // xmm3
  __m128 v14; // xmm3
  __m128 v15; // xmm1
  float v16; // xmm3_4
  __int64 *v17; // rbp
  __int64 *i; // rbx
  __int64 v19; // xmm0_8
  __int64 v20; // [rsp+20h] [rbp-38h]
  __int64 v21; // [rsp+30h] [rbp-28h] BYREF
  int v22; // [rsp+38h] [rbp-20h]
  float v23; // [rsp+68h] [rbp+10h] BYREF

  v5 = a5;
  sub_180043668((__int64)a5);
  result = v5[56] & a2[66];
  if ( result == a2[65] )
  {
    sub_180043668((__int64)v5);
    if ( (v5[56] & a2[64]) == a2[63] )
    {
      v11 = (unsigned __int64 *)sub_180040FB8((__int64)v5, (__int64)&v21);
      v12 = a4[1];
      v13 = _mm_sub_ps(
              _mm_movelh_ps((__m128)*v11, (__m128)*((unsigned int *)v11 + 2)),
              _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2)));
      v14 = _mm_mul_ps(v13, v13);
      v15 = _mm_shuffle_ps(v14, v14, 153);
      v16 = (float)(v14.m128_f32[0] + v15.m128_f32[0]) + _mm_shuffle_ps(v15, v15, 85).m128_f32[0];
      v23 = v16;
      if ( v12 == a4[2] )
      {
        sub_1800A4C74(a4, (char *)v12, &v23, (__int64 *)&a5);
        v5 = a5;
      }
      else
      {
        *(float *)v12 = v16;
        *(_QWORD *)(v12 + 8) = v5;
        a4[1] += 16LL;
      }
    }
    result = sub_180043668((__int64)v5);
    v17 = (__int64 *)v5[5];
    for ( i = (__int64 *)v5[4]; i != v17; i += 2 )
    {
      v19 = *a3;
      v22 = *((_DWORD *)a3 + 2);
      v20 = *i;
      v21 = v19;
      result = sub_1800A5DE0(a1, (_DWORD)a2, (unsigned int)&v21, (_DWORD)a4, v20);
    }
  }
  return result;
}
