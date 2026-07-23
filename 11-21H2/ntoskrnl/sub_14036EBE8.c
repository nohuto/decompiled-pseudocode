/*
 * XREFs of sub_14036EBE8 @ 0x14036EBE8
 * Callers:
 *     sub_14036DBE4 @ 0x14036DBE4 (sub_14036DBE4.c)
 *     sub_14036F620 @ 0x14036F620 (sub_14036F620.c)
 * Callees:
 *     sub_140363E50 @ 0x140363E50 (sub_140363E50.c)
 *     sub_14036E8E0 @ 0x14036E8E0 (sub_14036E8E0.c)
 *     sub_14036E98C @ 0x14036E98C (sub_14036E98C.c)
 *     sub_14036E9D4 @ 0x14036E9D4 (sub_14036E9D4.c)
 *     sub_14036EDA8 @ 0x14036EDA8 (sub_14036EDA8.c)
 *     sub_140370C00 @ 0x140370C00 (sub_140370C00.c)
 *     sub_140371C50 @ 0x140371C50 (sub_140371C50.c)
 *     sub_1405F3870 @ 0x1405F3870 (sub_1405F3870.c)
 */

__int64 __fastcall sub_14036EBE8(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  bool v2; // zf
  unsigned __int64 v4; // rcx
  char v5; // al
  int v6; // esi
  _QWORD *v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  __int128 v14; // xmm0
  __int128 v16; // [rsp+20h] [rbp-20h] BYREF
  __int128 v17; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp+28h] BYREF

  v18 = a1;
  v19 = 0LL;
  v1 = a1 + 72;
  v2 = (*(_BYTE *)(a1 + 80) & 1) == 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v2 && v4 )
    v4 ^= v1;
  v5 = *(_BYTE *)(v1 + 8);
  v6 = v5 & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v4 )
        {
          v7 = (_QWORD *)v4;
          if ( v6 )
            v4 ^= *(_QWORD *)v4;
          else
            v4 = *(_QWORD *)v4;
          *v7 = 0LL;
        }
        v8 = *(_QWORD *)(v4 + 8);
        if ( !v8 )
          break;
        v9 = v4;
        if ( v6 )
          v4 ^= v8;
        else
          v4 = *(_QWORD *)(v4 + 8);
        *(_QWORD *)(v9 + 8) = 0LL;
      }
      v10 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v6 && v10 )
        v10 ^= v4;
      sub_1405F3870(v4, a1);
      if ( !v10 )
        break;
      v4 = v10;
    }
    v5 = *(_BYTE *)(v1 + 8);
  }
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (v5 & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  v11 = v18;
  v12 = v18 + 736;
  while ( *(_QWORD *)v12 )
  {
    v13 = v12 ^ *(_QWORD *)v12;
    sub_14036E8E0(v11 + 704, v13);
    sub_14036E98C(v11 + 704, v13);
  }
  sub_14036E9D4(v18 + 896);
  sub_14036EDA8(v18 + 320);
  sub_14036EDA8(v18 + 512);
  v14 = *(_OWORD *)v18;
  v19 = *(_QWORD *)(v18 + 256) - v18;
  v2 = (*(_BYTE *)(v18 + 30) & 1) == 0;
  v16 = v14;
  v17 = *(_OWORD *)v18;
  if ( v2 )
    sub_140363E50(&v18, &v19, BYTE1(v16) < 2u ? 16809984 : 0x8000, &v17);
  else
    sub_140370C00(v18, &v17);
  return sub_140371C50(&v16, 0LL);
}
