/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAAXXZ @ 0x180099F64
 * Callers:
 *     ?OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z @ 0x180099370 (-OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@App.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180098370 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIUAppView@WindowManagement@ApplicationM.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x180099C74 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Wi.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::clear(
        _QWORD *a1)
{
  __int64 *v2; // rdx
  void *v3; // rdx
  unsigned __int64 v4; // rcx

  if ( a1[2] )
  {
    v2 = (__int64 *)a1[1];
    if ( a1[7] >> 3 <= a1[2] )
    {
      std::_List_node<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>,void *>>>(
        (__int64)a1,
        (_QWORD **)v2);
      *(_QWORD *)a1[1] = a1[1];
      *(_QWORD *)(a1[1] + 8LL) = a1[1];
      a1[2] = 0LL;
      v3 = (void *)a1[3];
      v4 = (unsigned __int64)(a1[4] - (_QWORD)v3 + 7LL) >> 3;
      if ( (unsigned __int64)v3 > a1[4] )
        v4 = 0LL;
      if ( v4 )
        memset64(v3, a1[1], v4);
    }
    else
    {
      std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::_Unchecked_erase(
        a1,
        *v2,
        a1[1]);
    }
  }
}
