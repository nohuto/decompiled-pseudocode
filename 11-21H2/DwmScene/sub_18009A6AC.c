/*
 * XREFs of sub_18009A6AC @ 0x18009A6AC
 * Callers:
 *     sub_1800598CC @ 0x1800598CC (sub_1800598CC.c)
 * Callees:
 *     sub_18002B268 @ 0x18002B268 (sub_18002B268.c)
 */

_QWORD *__fastcall sub_18009A6AC(_QWORD *a1)
{
  sub_18002B268((__int64)a1);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::RenderStateGeneric::`vftable';
  return a1;
}
