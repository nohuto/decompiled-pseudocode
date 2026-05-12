/*
 * XREFs of sub_1C003F39C @ 0x1C003F39C
 * Callers:
 *     sub_1C00AC730 @ 0x1C00AC730 (sub_1C00AC730.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

_QWORD *__fastcall sub_1C003F39C(_QWORD *a1)
{
  _QWORD *result; // rax

  memset_0(a1, 0, 0x88uLL);
  result = a1 + 15;
  a1[16] = a1 + 15;
  a1[15] = a1 + 15;
  return result;
}
