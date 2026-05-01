/*
 * XREFs of ?CreateInstance@?$consume_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory@UIXamlSourceFocusNavigationRequestFactory@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBW4XamlSourceFocusNavigationReason@Hosting@Xaml@UI@Windows@3@@Z @ 0x1804F7784
 * Callers:
 *     ??$call@AEAV_lambda_3207e8c3a392af88c709c9f0a8afe0f7_@@@?$factory_cache_entry@UXamlSourceFocusNavigationRequest@Hosting@Xaml@UI@Windows@winrt@@UIXamlSourceFocusNavigationRequestFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_3207e8c3a392af88c709c9f0a8afe0f7_@@@Z @ 0x1804F6F14 (--$call@AEAV_lambda_3207e8c3a392af88c709c9f0a8afe0f7_@@@-$factory_cache_entry@UXamlSourceFocusNa.c)
 *     ?SetFocus@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x1804F7D98 (-SetFocus@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@win.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory<winrt::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory>::CreateInstance(
        __int64 *a1,
        _QWORD *a2,
        unsigned int *a3)
{
  __int64 v3; // rcx
  signed int v5; // eax
  _QWORD *result; // rax
  _QWORD *v7; // [rsp+28h] [rbp-20h] BYREF

  v7 = a2;
  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v3 + 48LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  result = a2;
  *a2 = v7;
  return result;
}
