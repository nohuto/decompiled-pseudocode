/*
 * XREFs of ??$call@AEAV_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@@?$factory_cache_entry@UApplication@Xaml@UI@Windows@winrt@@UIApplicationFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@@Z @ 0x18010E7C8
 * Callers:
 *     ??0?$XamlApplication_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18010EF9C (--0-$XamlApplication_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Window.c)
 * Callees:
 *     ??R_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Windows@winrt@@@Z @ 0x1800AF150 (--R_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Windows@winrt.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$get_activation_factory@UIApplicationFactory@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIApplicationFactory@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x18010E8C0 (--$get_activation_factory@UIApplicationFactory@Xaml@UI@Windows@winrt@@@winrt@@YA-AUIApplicationF.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Application,winrt::Windows::UI::Xaml::IApplicationFactory>::call<_lambda_39ed047273c22ea9d75ce7eaed056bf5_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 *a2)
{
  _BYTE v3[40]; // [rsp+28h] [rbp-28h] BYREF
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // [rsp+60h] [rbp+10h] BYREF
  __int64 v5; // [rsp+70h] [rbp+20h] BYREF
  __int64 v6; // [rsp+78h] [rbp+28h] BYREF

  v4 = a1;
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v3, L"Windows.UI.Xaml.Application", 27);
  winrt::get_activation_factory<winrt::Windows::UI::Xaml::IApplicationFactory>(&v4, v3);
  if ( v4 && (v5 = 0LL, (**v4)(v4, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v5), (v6 = v5) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v6);
    _InterlockedIncrement64(&qword_18098E6E8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Application,winrt::Windows::UI::Xaml::IApplicationFactory>,
            (signed __int64)v4,
            0LL) )
    {
      v4 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098E6F0);
    }
    _lambda_39ed047273c22ea9d75ce7eaed056bf5_::operator()(
      a2,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Application,winrt::Windows::UI::Xaml::IApplicationFactory>);
    _InterlockedDecrement64(&qword_18098E6E8);
  }
  else
  {
    _lambda_39ed047273c22ea9d75ce7eaed056bf5_::operator()(a2, (__int64)&v4);
  }
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
}
