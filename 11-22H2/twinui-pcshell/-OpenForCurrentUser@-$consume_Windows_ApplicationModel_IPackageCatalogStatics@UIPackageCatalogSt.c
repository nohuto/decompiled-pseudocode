/*
 * XREFs of ?OpenForCurrentUser@?$consume_Windows_ApplicationModel_IPackageCatalogStatics@UIPackageCatalogStatics@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180089C48
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_a02d817213a1872483990d5857a507da_@@CA@AEBUIPackageCatalogStatics@ApplicationModel@Windows@winrt@@@Z @ 0x180089C20 (-_lambda_invoker_cdecl_@_lambda_a02d817213a1872483990d5857a507da_@@CA@AEBUIPackageCatalogStatics.c)
 *     ?subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800A3070 (-subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPE.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_ApplicationModel_IPackageCatalogStatics<winrt::Windows::ApplicationModel::IPackageCatalogStatics>::OpenForCurrentUser(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 56LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = v6;
  return a2;
}
