/*
 * XREFs of ??$?0PEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@?$AutoValue@PEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@@XWinRT@@QEAA@AEBQEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@PEAJ@Z @ 0x180079CB8
 * Callers:
 *     ?InsertAtInternal@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@_N@Z @ 0x1800822BC (-InsertAtInternal@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationM.c)
 *     ?SetAt@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIInstallAppInfo@2InstallControl@Preview@Store@ApplicationModel@5@@Z @ 0x180083E50 (-SetAt@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Window.c)
 * Callees:
 *     ??$Construct@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@PEAU2345678@@Z @ 0x18007AA98 (--$Construct@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@I.c)
 */

_QWORD *__fastcall XWinRT::AutoValue<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::AutoValue<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>(
        _QWORD *a1,
        _QWORD *a2,
        int *a3)
{
  int v5; // eax

  v5 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo>(
         a1,
         *a2);
  *a3 = v5;
  if ( v5 < 0 )
    *a1 = 0LL;
  return a1;
}
