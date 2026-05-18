/*
 * XREFs of sub_1800981EC @ 0x1800981EC
 * Callers:
 *     sub_180059898 @ 0x180059898 (sub_180059898.c)
 *     sub_1800D86F4 @ 0x1800D86F4 (sub_1800D86F4.c)
 * Callees:
 *     sub_18009A184 @ 0x18009A184 (sub_18009A184.c)
 */

_QWORD *__fastcall sub_1800981EC(_QWORD *a1)
{
  sub_18009A184(a1, 8LL, 6LL);
  *a1 = &Spectre::Engine::DeviceIndexBuffer::`vftable';
  return a1;
}
