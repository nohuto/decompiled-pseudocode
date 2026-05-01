/*
 * XREFs of ?Id@?$consume_Windows_ApplicationModel_IPackage@UIPackage@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18019F7F8
 * Callers:
 *     _lambda_b77cff33db7c166167279fbdb5843ce7_::operator() @ 0x1800D63E0 (_lambda_b77cff33db7c166167279fbdb5843ce7_--operator().c)
 *     ?GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@IEAA?AUPackageVersion@ApplicationModel@Windows@winrt@@AEBUhstring@5@@Z @ 0x18023C340 (-GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@IEAA-AUPackageVersion@Application.c)
 *     ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersion@ApplicationModel@Windows@3@@Z @ 0x18023F764 (-IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersi.c)
 *     _anonymous_namespace_::RepairWebExperiencePackage$_ResumeCoro$1 @ 0x180241670 (_anonymous_namespace_--RepairWebExperiencePackage$_ResumeCoro$1.c)
 *     _lambda_2da415b89f76c27a0f54e8c02bb30f50_::operator() @ 0x1802584D8 (_lambda_2da415b89f76c27a0f54e8c02bb30f50_--operator().c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1804682C8 (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     _anonymous_namespace_::GetPackageVersionString @ 0x18069697C (_anonymous_namespace_--GetPackageVersionString.c)
 *     ?HandlePackageInstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageInstallingEventArgs@856@@Z @ 0x1806F3700 (-HandlePackageInstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXU.c)
 *     ?HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUninstallingEventArgs@856@@Z @ 0x1806F3900 (-HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 *     ?HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUpdatingEventArgs@856@@Z @ 0x1806F3C20 (-HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUP.c)
 *     ?ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPackageId@ApplicationModel@56@@Z @ 0x1806F5CE0 (-ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPa.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_ApplicationModel_IPackage<winrt::Windows::ApplicationModel::IPackage>::Id(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = v6;
  return a2;
}
