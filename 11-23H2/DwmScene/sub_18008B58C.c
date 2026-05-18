/*
 * XREFs of sub_18008B58C @ 0x18008B58C
 * Callers:
 *     sub_180053EC0 @ 0x180053EC0 (sub_180053EC0.c)
 * Callees:
 *     sub_180054464 @ 0x180054464 (sub_180054464.c)
 */

_QWORD *__fastcall sub_18008B58C(_QWORD *a1)
{
  sub_180054464(a1);
  *a1 = &Spectre::Engine::SamplerGeneric::`vftable';
  return a1;
}
