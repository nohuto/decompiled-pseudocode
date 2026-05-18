/*
 * XREFs of sub_18005BBFC @ 0x18005BBFC
 * Callers:
 *     sub_18005A490 @ 0x18005A490 (sub_18005A490.c)
 *     sub_1800A47E4 @ 0x1800A47E4 (sub_1800A47E4.c)
 * Callees:
 *     sub_18005BBB4 @ 0x18005BBB4 (sub_18005BBB4.c)
 */

_OWORD *__fastcall sub_18005BBFC(__int64 a1, _OWORD *a2)
{
  _OWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD *result; // rax

  v3 = (_OWORD *)sub_18005BBB4(a1, 0, 2);
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
