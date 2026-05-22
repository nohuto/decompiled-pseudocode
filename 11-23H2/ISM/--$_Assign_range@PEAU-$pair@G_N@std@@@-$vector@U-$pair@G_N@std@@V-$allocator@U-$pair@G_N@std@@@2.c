/*
 * XREFs of ??$_Assign_range@PEAU?$pair@G_N@std@@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXPEAU?$pair@G_N@1@0Uforward_iterator_tag@1@@Z @ 0x18019A04C
 * Callers:
 *     ?Initialize@ViewMenuChordedKeyHandler@@IEAAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@@Z @ 0x18019A894 (-Initialize@ViewMenuChordedKeyHandler@@IEAAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K@Z @ 0x18019ACF0 (-_Clear_and_reserve_geometric@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@A.c)
 */

char __fastcall std::vector<std::pair<unsigned short,bool>>::_Assign_range<std::pair<unsigned short,bool> *>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v4; // rbx
  unsigned __int64 v6; // rcx
  _WORD *v7; // r9
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  _DWORD *v10; // rcx
  _WORD *v11; // rdx
  _DWORD *v12; // rdx

  v4 = a2;
  v6 = ((__int64)a3 - a2) >> 2;
  v7 = *(_WORD **)a1;
  v8 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2;
  if ( v6 <= v8 )
  {
    v12 = &v7[2 * v6];
    while ( (_DWORD *)v4 != a3 )
    {
      *v7 = *(_WORD *)v4;
      v7 += 2;
      LOBYTE(v9) = *(_BYTE *)(v4 + 2);
      v4 += 4LL;
      *((_BYTE *)v7 - 2) = v9;
    }
  }
  else
  {
    v9 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v7) >> 2;
    if ( v6 > v9 )
    {
      LOBYTE(v9) = std::vector<std::pair<unsigned short,bool>>::_Clear_and_reserve_geometric(a1, v6);
      v8 = 0LL;
    }
    v10 = (_DWORD *)(v4 + 4 * v8);
    v11 = *(_WORD **)a1;
    while ( (_DWORD *)v4 != v10 )
    {
      *v11 = *(_WORD *)v4;
      v11 += 2;
      LOBYTE(v9) = *(_BYTE *)(v4 + 2);
      v4 += 4LL;
      *((_BYTE *)v11 - 2) = v9;
    }
    v12 = *(_DWORD **)(a1 + 8);
    while ( v10 != a3 )
    {
      LODWORD(v9) = *v10;
      *v12++ = *v10++;
    }
  }
  *(_QWORD *)(a1 + 8) = v12;
  return v9;
}
