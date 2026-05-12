/*
 * XREFs of sub_1C0059E34 @ 0x1C0059E34
 * Callers:
 *     sub_1C0051BF4 @ 0x1C0051BF4 (sub_1C0051BF4.c)
 *     sub_1C0053C6C @ 0x1C0053C6C (sub_1C0053C6C.c)
 * Callees:
 *     sub_1C005A398 @ 0x1C005A398 (sub_1C005A398.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 */

__int64 __fastcall sub_1C0059E34(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rsi
  int v7; // r14d
  __int64 v8; // rbx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // eax
  int v16; // ecx
  unsigned int v17; // ecx
  int v18; // eax
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  v4 = 0LL;
  v7 = sub_1C005A560(a1, a3);
  if ( v7 >= 0 )
  {
    if ( *(_DWORD *)a1 == 1431193940 )
      v8 = *(_QWORD *)(a1 + 3504);
    else
      v8 = *(_QWORD *)(a1 + 6016);
    if ( !*(_BYTE *)(v8 + 53) || (v9 = sub_1C005A398(a1, &P, a3), v4 = P, v7 = v9, v9 >= 0) )
    {
      *(_QWORD *)(a2 + 4) = 52LL;
      *(_WORD *)a2 = 1;
      if ( !*(_BYTE *)(v8 + 152) || (v10 = 1, !*(_BYTE *)(v8 + 153)) )
        v10 = 0;
      v11 = 2;
      v12 = v10 | *(_DWORD *)(a2 + 12) & 0xFFFFFFFE;
      *(_DWORD *)(a2 + 12) = v12;
      v13 = v12 ^ (v12 ^ (2 * *(unsigned __int8 *)(v8 + 148))) & 2;
      *(_DWORD *)(a2 + 12) = v13;
      *(_DWORD *)(a2 + 12) = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(4 * *(_BYTE *)(v8 + 97))) & 4;
      v14 = *(_DWORD *)(a2 + 16) ^ (*(_DWORD *)(a2 + 16) ^ *(unsigned __int8 *)(v8 + 149)) & 1;
      *(_DWORD *)(a2 + 16) = v14;
      if ( !*(_BYTE *)(v8 + 149) && *(_BYTE *)(v8 + 150) )
        v11 = 0;
      v15 = v11 | v14 & 0xFFFFFFFD;
      *(_DWORD *)(a2 + 16) = v15;
      v16 = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(4 * *(_BYTE *)(v8 + 53))) & 4;
      *(_DWORD *)(a2 + 16) = v16;
      if ( *(_BYTE *)(v8 + 53) )
      {
        v16 |= 8u;
        *(_DWORD *)(a2 + 16) = v16;
        if ( *(_BYTE *)(v8 + 152) )
        {
          if ( *(_BYTE *)(v8 + 153) && *(_BYTE *)(v8 + 134) )
          {
            v16 &= ~8u;
            *(_DWORD *)(a2 + 16) = v16;
          }
        }
      }
      *(_DWORD *)(a2 + 16) = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(16 * *(_BYTE *)(v8 + 134))) & 0x10;
      if ( *(_BYTE *)(v8 + 53) )
      {
        v17 = 1;
        for ( *(_DWORD *)(a2 + 20) = *(_DWORD *)(v8 + 128) - 1; v17 < *(_DWORD *)(v8 + 128); ++v17 )
        {
          if ( !v4[20 * v17 + 18] && !*(_QWORD *)&v4[20 * v17 + 14] )
            ++*(_DWORD *)(a2 + 24);
        }
        *(_DWORD *)(a2 + 28) = *(_DWORD *)(v8 + 140) / (unsigned int)*(unsigned __int16 *)(v8 + 136);
        *(_DWORD *)(a2 + 32) = *(_DWORD *)(v8 + 72) - 1;
      }
      *(_DWORD *)(a2 + 36) = *(_DWORD *)(v8 + 100) * *(_DWORD *)(v8 + 104);
      v18 = *(_DWORD *)(v8 + 100) * *(_DWORD *)(v8 + 112);
      *(_DWORD *)(a2 + 44) = 0;
      *(_DWORD *)(a2 + 48) = 32;
      *(_DWORD *)(a2 + 40) = v18;
    }
    if ( v4 )
      ExFreePoolWithTag(v4, 0x43546152u);
  }
  return (unsigned int)v7;
}
