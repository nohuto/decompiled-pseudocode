/*
 * XREFs of ??$call@AEAV_lambda_6e68f4fcde6472322112b953134f760c_@@@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_6e68f4fcde6472322112b953134f760c_@@@Z @ 0x180084310
 * Callers:
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001ADC0 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetActiveView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@XZ @ 0x180154B44 (-GetActiveView@ViewHierarchyWithWindowManager@@QEAA-AUAppView@WindowManagement@ApplicationModel@.c)
 * Callees:
 *     ?GetFromWindowId@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@3@AEBUWindowId@56783@@Z @ 0x1800023AC (-GetFromWindowId@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UI.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800074C4 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18004C289 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@YA?AUIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180081334 (--$get_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@wi.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::call<_lambda_6e68f4fcde6472322112b953134f760c_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2,
        unsigned int **a3,
        __int64 a4)
{
  void (__fastcall ***v6)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v7; // rax
  char v8; // si
  bool v9; // zf
  __int64 v11[2]; // [rsp+20h] [rbp-30h] BYREF
  _DWORD *v12; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v13[4]; // [rsp+38h] [rbp-18h] BYREF
  const wchar_t *v14; // [rsp+48h] [rbp-8h]
  void (__fastcall ***v15)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+30h] BYREF
  __int64 v16; // [rsp+98h] [rbp+48h] BYREF

  v15 = a1;
  if ( aWindowsInterna_1[64] )
  {
    _o_terminate(a1, a2, a3, a4);
    __debugbreak();
  }
  v13[0] = 1;
  v13[1] = 64;
  v14 = L"Windows.Internal.ApplicationModel.WindowManagement.AppViewInProc";
  v12 = v13;
  winrt::get_activation_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>(
    &v15,
    &v12);
  v6 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v15;
  if ( !v15 )
  {
    v7 = 0LL;
    v11[0] = 0LL;
    goto LABEL_6;
  }
  v16 = 0LL;
  (**v15)(v15, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v16);
  v7 = v16;
  v11[0] = v16;
  v8 = 1;
  if ( !v16 )
  {
LABEL_6:
    v8 = 0;
    if ( !v7 )
      goto LABEL_8;
  }
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v11);
LABEL_8:
  if ( v8 )
  {
    v11[1] = (__int64)&qword_180242E18;
    _InterlockedIncrement64(&qword_180242E18);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>,
            (signed __int64)v15,
            0LL) )
    {
      v15 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &ListEntry);
    }
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::GetFromWindowId(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_180242E18);
    v9 = v15 == 0LL;
  }
  else
  {
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::GetFromWindowId(
      (__int64 *)&v15,
      a2,
      *a3);
    v9 = v6 == 0LL;
  }
  if ( !v9 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v15);
  return a2;
}
