/*
 * XREFs of sub_14052AC24 @ 0x14052AC24
 * Callers:
 *     sub_14052AB00 @ 0x14052AB00 (sub_14052AB00.c)
 * Callees:
 *     sub_14041B0A0 @ 0x14041B0A0 (sub_14041B0A0.c)
 */

__int16 __fastcall sub_14052AC24(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned __int8 v3; // al
  __int16 v4; // di
  unsigned __int8 v5; // al

  v3 = __inbyte(a1);
  v4 = v3;
  sub_14041B0A0();
  v5 = __inbyte(a2);
  return v4 | (v5 << 8);
}
