/*
 * XREFs of sub_14050A55C @ 0x14050A55C
 * Callers:
 *     HalMakeBeep @ 0x14050A490 (HalMakeBeep.c)
 *     sub_140518340 @ 0x140518340 (sub_140518340.c)
 *     sub_140518380 @ 0x140518380 (sub_140518380.c)
 *     sub_14052AB00 @ 0x14052AB00 (sub_14052AB00.c)
 * Callees:
 *     sub_14041B0A0 @ 0x14041B0A0 (sub_14041B0A0.c)
 */

unsigned __int8 __fastcall sub_14050A55C(unsigned __int16 a1, unsigned __int16 a2, __int16 a3)
{
  unsigned __int8 v3; // di^1
  unsigned __int8 result; // al

  v3 = HIBYTE(a3);
  __outbyte(a1, a3);
  sub_14041B0A0();
  result = v3;
  __outbyte(a2, v3);
  return result;
}
