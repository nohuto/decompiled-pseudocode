/*
 * XREFs of ?IsEdgePackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x18023EDB4
 * Callers:
 *     ?AllowInstallInboxedPackage@StartExperiencePackageHelper@@EEAA_NXZ @ 0x180237F50 (-AllowInstallInboxedPackage@StartExperiencePackageHelper@@EEAA_NXZ.c)
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersion@ApplicationModel@Windows@3@@Z @ 0x18023F764 (-IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersi.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall LockScreenWidgetPackageHelperBase::IsEdgePackageInstalled(LockScreenWidgetPackageHelperBase *this)
{
  char v1; // di
  char v2; // bl
  LockScreenWidgetPackageHelperBase *v3; // rcx
  LockScreenWidgetPackageHelperBase *v4; // rcx
  LockScreenWidgetPackageHelperBase *v5; // rcx
  LockScreenWidgetPackageHelperBase *v6; // rcx
  LockScreenWidgetPackageHelperBase *v7; // rcx
  void *v9; // [rsp+20h] [rbp-20h] BYREF
  void *v10; // [rsp+28h] [rbp-18h] BYREF
  __int64 v11; // [rsp+30h] [rbp-10h] BYREF
  void *v12; // [rsp+68h] [rbp+28h] BYREF
  void *v13; // [rsp+70h] [rbp+30h] BYREF
  void *v14; // [rsp+78h] [rbp+38h] BYREF

  v1 = 0;
  v12 = 0LL;
  winrt::hstring::hstring((winrt::hstring *)&v10, L"Microsoft.MicrosoftEdge.Stable_8wekyb3d8bbwe");
  v2 = 1;
  if ( LockScreenWidgetPackageHelperBase::IsPackageInstalled(
         v3,
         (const struct winrt::hstring *)&v10,
         (const struct winrt::Windows::ApplicationModel::PackageVersion *)&v12) )
  {
    goto LABEL_6;
  }
  v12 = 0LL;
  winrt::hstring::hstring((winrt::hstring *)&v9, L"Microsoft.MicrosoftEdge.Canary_8wekyb3d8bbwe");
  v2 = 3;
  if ( LockScreenWidgetPackageHelperBase::IsPackageInstalled(
         v4,
         (const struct winrt::hstring *)&v9,
         (const struct winrt::Windows::ApplicationModel::PackageVersion *)&v12) )
  {
    goto LABEL_6;
  }
  v12 = 0LL;
  winrt::hstring::hstring((winrt::hstring *)&v14, L"Microsoft.MicrosoftEdge.Dev_8wekyb3d8bbwe");
  v2 = 7;
  if ( LockScreenWidgetPackageHelperBase::IsPackageInstalled(
         v5,
         (const struct winrt::hstring *)&v14,
         (const struct winrt::Windows::ApplicationModel::PackageVersion *)&v12)
    || (v12 = 0LL,
        winrt::hstring::hstring((winrt::hstring *)&v13, L"Microsoft.MicrosoftEdge.Beta_8wekyb3d8bbwe"),
        v2 = 15,
        LockScreenWidgetPackageHelperBase::IsPackageInstalled(
          v6,
          (const struct winrt::hstring *)&v13,
          (const struct winrt::Windows::ApplicationModel::PackageVersion *)&v12))
    || (v11 = 0LL,
        winrt::hstring::hstring((winrt::hstring *)&v12, L"Microsoft.MicrosoftEdge.Internal_8wekyb3d8bbwe"),
        v2 = 31,
        LockScreenWidgetPackageHelperBase::IsPackageInstalled(
          v7,
          (const struct winrt::hstring *)&v12,
          (const struct winrt::Windows::ApplicationModel::PackageVersion *)&v11)) )
  {
LABEL_6:
    v1 = 1;
  }
  if ( (v2 & 0x10) != 0 )
  {
    v2 &= ~0x10u;
    winrt::hstring::~hstring(&v12);
  }
  if ( (v2 & 8) != 0 )
  {
    v2 &= ~8u;
    winrt::hstring::~hstring(&v13);
  }
  if ( (v2 & 4) != 0 )
  {
    v2 &= ~4u;
    winrt::hstring::~hstring(&v14);
  }
  if ( (v2 & 2) != 0 )
  {
    v2 &= ~2u;
    winrt::hstring::~hstring(&v9);
  }
  if ( (v2 & 1) != 0 )
    winrt::hstring::~hstring(&v10);
  return v1;
}
