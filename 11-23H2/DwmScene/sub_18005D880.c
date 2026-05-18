/*
 * XREFs of sub_18005D880 @ 0x18005D880
 * Callers:
 *     sub_18005A490 @ 0x18005A490 (sub_18005A490.c)
 *     sub_180080F70 @ 0x180080F70 (sub_180080F70.c)
 *     sub_18009B3C0 @ 0x18009B3C0 (sub_18009B3C0.c)
 *     sub_1800A47E4 @ 0x1800A47E4 (sub_1800A47E4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

void __fastcall sub_18005D880(__m128 *a1, __m128 *a2)
{
  __m128 v2; // xmm0
  __m128 v3; // xmm1
  __m128 v4; // xmm4
  __m128 v5; // xmm3
  __m128 v6; // xmm0
  __m128 v7; // xmm2

  v2 = a1[1];
  v3 = a1[3];
  v4 = _mm_shuffle_ps(*a1, v2, 238);
  v5 = _mm_shuffle_ps(*a1, v2, 68);
  v6 = _mm_shuffle_ps(a1[2], v3, 68);
  v7 = _mm_shuffle_ps(a1[2], v3, 238);
  *a2 = _mm_shuffle_ps(v5, v6, 136);
  a2[1] = _mm_shuffle_ps(v5, v6, 221);
  a2[2] = _mm_shuffle_ps(v4, v7, 136);
  a2[3] = _mm_shuffle_ps(v4, v7, 221);
}
