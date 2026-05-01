/*
 * XREFs of ??$?0V_lambda_0b2f23dace42994d9c64a9b3f9204eba_@@@?$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@QEAA@V_lambda_0b2f23dace42994d9c64a9b3f9204eba_@@@Z @ 0x1804F8568
 * Callers:
 *     ??$make_agile_delegate@U?$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@1@AEBU2341@@Z @ 0x180053448 (--$make_agile_delegate@U-$TypedEventHandler@UXamlExplorerHostChildWindow_WASDK@XamlExplorerHost@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Foundation::IInspectable>::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Foundation::IInspectable>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rax
  _QWORD *v6; // [rsp+28h] [rbp-20h]

  v6 = operator new(0x18uLL);
  v4 = *a2;
  *a2 = 0LL;
  v6[1] = v4;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 4) = 1;
  *v6 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Foundation::IInspectable>,_lambda_0b2f23dace42994d9c64a9b3f9204eba_>::`vftable';
  *a1 = v6;
  if ( *a2 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a2);
  return a1;
}
