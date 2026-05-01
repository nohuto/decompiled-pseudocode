/*
 * XREFs of ?GetForCategory@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensionsStatics2@UIXamlExtensionsStatics2@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18068F5E4
 * Callers:
 *     ??$call@AEAV_lambda_88cd0196bed0f4158967f5db888f1fee_@@@?$factory_cache_entry@UXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIXamlExtensionsStatics2@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_88cd0196bed0f4158967f5db888f1fee_@@@Z @ 0x18068D7A0 (--$call@AEAV_lambda_88cd0196bed0f4158967f5db888f1fee_@@@-$factory_cache_entry@UXamlExtensions@Ap.c)
 *     ??R_lambda_88cd0196bed0f4158967f5db888f1fee_@@QEBA@AEBUIXamlExtensionsStatics2@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Z @ 0x18068E9F0 (--R_lambda_88cd0196bed0f4158967f5db888f1fee_@@QEBA@AEBUIXamlExtensionsStatics2@AppExtensions@App.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IXamlExtensionsStatics2<winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics2>::GetForCategory(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  signed int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *a2 = v7;
  return a2;
}
