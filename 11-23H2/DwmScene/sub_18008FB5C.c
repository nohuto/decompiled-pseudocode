/*
 * XREFs of sub_18008FB5C @ 0x18008FB5C
 * Callers:
 *     sub_180091390 @ 0x180091390 (sub_180091390.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _o_floorf @ 0x18000C02C (_o_floorf.c)
 *     sub_180090FEC @ 0x180090FEC (sub_180090FEC.c)
 */

__m128 *__fastcall sub_18008FB5C(__int64 a1, __m128 *a2, __m128 *a3)
{
  __m128 v3; // xmm1
  int v4; // r15d
  char *v5; // rbx
  __int64 v8; // rdi
  float v9; // xmm6_4
  int v10; // eax
  int v11; // ecx
  __m128 v12; // xmm5
  int v13; // edx
  __int64 v14; // rdi
  int v15; // r11d
  __m128 v16; // xmm2
  float v17; // xmm3_4
  int v18; // r11d
  float v19; // xmm4_4
  int v21; // [rsp+20h] [rbp-60h]
  float v22[3]; // [rsp+24h] [rbp-5Ch]
  __int64 v23; // [rsp+30h] [rbp-50h]
  int v24; // [rsp+38h] [rbp-48h]
  _DWORD v25[3]; // [rsp+40h] [rbp-40h] BYREF
  char v26; // [rsp+4Ch] [rbp-34h] BYREF
  __m128 v27; // [rsp+50h] [rbp-30h] BYREF

  v3 = *a3;
  v4 = *(_DWORD *)(a1 + 136);
  v5 = (char *)v25;
  v25[1] = 1;
  v25[0] = 0;
  v23 = 0LL;
  v24 = 0;
  *(_QWORD *)v22 = 0LL;
  v25[2] = 2;
  *a3 = _mm_mul_ps(
          _mm_min_ps(_mm_max_ps(v3, (__m128)xmmword_180106550), (__m128)xmmword_180106540),
          _mm_shuffle_ps((__m128)COERCE_UNSIGNED_INT((float)v4), (__m128)COERCE_UNSIGNED_INT((float)v4), 0));
  v3.m128_i32[0] = a3->m128_i32[1];
  v27.m128_i32[0] = a3->m128_i32[0];
  v27.m128_i32[2] = a3->m128_i32[2];
  v21 = 0;
  v27.m128_i32[1] = v3.m128_i32[0];
  do
  {
    v8 = *(int *)v5;
    v9 = v27.m128_f32[v8];
    o_floorf();
    v10 = (int)v9;
    if ( (int)v9 >= 0 )
    {
      if ( v10 > v4 - 2 )
        v10 = v4 - 2;
    }
    else
    {
      v10 = 0;
    }
    v5 += 4;
    *((_DWORD *)&v23 + v8) = v10;
    v22[v8 - 1] = v9 - (float)v10;
  }
  while ( v5 != &v26 );
  v11 = v24;
  v12 = (__m128)0x3F800000u;
  v13 = v4 * HIDWORD(v23);
  *a2 = (__m128)xmmword_180106A08;
  v14 = (int)v23 + v4 * v4 * v11 + v13;
  LOBYTE(v15) = 0;
  do
  {
    if ( (v15 & 2) != 0 )
    {
      v16 = (__m128)LODWORD(v22[0]);
    }
    else
    {
      v16 = v12;
      v16.m128_f32[0] = v12.m128_f32[0] - v22[0];
    }
    if ( (v15 & 4) != 0 )
      v17 = v22[1];
    else
      v17 = v12.m128_f32[0] - v22[1];
    sub_180090FEC(a1, &v27, (v15 & 1) + ((v15 & 4) != 0 ? v4 * v4 : 0) + v14 + ((v15 & 2) != 0 ? v4 : 0));
    v15 = v18 + 1;
    v16.m128_f32[0] = (float)(v16.m128_f32[0] * v19) * v17;
    *a2 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v27), *a2);
  }
  while ( v15 < 8 );
  return a2;
}
