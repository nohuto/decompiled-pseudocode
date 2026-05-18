/*
 * XREFs of sub_1800919F4 @ 0x1800919F4
 * Callers:
 *     sub_180093530 @ 0x180093530 (sub_180093530.c)
 * Callees:
 *     <none>
 */

__m128 __fastcall sub_1800919F4(float a1, float a2, double a3)
{
  __m128d v3; // xmm3

  v3 = 0LL;
  v3.m128d_f64[0] = (float)(a2 - a1) * a3 + a1;
  return _mm_cvtpd_ps(v3);
}
