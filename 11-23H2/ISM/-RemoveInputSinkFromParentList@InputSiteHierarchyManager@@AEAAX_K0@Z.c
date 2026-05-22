/*
 * XREFs of ?RemoveInputSinkFromParentList@InputSiteHierarchyManager@@AEAAX_K0@Z @ 0x18013E740
 * Callers:
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x18001F960 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     memmove_0 @ 0x18006592C (memmove_0.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x18013E0FC (--$find@X@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V-$_Uhas.c)
 */

void __fastcall InputSiteHierarchyManager::RemoveInputSinkFromParentList(
        InputSiteHierarchyManager *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rbx
  _QWORD *v6; // rdx
  _QWORD *i; // rsi
  _QWORD *j; // rax
  size_t v9; // rdi
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::find<void>(
    (_QWORD *)this + 2,
    &v10,
    (const unsigned __int8 *)&v11);
  v5 = v10;
  if ( v10 != *((_QWORD *)this + 3) )
  {
    v6 = *(_QWORD **)(v10 + 48);
    for ( i = *(_QWORD **)(v10 + 40); i != v6 && *i != a2; ++i )
      ;
    if ( i != v6 )
    {
      for ( j = i + 1; j != v6; ++j )
      {
        if ( *j != a2 )
          *i++ = *j;
      }
      if ( i != v6 )
      {
        v9 = *(_QWORD *)(v5 + 48) - (_QWORD)v6;
        memmove_0(i, v6, v9);
        *(_QWORD *)(v5 + 48) = (char *)i + v9;
      }
    }
  }
}
