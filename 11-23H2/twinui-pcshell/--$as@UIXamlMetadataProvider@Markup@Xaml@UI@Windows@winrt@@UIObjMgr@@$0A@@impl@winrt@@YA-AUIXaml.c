/*
 * XREFs of ??$as@UIXamlMetadataProvider@Markup@Xaml@UI@Windows@winrt@@UIObjMgr@@$0A@@impl@winrt@@YA?AUIXamlMetadataProvider@Markup@Xaml@UI@Windows@1@PEAUIObjMgr@@@Z @ 0x18010E404
 * Callers:
 *     ?LoadMetadata@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18010DF78 (-LoadMetadata@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,IObjMgr,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, _QWORD **))
{
  int v3; // eax
  _QWORD *v5; // [rsp+28h] [rbp-20h] BYREF

  v5 = a1;
  if ( a2 )
  {
    v5 = 0LL;
    v3 = (**a2)(a2, &winrt::impl::guid_v<winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>, &v5);
    if ( v3 < 0 )
      winrt::throw_hresult((unsigned int)v3);
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
