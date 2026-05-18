/*
 * XREFs of sub_180088E2C @ 0x180088E2C
 * Callers:
 *     sub_180089820 @ 0x180089820 (sub_180089820.c)
 *     sub_18008C900 @ 0x18008C900 (sub_18008C900.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_180088DEC @ 0x180088DEC (sub_180088DEC.c)
 */

char **__fastcall sub_180088E2C(char **a1, __int64 a2)
{
  __int64 v2; // rsi
  void *v3; // rbp
  __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rbx
  char *v8; // rax

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(void **)a2;
  v4 = v2 - *(_QWORD *)a2;
  *a1 = 0LL;
  v5 = v4 >> 3;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v5 )
  {
    if ( v5 > 0x1FFFFFFFFFFFFFFFLL )
      sub_180012170();
    v7 = 8 * v5;
    v8 = (char *)sub_180011088(v7);
    *a1 = v8;
    a1[1] = v8;
    a1[2] = &v8[v7];
    a1[1] = sub_180088DEC(v3, v2, v8);
  }
  return a1;
}
