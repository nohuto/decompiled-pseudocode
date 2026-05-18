/*
 * XREFs of sub_180013280 @ 0x180013280
 * Callers:
 *     sub_180011F58 @ 0x180011F58 (sub_180011F58.c)
 *     sub_18007C874 @ 0x18007C874 (sub_18007C874.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 *     sub_180012228 @ 0x180012228 (sub_180012228.c)
 */

__int64 __fastcall sub_180013280(char **a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rax
  _QWORD *v4; // rbx

  v2 = (a1[1] - *a1) >> 4;
  v3 = sub_180010B48(0x20uLL);
  v4 = (_QWORD *)sub_18001090C(v3);
  sub_180012228(*a1, a1[1], v4);
  return sub_18001306C((__int64)a1, (__int64)v4, v2, 32LL);
}
