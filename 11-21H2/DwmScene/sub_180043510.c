/*
 * XREFs of sub_180043510 @ 0x180043510
 * Callers:
 *     sub_1800414A0 @ 0x1800414A0 (sub_1800414A0.c)
 * Callees:
 *     sub_180018EB0 @ 0x180018EB0 (sub_180018EB0.c)
 *     sub_1800407C8 @ 0x1800407C8 (sub_1800407C8.c)
 */

__int64 __fastcall sub_180043510(__int64 a1)
{
  unsigned int *v1; // r9
  __int128 v2; // xmm3
  __m128 v3; // xmm1
  __m128 *v4; // rax
  __m128 *v5; // rax
  __m128 v6; // xmm1
  __m128 v7; // xmm2
  __m128 v8; // xmm3
  __m128 v9; // xmm0
  __m128 *v10; // r9
  __int64 result; // rax
  _BYTE v12[64]; // [rsp+28h] [rbp-E0h] BYREF
  __m128 v13[4]; // [rsp+68h] [rbp-A0h] BYREF
  __m128 v14[4]; // [rsp+A8h] [rbp-60h] BYREF
  __m128 v15[4]; // [rsp+E8h] [rbp-20h] BYREF
  __m128 v16[3]; // [rsp+128h] [rbp+20h] BYREF

  v13[3] = _mm_movelh_ps(
             (__m128)*(unsigned __int64 *)(a1 + 144),
             _mm_unpacklo_ps((__m128)*(unsigned int *)(a1 + 152), (__m128)0x3F800000u));
  v13[0] = (__m128)xmmword_180128360;
  v13[1] = (__m128)xmmword_1801282F0;
  v13[2] = (__m128)xmmword_180128390;
  sub_1800407C8((__int64)v14, (__m128 *)(a1 + 156));
  v2 = v1[43];
  *(_OWORD *)&v12[24] = 0LL;
  v3 = (__m128)v1[44];
  *(_OWORD *)&v12[4] = 0LL;
  *(_OWORD *)&v12[44] = 0LL;
  *(__m128 *)&v12[32] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0LL, (__m128)v1[45]), (__m128)xmmword_1801BD710);
  *(_OWORD *)v12 = v2;
  *(__m128 *)&v12[16] = _mm_unpacklo_ps((__m128)0LL, v3);
  *(_OWORD *)&v12[48] = xmmword_1801284B0;
  v4 = sub_180018EB0(v15, (__m128 *)v12, v14);
  v5 = sub_180018EB0(v16, v4, v13);
  v6 = v5[1];
  v7 = v5[2];
  v8 = v5[3];
  v9 = *v5;
  result = v10[13].m128_i64[0];
  v10[15] = v6;
  v10[22].m128_u64[0] = result;
  v10[14] = v9;
  v10[16] = v7;
  v10[17] = v8;
  return result;
}
