/*
 * XREFs of ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@QEAA_NXZ @ 0x18023FA40
 * Callers:
 *     ?AllowPackageInstall@StartExperiencePackageHelper@@UEAA_NXZ @ 0x180237FA0 (-AllowPackageInstall@StartExperiencePackageHelper@@UEAA_NXZ.c)
 *     ?AllowPackageInstall@WidgetPlatformPackageHelper@@UEAA_NXZ @ 0x1802380D0 (-AllowPackageInstall@WidgetPlatformPackageHelper@@UEAA_NXZ.c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x18023DCE0 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x180242400 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_180242400.c)
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800DC364 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersion@ApplicationModel@Windows@3@@Z @ 0x18023F764 (-IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersi.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall LockScreenWidgetPackageHelperBase::IsPackageInstalled(
        LockScreenWidgetPackageHelperBase *this,
        __int64 a2,
        unsigned int a3)
{
  LockScreenWidgetPackageHelperBase *v3; // rbx
  const struct winrt::hstring *v4; // rax
  LockScreenWidgetPackageHelperBase *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  v4 = (const struct winrt::hstring *)winrt::hstring::hstring(&v7, (__int64)this + 32, a3);
  LOBYTE(v3) = LockScreenWidgetPackageHelperBase::IsPackageInstalled(
                 v5,
                 v4,
                 (LockScreenWidgetPackageHelperBase *)((char *)v3 + 80));
  winrt::hstring::~hstring(&v7);
  return (char)v3;
}
