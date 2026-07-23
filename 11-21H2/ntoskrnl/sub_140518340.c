/*
 * XREFs of sub_140518340 @ 0x140518340
 * Callers:
 *     <none>
 * Callees:
 *     sub_14041B0A0 @ 0x14041B0A0 (sub_14041B0A0.c)
 *     sub_14050A55C @ 0x14050A55C (sub_14050A55C.c)
 */

unsigned __int8 __fastcall sub_140518340(__int16 a1)
{
  unsigned __int8 v1; // al
  unsigned __int8 v2; // bl

  sub_14050A55C(0x74u, 0x75u, a1);
  sub_14041B0A0();
  v1 = __inbyte(0x76u);
  v2 = v1;
  sub_14041B0A0();
  return v2;
}
