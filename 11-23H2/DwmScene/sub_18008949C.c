/*
 * XREFs of sub_18008949C @ 0x18008949C
 * Callers:
 *     sub_180052904 @ 0x180052904 (sub_180052904.c)
 *     sub_1800C446C @ 0x1800C446C (sub_1800C446C.c)
 * Callees:
 *     sub_18008B404 @ 0x18008B404 (sub_18008B404.c)
 */

_QWORD *__fastcall sub_18008949C(_QWORD *a1)
{
  sub_18008B404(a1, 11LL, 5LL);
  *a1 = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  return a1;
}
