/*
 * XREFs of sub_18006F15C @ 0x18006F15C
 * Callers:
 *     sub_18008C560 @ 0x18008C560 (sub_18008C560.c)
 *     sub_1800D5958 @ 0x1800D5958 (sub_1800D5958.c)
 * Callees:
 *     sub_180029178 @ 0x180029178 (sub_180029178.c)
 */

_QWORD *__fastcall sub_18006F15C(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180029178(a1);
  *a1 = &Spectre::Engine::DeviceDepthBuffer::`vftable';
  result = a1;
  a1[12] = 0LL;
  a1[13] = 0LL;
  return result;
}
