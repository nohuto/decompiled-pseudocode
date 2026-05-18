/*
 * XREFs of sub_18009A1B4 @ 0x18009A1B4
 * Callers:
 *     sub_180097A30 @ 0x180097A30 (sub_180097A30.c)
 *     sub_180097B60 @ 0x180097B60 (sub_180097B60.c)
 *     sub_180097BE0 @ 0x180097BE0 (sub_180097BE0.c)
 *     sub_180097D60 @ 0x180097D60 (sub_180097D60.c)
 *     sub_180097DE0 @ 0x180097DE0 (sub_180097DE0.c)
 *     sub_180097F04 @ 0x180097F04 (sub_180097F04.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18009A1B4(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ArrayBufferDesc::`vftable';
  *a1 = &Spectre::Engine::ArrayBufferDesc::`vftable';
  return result;
}
