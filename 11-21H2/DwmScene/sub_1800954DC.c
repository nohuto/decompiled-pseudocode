/*
 * XREFs of sub_1800954DC @ 0x1800954DC
 * Callers:
 *     sub_18009587C @ 0x18009587C (sub_18009587C.c)
 *     sub_180095910 @ 0x180095910 (sub_180095910.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180029948 @ 0x180029948 (sub_180029948.c)
 */

__int64 __fastcall sub_1800954DC(_QWORD *a1, int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rsi
  char *v7; // r14
  char *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]

  v2 = a2;
  if ( a2 == 1 )
  {
    v4 = a1[22];
    a1[22] = 0LL;
    v13 = v4;
    v5 = a1[23];
    a1[23] = 0LL;
    v14 = v5;
    sub_180010910((__int64)&v13);
  }
  v6 = (_QWORD *)a1[60];
  v7 = (char *)v6[1];
  while ( !v7[25] )
  {
    sub_180029948((__int64)(a1 + 60), (__int64)(a1 + 60), *((char **)v7 + 2));
    v8 = v7;
    v7 = *(char **)v7;
    sub_180010910((__int64)(v8 + 40));
    sub_180010884(v8, 0x38uLL);
  }
  v6[1] = v6;
  v9 = 2 * (v2 + 24);
  *v6 = v6;
  v6[2] = v6;
  a1[61] = 0LL;
  v10 = a1[2 * v2 + 48];
  a1[v9] = 0LL;
  v13 = v10;
  v11 = a1[2 * v2 + 49];
  a1[v9 + 1] = 0LL;
  v14 = v11;
  return sub_180010910((__int64)&v13);
}
