/*
 * XREFs of sub_180095164 @ 0x180095164
 * Callers:
 *     sub_180094540 @ 0x180094540 (sub_180094540.c)
 *     sub_1800945B8 @ 0x1800945B8 (sub_1800945B8.c)
 * Callees:
 *     sub_180094ACC @ 0x180094ACC (sub_180094ACC.c)
 */

_OWORD *__fastcall sub_180095164(__int128 *a1, void *a2, __int64 a3)
{
  __int128 v3; // xmm6
  _OWORD *result; // rax

  v3 = *a1;
  result = (_OWORD *)sub_180094ACC(a2, a3, a1);
  *result = v3;
  return result;
}
