/*
 * XREFs of sub_18008F18C @ 0x18008F18C
 * Callers:
 *     sub_180090D2C @ 0x180090D2C (sub_180090D2C.c)
 *     sub_1800A8F64 @ 0x1800A8F64 (sub_1800A8F64.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_18008EF7C @ 0x18008EF7C (sub_18008EF7C.c)
 */

char **__fastcall sub_18008F18C(char **a1, __int64 a2)
{
  void *v3; // rsi
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  char *v7; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v3 = *(void **)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 != v4 )
  {
    v5 = (v4 - (__int64)v3) >> 2;
    if ( v5 > 0x3FFFFFFFFFFFFFFFLL )
      sub_1800120D4();
    v6 = 4 * v5;
    v7 = (char *)sub_180011088(v6);
    *a1 = v7;
    a1[1] = v7;
    a1[2] = &v7[v6];
    a1[1] = sub_18008EF7C(v3, v4, v7);
  }
  return a1;
}
