/*
 * XREFs of sub_180066B40 @ 0x180066B40
 * Callers:
 *     sub_180067EB0 @ 0x180067EB0 (sub_180067EB0.c)
 *     sub_18006BEB0 @ 0x18006BEB0 (sub_18006BEB0.c)
 * Callees:
 *     _o_fmodf @ 0x18000C038 (_o_fmodf.c)
 *     sub_18001112C @ 0x18001112C (sub_18001112C.c)
 *     sub_18001C240 @ 0x18001C240 (sub_18001C240.c)
 *     sub_180064B5C @ 0x180064B5C (sub_180064B5C.c)
 */

__m128 *__fastcall sub_180066B40(__m128 *a1, float a2, float a3, float a4, float a5)
{
  float v6; // xmm11_4
  float v7; // xmm6_4
  float v8; // xmm9_4
  float v9; // xmm12_4
  float v10; // xmm0_4
  float v11; // xmm6_4
  __m128 *result; // rax

  v6 = sub_18001112C(a2, 0.0, 360.0);
  v7 = sub_18001112C(a3, -100.0, 100.0);
  v8 = sub_18001112C(a4, -100.0, 100.0);
  v9 = sub_180064B5C(v7) * 0.5;
  v10 = sub_18001112C(a5, -100.0, 100.0);
  v11 = sub_180064B5C(v10);
  if ( v9 < 0.0 )
  {
    v6 = v6 + 180.0;
    v9 = v9 * -1.0;
    o_fmodf();
  }
  sub_18001C240((__int64)a1, v6, v9, (float)(v11 * 0.25) + 50.0);
  result = a1;
  *a1 = _mm_mul_ps((__m128)xmmword_18019BA80, *a1);
  a1->m128_f32[3] = (float)(v8 * 0.0099999998) + 1.0;
  return result;
}
