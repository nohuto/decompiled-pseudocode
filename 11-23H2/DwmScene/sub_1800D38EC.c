/*
 * XREFs of sub_1800D38EC @ 0x1800D38EC
 * Callers:
 *     sub_1800D41F0 @ 0x1800D41F0 (sub_1800D41F0.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001E9F4 @ 0x18001E9F4 (sub_18001E9F4.c)
 *     sub_1800D3A00 @ 0x1800D3A00 (sub_1800D3A00.c)
 *     sub_1800D4578 @ 0x1800D4578 (sub_1800D4578.c)
 */

_OWORD *__fastcall sub_1800D38EC(__int64 *a1, __int64 a2, _OWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  _OWORD *v15; // r14
  _OWORD *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx

  v3 = 0x7FFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 5;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 5;
  v11 = v10 >> 1;
  if ( v10 <= 0x7FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  v12 = sub_18001E9F4(v3);
  v13 = sub_18001090C(v12);
  v14 = v13;
  v15 = (_OWORD *)(v13 + (v4 & 0xFFFFFFFFFFFFFFE0uLL));
  v16 = (_OWORD *)v13;
  *v15 = *a3;
  v15[1] = a3[1];
  v17 = a1[1];
  v18 = *a1;
  if ( a2 != v17 )
  {
    sub_1800D3A00(v18, a2, v13);
    v17 = a1[1];
    v16 = v15 + 2;
    v18 = a2;
  }
  sub_1800D3A00(v18, v17, v16);
  sub_1800D4578(a1, v14, v9, v3);
  return v15;
}
