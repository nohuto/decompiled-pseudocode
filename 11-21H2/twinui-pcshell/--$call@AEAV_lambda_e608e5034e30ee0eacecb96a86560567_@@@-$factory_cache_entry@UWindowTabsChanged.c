/*
 * XREFs of ??$call@AEAV_lambda_e608e5034e30ee0eacecb96a86560567_@@@?$factory_cache_entry@UWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@winrt@@UIWindowTabsChangedEventArgsFactory@23456@@impl@winrt@@QEAA?AUWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@2@AEAV_lambda_e608e5034e30ee0eacecb96a86560567_@@@Z @ 0x18001A57C
 * Callers:
 *     ??$call_factory@UWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@winrt@@UIWindowTabsChangedEventArgsFactory@23456@V_lambda_e608e5034e30ee0eacecb96a86560567_@@@impl@winrt@@YA?AUWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@1@$$QEAV_lambda_e608e5034e30ee0eacecb96a86560567_@@@Z @ 0x18001A0C0 (--$call_factory@UWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@winrt@@UIWindowTabsChanged.c)
 * Callees:
 *     ?CreateInstance@?$consume_Windows_Internal_UI_Shell_IWindowTabsChangedEventArgsFactory@UIWindowTabsChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@3@_K@Z @ 0x18001A6A8 (-CreateInstance@-$consume_Windows_Internal_UI_Shell_IWindowTabsChangedEventArgsFactory@UIWindowT.c)
 *     ??$get_activation_factory@UIWindowTabsChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@winrt@@YA?AUIWindowTabsChangedEventArgsFactory@Shell@UI@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x18001A700 (--$get_activation_factory@UIWindowTabsChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18018F6EB (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs,winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>::call<_lambda_e608e5034e30ee0eacecb96a86560567_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD **a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v6; // rax
  char v7; // si
  bool v8; // zf
  _QWORD v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v11[32]; // [rsp+30h] [rbp-20h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF

  v12 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v11,
    L"Windows.Internal.UI.Shell.WindowTabsChangedEventArgs",
    0x34uLL);
  winrt::get_activation_factory<winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>(&v12, v11);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  if ( v12 )
  {
    v13 = 0LL;
    (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v13);
    v6 = v13;
    v10[0] = v13;
    if ( v13 )
    {
      v7 = 1;
      goto LABEL_4;
    }
  }
  else
  {
    v6 = 0LL;
    v10[0] = 0LL;
  }
  v7 = 0;
LABEL_4:
  if ( v6 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v10);
  if ( v7 )
  {
    v10[1] = &qword_1807B42B8;
    _InterlockedIncrement64(&qword_1807B42B8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs,winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1807B42C0);
    }
    winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabsChangedEventArgsFactory<winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs,winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>,
      a2,
      **a3);
    _InterlockedDecrement64(&qword_1807B42B8);
    v8 = v12 == 0LL;
  }
  else
  {
    winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabsChangedEventArgsFactory<winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>::CreateInstance(
      &v12,
      a2,
      **a3);
    v8 = v5 == 0LL;
  }
  if ( !v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  return a2;
}
