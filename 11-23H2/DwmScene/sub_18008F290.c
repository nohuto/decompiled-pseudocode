/*
 * XREFs of sub_18008F290 @ 0x18008F290
 * Callers:
 *     sub_18008F1BC @ 0x18008F1BC (sub_18008F1BC.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_180017028 @ 0x180017028 (sub_180017028.c)
 *     sub_18001EEF8 @ 0x18001EEF8 (sub_18001EEF8.c)
 *     sub_18001F54C @ 0x18001F54C (sub_18001F54C.c)
 *     sub_180054F8C @ 0x180054F8C (sub_180054F8C.c)
 */

__int64 __fastcall sub_18008F290(void **a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  char *v7; // rbx

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    sub_180011B80();
  v4 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  v5 = sub_18001F54C(a1, a2);
  v6 = sub_180017028(v5);
  v7 = (char *)sub_18001090C(v6);
  sub_180054F8C(&v7[4 * v4], (__int64)&v7[4 * v4 + 4 * (a2 - v4)]);
  sub_18001EEF8(*a1, (__int64)a1[1], v7);
  return sub_18001F5C4((__int64)a1, (__int64)v7, a2, v5);
}
