/*
 * XREFs of sub_18008BD24 @ 0x18008BD24
 * Callers:
 *     sub_1800529A8 @ 0x1800529A8 (sub_1800529A8.c)
 *     sub_1800D3A40 @ 0x1800D3A40 (sub_1800D3A40.c)
 * Callees:
 *     sub_1800291A0 @ 0x1800291A0 (sub_1800291A0.c)
 *     sub_18008BDE8 @ 0x18008BDE8 (sub_18008BDE8.c)
 */

_QWORD *__fastcall sub_18008BD24(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800291A0((__int64)a1);
  sub_18008BDE8(a1 + 12);
  result = a1;
  *a1 = &Spectre::Engine::DeviceVertexLayout::`vftable';
  return result;
}
