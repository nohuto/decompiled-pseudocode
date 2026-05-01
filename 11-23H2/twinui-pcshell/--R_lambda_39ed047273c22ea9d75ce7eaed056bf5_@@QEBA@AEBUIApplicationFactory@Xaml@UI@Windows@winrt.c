/*
 * XREFs of ??R_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Windows@winrt@@@Z @ 0x1800AF150
 * Callers:
 *     ??$call@AEAV_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@@?$factory_cache_entry@UApplication@Xaml@UI@Windows@winrt@@UIApplicationFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@@Z @ 0x18010E7C8 (--$call@AEAV_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@@-$factory_cache_entry@UApplication@Xaml@.c)
 *     ??0?$XamlApplication_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18010EF9C (--0-$XamlApplication_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Window.c)
 * Callees:
 *     ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x1800AD764 (-copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     ?CreateInstance@?$consume_Windows_UI_Xaml_IApplicationFactory@UIApplicationFactory@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x1800AF358 (-CreateInstance@-$consume_Windows_UI_Xaml_IApplicationFactory@UIApplicationFactory@Xaml@UI@Windo.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall _lambda_39ed047273c22ea9d75ce7eaed056bf5_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  struct IUnknown *v5; // rax
  void *v6; // r8
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  _QWORD v8[2]; // [rsp+28h] [rbp-10h] BYREF

  v3 = *a1;
  v4 = v3 + 8;
  v7 = 0LL;
  v5 = (struct IUnknown *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  winrt::copy_from_abi((winrt *)&v7, v5, v6);
  winrt::impl::consume_Windows_UI_Xaml_IApplicationFactory<winrt::Windows::UI::Xaml::IApplicationFactory>::CreateInstance(
    a2,
    v8,
    &v7,
    v4);
  if ( v7 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  if ( v8[0] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v8);
}
