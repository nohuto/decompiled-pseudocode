/*
 * XREFs of sub_1800A5308 @ 0x1800A5308
 * Callers:
 *     sub_1800A4630 @ 0x1800A4630 (sub_1800A4630.c)
 *     sub_1800A46AC @ 0x1800A46AC (sub_1800A46AC.c)
 * Callees:
 *     sub_1800A4C1C @ 0x1800A4C1C (sub_1800A4C1C.c)
 */

void *__fastcall sub_1800A5308(_OWORD *a1, __int128 *a2, __int64 a3)
{
  __int128 v4; // xmm6
  void *result; // rax

  v4 = *a2;
  result = sub_1800A4C1C(a1, (__int64)a2, a3);
  *a1 = v4;
  return result;
}
