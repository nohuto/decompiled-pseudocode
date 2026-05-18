/*
 * XREFs of sub_1800ADB00 @ 0x1800ADB00
 * Callers:
 *     <none>
 * Callees:
 *     _o_cosf @ 0x18000C018 (_o_cosf.c)
 */

float __fastcall sub_1800ADB00(float a1)
{
  o_cosf();
  return (float)((float)(a1 * 3.1415927) * 0.5) + 0.5;
}
