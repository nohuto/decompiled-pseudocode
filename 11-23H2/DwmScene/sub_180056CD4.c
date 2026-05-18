/*
 * XREFs of sub_180056CD4 @ 0x180056CD4
 * Callers:
 *     sub_1800574F0 @ 0x1800574F0 (sub_1800574F0.c)
 *     sub_180067B80 @ 0x180067B80 (sub_180067B80.c)
 *     sub_18006E6E0 @ 0x18006E6E0 (sub_18006E6E0.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 *     sub_1800118B0 @ 0x1800118B0 (sub_1800118B0.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180030038 @ 0x180030038 (sub_180030038.c)
 *     sub_180037F9C @ 0x180037F9C (sub_180037F9C.c)
 */

_QWORD *__fastcall sub_180056CD4(char **a1, char *a2, _QWORD *a3)
{
  char *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rbp
  char *v13; // rdx
  _QWORD *v14; // r8
  char *v15; // rcx

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    sub_180011B80();
  v8 = v6 + 1;
  v9 = sub_1800118B0(a1, v6 + 1);
  v10 = sub_180010B48(v9);
  v11 = (_QWORD *)sub_18001090C(v10);
  v12 = (_QWORD *)((char *)v11 + ((a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL));
  sub_18001246C(v12, a3);
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  if ( a2 != v13 )
  {
    sub_180030038(v15, a2, v11);
    v13 = a1[1];
    v14 = v12 + 2;
    v15 = a2;
  }
  sub_180030038(v15, v13, v14);
  sub_180037F9C((__int64)a1, (__int64)v11, v8, v9);
  return v12;
}
