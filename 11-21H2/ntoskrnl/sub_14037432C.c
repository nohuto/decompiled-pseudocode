/*
 * XREFs of sub_14037432C @ 0x14037432C
 * Callers:
 *     sub_140374278 @ 0x140374278 (sub_140374278.c)
 * Callees:
 *     sub_140266B40 @ 0x140266B40 (sub_140266B40.c)
 *     sub_1403744D8 @ 0x1403744D8 (sub_1403744D8.c)
 *     sub_140596904 @ 0x140596904 (sub_140596904.c)
 */

__int64 __fastcall sub_14037432C(__int64 a1, char a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r11
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r9
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r8
  unsigned int v24; // r9d
  __int64 v25; // rax

  v4 = 0LL;
  v5 = *(_QWORD **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v6 = v5[2075];
  v7 = sub_140266B40(v5, 6u);
  v9 = *(_QWORD *)(a1 + 144);
  v10 = v7;
  v11 = *(_QWORD *)(v6 + 2400);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  if ( v9 <= v12 )
    return 0LL;
  v13 = *(_QWORD *)(v8 + 16720);
  v14 = v9 - v12;
  v15 = (_QWORD *)(a1 + 48);
  v16 = 0LL;
  v17 = 1LL;
  v18 = 15 * v14 / 0x64;
  do
  {
    v16 += *v15;
    if ( v16 >= v18 )
      break;
    v17 = (unsigned int)(v17 + 1);
    ++v15;
  }
  while ( (unsigned int)v17 < 8 );
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
  {
    v20 = 16 * v11;
    v21 = v14;
    v22 = v13 / 0xA;
    if ( v20 <= v13 / 0xA )
      v22 = v20;
    if ( v14 >= v13 )
      v21 = *(_QWORD *)(v8 + 16720);
    v11 = v22 * (100 * v21 / v13) / 0x64;
    v17 = v14 / 0xA;
    if ( v11 > v14 / 0xA )
      v11 = v14 / 0xA;
  }
  if ( v10 < v11 )
  {
    v23 = v11 - v10;
    v17 = 0LL;
    if ( v23 < 0x10 )
      v23 = 16LL;
    v24 = 7;
    while ( 1 )
    {
      v17 += *(_QWORD *)(a1 + 8LL * v24 + 40);
      if ( v17 >= v23 )
        break;
      if ( --v24 == 1 )
        goto LABEL_26;
    }
    v17 = v23;
LABEL_26:
    if ( v17 && ((*(_BYTE *)(a1 + 184) & 7) != 0 || v10 < *(_QWORD *)(v8 + 15944) >> 1) )
    {
      LOBYTE(v23) = a2;
      v25 = sub_1403744D8(a1, v17, v23, v24, 121);
      *(_QWORD *)(v6 + 2480) += v25;
      v4 = v25;
    }
  }
  if ( v16 < v18 || (*(_DWORD *)(a1 + 4) & 0x3FFF) == 0 )
  {
    LOBYTE(v17) = a2;
    sub_140596904(a1, v17);
  }
  return v4;
}
