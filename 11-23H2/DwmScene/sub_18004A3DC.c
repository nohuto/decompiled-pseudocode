/*
 * XREFs of sub_18004A3DC @ 0x18004A3DC
 * Callers:
 *     sub_18004A530 @ 0x18004A530 (sub_18004A530.c)
 *     sub_18004C8D0 @ 0x18004C8D0 (sub_18004C8D0.c)
 *     sub_18008E410 @ 0x18008E410 (sub_18008E410.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18004A3DC(unsigned __int64 *a1, __int64 a2)
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
    v5 = _mm_mul_ps(v4, (__m128)xmmword_180106460[result++]);
    v6 = _mm_add_ps(v5, v3);
    *(_QWORD *)a2 = v6.m128_u64[0];
    *(_DWORD *)(a2 + 8) = _mm_shuffle_ps(v6, v6, 170).m128_u32[0];
    a2 += 12LL;
  }
  while ( result < 8 );
  return result * 16;
}
