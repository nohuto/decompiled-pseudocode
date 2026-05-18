/*
 * XREFs of sub_1800406D4 @ 0x1800406D4
 * Callers:
 *     sub_1800417D8 @ 0x1800417D8 (sub_1800417D8.c)
 *     sub_180075D60 @ 0x180075D60 (sub_180075D60.c)
 *     sub_180076154 @ 0x180076154 (sub_180076154.c)
 * Callees:
 *     sub_180043D84 @ 0x180043D84 (sub_180043D84.c)
 */

__m128 *__fastcall sub_1800406D4(__int64 a1, unsigned __int64 *a2)
{
  __m128 v2; // xmm8
  __m128 v3; // xmm2
  __m128 v4; // xmm1
  __m128 v5; // xmm2
  __m128 v6; // xmm6
  __m128 v7; // xmm7
  __m128 *result; // rax
  __m128 v9; // [rsp+20h] [rbp-58h] BYREF
  __m128 v10; // [rsp+30h] [rbp-48h] BYREF

  v2 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
  *(_QWORD *)a1 = 0LL;
  v3 = _mm_mul_ps(v2, v2);
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 1065353216;
  v4 = _mm_shuffle_ps(v3, v3, 153);
  v3.m128_f32[0] = (float)(v3.m128_f32[0] + v4.m128_f32[0]) + _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
  v5 = _mm_shuffle_ps(v3, v3, 0);
  v6 = _mm_sqrt_ps(v5);
  v7 = _mm_cmpneq_ps((__m128)xmmword_1801282E0, v5);
  result = (__m128 *)sub_180043D84(&v10, &v9);
  *result = _mm_mul_ps(
              _mm_or_ps(
                _mm_and_ps(
                  _mm_or_ps(
                    _mm_and_ps(_mm_and_ps(_mm_div_ps(v2, v6), _mm_cmpneq_ps(v6, (__m128)0LL)), v7),
                    _mm_andnot_ps(v7, (__m128)xmmword_180128330)),
                  (__m128)xmmword_1801283A0),
                (__m128)xmmword_1801284B0),
              _mm_or_ps(_mm_and_ps(v9, (__m128)xmmword_180128500), _mm_and_ps(v10, (__m128)xmmword_1801283A0)));
  return result;
}
