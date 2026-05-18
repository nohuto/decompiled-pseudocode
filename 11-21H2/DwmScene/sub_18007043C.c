/*
 * XREFs of sub_18007043C @ 0x18007043C
 * Callers:
 *     sub_180071A08 @ 0x180071A08 (sub_180071A08.c)
 *     sub_180076154 @ 0x180076154 (sub_180076154.c)
 * Callees:
 *     _o_fmodf @ 0x18000C048 (_o_fmodf.c)
 *     sub_18001D734 @ 0x18001D734 (sub_18001D734.c)
 *     sub_18006CD4C @ 0x18006CD4C (sub_18006CD4C.c)
 */

__m128 *__fastcall sub_18007043C(__m128 *a1, float a2, float a3, float a4, float X)
{
  float v6; // xmm0_4
  float v7; // xmm12_4
  float v8; // xmm0_4
  float v9; // xmm7_4
  float v10; // xmm0_4
  float v11; // xmm10_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm0_4
  float v15; // xmm6_4
  __m128 *result; // rax

  v6 = fmaxf(a2, 0.0);
  v7 = fminf(v6, 360.0);
  v8 = fmaxf(a3, -100.0);
  v9 = fminf(v8, 100.0);
  v10 = fmaxf(a4, -100.0);
  v11 = fminf(v10, 100.0);
  v12 = fmaxf(X, -100.0);
  v13 = sub_18006CD4C(v9) * 0.5;
  v14 = fminf(v12, 100.0);
  v15 = sub_18006CD4C(v14);
  if ( v13 < 0.0 )
  {
    v7 = v7 + 180.0;
    v13 = v13 * -1.0;
    o_fmodf();
  }
  sub_18001D734((__int64)a1, v7, v13, (float)(v15 * 0.25) + 50.0);
  result = a1;
  *a1 = _mm_mul_ps((__m128)xmmword_1801BDA00, *a1);
  a1->m128_f32[3] = (float)(v11 * 0.0099999998) + 1.0;
  return result;
}
