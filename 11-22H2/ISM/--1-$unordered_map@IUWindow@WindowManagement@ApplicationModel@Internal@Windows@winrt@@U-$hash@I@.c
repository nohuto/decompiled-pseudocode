/*
 * XREFs of ??1?$unordered_map@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@U?$hash@I@std@@U?$equal_to@I@8@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@@std@@QEAA@XZ @ 0x1800AB298
 * Callers:
 *     _ViewHierarchyWithWindowManager::ViewHierarchyWithWindowManager_::_1_::dtor$2 @ 0x180082ECF (_ViewHierarchyWithWindowManager--ViewHierarchyWithWindowManager_--_1_--dtor$2.c)
 *     _ViewHierarchyWithWindowManager::ViewHierarchyWithWindowManager_::_1_::dtor$3 @ 0x180082EE5 (_ViewHierarchyWithWindowManager--ViewHierarchyWithWindowManager_--_1_--dtor$3.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800AA950 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIUAppView@WindowManagement@ApplicationM.c)
 */

void __fastcall std::unordered_map<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>::~unordered_map<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::_List_node<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>,void *>>>(
    v2,
    *(_QWORD ***)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x20uLL);
}
