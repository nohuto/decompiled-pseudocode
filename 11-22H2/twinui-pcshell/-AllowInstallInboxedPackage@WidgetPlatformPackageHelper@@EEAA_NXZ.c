/*
 * XREFs of ?AllowInstallInboxedPackage@WidgetPlatformPackageHelper@@EEAA_NXZ @ 0x180237F80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x18023FEAC (-IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 */

bool __fastcall WidgetPlatformPackageHelper::AllowInstallInboxedPackage(WidgetPlatformPackageHelper *this)
{
  return LockScreenWidgetPackageHelperBase::IsPowerSupplyAdequateForInstall(this);
}
