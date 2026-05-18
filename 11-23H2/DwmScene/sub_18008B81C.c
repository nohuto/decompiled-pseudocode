/*
 * XREFs of sub_18008B81C @ 0x18008B81C
 * Callers:
 *     sub_18008B858 @ 0x18008B858 (sub_18008B858.c)
 *     sub_1800D4C6C @ 0x1800D4C6C (sub_1800D4C6C.c)
 * Callees:
 *     sub_1800291A0 @ 0x1800291A0 (sub_1800291A0.c)
 */

_QWORD *__fastcall sub_18008B81C(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800291A0((__int64)a1);
  *a1 = &Spectre::Engine::DeviceRenderState::`vftable';
  result = a1;
  a1[12] = 0LL;
  a1[13] = 0LL;
  return result;
}
