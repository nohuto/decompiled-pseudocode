/*
 * XREFs of ?CreateInstance@?$consume_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory@UIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AUXamlSourceFocusNavigationRequest@Hosting@Xaml@UI@Windows@3@AEBW4XamlSourceFocusNavigationReason@56783@@Z @ 0x180422D6C
 * Callers:
 *     ??$call@AEAV_lambda_3207e8c3a392af88c709c9f0a8afe0f7_@@@?$factory_cache_entry@UXamlSourceFocusNavigationRequest@Hosting@Xaml@UI@Windows@winrt@@UIXamlSourceFocusNavigationRequestFactory@23456@@impl@winrt@@QEAA?AUXamlSourceFocusNavigationRequest@Hosting@Xaml@UI@Windows@2@AEAV_lambda_3207e8c3a392af88c709c9f0a8afe0f7_@@@Z @ 0x180422600 (--$call@AEAV_lambda_3207e8c3a392af88c709c9f0a8afe0f7_@@@-$factory_cache_entry@UXamlSourceFocusNa.c)
 *     ?SetFocus@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x1804231A8 (-SetFocus@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@win.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory<winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>::CreateInstance(
        __int64 *a1,
        _QWORD *a2,
        unsigned int *a3)
{
  __int64 v3; // rcx
  signed int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *a2 = v7;
  return a2;
}
