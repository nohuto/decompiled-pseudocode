/*
 * XREFs of sub_18009CA50 @ 0x18009CA50
 * Callers:
 *     <none>
 * Callees:
 *     _o_cosf @ 0x18000C008 (_o_cosf.c)
 */

float __fastcall sub_18009CA50(float a1)
{
  o_cosf();
  return (float)((float)(a1 * 3.1415927) * 0.5) + 0.5;
}
