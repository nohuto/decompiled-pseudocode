/*
 * XREFs of ?XamlMetadataProvider@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensions@UIXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18010E310
 * Callers:
 *     ?LoadMetadata@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18010DF78 (-LoadMetadata@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensions<winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensions>::XamlMetadataProvider(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  _QWORD *result; // rax
  _QWORD *v6; // [rsp+28h] [rbp-20h] BYREF

  v6 = a2;
  v3 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v3 + 72LL))(v3, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  result = a2;
  *a2 = v6;
  return result;
}
