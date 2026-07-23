/*
 * XREFs of sub_140798E18 @ 0x140798E18
 * Callers:
 *     sub_1406EF9E0 @ 0x1406EF9E0 (sub_1406EF9E0.c)
 *     sub_140798DA8 @ 0x140798DA8 (sub_140798DA8.c)
 *     sub_14079A870 @ 0x14079A870 (sub_14079A870.c)
 *     sub_14085E858 @ 0x14085E858 (sub_14085E858.c)
 * Callees:
 *     sub_1406E9D2C @ 0x1406E9D2C (sub_1406E9D2C.c)
 *     sub_140798F44 @ 0x140798F44 (sub_140798F44.c)
 */

__int64 __fastcall sub_140798E18(__int64 a1, __int64 a2)
{
  int v2; // eax
  _QWORD *v5; // rbx
  _QWORD *v6; // r12
  _QWORD *v7; // r14
  __int16 v8; // r15
  _QWORD *v9; // rsi
  int v10; // eax
  unsigned __int8 v11; // cl
  char v12; // dl
  __int16 v14; // ax
  bool v15; // zf
  char v16; // [rsp+60h] [rbp+8h]
  char v17; // [rsp+70h] [rbp+18h]

  v2 = *(_DWORD *)(a1 + 448);
  v16 = 0;
  v17 = 0;
  v5 = 0LL;
  if ( v2 )
  {
    if ( v2 == 3 )
    {
      v14 = 8;
    }
    else
    {
      v15 = v2 == 2;
      v14 = 4;
      if ( !v15 )
        v14 = 2;
    }
    *(_WORD *)(a2 + 52) |= v14;
    v17 = 1;
  }
  v6 = (_QWORD *)(a1 + 328);
  v7 = *(_QWORD **)(a1 + 328);
  if ( v7 == (_QWORD *)(a1 + 328) )
    return 3221225473LL;
  do
  {
    v8 = *(_WORD *)(a2 + 52);
    v9 = v7;
    v7 = (_QWORD *)*v7;
    if ( (*((_BYTE *)v9 + 90) & 2) != 0 )
      *(_WORD *)(a2 + 52) = v8 | 4;
    v10 = sub_140798F44(a1, v9, a2);
    *(_WORD *)(a2 + 52) = v8;
    if ( v10 < 0 )
    {
      if ( v10 == -1073741764 )
      {
        v9[4] = v5;
        v5 = v9;
      }
      else
      {
LABEL_18:
        sub_1406E9D2C(a1, v9);
      }
      v12 = v16;
      continue;
    }
    v11 = *((_BYTE *)v9 + 90);
    if ( (v11 & 2) != 0 )
    {
      v11 &= ~2u;
      *((_BYTE *)v9 + 90) = v11;
      v8 = *(_WORD *)(a2 + 52);
    }
    v12 = 1;
    v16 = 1;
    if ( (v11 & ((v8 & 1) != 0)) != 0 )
      goto LABEL_18;
  }
  while ( v7 != v6 );
  if ( !v12 )
    return 3221225473LL;
  if ( v17 )
    *(_DWORD *)(a1 + 448) = 0;
  if ( *(_WORD *)(a2 + 54) != 6 )
    ++*(_DWORD *)(a1 + 256);
  while ( v5 )
  {
    *((_BYTE *)v5 + 90) |= 2u;
    ++*((_DWORD *)v5 + 20);
    v5 = (_QWORD *)v5[4];
  }
  return 0LL;
}
