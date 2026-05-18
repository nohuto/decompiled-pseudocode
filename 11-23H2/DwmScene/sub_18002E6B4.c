/*
 * XREFs of sub_18002E6B4 @ 0x18002E6B4
 * Callers:
 *     sub_180035B90 @ 0x180035B90 (sub_180035B90.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 *     sub_180010C1C @ 0x180010C1C (sub_180010C1C.c)
 *     sub_1800118B0 @ 0x1800118B0 (sub_1800118B0.c)
 *     sub_1800118EC @ 0x1800118EC (sub_1800118EC.c)
 *     sub_18002B418 @ 0x18002B418 (sub_18002B418.c)
 */

_QWORD *__fastcall sub_18002E6B4(char **a1, char *a2, _QWORD *a3)
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
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = sub_1800118B0(a1, v6 + 1);
  v10 = sub_180010B48(v9);
  v11 = (_QWORD *)sub_18001090C(v10);
  v12 = (_QWORD *)((char *)v11 + ((a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL));
  sub_18002B418(v12, a3);
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  if ( a2 != v13 )
  {
    sub_180010C1C(v15, a2, v11);
    v13 = a1[1];
    v14 = v12 + 2;
    v15 = a2;
  }
  sub_180010C1C(v15, v13, v14);
  sub_1800118EC((__int64)a1, (__int64)v11, v8, v9);
  return v12;
}
