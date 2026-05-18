/*
 * XREFs of sub_180089B14 @ 0x180089B14
 * Callers:
 *     sub_180052860 @ 0x180052860 (sub_180052860.c)
 *     sub_1800C4514 @ 0x1800C4514 (sub_1800C4514.c)
 * Callees:
 *     sub_18008B404 @ 0x18008B404 (sub_18008B404.c)
 */

_QWORD *__fastcall sub_180089B14(_QWORD *a1)
{
  sub_18008B404(a1, 8LL, 6LL);
  *a1 = &Spectre::Engine::DeviceIndexBuffer::`vftable';
  return a1;
}
