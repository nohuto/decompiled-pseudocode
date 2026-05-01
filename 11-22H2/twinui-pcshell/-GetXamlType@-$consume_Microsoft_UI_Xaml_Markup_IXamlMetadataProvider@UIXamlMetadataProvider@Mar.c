/*
 * XREFs of ?GetXamlType@?$consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBUTypeName@Interop@Xaml@UI@Windows@3@@Z @ 0x180046994
 * Callers:
 *     ?GetXamlType@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUIXamlType@Markup@Xaml@UI@Microsoft@8@AEBUTypeName@Interop@Xaml@UI@78@@Z @ 0x1800468B4 (-GetXamlType@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Inte_ea_1800468B4.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider>::GetXamlType(
        __int64 **a1,
        _QWORD *a2,
        __int128 *a3)
{
  __int64 *v4; // rcx
  __int128 v5; // xmm0
  __int64 v6; // rax
  int v7; // eax
  _QWORD *result; // rax
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v10; // [rsp+40h] [rbp-18h] BYREF

  v10 = a2;
  v4 = *a1;
  v5 = *a3;
  v10 = 0LL;
  v6 = *v4;
  v9 = v5;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD **))(v6 + 48))(v4, &v9, &v10);
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7);
  result = a2;
  *a2 = v10;
  return result;
}
