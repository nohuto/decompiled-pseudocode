/*
 * XREFs of sub_1403B0DA4 @ 0x1403B0DA4
 * Callers:
 *     sub_1403B0A04 @ 0x1403B0A04 (sub_1403B0A04.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1403B0DA4(int a1)
{
  char v2; // bp
  char v3; // r9
  unsigned int v4; // r11d
  unsigned int v5; // edi
  char v6; // r14
  int i; // r10d
  char v8; // bl
  ULONG_PTR v9; // rdx
  int v10; // r8d
  unsigned int v11; // edx
  __int64 v12; // rcx
  int v13; // [rsp+30h] [rbp+10h]

  HIBYTE(v13) = 0;
  if ( byte_140C4E218 )
  {
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = *((unsigned __int8 *)KeGetCurrentPrcb() + 208);
    LOWORD(v13) = v5;
    v6 = *((_BYTE *)KeGetCurrentPrcb() + 209);
    BYTE2(v13) = v6;
    for ( i = ~(*((_DWORD *)KeGetCurrentPrcb() + 39) * *((_DWORD *)KeGetCurrentPrcb() + 38) - 1);
          v4 < (unsigned int)dword_140C54A90;
          ++v4 )
    {
      v8 = 0;
      v9 = qword_140C4E210 + ((unsigned __int64)v4 << 6);
      if ( *(_BYTE *)(v9 + 12) || !(_WORD)v5 && !v6 )
        v8 = 1;
      if ( (unsigned int)dword_140C4E230 >= 3 )
        v10 = (*(_QWORD *)(v9 + 48) >> 8) ^ (*(_DWORD *)(v9 + 48) ^ (*(_DWORD *)(v9 + 48) >> 8)) & 0xFFFFFF;
      else
        v10 = *(_DWORD *)v9;
      if ( v8 && v10 == a1 )
      {
        if ( !*(_BYTE *)(v9 + 13) )
          _InterlockedAdd(&dword_140C0BB30, 1u);
        *(_BYTE *)(v9 + 15) = 1;
        *(_BYTE *)(v9 + 13) = 1;
        *(_DWORD *)(v9 + 16) = v13;
        *(_DWORD *)(v9 + 20) = HIDWORD(KeGetPcr()[1].LockArray);
        if ( !(_WORD)v5 && !v6 )
          *(_BYTE *)(v9 + 12) = 1;
        v2 = 1;
      }
      else
      {
        if ( *(_BYTE *)(v9 + 13) && (i & *(_DWORD *)v9) == (a1 & i) )
          v3 = 1;
        if ( !v2 )
          continue;
      }
      if ( v3 )
        break;
    }
    v11 = 0;
    if ( (_DWORD)dword_140C54A90 )
    {
      v12 = qword_140C4E200;
      while ( !*(_BYTE *)(v12 + 12) || *(_DWORD *)v12 != a1 )
      {
        ++v11;
        v12 += 64LL;
        if ( v11 >= (unsigned int)dword_140C54A90 )
          goto LABEL_26;
      }
      *(_BYTE *)(v12 + 13) = 1;
      *(_DWORD *)(v12 + 16) = v13;
      *(_DWORD *)(v12 + 20) = HIDWORD(KeGetPcr()[1].LockArray);
    }
LABEL_26:
    if ( !v3 )
      ++dword_140C4E21C;
    if ( v5 > dword_140C4E228 )
      dword_140C4E228 = v5;
  }
}
