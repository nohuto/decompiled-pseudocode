/*
 * XREFs of sub_180058B2C @ 0x180058B2C
 * Callers:
 *     sub_180059E2C @ 0x180059E2C (sub_180059E2C.c)
 *     sub_1800DFA94 @ 0x1800DFA94 (sub_1800DFA94.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001E9F4 @ 0x18001E9F4 (sub_18001E9F4.c)
 *     sub_18001EF38 @ 0x18001EF38 (sub_18001EF38.c)
 *     sub_18001F588 @ 0x18001F588 (sub_18001F588.c)
 *     sub_18001F62C @ 0x18001F62C (sub_18001F62C.c)
 */

_QWORD *__fastcall sub_180058B2C(char **a1, char *a2, __int64 a3)
{
  char *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  _QWORD *v12; // rbp
  char *v13; // rdx
  __int64 v14; // r8
  char *v15; // rcx

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 5;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    sub_180011B80();
  v8 = v6 + 1;
  v9 = sub_18001F588(a1, v6 + 1);
  v10 = sub_18001E9F4(v9);
  v11 = sub_18001090C(v10);
  v12 = (_QWORD *)(((a2 - v3) & 0xFFFFFFFFFFFFFFE0uLL) + v11);
  sub_180012440(v12, a3);
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  if ( a2 != v13 )
  {
    sub_18001EF38(v15, a2, v11);
    v13 = a1[1];
    v14 = (__int64)(v12 + 4);
    v15 = a2;
  }
  sub_18001EF38(v15, v13, v14);
  sub_18001F62C((__int64)a1, v11, v8, v9);
  return v12;
}
