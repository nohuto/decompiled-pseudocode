/*
 * XREFs of ?GetXamlType@?$consume_Windows_UI_Xaml_Markup_IXamlMetadataProvider@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUTypeName@Interop@Xaml@UI@Windows@3@@Z @ 0x18018723C
 * Callers:
 *     ?GetXamlType@?$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@67@@impl@winrt@@UEAAHUstruct_Windows_UI_Xaml_Interop_TypeName@23@PEAPEAX@Z @ 0x1801871F0 (-GetXamlType@-$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@w.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Xaml_Markup_IXamlMetadataProvider<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>::GetXamlType(
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
