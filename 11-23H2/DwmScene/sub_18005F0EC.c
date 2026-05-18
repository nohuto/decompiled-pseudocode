/*
 * XREFs of sub_18005F0EC @ 0x18005F0EC
 * Callers:
 *     sub_180060458 @ 0x180060458 (sub_180060458.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 *     sub_1800118B0 @ 0x1800118B0 (sub_1800118B0.c)
 *     sub_180030038 @ 0x180030038 (sub_180030038.c)
 *     sub_180037F9C @ 0x180037F9C (sub_180037F9C.c)
 */

char *__fastcall sub_18005F0EC(char **a1, char *a2, _QWORD *a3)
{
  char *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r12
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // r8
  _QWORD *v13; // r14
  char *v14; // rdx
  char *v15; // rcx

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = sub_1800118B0(a1, v6 + 1);
  v10 = sub_180010B48(v9);
  v11 = (_QWORD *)sub_18001090C(v10);
  v12 = v11;
  v13 = (_QWORD *)((char *)v11 + ((a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL));
  *v13 = 0LL;
  v13[1] = 0LL;
  *v13 = *a3;
  v13[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 != v14 )
  {
    sub_180030038(v15, a2, v11);
    v14 = a1[1];
    v12 = v13 + 2;
    v15 = a2;
  }
  sub_180030038(v15, v14, v12);
  sub_180037F9C((__int64)a1, (__int64)v11, v8, v9);
  return (char *)v11 + ((a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL);
}
