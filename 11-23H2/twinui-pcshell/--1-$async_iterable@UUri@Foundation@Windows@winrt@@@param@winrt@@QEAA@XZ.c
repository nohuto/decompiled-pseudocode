/*
 * XREFs of ??1?$async_iterable@UUri@Foundation@Windows@winrt@@@param@winrt@@QEAA@XZ @ 0x180235010
 * Callers:
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x18023DCE0 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 *     _LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1_::_1_::dtor$12 @ 0x18023E575 (_LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1_--_1_--dtor$12.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::param::async_iterable<winrt::Windows::Foundation::Uri>::~async_iterable<winrt::Windows::Foundation::Uri>(
        winrt::Windows::Foundation::IUnknown *a1)
{
  if ( !*((_BYTE *)a1 + 8) )
    *(_QWORD *)a1 = 0LL;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a1);
}
