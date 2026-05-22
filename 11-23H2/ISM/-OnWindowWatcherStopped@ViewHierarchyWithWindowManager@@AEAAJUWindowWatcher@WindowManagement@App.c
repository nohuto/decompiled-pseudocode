/*
 * XREFs of ?OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z @ 0x180099370
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B4FC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??$call@P6A?AUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIAppViewStatics@23456@@Z@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@AEBUIAppViewStatics@45672@@Z@Z @ 0x180048654 (--$call@P6A-AUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIAppV.c)
 *     ??$call@P6A?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIWindowStatics@23456@@Z@?$factory_cache_entry@UWindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIWindowStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@AEBUIWindowStatics@45672@@Z@Z @ 0x180048780 (--$call@P6A-AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUIWindo.c)
 *     ?StartWindowWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x180048AB8 (-StartWindowWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ.c)
 *     ?StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x180048CFC (-StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ.c)
 *     ?CreateWatcher@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052938 (-CreateWatcher@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAp.c)
 *     ?CreateWatcher@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800529B8 (-CreateWatcher@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWin.c)
 *     ?Status@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180099770 (-Status@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatc.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x180099EDC (-clear@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAAXXZ @ 0x180099F64 (-clear@-$_Hash@V-$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewHierarchyWithWindowManager::OnWindowWatcherStopped(__int64 *a1, __int64 *a2, __int64 *a3)
{
  void (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // rcx
  void (__fastcall ***v7)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  const struct winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics *(__fastcall *v14)(const struct winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics *, __int64); // [rsp+28h] [rbp-28h] BYREF
  void (__fastcall *v15[4])(__int64, __int64 *); // [rsp+30h] [rbp-20h] BYREF
  void (__fastcall ***v16)(_QWORD, __int64 *, __int64 *); // [rsp+98h] [rbp+48h] BYREF

  if ( (unsigned int)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Status(a2) == 5 )
  {
    std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::clear(a1 + 7);
    std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::clear(a1 + 15);
    std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::clear(a1 + 24);
    v15[1] = (void (__fastcall *)(__int64, __int64 *))&qword_1802692D8;
    _InterlockedIncrement64(&qword_1802692D8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics> )
    {
      winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::CreateWatcher(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>,
        &v16);
      _InterlockedDecrement64(&qword_1802692D8);
    }
    else
    {
      _InterlockedDecrement64(&qword_1802692D8);
      v14 = _lambda_ae55d4909240e1fdeaaab3ab1260b561_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::call<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher (*)(winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics const &)>(
        v6,
        (__int64)&v16,
        (void (__fastcall **)(__int64, __int64 *))&v14);
    }
    if ( a1 == (__int64 *)&v16 )
    {
      v8 = (__int64)v16;
    }
    else
    {
      if ( *a1 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a1);
      v7 = v16;
      v8 = 0LL;
      v16 = 0LL;
      *a1 = (__int64)v7;
    }
    if ( v8 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v16);
    v15[2] = (void (__fastcall *)(__int64, __int64 *))&qword_180268F68;
    _InterlockedIncrement64(&qword_180268F68);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics> )
    {
      winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::CreateWatcher(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>,
        &v13);
      _InterlockedDecrement64(&qword_180268F68);
    }
    else
    {
      _InterlockedDecrement64(&qword_180268F68);
      v15[0] = (void (__fastcall *)(__int64, __int64 *))_lambda_bde3f744bf3d16209662d38da0fd875b_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::call<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher (*)(winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics const &)>(
        v7,
        (__int64)&v13,
        v15);
    }
    v9 = a1 + 1;
    if ( a1 + 1 == &v13 )
    {
      v11 = v13;
    }
    else
    {
      if ( *v9 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a1 + 1);
      v10 = v13;
      v11 = 0LL;
      v13 = 0LL;
      *v9 = v10;
    }
    if ( v11 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v13);
    ViewHierarchyWithWindowManager::StartWindowWatcher((ViewHierarchyWithWindowManager *)a1);
    ViewHierarchyWithWindowManager::StartAppViewWatcher((ViewHierarchyWithWindowManager *)a1);
  }
  if ( *a2 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a2);
  if ( *a3 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a3);
  return 0LL;
}
