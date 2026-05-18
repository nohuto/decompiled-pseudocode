/*
 * XREFs of sub_18008B6BC @ 0x18008B6BC
 * Callers:
 *     sub_180053D40 @ 0x180053D40 (sub_180053D40.c)
 * Callees:
 *     sub_18008B6F8 @ 0x18008B6F8 (sub_18008B6F8.c)
 */

_QWORD *__fastcall sub_18008B6BC(_QWORD *a1)
{
  sub_18008B6F8();
  *a1 = &Spectre::Engine::ConstantBufferGeneric::`vftable';
  a1[15] = 0LL;
  a1[16] = 0LL;
  a1[17] = 0LL;
  return a1;
}
