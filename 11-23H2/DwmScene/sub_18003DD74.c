/*
 * XREFs of sub_18003DD74 @ 0x18003DD74
 * Callers:
 *     sub_18003C3B4 @ 0x18003C3B4 (sub_18003C3B4.c)
 *     sub_18003DB00 @ 0x18003DB00 (sub_18003DB00.c)
 *     sub_18003DE74 @ 0x18003DE74 (sub_18003DE74.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18003DD74(__int64 a1, unsigned __int64 *a2, __m128 *a3)
{
  __int64 result; // rax
  __m128 v4; // xmm3
  __m128 v5; // xmm4
  __m128 v6; // xmm4

  result = a1;
  v4 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
  v5 = _mm_add_ps(
         _mm_add_ps(
           _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 170), a3[2]), a3[3]),
           _mm_mul_ps(_mm_shuffle_ps(v4, v4, 85), a3[1])),
         _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), *a3));
  v6 = _mm_div_ps(v5, _mm_shuffle_ps(v5, v5, 255));
  *(_QWORD *)a1 = v6.m128_u64[0];
  *(_DWORD *)(a1 + 8) = _mm_shuffle_ps(v6, v6, 170).m128_u32[0];
  return result;
}
