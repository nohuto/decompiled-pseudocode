/*
 * XREFs of ?IsAppxInstallSupported@?$consume_Windows_Management_Deployment_IPackageVolume2@UPackageVolume@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18023EBE0
 * Callers:
 *     LockScreenWidgetPackageHelperBase::IsPackageVolumeSupportedForInstallAsync$_ResumeCoro$1 @ 0x18023FBD0 (LockScreenWidgetPackageHelperBase--IsPackageVolumeSupportedForInstallAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::consume_Windows_Management_Deployment_IPackageVolume2<winrt::Windows::Management::Deployment::PackageVolume>::IsAppxInstallSupported(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  char v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v1 = *a1;
  if ( v1 )
  {
    v5 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v1)(
      v1,
      &winrt::impl::guid_v<winrt::Windows::Management::Deployment::IPackageVolume2>,
      &v5);
    v1 = v5;
  }
  v6 = v1;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 56LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult((unsigned int)v2);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v6);
  return v4;
}
