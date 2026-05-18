/*
 * XREFs of sub_1800506D4 @ 0x1800506D4
 * Callers:
 *     sub_1800508C0 @ 0x1800508C0 (sub_1800508C0.c)
 *     sub_1800532F0 @ 0x1800532F0 (sub_1800532F0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1800506D4(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __m128 v3; // xmm2
  __m128 v4; // xmm3
  __m128 v5; // xmm0
  __m128 v6; // xmm0

  result = 0LL;
  v3 = _mm_movelh_ps((__m128)*a1, (__m128)*((unsigned int *)a1 + 2));
  v4 = _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)a1 + 12), (__m128)*((unsigned int *)a1 + 5));
  do
  {
    v5 = (__m128)xmmword_180128400[result++];
    v6 = _mm_add_ps(_mm_mul_ps(v5, v4), v3);
    *(_QWORD *)a2 = v6.m128_u64[0];
    *(_DWORD *)(a2 + 8) = _mm_shuffle_ps(v6, v6, 170).m128_u32[0];
    a2 += 12LL;
  }
  while ( result < 8 );
  return result * 16;
}
