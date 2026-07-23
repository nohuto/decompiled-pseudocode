/*
 * XREFs of sub_14085634C @ 0x14085634C
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_14025E698 @ 0x14025E698 (sub_14025E698.c)
 *     sub_1402929F0 @ 0x1402929F0 (sub_1402929F0.c)
 *     sub_140292B8C @ 0x140292B8C (sub_140292B8C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14085634C(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // r14
  _QWORD *v6; // rbx
  unsigned int v7; // r15d
  unsigned int v8; // ecx
  _DWORD *v9; // r8
  unsigned int v10; // edx
  __int64 v11; // r9
  unsigned int v12; // r10d
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r8
  int v15; // r10d
  __int64 v16; // r11
  __int64 v17; // r13
  int v18; // r8d
  char v19; // dl
  __int64 v20; // r8
  char v21; // cl
  char v23; // dl
  __int64 v24; // [rsp+40h] [rbp-58h]

  v5 = a1;
  if ( a4 )
  {
    v6 = (_QWORD *)(a4 + 2376);
    if ( (*(_DWORD *)(a4 + 2172) & 0x80u) != 0 )
      v6 = (_QWORD *)*v6;
  }
  else
  {
    v6 = 0LL;
  }
  do
  {
    v24 = sub_140292B8C(&qword_140D06A00);
    v7 = dword_140D06D48;
    v8 = 32 * dword_140D06D48;
    *v9 = 32 * dword_140D06D48;
    if ( v10 < v8 )
      return 3221225507LL;
    memset(v5, 0, v8);
    LODWORD(v11) = 0;
    v12 = 0;
    v13 = qword_140D08390[0];
    while ( v13 )
    {
      _BitScanForward64(&v14, v13);
      v13 &= ~(1LL << v14);
      v17 = sub_14025E698(v11, v14);
      *(_DWORD *)v16 = 32;
      *(_DWORD *)(v16 + 4) = 0;
      *(_DWORD *)(v16 + 8) = v18 | ((_DWORD)v11 << 16) | 0x100;
      *(_WORD *)(v16 + 12) = v11;
      *(_BYTE *)(v16 + 14) = *(_BYTE *)(v17 + 1);
      *(_BYTE *)(v16 + 15) = *(_BYTE *)(v17 + 2);
      *(_BYTE *)(v16 + 16) = *(_BYTE *)(v17 + 3);
      *(_BYTE *)(v16 + 17) = *(_BYTE *)(v17 + 4);
      *(_BYTE *)(v16 + 18) = *(_BYTE *)(v17 + 5);
      *(_BYTE *)(v16 + 20) = *(_BYTE *)(v17 + 6);
      v19 = 0;
      v20 = 1LL << v18;
      v21 = 0;
      if ( (qword_140D07D30[v11] & v20) == 0 )
      {
        v19 = 1;
        *(_BYTE *)(v16 + 19) |= 1u;
        v21 = 1;
      }
      if ( (qword_140D08090[2 * (unsigned int)v11] & v20) != 0 )
      {
        if ( !a4 || (*(_DWORD *)(a4 + 1120) & 0x8000000) == 0 )
          goto LABEL_10;
        v23 = v21;
      }
      else
      {
        v23 = v21;
        if ( v6 && (v20 & v6[v11]) != 0 )
          v23 = v21 | 4;
      }
      v19 = v23 | 0xA;
LABEL_10:
      *(_BYTE *)(v16 + 19) = v19;
      *(_QWORD *)(v16 + 24) = *(_QWORD *)(v17 + 8);
      v12 = v15 + 1;
      v5 = a1;
LABEL_11:
      if ( v12 >= v7 )
        goto LABEL_22;
    }
    LODWORD(v11) = v11 + 1;
    if ( (unsigned int)v11 < (unsigned __int16)word_140D05014 )
    {
      v13 = qword_140D08390[4 * (unsigned int)v11];
      goto LABEL_11;
    }
LABEL_22:
    ;
  }
  while ( !sub_1402929F0(&qword_140D06A00, v24) );
  return 0LL;
}
