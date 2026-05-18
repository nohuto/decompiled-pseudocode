/*
 * XREFs of sub_18009519C @ 0x18009519C
 * Callers:
 *     sub_180094540 @ 0x180094540 (sub_180094540.c)
 *     sub_1800945B8 @ 0x1800945B8 (sub_1800945B8.c)
 * Callees:
 *     sub_180094AAC @ 0x180094AAC (sub_180094AAC.c)
 */

void *__fastcall sub_18009519C(_OWORD *a1, __int128 *a2, __int64 a3)
{
  __int128 v4; // xmm6
  void *result; // rax

  v4 = *a2;
  result = sub_180094AAC(a1, (__int64)a2, a3);
  *a1 = v4;
  return result;
}
