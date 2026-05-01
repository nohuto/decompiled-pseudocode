/*
 * XREFs of ??$call@AEAV_lambda_403c633736a1bddadba4817f5f4a752e_@@@?$factory_cache_entry@UApplication@Xaml@UI@Microsoft@winrt@@UIApplicationFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_403c633736a1bddadba4817f5f4a752e_@@@Z @ 0x18002DDE0
 * Callers:
 *     ??0?$XamlApplication_WASDK_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002EF68 (--0-$XamlApplication_WASDK_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@She.c)
 * Callees:
 *     ??$get_activation_factory@UIApplicationFactory@Xaml@UI@Microsoft@winrt@@@winrt@@YA?AUIApplicationFactory@Xaml@UI@Microsoft@0@AEBUhstring@param@0@@Z @ 0x18002E074 (--$get_activation_factory@UIApplicationFactory@Xaml@UI@Microsoft@winrt@@@winrt@@YA-AUIApplicatio.c)
 *     ??R_lambda_403c633736a1bddadba4817f5f4a752e_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Microsoft@winrt@@@Z @ 0x18002E0E0 (--R_lambda_403c633736a1bddadba4817f5f4a752e_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Microsoft@win.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Xaml::Application,winrt::Microsoft::UI::Xaml::IApplicationFactory>::call<_lambda_403c633736a1bddadba4817f5f4a752e_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2)
{
  _BYTE v3[40]; // [rsp+28h] [rbp-28h] BYREF
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // [rsp+60h] [rbp+10h] BYREF
  __int64 v5; // [rsp+70h] [rbp+20h] BYREF
  __int64 v6; // [rsp+78h] [rbp+28h] BYREF

  v4 = a1;
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v3, L"Microsoft.UI.Xaml.Application", 0x1DuLL);
  winrt::get_activation_factory<winrt::Microsoft::UI::Xaml::IApplicationFactory>(&v4, v3);
  if ( v4 && (v5 = 0LL, (**v4)(v4, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v5), (v6 = v5) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v6);
    _InterlockedIncrement64(&qword_18098E768);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Application,winrt::Microsoft::UI::Xaml::IApplicationFactory>,
            (signed __int64)v4,
            0LL) )
    {
      v4 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098E770);
    }
    _lambda_403c633736a1bddadba4817f5f4a752e_::operator()(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Application,winrt::Microsoft::UI::Xaml::IApplicationFactory>);
    _InterlockedDecrement64(&qword_18098E768);
  }
  else
  {
    _lambda_403c633736a1bddadba4817f5f4a752e_::operator()(a2, &v4);
  }
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
}
