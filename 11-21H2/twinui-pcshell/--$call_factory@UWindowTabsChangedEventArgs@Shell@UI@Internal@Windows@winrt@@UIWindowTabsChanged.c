/*
 * XREFs of ??$call_factory@UWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@winrt@@UIWindowTabsChangedEventArgsFactory@23456@V_lambda_e608e5034e30ee0eacecb96a86560567_@@@impl@winrt@@YA?AUWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@1@$$QEAV_lambda_e608e5034e30ee0eacecb96a86560567_@@@Z @ 0x18001A0C0
 * Callers:
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x180019CFC (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 * Callees:
 *     ??$call@AEAV_lambda_e608e5034e30ee0eacecb96a86560567_@@@?$factory_cache_entry@UWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@winrt@@UIWindowTabsChangedEventArgsFactory@23456@@impl@winrt@@QEAA?AUWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@2@AEAV_lambda_e608e5034e30ee0eacecb96a86560567_@@@Z @ 0x18001A57C (--$call@AEAV_lambda_e608e5034e30ee0eacecb96a86560567_@@@-$factory_cache_entry@UWindowTabsChanged.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::call_factory<winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs,winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory,_lambda_e608e5034e30ee0eacecb96a86560567_>(
        _QWORD *a1,
        __int64 **a2)
{
  __int64 v3; // rdx
  int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF
  __int64 *v7; // [rsp+48h] [rbp+20h]

  v7 = &qword_1807B42B8;
  _InterlockedIncrement64(&qword_1807B42B8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs,winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory> )
  {
    v3 = **a2;
    v6 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs,winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>
                                                                + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs,winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>,
           v3,
           &v6);
    if ( v4 < 0 )
      winrt::throw_hresult((unsigned int)v4);
    *a1 = v6;
    _InterlockedDecrement64(&qword_1807B42B8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B42B8);
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs,winrt::Windows::Internal::UI::Shell::IWindowTabsChangedEventArgsFactory>::call<_lambda_e608e5034e30ee0eacecb96a86560567_ &>(
      0LL,
      a1,
      a2);
  }
  return a1;
}
