/*
 * XREFs of ?OnAppViewRemoved@ViewHierarchyWithWindowManager@@AEAAJUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UAppViewChangedEventArgs@34567@@Z @ 0x180082020
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800074C4 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?AppView@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewChangedEventArgs@UIAppViewChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU0WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180081BD0 (-AppView@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewChangedEventArgs@U.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUAppViewId@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180081E50 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManage.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1800830F0 (-erase@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winr.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewHierarchyWithWindowManager::OnAppViewRemoved(__int64 a1, __int64 *a2, __int64 *a3)
{
  _QWORD *v6; // rax
  int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+48h] [rbp+10h]
  __int64 *v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = a3;
  v9 = a2;
  v6 = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewChangedEventArgs<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewChangedEventArgs>::AppView(
         a3,
         &v11);
  LODWORD(v10) = *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::Id(
                    v6,
                    &v8);
  if ( v11 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v11);
  std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::erase(
    a1 + 56,
    &v10);
  if ( *a2 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a2);
  if ( *a3 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a3);
  return 0LL;
}
