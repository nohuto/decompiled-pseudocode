/*
 * XREFs of sub_180063D5C @ 0x180063D5C
 * Callers:
 *     sub_180062060 @ 0x180062060 (sub_180062060.c)
 *     sub_1800B7118 @ 0x1800B7118 (sub_1800B7118.c)
 * Callees:
 *     sub_180063D14 @ 0x180063D14 (sub_180063D14.c)
 */

_OWORD *__fastcall sub_180063D5C(__int64 a1, _OWORD *a2)
{
  _OWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD *result; // rax

  v3 = (_OWORD *)sub_180063D14(a1, 0, 2);
  v4 = v3[1];
  *a2 = *v3;
  v5 = v3[2];
  a2[1] = v4;
  v6 = v3[3];
  result = a2;
  a2[2] = v5;
  a2[3] = v6;
  return result;
}
