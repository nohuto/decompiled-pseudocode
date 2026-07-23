/*
 * XREFs of sub_14065B3DC @ 0x14065B3DC
 * Callers:
 *     sub_14065B6A0 @ 0x14065B6A0 (sub_14065B6A0.c)
 *     sub_140922984 @ 0x140922984 (sub_140922984.c)
 *     sub_140922B20 @ 0x140922B20 (sub_140922B20.c)
 * Callees:
 *     sub_14065C008 @ 0x14065C008 (sub_14065C008.c)
 *     sub_14069F1CC @ 0x14069F1CC (sub_14069F1CC.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1407164DC @ 0x1407164DC (sub_1407164DC.c)
 *     sub_140718244 @ 0x140718244 (sub_140718244.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14065B3DC(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r9
  __int16 v4; // dx
  __int64 v5; // r10
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // rax
  __int16 v9; // dx
  ULONG_PTR v10; // rbp
  int v11; // esi
  __int64 v12; // rax
  char v13; // cl
  unsigned __int16 v14; // dx
  unsigned __int16 v15; // ax
  __int64 v16; // rdx
  __int64 v17; // rax

  v2 = sub_14069F1CC(a2);
  v6 = sub_14069F1CC(v3);
  if ( *(_DWORD *)(v2 + 8) == -1 )
  {
    v7 = 0LL;
    if ( v4 >= 0 )
    {
      while ( 1 )
      {
        v8 = sub_14069F1CC(v5);
        if ( *(_DWORD *)(v8 + 8) != -1 )
          break;
        if ( (__int16)(v9 - 1) < 0 )
          goto LABEL_7;
      }
      v7 = v8;
    }
LABEL_7:
    v10 = *(_QWORD *)v6;
    v11 = sub_14065C008(v5, *(_QWORD *)v6, *(unsigned int *)(v6 + 8), 2LL);
    if ( v11 >= 0 )
    {
      v11 = sub_14071F300(v10, *(unsigned int *)(v6 + 8));
      if ( v11 >= 0 )
      {
        v11 = sub_140718244(v10);
        if ( v11 >= 0 )
        {
          v12 = *(_QWORD *)(v7 + 16);
          v13 = *(_BYTE *)(v12 + 2);
          v14 = *(_WORD *)(v12 + 72);
          v15 = 2 * v14;
          if ( (v13 & 0x20) == 0 )
            v15 = v14;
          v16 = *(_QWORD *)(v6 + 16);
          if ( (unsigned __int16)*(_DWORD *)(v16 + 52) < (unsigned int)v15 )
            *(_WORD *)(v16 + 52) = v15;
          *(_QWORD *)v2 = v10;
          *(_DWORD *)(v2 + 8) = -1;
          if ( (*(_BYTE *)(v10 + 140) & 1) != 0 )
            v17 = sub_1406BF400(v10, 0xFFFFFFFFuLL);
          else
            v17 = sub_1407C9820(v10);
          *(_QWORD *)(v2 + 16) = v17;
          return 0;
        }
      }
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v11;
}
