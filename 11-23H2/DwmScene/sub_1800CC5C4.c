/*
 * XREFs of sub_1800CC5C4 @ 0x1800CC5C4
 * Callers:
 *     sub_1800CD298 @ 0x1800CD298 (sub_1800CD298.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 *     sub_1800CC774 @ 0x1800CC774 (sub_1800CC774.c)
 *     sub_1800CF47C @ 0x1800CF47C (sub_1800CF47C.c)
 */

_OWORD *__fastcall sub_1800CC5C4(__int64 *a1, __int64 a2, _OWORD *a3)
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

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  v12 = sub_180010B48(v3);
  v13 = sub_18001090C(v12);
  v14 = v13;
  v15 = (_OWORD *)(v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v16 = (_OWORD *)v13;
  *v15 = *a3;
  v17 = a1[1];
  v18 = *a1;
  if ( a2 != v17 )
  {
    sub_1800CC774(v18, a2, v13);
    v17 = a1[1];
    v16 = v15 + 1;
    v18 = a2;
  }
  sub_1800CC774(v18, v17, v16);
  sub_1800CF47C(a1, v14, v9, v3);
  return v15;
}
