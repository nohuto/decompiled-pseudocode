/*
 * XREFs of sub_18008C560 @ 0x18008C560
 * Callers:
 *     sub_180053CC0 @ 0x180053CC0 (sub_180053CC0.c)
 * Callees:
 *     sub_18006F15C @ 0x18006F15C (sub_18006F15C.c)
 */

_QWORD *__fastcall sub_18008C560(_QWORD *a1)
{
  sub_18006F15C(a1);
  *a1 = &Spectre::Engine::DepthBufferGeneric::`vftable';
  return a1;
}
