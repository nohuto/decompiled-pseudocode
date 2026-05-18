/*
 * XREFs of sub_180031D58 @ 0x180031D58
 * Callers:
 *     sub_180039234 @ 0x180039234 (sub_180039234.c)
 *     sub_180039EBC @ 0x180039EBC (sub_180039EBC.c)
 *     sub_1800716B0 @ 0x1800716B0 (sub_1800716B0.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_1800318A0 @ 0x1800318A0 (sub_1800318A0.c)
 */

_QWORD *__fastcall sub_180031D58(_QWORD *a1, char **a2)
{
  char *v3; // rsi
  char *v4; // rbp
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v3 = *a2;
  v4 = a2[1];
  if ( *a2 != v4 )
  {
    v5 = (v4 - v3) >> 4;
    if ( v5 > 0xFFFFFFFFFFFFFFFLL )
      sub_1800120D4();
    v6 = 2 * v5;
    v7 = (_QWORD *)sub_180011088(v6 * 8);
    *a1 = v7;
    a1[1] = v7;
    a1[2] = &v7[v6];
    a1[1] = sub_1800318A0(v3, v4, v7);
  }
  return a1;
}
