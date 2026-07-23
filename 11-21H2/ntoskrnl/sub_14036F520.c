/*
 * XREFs of sub_14036F520 @ 0x14036F520
 * Callers:
 *     sub_14036F04C @ 0x14036F04C (sub_14036F04C.c)
 *     sub_1403700FC @ 0x1403700FC (sub_1403700FC.c)
 * Callees:
 *     sub_14022FB20 @ 0x14022FB20 (sub_14022FB20.c)
 *     sub_1403507F0 @ 0x1403507F0 (sub_1403507F0.c)
 *     sub_140362B58 @ 0x140362B58 (sub_140362B58.c)
 *     sub_140365700 @ 0x140365700 (sub_140365700.c)
 *     sub_140371398 @ 0x140371398 (sub_140371398.c)
 */

__int64 __fastcall sub_14036F520(unsigned __int64 a1, int a2, unsigned __int64 a3, __int128 *a4, int a5)
{
  __int128 **v8; // rax
  __int128 **v9; // rsi
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // r10
  unsigned __int64 v13; // rbp
  int v14; // r9d
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF

  v18 = *a4;
  v8 = (__int128 **)sub_140371398(&v18);
  v9 = v8;
  if ( (_WORD)a1 )
  {
    v10 = 0;
  }
  else
  {
    v18 = **v8;
    v16 = sub_140362B58(&v18);
    v17 = sub_14022FB20((__int64)(v16 + 2), 2 * ((a1 - v16[1]) >> 20));
    if ( v17 )
      v10 = v17 - 1;
    else
      v10 = 2;
  }
  v11 = sub_140365700((__int64)&(*v9)[12 * v10 + 20], a1);
  v13 = a3 >> 12;
  v14 = -(int)v13;
  if ( a5 )
    v14 = v13;
  return sub_1403507F0(v12 + 320, v11, (unsigned int)(a2 - a1) >> 12, v14, 0, 0LL);
}
