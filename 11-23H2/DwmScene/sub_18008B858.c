/*
 * XREFs of sub_18008B858 @ 0x18008B858
 * Callers:
 *     sub_180053E20 @ 0x180053E20 (sub_180053E20.c)
 * Callees:
 *     sub_18008B81C @ 0x18008B81C (sub_18008B81C.c)
 */

_QWORD *__fastcall sub_18008B858(_QWORD *a1)
{
  sub_18008B81C(a1);
  *a1 = &Spectre::Engine::RenderStateGeneric::`vftable';
  return a1;
}
