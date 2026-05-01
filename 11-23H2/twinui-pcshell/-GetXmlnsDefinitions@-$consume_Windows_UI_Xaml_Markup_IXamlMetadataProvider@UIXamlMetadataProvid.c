/*
 * XREFs of ?GetXmlnsDefinitions@?$consume_Windows_UI_Xaml_Markup_IXamlMetadataProvider@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804F58D8
 * Callers:
 *     ?GetXmlnsDefinitions@?$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@67@@impl@winrt@@UEAAHPEAIPEAPEAUstruct_Windows_UI_Xaml_Markup_XmlnsDefinition@23@@Z @ 0x1804F5960 (-GetXmlnsDefinitions@-$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@W.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_UI_Xaml_Markup_IXamlMetadataProvider<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>::GetXmlnsDefinitions(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  signed int v4; // eax
  __int64 result; // rax
  int v6; // [rsp+24h] [rbp-24h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF

  v7 = a2;
  v3 = *a1;
  v6 = 0;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)v3 + 64LL))(v3, &v6, &v7);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  result = a2;
  *(_QWORD *)a2 = v7;
  *(_DWORD *)(a2 + 8) = v6;
  return result;
}
