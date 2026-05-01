/*
 * XREFs of ??4ViewOptions@@QEAAAEAU0@AEBU0@@Z @ 0x18045B6D4
 * Callers:
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180464CD0 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     ?_Clear_and_reserve_geometric@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x18046A3B8 (-_Clear_and_reserve_geometric@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@W.c)
 */

__int64 __fastcall ViewOptions::operator=(__int64 a1, __int64 a2)
{
  char **v2; // rdi
  __int128 v4; // xmm0
  __int64 v5; // rdx
  const void *v6; // rbp
  char *v7; // rsi
  signed __int64 v8; // r14

  v2 = (char **)(a1 + 32);
  *(_BYTE *)a1 = *(_BYTE *)a2;
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(a2 + 1);
  *(_BYTE *)(a1 + 2) = *(_BYTE *)(a2 + 2);
  *(_BYTE *)(a1 + 3) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  v4 = *(_OWORD *)(a2 + 16);
  v5 = a2 + 32;
  *(_OWORD *)(a1 + 16) = v4;
  if ( a1 + 32 != v5 )
  {
    v6 = *(const void **)v5;
    v7 = *v2;
    v8 = *(_QWORD *)(v5 + 8) - *(_QWORD *)v5;
    if ( v8 >> 4 > (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 32)) >> 4) )
    {
      std::vector<Windows::Foundation::Rect>::_Clear_and_reserve_geometric(a1 + 32);
      v7 = *v2;
    }
    memmove_0(v7, v6, v8);
    v2[1] = &v7[v8];
  }
  return a1;
}
