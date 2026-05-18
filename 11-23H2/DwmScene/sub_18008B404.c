/*
 * XREFs of sub_18008B404 @ 0x18008B404
 * Callers:
 *     sub_18008949C @ 0x18008949C (sub_18008949C.c)
 *     sub_180089B14 @ 0x180089B14 (sub_180089B14.c)
 * Callees:
 *     sub_180029178 @ 0x180029178 (sub_180029178.c)
 */

_QWORD *__fastcall sub_18008B404(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180029178(a1);
  *a1 = &Spectre::Engine::DeviceArrayBuffer::`vftable';
  result = a1;
  a1[12] = 0LL;
  return result;
}
