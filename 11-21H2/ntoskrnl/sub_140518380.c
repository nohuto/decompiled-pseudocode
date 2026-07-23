/*
 * XREFs of sub_140518380 @ 0x140518380
 * Callers:
 *     <none>
 * Callees:
 *     sub_14041B0A0 @ 0x14041B0A0 (sub_14041B0A0.c)
 *     sub_14050A55C @ 0x14050A55C (sub_14050A55C.c)
 */

void __fastcall sub_140518380(__int16 a1, unsigned __int8 a2)
{
  sub_14050A55C(0x74u, 0x75u, a1);
  sub_14041B0A0();
  __outbyte(0x76u, a2);
  sub_14041B0A0();
}
