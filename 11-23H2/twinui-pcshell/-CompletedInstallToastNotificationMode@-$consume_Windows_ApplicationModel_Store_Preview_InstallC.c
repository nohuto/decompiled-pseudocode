/*
 * XREFs of ?CompletedInstallToastNotificationMode@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem5@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@AEBW4AppInstallationToastNotificationMode@InstallControl@Preview@Store@ApplicationModel@Windows@3@@Z @ 0x180238858
 * Callers:
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x180245160 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem5<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::CompletedInstallToastNotificationMode(
        __int64 *a1,
        unsigned int *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a1;
  if ( v3 )
  {
    v5 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v3)(
      v3,
      &winrt::impl::guid_v<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem5>,
      &v5);
    v3 = v5;
  }
  v6 = v3;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 104LL))(v3, *a2);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v6);
}
