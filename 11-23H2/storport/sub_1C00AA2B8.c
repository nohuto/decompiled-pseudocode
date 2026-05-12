/*
 * XREFs of sub_1C00AA2B8 @ 0x1C00AA2B8
 * Callers:
 *     sub_1C00AA1FC @ 0x1C00AA1FC (sub_1C00AA1FC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C00AA2B8(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // r10d
  unsigned int i; // r11d
  __int64 v6; // rcx
  int v7; // eax
  __int16 v8; // ax

  v4 = 0;
  for ( i = 0; i < *(_DWORD *)(a2 + 16); ++i )
  {
    if ( *(_BYTE *)(a2 + 20LL * i + 20) == 1 )
    {
      if ( a3 > v4 )
      {
        v6 = *(_QWORD *)(a1 + 56) + 16LL * v4;
        *(_QWORD *)v6 = *(_QWORD *)(a2 + 20LL * i + 24);
        v7 = *(_DWORD *)(a2 + 20LL * i + 32);
        *(_BYTE *)(v6 + 12) = 0;
        goto LABEL_18;
      }
    }
    else
    {
      if ( *(_BYTE *)(a2 + 20LL * i + 20) == 2 )
      {
        *(_DWORD *)(a1 + 12) = *(unsigned __int16 *)(a2 + 20LL * i + 24);
        *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 20LL * i + 28);
        v8 = *(_WORD *)(a2 + 20LL * i + 22);
        if ( v8 == 1 )
        {
          *(_DWORD *)(a1 + 20) = 1;
        }
        else if ( !v8 )
        {
          *(_DWORD *)(a1 + 20) = 0;
        }
        continue;
      }
      if ( *(_BYTE *)(a2 + 20LL * i + 20) != 3 )
      {
        if ( *(_BYTE *)(a2 + 20LL * i + 20) == 4 )
        {
          *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 20LL * i + 24);
          *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 20LL * i + 28);
        }
        else if ( *(_BYTE *)(a2 + 20LL * i + 20) == 5 && *(_DWORD *)(a2 + 20LL * i + 24) >= 6u )
        {
          *(_BYTE *)(a1 + 73) = *(_BYTE *)(a2 + 20LL * i + 44);
        }
        continue;
      }
      if ( a3 > v4 )
      {
        v6 = *(_QWORD *)(a1 + 56) + 16LL * v4;
        *(_QWORD *)v6 = *(_QWORD *)(a2 + 20LL * i + 24);
        v7 = *(_DWORD *)(a2 + 20LL * i + 32);
        *(_BYTE *)(v6 + 12) = 1;
LABEL_18:
        ++v4;
        *(_DWORD *)(v6 + 8) = v7;
      }
    }
  }
  return 0LL;
}
