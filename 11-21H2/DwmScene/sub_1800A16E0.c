/*
 * XREFs of sub_1800A16E0 @ 0x1800A16E0
 * Callers:
 *     sub_1800A34D0 @ 0x1800A34D0 (sub_1800A34D0.c)
 * Callees:
 *     <none>
 */

__m128 __fastcall sub_1800A16E0(float a1, float a2, double a3)
{
  __m128d v3; // xmm3

  v3 = 0LL;
  v3.m128d_f64[0] = (float)(a2 - a1) * a3 + a1;
  return _mm_cvtpd_ps(v3);
}
