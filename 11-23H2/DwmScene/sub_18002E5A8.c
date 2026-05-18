/*
 * XREFs of sub_18002E5A8 @ 0x18002E5A8
 * Callers:
 *     sub_180032D40 @ 0x180032D40 (sub_180032D40.c)
 *     sub_180033324 @ 0x180033324 (sub_180033324.c)
 *     sub_18003B728 @ 0x18003B728 (sub_18003B728.c)
 *     sub_18009D490 @ 0x18009D490 (sub_18009D490.c)
 *     sub_1800D9650 @ 0x1800D9650 (sub_1800D9650.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 *     sub_180012228 @ 0x180012228 (sub_180012228.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001306C @ 0x18001306C (sub_18001306C.c)
 */

_QWORD *__fastcall sub_18002E5A8(_QWORD *a1, char *a2, _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // r14
  _QWORD *v15; // rsi
  char *v16; // rdx
  _QWORD *v17; // r8
  char *v18; // rcx

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
  v13 = sub_18001090C(v12);
  v14 = (_QWORD *)(v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v15 = (_QWORD *)v13;
  sub_18001246C(v14, a3);
  v16 = (char *)a1[1];
  v17 = v15;
  v18 = (char *)*a1;
  if ( a2 != v16 )
  {
    sub_180012228(v18, a2, v15);
    v16 = (char *)a1[1];
    v17 = v14 + 2;
    v18 = a2;
  }
  sub_180012228(v18, v16, v17);
  sub_18001306C((__int64)a1, (__int64)v15, v9, v3);
  return v14;
}
