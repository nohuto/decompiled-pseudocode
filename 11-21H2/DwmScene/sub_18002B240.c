/*
 * XREFs of sub_18002B240 @ 0x18002B240
 * Callers:
 *     sub_180029AD8 @ 0x180029AD8 (sub_180029AD8.c)
 *     sub_18005C83C @ 0x18005C83C (sub_18005C83C.c)
 *     sub_18007A010 @ 0x18007A010 (sub_18007A010.c)
 *     sub_18009A184 @ 0x18009A184 (sub_18009A184.c)
 *     sub_18009A54C @ 0x18009A54C (sub_18009A54C.c)
 *     sub_1800EF880 @ 0x1800EF880 (sub_1800EF880.c)
 * Callees:
 *     sub_18002B268 @ 0x18002B268 (sub_18002B268.c)
 */

_QWORD *__fastcall sub_18002B240(_QWORD *a1)
{
  sub_18002B268();
  *a1 = &Spectre::Engine::DeviceBuffer::`vftable';
  return a1;
}
