/*
 * XREFs of ?IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x18023FEAC
 * Callers:
 *     ?AllowInstallInboxedPackage@StartExperiencePackageHelper@@EEAA_NXZ @ 0x180237F50 (-AllowInstallInboxedPackage@StartExperiencePackageHelper@@EEAA_NXZ.c)
 *     ?AllowInstallInboxedPackage@WidgetPlatformPackageHelper@@EEAA_NXZ @ 0x180237F80 (-AllowInstallInboxedPackage@WidgetPlatformPackageHelper@@EEAA_NXZ.c)
 *     ?AllowPackageInstall@StartExperiencePackageHelper@@UEAA_NXZ @ 0x180237FA0 (-AllowPackageInstall@StartExperiencePackageHelper@@UEAA_NXZ.c)
 *     ?AllowPackageInstall@WebExperiencePackageHelper@@UEAA_NXZ @ 0x180238090 (-AllowPackageInstall@WebExperiencePackageHelper@@UEAA_NXZ.c)
 *     ?AllowPackageInstall@WidgetPlatformPackageHelper@@UEAA_NXZ @ 0x1802380D0 (-AllowPackageInstall@WidgetPlatformPackageHelper@@UEAA_NXZ.c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x18023DCE0 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x180245160 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$call_factory_cast@P6A?AW4PowerSupplyStatus@Power@System@Windows@winrt@@AEBUIPowerManagerStatics@2345@@ZUPowerManager@2345@U62345@V_lambda_d6f5de8facc06583c35b6799ac4a0daa_@@@impl@winrt@@YA?A_P$$QEAV_lambda_d6f5de8facc06583c35b6799ac4a0daa_@@@Z @ 0x18022FE28 (--$call_factory_cast@P6A-AW4PowerSupplyStatus@Power@System@Windows@winrt@@AEBUIPowerManagerStati.c)
 */

bool __fastcall LockScreenWidgetPackageHelperBase::IsPowerSupplyAdequateForInstall(
        LockScreenWidgetPackageHelperBase *this)
{
  return (unsigned int)winrt::impl::call_factory_cast<enum winrt::Windows::System::Power::PowerSupplyStatus (*)(winrt::Windows::System::Power::IPowerManagerStatics const &),winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics,_lambda_d6f5de8facc06583c35b6799ac4a0daa_>() == 2;
}
