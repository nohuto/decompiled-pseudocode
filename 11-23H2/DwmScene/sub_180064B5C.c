/*
 * XREFs of sub_180064B5C @ 0x180064B5C
 * Callers:
 *     sub_180066B40 @ 0x180066B40 (sub_180066B40.c)
 * Callees:
 *     _o_powf @ 0x18000C05C (_o_powf.c)
 */

float __fastcall sub_180064B5C(float a1)
{
  float v1; // xmm6_4
  float v2; // xmm0_4

  v1 = a1 / 100.0;
  v2 = fabs(a1 / 100.0);
  o_powf();
  if ( v1 < 0.0 )
    v2 = v2 * -1.0;
  return v2 * 100.0;
}
