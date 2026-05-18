/*
 * XREFs of sub_1800DA840 @ 0x1800DA840
 * Callers:
 *     sub_1800D9650 @ 0x1800D9650 (sub_1800D9650.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 *     sub_180012228 @ 0x180012228 (sub_180012228.c)
 */

__int64 __fastcall sub_1800DA840(char **a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  _QWORD *v6; // rbx

  v4 = (a1[1] - *a1) >> 4;
  v5 = sub_180010B48(a2);
  v6 = (_QWORD *)sub_18001090C(v5);
  sub_180012228(*a1, a1[1], v6);
  return sub_18001306C((__int64)a1, (__int64)v6, v4, a2);
}
