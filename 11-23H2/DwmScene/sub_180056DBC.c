/*
 * XREFs of sub_180056DBC @ 0x180056DBC
 * Callers:
 *     sub_180057760 @ 0x180057760 (sub_180057760.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 *     sub_180010C1C @ 0x180010C1C (sub_180010C1C.c)
 *     sub_1800118EC @ 0x1800118EC (sub_1800118EC.c)
 */

_QWORD *__fastcall sub_180056DBC(_QWORD *a1, char *a2, _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  _QWORD *v13; // rbp
  _QWORD *v14; // rsi
  _QWORD *v15; // r8
  char *v16; // rdx
  char *v17; // rcx

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = (unsigned __int64)&a2[-*a1];
  v6 = (__int64)(a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  v12 = sub_180010B48(v3);
  v13 = (_QWORD *)sub_18001090C(v12);
  v14 = (_QWORD *)((char *)v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v15 = v13;
  *v14 = 0LL;
  v14[1] = 0LL;
  *v14 = *a3;
  v14[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v16 = (char *)a1[1];
  v17 = (char *)*a1;
  if ( a2 != v16 )
  {
    sub_180010C1C(v17, a2, v13);
    v16 = (char *)a1[1];
    v15 = v14 + 2;
    v17 = a2;
  }
  sub_180010C1C(v17, v16, v15);
  sub_1800118EC((__int64)a1, (__int64)v13, v9, v3);
  return v14;
}
