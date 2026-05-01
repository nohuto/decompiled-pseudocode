/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180637FF0
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x1806386B8 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$hash@Ugu.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@2@@Z @ 0x180092148 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

char __fastcall std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Forced_rehash(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  _QWORD *v8; // r8
  _QWORD *v9; // r9
  __int64 v10; // rcx
  unsigned __int64 i; // rdx
  __int64 v12; // rdi
  __int64 v13; // r11
  _QWORD *v14; // r10
  _QWORD *v15; // r10
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // rbp
  unsigned __int64 *v19; // rsi
  __int64 v20; // r11
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rdx
  _QWORD *v24; // rcx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = *(_QWORD *)(a1 + 8);
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>>>>>::_Assign_grow(
    (unsigned __int64 **)(a1 + 24),
    2 * v6,
    v4);
  *(_QWORD *)(a1 + 56) = v6;
  LOBYTE(v7) = v6 - 1;
  *(_QWORD *)(a1 + 48) = v6 - 1;
  v8 = **(_QWORD ***)(a1 + 8);
  v9 = v8;
  while ( v8 != (_QWORD *)v4 )
  {
    v9 = (_QWORD *)*v9;
    v10 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 0x10; ++i )
    {
      v7 = *((unsigned __int8 *)v8 + i + 16);
      v10 = 0x100000001B3LL * (v7 ^ v10);
    }
    v12 = *(_QWORD *)(a1 + 24);
    v13 = 2 * (v10 & *(_QWORD *)(a1 + 48));
    if ( *(_QWORD *)(v12 + 16 * (v10 & *(_QWORD *)(a1 + 48))) == v4 )
    {
      *(_QWORD *)(v12 + 16 * (v10 & *(_QWORD *)(a1 + 48))) = v8;
LABEL_9:
      *(_QWORD *)(v12 + 8 * v13 + 8) = v8;
      goto LABEL_18;
    }
    LOBYTE(v7) = winrt::operator==(v8 + 2, (_QWORD *)(*(_QWORD *)(v12 + 16 * (v10 & *(_QWORD *)(a1 + 48)) + 8) + 16LL));
    if ( (_BYTE)v7 )
    {
      v15 = (_QWORD *)*v14;
      if ( v15 != v8 )
      {
        v16 = (_QWORD *)v8[1];
        *v16 = v9;
        v17 = (_QWORD *)v9[1];
        *v17 = v15;
        v7 = v15[1];
        *(_QWORD *)v7 = v8;
        v15[1] = v17;
        v9[1] = v16;
        v8[1] = v7;
      }
      goto LABEL_9;
    }
    v18 = v14;
    while ( 1 )
    {
      v19 = v14 + 1;
      if ( *(_QWORD **)(v12 + 8 * v13) == v18 )
        break;
      v18 = (_QWORD *)*v19;
      if ( winrt::operator==(v8 + 2, (_QWORD *)(*v19 + 16)) )
      {
        v20 = *v14;
        v21 = (_QWORD *)v8[1];
        *v21 = v9;
        v22 = (_QWORD *)v9[1];
        *v22 = v20;
        v7 = *(_QWORD *)(v20 + 8);
        *(_QWORD *)v7 = v8;
        *(_QWORD *)(v20 + 8) = v22;
        v9[1] = v21;
        v8[1] = v7;
        goto LABEL_18;
      }
    }
    v23 = (_QWORD *)v8[1];
    *v23 = v9;
    v7 = v9[1];
    *(_QWORD *)v7 = v14;
    v24 = (_QWORD *)*v19;
    *v24 = v8;
    *v19 = v7;
    v9[1] = v23;
    v8[1] = v24;
    *(_QWORD *)(v12 + 8 * v13) = v8;
LABEL_18:
    v8 = v9;
  }
  return v7;
}
