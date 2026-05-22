/*
 * XREFs of ?GetView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@I@Z @ 0x180002AC0
 * Callers:
 *     ?GetWindowForViewId@ViewHelper@@SA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@K@Z @ 0x1800029D4 (-GetWindowForViewId@ViewHelper@@SA-AUWindow@WindowManagement@ApplicationModel@Internal@Windows@w.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800B438C (-GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800B44D4 (-GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800B45F4 (-GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800B48C0 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x1801171F4 (-GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA-AV-$vector@IV-$allocator@I@std@@@std@@I@Z.c)
 *     ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x180117854 (-GetFrameworkViewTypeFromViewId@ViewHelper@@SA-AW4AppModelFrameworkKind@WindowManagement@Applica.c)
 *     ?GetPresentationModeFromViewId@ViewHelper@@SA?AW4AppModelHolographicPresentationMode@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x180117B74 (-GetPresentationModeFromViewId@ViewHelper@@SA-AW4AppModelHolographicPresentationMode@WindowManag.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@I@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@@1@AEBI_K@Z @ 0x18001CA2C (--$_Find_last@I@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001CCDC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ViewHierarchyWithWindowManager::GetView(unsigned __int64 a1, _QWORD *a2, int a3)
{
  unsigned __int64 appended; // rax
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 *v8; // rax
  char v9; // di
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  int v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  LODWORD(v12) = 0;
  appended = std::_Fnv1a_append_bytes(a1, (const unsigned __int8 *const)&v14, 4uLL);
  v6 = *(_QWORD *)(std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Find_last<unsigned int>(
                     a1 + 56,
                     v11,
                     &v14,
                     appended)
                 + 8);
  if ( !v6 )
    v6 = *(_QWORD *)(a1 + 64);
  if ( v6 == *(_QWORD *)(a1 + 64) )
  {
    v7 = 0LL;
    v8 = &v13;
    v9 = 2;
  }
  else
  {
    v7 = *(_QWORD *)(v6 + 24);
    v12 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = &v12;
    v9 = 1;
  }
  *v8 = 0LL;
  *a2 = v7;
  if ( (v9 & 2) != 0 )
  {
    v9 &= ~2u;
    if ( v13 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v13);
  }
  if ( (v9 & 1) != 0 && v12 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v12);
  return a2;
}
