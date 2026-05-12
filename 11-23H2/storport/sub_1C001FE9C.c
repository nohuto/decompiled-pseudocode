/*
 * XREFs of sub_1C001FE9C @ 0x1C001FE9C
 * Callers:
 *     sub_1C001F7CC @ 0x1C001F7CC (sub_1C001F7CC.c)
 *     sub_1C0036528 @ 0x1C0036528 (sub_1C0036528.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C001FE9C(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned int v3; // esi
  __int64 v4; // r8
  __int64 v5; // rbp
  int v6; // r10d
  int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // r11
  char v10; // cl
  int v11; // eax
  int v13; // edi
  __int64 v14; // rbx
  __int64 v15; // r11

  v2 = *(unsigned int *)(a2 + 44);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = 56;
  *(_DWORD *)v4 = 56;
  *(_DWORD *)(v4 + 4) = 56;
  if ( *(_DWORD *)(v2 + a2) == 2 && *(_DWORD *)(v2 + a2 + 4) == 24 )
  {
    v7 = 0;
    *(_BYTE *)(v4 + 8) ^= (*(_BYTE *)(v4 + 8) ^ *(_BYTE *)(v2 + a2 + 8)) & 1;
    *(_BYTE *)(v4 + 9) = *(_BYTE *)(v2 + a2 + 9);
    *(_BYTE *)(v4 + 10) = *(_BYTE *)(v2 + a2 + 10);
    *(_BYTE *)(v4 + 11) = *(_BYTE *)(v2 + a2 + 11);
    *(_BYTE *)(v4 + 12) = *(_BYTE *)(v2 + a2 + 12);
    *(_DWORD *)(v4 + 16) = *(_DWORD *)(v2 + a2 + 16);
    *(_DWORD *)(v4 + 20) = *(_DWORD *)(v2 + a2 + 20);
    if ( !*(_BYTE *)(v2 + a2 + 9) )
      goto LABEL_10;
    v8 = v2 + a2 + 25;
    v9 = v4 + 28;
    do
    {
      if ( *(unsigned int *)(v5 + 8) < (unsigned __int64)(32LL * v7 + 56) )
      {
        v3 = -2147483643;
      }
      else
      {
        v10 = *(_BYTE *)(v9 + 5);
        *(_DWORD *)(v9 - 4) = 32;
        *(_DWORD *)v9 = 32;
        *(_BYTE *)(v9 + 4) = *(_BYTE *)(v8 - 1);
        *(_BYTE *)(v9 + 5) ^= (*(_BYTE *)v8 ^ v10) & 1;
        *(_OWORD *)(v9 + 12) = *(_OWORD *)(v8 + 7);
      }
      v11 = *(unsigned __int8 *)(v2 + a2 + 9);
      ++v7;
      v8 += 24LL;
      v9 += 32LL;
    }
    while ( v7 < v11 );
  }
  else
  {
    v13 = 0;
    *(_BYTE *)(v4 + 8) ^= (*(_BYTE *)(v4 + 8) ^ *(_BYTE *)(v2 + a2 + 8)) & 1;
    *(_BYTE *)(v4 + 9) = *(_BYTE *)(v2 + a2 + 9);
    *(_BYTE *)(v4 + 10) = *(_BYTE *)(v2 + a2 + 10);
    *(_BYTE *)(v4 + 11) = *(_BYTE *)(v2 + a2 + 11);
    *(_BYTE *)(v4 + 12) = 0;
    *(_DWORD *)(v4 + 16) = 4096;
    *(_DWORD *)(v4 + 20) = 0x10000;
    if ( !*(_BYTE *)(v2 + a2 + 9) )
      goto LABEL_10;
    v14 = v2 + a2 + 17;
    v15 = v4 + 28;
    do
    {
      if ( *(unsigned int *)(v5 + 8) < (unsigned __int64)(32LL * v13 + 56) )
      {
        v3 = -2147483643;
      }
      else
      {
        *(_DWORD *)(v15 - 4) = 32;
        *(_DWORD *)v15 = 32;
        *(_BYTE *)(v15 + 4) = *(_BYTE *)(v14 - 1);
        *(_BYTE *)(v15 + 5) ^= (*(_BYTE *)(v15 + 5) ^ *(_BYTE *)v14) & 1;
        *(_QWORD *)(v15 + 12) = *(_QWORD *)(v14 + 7);
      }
      v11 = *(unsigned __int8 *)(v2 + a2 + 9);
      ++v13;
      v14 += 16LL;
      v15 += 32LL;
    }
    while ( v13 < v11 );
  }
  if ( (_BYTE)v11 )
    v6 = 32 * (unsigned __int8)v11 + 24;
LABEL_10:
  *(_DWORD *)(v4 + 4) = v6;
  return v3;
}
