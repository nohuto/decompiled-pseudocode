/*
 * XREFs of ?AllowInstallInboxedPackage@StartExperiencePackageHelper@@EEAA_NXZ @ 0x180237F50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEdgePackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x18023EDB4 (-IsEdgePackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x18023FEAC (-IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 */

bool __fastcall StartExperiencePackageHelper::AllowInstallInboxedPackage(StartExperiencePackageHelper *this)
{
  LockScreenWidgetPackageHelperBase *v1; // rcx

  return LockScreenWidgetPackageHelperBase::IsEdgePackageInstalled(this)
      && LockScreenWidgetPackageHelperBase::IsPowerSupplyAdequateForInstall(v1);
}
