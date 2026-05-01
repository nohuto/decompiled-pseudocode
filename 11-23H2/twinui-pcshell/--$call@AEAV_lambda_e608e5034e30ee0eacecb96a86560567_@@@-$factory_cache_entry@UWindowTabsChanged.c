/*
 * XREFs of ??$call@AEAV_lambda_e608e5034e30ee0eacecb96a86560567_@@@?$factory_cache_entry@UWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@winrt@@UIWindowTabsChangedEventArgsFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_e608e5034e30ee0eacecb96a86560567_@@@Z @ 0x180032D98
 * Callers:
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x180032F5C (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 * Callees:
 *     ??$get_activation_factory@UIWindowTabsChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@winrt@@YA?AUIWindowTabsChangedEventArgsFactory@Shell@UI@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180032EA8 (--$get_activation_factory@UIWindowTabsChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@.c)
 *     ?CreateInstance@?$consume_Windows_Internal_UI_Shell_IWindowTabsChangedEventArgsFactory@UIWindowTabsChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x18003358C (-CreateInstance@-$consume_Windows_Internal_UI_Shell_IWindowTabsChangedEventArgsFactory@UIWindowT.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs,winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>::call<_lambda_e608e5034e30ee0eacecb96a86560567_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD **a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  bool v6; // zf
  _QWORD v8[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+20h] BYREF
  __int64 v11; // [rsp+98h] [rbp+38h] BYREF

  v10 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v9,
    L"Windows.Internal.UI.Shell.WindowTabsChangedEventArgs",
    0x34uLL);
  winrt::get_activation_factory<winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>(&v10, v9);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v10;
  if ( v10 && (v11 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11), (v8[0] = v11) != 0LL) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v8);
    v8[1] = &qword_18098E5D8;
    _InterlockedIncrement64(&qword_18098E5D8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs,winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098E5E0);
    }
    winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabsChangedEventArgsFactory<winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs,winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>,
      a2,
      **a3);
    _InterlockedDecrement64(&qword_18098E5D8);
    v6 = v10 == 0LL;
  }
  else
  {
    winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabsChangedEventArgsFactory<winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>::CreateInstance(
      &v10,
      a2,
      **a3);
    v6 = v5 == 0LL;
  }
  if ( !v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  return a2;
}
