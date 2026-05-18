/*
 * XREFs of sub_180070C2C @ 0x180070C2C
 * Callers:
 *     sub_180070EDC @ 0x180070EDC (sub_180070EDC.c)
 *     sub_1800958C0 @ 0x1800958C0 (sub_1800958C0.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180017058 @ 0x180017058 (sub_180017058.c)
 *     sub_180070D34 @ 0x180070D34 (sub_180070D34.c)
 *     sub_180070FAC @ 0x180070FAC (sub_180070FAC.c)
 */

_QWORD *__fastcall sub_180070C2C(__int64 *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  _QWORD *v14; // r8
  _QWORD *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  v12 = sub_180017058(v3);
  v13 = sub_18001090C(v12);
  v14 = (_QWORD *)v13;
  v15 = (_QWORD *)(v13 + 8 * v5);
  *v15 = *a3;
  v16 = a1[1];
  v17 = *a1;
  if ( a2 != v16 )
  {
    sub_180070D34(v17, a2, v13);
    v16 = a1[1];
    v14 = v15 + 1;
    v17 = a2;
  }
  sub_180070D34(v17, v16, v14);
  sub_180070FAC(a1, v13, v9, v3);
  return v15;
}
