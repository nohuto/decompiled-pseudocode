/*
 * XREFs of sub_18009AB04 @ 0x18009AB04
 * Callers:
 *     sub_180059950 @ 0x180059950 (sub_180059950.c)
 *     sub_1800EB380 @ 0x1800EB380 (sub_1800EB380.c)
 * Callees:
 *     sub_18002B268 @ 0x18002B268 (sub_18002B268.c)
 *     sub_18009ABF0 @ 0x18009ABF0 (sub_18009ABF0.c)
 */

_QWORD *__fastcall sub_18009AB04(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_18002B268((__int64)a1);
  sub_18009ABF0(a1 + 12);
  result = a1;
  *a1 = &Spectre::Engine::DeviceVertexLayout::`vftable';
  return result;
}
