/*
 * XREFs of ?FindAssetReferencePath@?$consume_WindowsUdk_Management_Deployment_IPackageManagerStatics@UIPackageManagerStatics@Deployment@Management@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUhstring@3@AEBU4param@3@@Z @ 0x1800FBFC4
 * Callers:
 *     ??0MiniSearchAppPositionerConfig@@QEAA@PEAUIServiceProvider@@@Z @ 0x18005F0CC (--0MiniSearchAppPositionerConfig@@QEAA@PEAUIServiceProvider@@@Z.c)
 *     ??$call@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@?$factory_cache_entry@UPackageManager@Deployment@Management@WindowsUdk@winrt@@UIPackageManagerStatics@2345@@impl@winrt@@QEAA?AUhstring@2@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@Z @ 0x180067020 (--$call@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@-$factory_cache_entry@UPackageManager@De.c)
 *     ?InitUserConfig@Theming@@YAXXZ @ 0x1800FBDD8 (-InitUserConfig@Theming@@YAXXZ.c)
 *     ?InitUserConfig_B@Theming@@YAXXZ @ 0x1801198E8 (-InitUserConfig_B@Theming@@YAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_Management_Deployment_IPackageManagerStatics<winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>::FindAssetReferencePath(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  *a2 = v7;
  return a2;
}
