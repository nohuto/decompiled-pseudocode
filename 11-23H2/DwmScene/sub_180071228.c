/*
 * XREFs of sub_180071228 @ 0x180071228
 * Callers:
 *     sub_180071170 @ 0x180071170 (sub_180071170.c)
 *     sub_180071B9C @ 0x180071B9C (sub_180071B9C.c)
 *     sub_18007218C @ 0x18007218C (sub_18007218C.c)
 *     sub_1800916DC @ 0x1800916DC (sub_1800916DC.c)
 *     sub_1800E0830 @ 0x1800E0830 (sub_1800E0830.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 *     sub_1800118B0 @ 0x1800118B0 (sub_1800118B0.c)
 *     sub_180012228 @ 0x180012228 (sub_180012228.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001306C @ 0x18001306C (sub_18001306C.c)
 */

_QWORD *__fastcall sub_180071228(char **a1, char *a2, _QWORD *a3)
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
  sub_18001246C(v12, a3);
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  if ( a2 != v13 )
  {
    sub_180012228(v15, a2, v11);
    v13 = a1[1];
    v14 = v12 + 2;
    v15 = a2;
  }
  sub_180012228(v15, v13, v14);
  sub_18001306C((__int64)a1, (__int64)v11, v8, v9);
  return v12;
}
