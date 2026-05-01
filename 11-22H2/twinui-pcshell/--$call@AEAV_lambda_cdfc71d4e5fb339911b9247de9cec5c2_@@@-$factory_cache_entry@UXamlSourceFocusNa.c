/*
 * XREFs of ??$call@AEAV_lambda_cdfc71d4e5fb339911b9247de9cec5c2_@@@?$factory_cache_entry@UXamlSourceFocusNavigationRequest@Hosting@Xaml@UI@Microsoft@winrt@@UIXamlSourceFocusNavigationRequestFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_cdfc71d4e5fb339911b9247de9cec5c2_@@@Z @ 0x18004EF6C
 * Callers:
 *     ?SetFocus@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18004F11C (-SetFocus@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windo.c)
 * Callees:
 *     ??$get_activation_factory@UIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Microsoft@winrt@@@winrt@@YA?AUIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Microsoft@0@AEBUhstring@param@0@@Z @ 0x18004F078 (--$get_activation_factory@UIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Microsoft@wi.c)
 *     ?CreateInstance@?$consume_Microsoft_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory@UIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBW4XamlSourceFocusNavigationReason@Hosting@Xaml@UI@Microsoft@3@@Z @ 0x18004F364 (-CreateInstance@-$consume_Microsoft_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory@UIX.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest,winrt::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>::call<_lambda_cdfc71d4e5fb339911b9247de9cec5c2_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  _QWORD v6[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v7[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+10h] BYREF
  __int64 v9; // [rsp+88h] [rbp+28h] BYREF

  v8 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v7,
    L"Microsoft.UI.Xaml.Hosting.XamlSourceFocusNavigationRequest",
    0x3AuLL);
  winrt::get_activation_factory<winrt::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>(&v8, v7);
  if ( v8 && (v9 = 0LL, (**v8)(v8, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v9), (v6[0] = v9) != 0LL) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v6);
    v6[1] = &qword_18098E7E8;
    _InterlockedIncrement64(&qword_18098E7E8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest,winrt::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>,
            (signed __int64)v8,
            0LL) )
    {
      v8 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098E7F0);
    }
    winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory<winrt::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest,winrt::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_18098E7E8);
  }
  else
  {
    winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory<winrt::Microsoft::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>::CreateInstance(
      &v8,
      a2,
      *a3);
  }
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return a2;
}
