/*
 * XREFs of sub_1403AFE88 @ 0x1403AFE88
 * Callers:
 *     sub_1403AFA58 @ 0x1403AFA58 (sub_1403AFA58.c)
 * Callees:
 *     sub_1402FE1C4 @ 0x1402FE1C4 (sub_1402FE1C4.c)
 *     sub_1403B00D4 @ 0x1403B00D4 (sub_1403B00D4.c)
 *     sub_1403B03AC @ 0x1403B03AC (sub_1403B03AC.c)
 */

__int64 __fastcall sub_1403AFE88(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, char a5, __int64 a6, _DWORD *a7)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  int v11; // ebp
  int v12; // r9d
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-28h]

  v7 = a3 + 24;
  v19 = a3 + 24;
  v8 = a3;
  v11 = 0;
  *(_OWORD *)a6 = 0LL;
  v12 = *(_DWORD *)(a3 + 16);
  LOBYTE(a3) = a5;
  v13 = sub_1403B00D4(a1, a2, a3, v12, v19);
  if ( v13 != 2 || (v11 = sub_1403B03AC(a1, a2, v8), v11 >= 0) )
  {
    v14 = *(unsigned __int16 *)(v7 + 8);
    *(_WORD *)(a6 + 8) = v14;
    if ( v13 )
    {
      v15 = *(_QWORD *)v7 & qword_140C2AB08[v14];
      *(_QWORD *)a6 = v15;
      if ( v15 )
        v7 = a6;
      v16 = dword_140D0E5E0[(unsigned int)sub_1402FE1C4((__int128 *)v7)];
      *(_DWORD *)(a6 + 10) = 0;
      *(_WORD *)(a6 + 14) = 0;
      *(_QWORD *)a6 = 1LL << (v16 & 0x3F);
      *(_WORD *)(a6 + 8) = v16 >> 6;
      goto LABEL_7;
    }
    v18 = *(_QWORD *)v7;
    *(_QWORD *)a6 = *(_QWORD *)v7;
    if ( LOWORD(dword_140C2AC40[0]) <= (unsigned __int16)v14 )
    {
      if ( HIWORD(dword_140C2AC40[0]) <= (unsigned __int16)v14 )
      {
LABEL_7:
        *a7 = v13;
        return (unsigned int)v11;
      }
      LOWORD(dword_140C2AC40[0]) = v14 + 1;
    }
    qword_140C2AC48[v14] |= v18;
    goto LABEL_7;
  }
  return (unsigned int)v11;
}
