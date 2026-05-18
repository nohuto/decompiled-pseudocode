/*
 * XREFs of sub_1800D4C6C @ 0x1800D4C6C
 * Callers:
 *     sub_1800C8230 @ 0x1800C8230 (sub_1800C8230.c)
 * Callees:
 *     sub_18008B81C @ 0x18008B81C (sub_18008B81C.c)
 */

_QWORD *__fastcall sub_1800D4C6C(_QWORD *a1)
{
  sub_18008B81C(a1);
  *a1 = &Spectre::Engine::D3D11::RenderStateD3D11::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  return a1;
}
