/*
 * XREFs of ?AddPackageAsync@?$consume_Windows_Management_Deployment_IPackageManager3@UPackageManager@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA@AEBUUri@Foundation@Windows@3@AEBU?$async_iterable@UUri@Foundation@Windows@winrt@@@param@3@AEBW4DeploymentOptions@Deployment@Management@63@AEBUPackageVolume@Deployment@Management@63@@Z @ 0x180237D2C
 * Callers:
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x18023DCE0 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Management_Deployment_IPackageManager3<winrt::Windows::Management::Deployment::PackageManager>::AddPackageAsync(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int *a5,
        _QWORD *a6)
{
  __int64 v9; // rcx
  int v10; // eax
  __int64 v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+80h] [rbp+18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  v14 = 0LL;
  v9 = *a1;
  if ( v9 )
  {
    v12 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v9)(
      v9,
      &winrt::impl::guid_v<winrt::Windows::Management::Deployment::IPackageManager3>,
      &v12);
    v9 = v12;
  }
  v13 = v9;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v9 + 56LL))(
          v9,
          *a3,
          *a4,
          *a5,
          *a6,
          &v14);
  if ( v10 < 0 )
    winrt::throw_hresult((unsigned int)v10);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v13);
  *a2 = v14;
  return a2;
}
