/*
 * XREFs of ??$call@AEAV_lambda_6e68f4fcde6472322112b953134f760c_@@@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_6e68f4fcde6472322112b953134f760c_@@@Z @ 0x18009B400
 * Callers:
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001B020 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetActiveView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@XZ @ 0x180173FB4 (-GetActiveView@ViewHierarchyWithWindowManager@@QEAA-AUAppView@WindowManagement@ApplicationModel@.c)
 * Callees:
 *     ?GetFromWindowId@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@@Z @ 0x180002B4C (-GetFromWindowId@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UI.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B4FC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??$get_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@YA?AUIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180048994 (--$get_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@wi.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18005819D (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::call<_lambda_6e68f4fcde6472322112b953134f760c_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2,
        unsigned int **a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  bool v6; // zf
  __int64 v8[2]; // [rsp+28h] [rbp-38h] BYREF
  _DWORD *v9; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v10[4]; // [rsp+40h] [rbp-20h] BYREF
  const wchar_t *v11; // [rsp+50h] [rbp-10h]
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+20h] BYREF
  __int64 v13; // [rsp+98h] [rbp+38h] BYREF

  v12 = a1;
  if ( aWindowsInterna_1[64] )
    abort();
  v10[0] = 1;
  v10[1] = 64;
  v11 = L"Windows.Internal.ApplicationModel.WindowManagement.AppViewInProc";
  v9 = v10;
  winrt::get_activation_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>(
    &v12,
    (__int64)&v9);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  if ( v12 && (v13 = 0LL, (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v13), (v8[0] = v13) != 0) )
  {
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v8);
    v8[1] = (__int64)&qword_180268F68;
    _InterlockedIncrement64(&qword_180268F68);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &ListEntry);
    }
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::GetFromWindowId(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_180268F68);
    v6 = v12 == 0LL;
  }
  else
  {
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::GetFromWindowId(
      (__int64 *)&v12,
      a2,
      *a3);
    v6 = v5 == 0LL;
  }
  if ( !v6 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v12);
  return a2;
}
