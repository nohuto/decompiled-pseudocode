/*
 * XREFs of sub_18004A2A8 @ 0x18004A2A8
 * Callers:
 *     sub_18004A3CC @ 0x18004A3CC (sub_18004A3CC.c)
 *     sub_18004A498 @ 0x18004A498 (sub_18004A498.c)
 *     sub_18004A564 @ 0x18004A564 (sub_18004A564.c)
 *     sub_1800905A4 @ 0x1800905A4 (sub_1800905A4.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18004A254 @ 0x18004A254 (sub_18004A254.c)
 */

char **__fastcall sub_18004A2A8(char **a1, __int64 a2)
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
  v5 = v4 >> 2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v5 )
  {
    if ( v5 > 0x3FFFFFFFFFFFFFFFLL )
      sub_180012170();
    v7 = 4 * v5;
    v8 = (char *)sub_180011088(v7);
    *a1 = v8;
    a1[1] = v8;
    a1[2] = &v8[v7];
    a1[1] = sub_18004A254(v3, v2, v8);
  }
  return a1;
}
