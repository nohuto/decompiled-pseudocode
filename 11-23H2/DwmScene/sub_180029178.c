/*
 * XREFs of sub_180029178 @ 0x180029178
 * Callers:
 *     sub_180027E48 @ 0x180027E48 (sub_180027E48.c)
 *     sub_18005526C @ 0x18005526C (sub_18005526C.c)
 *     sub_18006F15C @ 0x18006F15C (sub_18006F15C.c)
 *     sub_18008B404 @ 0x18008B404 (sub_18008B404.c)
 *     sub_18008B6F8 @ 0x18008B6F8 (sub_18008B6F8.c)
 * Callees:
 *     sub_1800291A0 @ 0x1800291A0 (sub_1800291A0.c)
 */

_QWORD *__fastcall sub_180029178(_QWORD *a1)
{
  sub_1800291A0();
  *a1 = &Spectre::Engine::DeviceBuffer::`vftable';
  return a1;
}
