/*
 * XREFs of TranslateScsiRequestBlockToStorageRequestBlock @ 0x1C004FF94
 * Callers:
 *     TranslateToExtendedSrb @ 0x1C000A790 (TranslateToExtendedSrb.c)
 * Callees:
 *     <none>
 */

void __fastcall TranslateScsiRequestBlockToStorageRequestBlock(__int64 a1, __int64 a2, char a3, char a4, int a5)
{
  int v5; // eax
  __int64 v6; // rax
  char v7; // al
  int v8; // eax
  _DWORD *v9; // rax

  if ( a1 && a2 )
  {
    *(_BYTE *)(a1 + 2) = 40;
    *(_WORD *)a1 = 8;
    *(_DWORD *)(a1 + 16) = a5;
    v5 = 2;
    *(_WORD *)(a1 + 36) = 2;
    *(_DWORD *)(a1 + 8) = 1397899864;
    *(_DWORD *)(a1 + 12) = 1;
    *(_DWORD *)(a1 + 52) = 128;
    if ( a3 )
    {
      if ( a4 )
        *(_DWORD *)(a1 + 52) = 136;
      else
        v5 = 1;
    }
    else
    {
      v5 = 0;
    }
    *(_DWORD *)(a1 + 56) = v5;
    *(_DWORD *)(a1 + 20) = *(unsigned __int8 *)(a2 + 2);
    *(_BYTE *)(a1 + 3) = *(_BYTE *)(a2 + 3);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 20);
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 56);
    if ( *(_BYTE *)(a2 + 2) == 23 )
      v6 = 0LL;
    else
      v6 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(a1 + 112) = v6;
    v7 = *(_BYTE *)(a2 + 2);
    if ( v7 == 23 || (unsigned __int8)(v7 - 36) <= 1u )
    {
      *(_DWORD *)(a1 + 32) = 0;
      v8 = 0;
      *(_WORD *)(a1 + 38) = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 32) = *(unsigned __int8 *)(a2 + 8);
      *(_WORD *)(a1 + 38) = *(unsigned __int8 *)(a2 + 9);
      v8 = *(_DWORD *)(a2 + 64);
    }
    *(_DWORD *)(a1 + 44) = v8;
    v9 = *(_DWORD **)(a2 + 48);
    if ( v9 )
    {
      if ( *v9 == 523124044 )
      {
        *(_QWORD *)(a1 + 96) = v9;
        *(_QWORD *)(a1 + 80) = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 176LL);
      }
      else
      {
        *(_QWORD *)(a1 + 80) = v9;
        *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 56);
      }
    }
  }
}
