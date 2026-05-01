/*
 * XREFs of ??$call@AEAV_lambda_f96af84709a62cb4ccbf50bc9965f301_@@@?$factory_cache_entry@UShellGesturesController@Input@Internal@UI@Windows@winrt@@UIShellGesturesControllerStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_f96af84709a62cb4ccbf50bc9965f301_@@@Z @ 0x180173B9C
 * Callers:
 *     ?Initialize@TouchGestureProcessor@@QEAAXXZ @ 0x1801734F4 (-Initialize@TouchGestureProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$get_activation_factory@UIShellGesturesControllerStatics@Input@Internal@UI@Windows@winrt@@@winrt@@YA?AUIShellGesturesControllerStatics@Input@Internal@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x180173CA8 (--$get_activation_factory@UIShellGesturesControllerStatics@Input@Internal@UI@Windows@winrt@@@win.c)
 *     ?CreateForInputSite@?$consume_Windows_UI_Internal_Input_IShellGesturesControllerStatics@UIShellGesturesControllerStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUInputSite@Input@Internal@UI@Windows@3@@Z @ 0x180173CF4 (-CreateForInputSite@-$consume_Windows_UI_Internal_Input_IShellGesturesControllerStatics@UIShellG.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Internal::Input::ShellGesturesController,winrt::Windows::UI::Internal::Input::IShellGesturesControllerStatics>::call<_lambda_f96af84709a62cb4ccbf50bc9965f301_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  bool v6; // zf
  __int64 v8[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+20h] BYREF
  __int64 v11; // [rsp+98h] [rbp+38h] BYREF

  v10 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v9,
    L"Windows.UI.Internal.Input.ShellGesturesController",
    49);
  winrt::get_activation_factory<winrt::Windows::UI::Internal::Input::IShellGesturesControllerStatics>(&v10, v9);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v10;
  if ( v10 && (v11 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11), (v8[0] = v11) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v8);
    v8[1] = (__int64)&qword_18098E0E8;
    _InterlockedIncrement64(&qword_18098E0E8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::ShellGesturesController,winrt::Windows::UI::Internal::Input::IShellGesturesControllerStatics>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098E0F0);
    }
    winrt::impl::consume_Windows_UI_Internal_Input_IShellGesturesControllerStatics<winrt::Windows::UI::Internal::Input::IShellGesturesControllerStatics>::CreateForInputSite(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::ShellGesturesController,winrt::Windows::UI::Internal::Input::IShellGesturesControllerStatics>,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_18098E0E8);
    v6 = v10 == 0LL;
  }
  else
  {
    winrt::impl::consume_Windows_UI_Internal_Input_IShellGesturesControllerStatics<winrt::Windows::UI::Internal::Input::IShellGesturesControllerStatics>::CreateForInputSite(
      &v10,
      a2,
      *a3);
    v6 = v5 == 0LL;
  }
  if ( !v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  return a2;
}
