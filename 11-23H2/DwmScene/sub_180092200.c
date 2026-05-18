/*
 * XREFs of sub_180092200 @ 0x180092200
 * Callers:
 *     sub_180092CE4 @ 0x180092CE4 (sub_180092CE4.c)
 * Callees:
 *     _o_sqrtf @ 0x18000C074 (_o_sqrtf.c)
 *     _o_tanf @ 0x18000C080 (_o_tanf.c)
 *     sub_18005D90C @ 0x18005D90C (sub_18005D90C.c)
 */

__m128 __fastcall sub_180092200(__int64 a1, float a2)
{
  float v3; // xmm0_4
  float v4; // xmm7_4
  float v5; // xmm3_4
  __int128 v6; // xmm0
  float v7; // xmm7_4
  __int128 v8; // xmm6

  sub_18005D90C(a1);
  v3 = (float)(*(float *)(a1 + 328) * 0.017453292) * 0.5;
  o_tanf();
  v4 = v3;
  v5 = v3 * v3;
  v6 = 0x3F800000u;
  v7 = v4 / (float)(1.0 / *(float *)(a1 + 332));
  *(float *)&v6 = (float)(1.0 / v5) + 1.0;
  o_sqrtf();
  v8 = v6;
  o_sqrtf();
  *(float *)&v8 = fmaxf(*(float *)&v6 * a2, (float)((float)(1.0 / (float)(v7 * v7)) + 1.0) * a2);
  return (__m128)v8;
}
