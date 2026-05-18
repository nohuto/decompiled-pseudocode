/*
 * XREFs of sub_180081A84 @ 0x180081A84
 * Callers:
 *     sub_180081A24 @ 0x180081A24 (sub_180081A24.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_180017028 @ 0x180017028 (sub_180017028.c)
 *     sub_18001F54C @ 0x18001F54C (sub_18001F54C.c)
 *     sub_1800815E0 @ 0x1800815E0 (sub_1800815E0.c)
 *     sub_180081CA4 @ 0x180081CA4 (sub_180081CA4.c)
 */

__int64 __fastcall sub_180081A84(void **a1, unsigned __int64 a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  char *v7; // rbx

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    sub_180011B80();
  v4 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  v5 = sub_18001F54C(a1, a2);
  v6 = sub_180017028(v5);
  v7 = (char *)sub_18001090C(v6);
  sub_180081CA4(&v7[4 * v4], a2 - v4);
  sub_1800815E0(*a1, (__int64)a1[1], v7);
  return sub_180083954(a1, v7, a2, v5);
}
