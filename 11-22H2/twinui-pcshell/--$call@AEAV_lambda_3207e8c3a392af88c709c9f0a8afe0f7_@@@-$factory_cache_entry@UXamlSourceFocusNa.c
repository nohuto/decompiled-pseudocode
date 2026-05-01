/*
 * XREFs of ??$call@AEAV_lambda_3207e8c3a392af88c709c9f0a8afe0f7_@@@?$factory_cache_entry@UXamlSourceFocusNavigationRequest@Hosting@Xaml@UI@Windows@winrt@@UIXamlSourceFocusNavigationRequestFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_3207e8c3a392af88c709c9f0a8afe0f7_@@@Z @ 0x1804F6F14
 * Callers:
 *     ?SetFocus@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x1804F7D98 (-SetFocus@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@win.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1804F704C (--$get_activation_factory@UIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Windows@winr.c)
 *     ?CreateInstance@?$consume_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory@UIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBW4XamlSourceFocusNavigationReason@Hosting@Xaml@UI@Windows@3@@Z @ 0x1804F7784 (-CreateInstance@-$consume_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory@UIXam.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest,winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>::call<_lambda_3207e8c3a392af88c709c9f0a8afe0f7_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v7[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+10h] BYREF
  __int64 v9; // [rsp+88h] [rbp+28h] BYREF

  v8 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v7,
    L"Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationRequest",
    56);
  winrt::get_activation_factory<winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>(&v8, v7);
  if ( v8 && (v9 = 0LL, (**v8)(v8, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v9), (v6[0] = v9) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_180991748;
    _InterlockedIncrement64(&qword_180991748);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest,winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>,
            (signed __int64)v8,
            0LL) )
    {
      v8 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180991750);
    }
    winrt::impl::consume_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory<winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationRequest,winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_180991748);
  }
  else
  {
    winrt::impl::consume_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory<winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>::CreateInstance(
      &v8,
      a2,
      *a3);
  }
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return a2;
}
