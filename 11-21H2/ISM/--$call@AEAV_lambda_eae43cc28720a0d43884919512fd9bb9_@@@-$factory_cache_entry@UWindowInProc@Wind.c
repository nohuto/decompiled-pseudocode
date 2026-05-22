/*
 * XREFs of ??$call@AEAV_lambda_eae43cc28720a0d43884919512fd9bb9_@@@?$factory_cache_entry@UWindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIWindowStatics@23456@@impl@winrt@@QEAA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_eae43cc28720a0d43884919512fd9bb9_@@@Z @ 0x180084488
 * Callers:
 *     ?OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x180085710 (-OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@Appli.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800074C4 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18004C289 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@YA?AUIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180081378 (--$get_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@win.c)
 *     ?GetFromId@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@3@AEBUWindowId@56783@@Z @ 0x180084E58 (-GetFromId@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWindowS.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::call<_lambda_eae43cc28720a0d43884919512fd9bb9_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3,
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
  if ( aWindowsInterna_0[63] )
  {
    _o_terminate(a1, a2, a3, a4);
    __debugbreak();
  }
  v13[0] = 1;
  v13[1] = 63;
  v14 = L"Windows.Internal.ApplicationModel.WindowManagement.WindowInProc";
  v12 = v13;
  winrt::get_activation_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>(
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
    v11[1] = (__int64)&qword_1802431C8;
    _InterlockedIncrement64(&qword_1802431C8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>,
            (signed __int64)v15,
            0LL) )
    {
      v15 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1802431D0);
    }
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::GetFromId(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_1802431C8);
    v9 = v15 == 0LL;
  }
  else
  {
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::GetFromId(
      &v15,
      a2,
      *a3);
    v9 = v6 == 0LL;
  }
  if ( !v9 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v15);
  return a2;
}
