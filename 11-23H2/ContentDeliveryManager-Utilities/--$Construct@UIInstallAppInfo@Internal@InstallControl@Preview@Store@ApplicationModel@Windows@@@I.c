/*
 * XREFs of ??$Construct@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@PEAU2345678@@Z @ 0x18007AA98
 * Callers:
 *     ??$?0PEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@?$AutoValue@PEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@@XWinRT@@QEAA@AEBQEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@PEAJ@Z @ 0x180079CB8 (--$-0PEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@-$Auto.c)
 *     ?GetAt@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@@Z @ 0x18007FEE0 (-GetAt@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Window.c)
 *     ?GetMany@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@PEAI@Z @ 0x180081410 (-GetMany@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Wind.c)
 *     ?IndexOf@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@PEAIPEAE@Z @ 0x180081C70 (-IndexOf@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Wind.c)
 *     ?ReplaceAll@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@@Z @ 0x1800838C0 (-ReplaceAll@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@W.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::InterfaceLifetimeTraits::Construct<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return 0LL;
}
