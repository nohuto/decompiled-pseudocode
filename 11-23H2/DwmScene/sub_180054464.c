/*
 * XREFs of sub_180054464 @ 0x180054464
 * Callers:
 *     sub_18008B58C @ 0x18008B58C (sub_18008B58C.c)
 *     sub_1800D492C @ 0x1800D492C (sub_1800D492C.c)
 * Callees:
 *     sub_1800291A0 @ 0x1800291A0 (sub_1800291A0.c)
 *     sub_1800543D0 @ 0x1800543D0 (sub_1800543D0.c)
 */

_QWORD *__fastcall sub_180054464(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800291A0((__int64)a1);
  *a1 = &Spectre::Engine::DeviceSampler::`vftable';
  sub_1800543D0(a1 + 12);
  a1[14] = 0LL;
  result = a1;
  a1[15] = 0LL;
  return result;
}
