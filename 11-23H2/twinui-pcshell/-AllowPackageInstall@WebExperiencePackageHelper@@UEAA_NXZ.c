/*
 * XREFs of ?AllowPackageInstall@WebExperiencePackageHelper@@UEAA_NXZ @ 0x180238090
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x18023EC74 (-IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x18023F54C (-IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x18023FEAC (-IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 */

bool __fastcall WebExperiencePackageHelper::AllowPackageInstall(WebExperiencePackageHelper *this)
{
  LockScreenWidgetPackageHelperBase *v1; // rcx

  return (*((_DWORD *)this + 2) || LockScreenWidgetPackageHelperBase::IsAutomaticInstallAllowedByPolicy(this))
      && LockScreenWidgetPackageHelperBase::IsPowerSupplyAdequateForInstall(this)
      && LockScreenWidgetPackageHelperBase::IsNetworkAvailableAndNotConstrained(v1);
}
