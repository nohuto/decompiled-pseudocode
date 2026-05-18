/*
 * XREFs of sub_18006EA80 @ 0x18006EA80
 * Callers:
 *     sub_1800627F0 @ 0x1800627F0 (sub_1800627F0.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 *     sub_180030038 @ 0x180030038 (sub_180030038.c)
 */

__int64 __fastcall sub_18006EA80(char **a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rax
  _QWORD *v4; // rbx

  v2 = (a1[1] - *a1) >> 4;
  v3 = sub_180010B48(0x20uLL);
  v4 = (_QWORD *)sub_18001090C(v3);
  sub_180030038(*a1, a1[1], v4);
  return sub_180037F9C((__int64)a1, (__int64)v4, v2, 32LL);
}
