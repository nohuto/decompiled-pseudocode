/*
 * XREFs of sub_18006CD4C @ 0x18006CD4C
 * Callers:
 *     sub_18007043C @ 0x18007043C (sub_18007043C.c)
 * Callees:
 *     _o_powf @ 0x18000C06C (_o_powf.c)
 */

float __fastcall sub_18006CD4C(float a1)
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
