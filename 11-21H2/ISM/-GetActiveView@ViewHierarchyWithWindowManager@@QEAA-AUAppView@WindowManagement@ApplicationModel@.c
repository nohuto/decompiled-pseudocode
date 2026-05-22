/*
 * XREFs of ?GetActiveView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@XZ @ 0x180154B44
 * Callers:
 *     ?GetActiveViewInstanceId@ViewHierarchyWithWindowManager@@QEAAIXZ @ 0x180154C60 (-GetActiveViewInstanceId@ViewHierarchyWithWindowManager@@QEAAIXZ.c)
 * Callees:
 *     ?GetFromWindowId@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@3@AEBUWindowId@56783@@Z @ 0x1800023AC (-GetFromWindowId@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UI.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800074C4 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180081E94 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ??$call@AEAV_lambda_6e68f4fcde6472322112b953134f760c_@@@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_6e68f4fcde6472322112b953134f760c_@@@Z @ 0x180084310 (--$call@AEAV_lambda_6e68f4fcde6472322112b953134f760c_@@@-$factory_cache_entry@UAppViewInProc@Win.c)
 *     ?IsForeground@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow_Input@UWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x180154CBC (-IsForeground@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow_Input@UWindow.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall ViewHierarchyWithWindowManager::GetActiveView(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rsi
  _QWORD *i; // rdi
  __int64 v5; // rbx
  void (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v7; // r9
  int v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  unsigned int *v11; // [rsp+68h] [rbp+20h] BYREF

  v3 = *(_QWORD **)(a1 + 128);
  for ( i = (_QWORD *)*v3; ; i = (_QWORD *)*i )
  {
    if ( i == v3 )
    {
      *a2 = 0LL;
      return a2;
    }
    v5 = i[3];
    v10 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    if ( (unsigned __int8)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow_Input<winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>::IsForeground(&v10) )
      break;
    if ( v5 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v10);
  }
  v11 = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::Id(
          &v10,
          &v9);
  _InterlockedIncrement64(&qword_180242E18);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics> )
  {
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::GetFromWindowId(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>,
      a2,
      v11);
    _InterlockedDecrement64(&qword_180242E18);
  }
  else
  {
    _InterlockedDecrement64(&qword_180242E18);
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::call<_lambda_6e68f4fcde6472322112b953134f760c_ &>(
      v6,
      a2,
      &v11,
      v7);
  }
  if ( v5 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v10);
  return a2;
}
