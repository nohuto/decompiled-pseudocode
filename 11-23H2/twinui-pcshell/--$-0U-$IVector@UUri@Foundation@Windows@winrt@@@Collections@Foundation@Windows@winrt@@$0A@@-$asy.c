/*
 * XREFs of ??$?0U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@?$async_iterable@UUri@Foundation@Windows@winrt@@@param@winrt@@QEAA@AEBU?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@2@@Z @ 0x18022E558
 * Callers:
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x18023DCE0 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::param::async_iterable<winrt::Windows::Foundation::Uri>::async_iterable<winrt::Windows::Foundation::Uri>(
        winrt::Windows::Foundation::IUnknown *a1,
        void (__fastcall ****a2)(_QWORD, void *, __int64 *))
{
  __int64 v2; // rax
  void (__fastcall ***v4)(_QWORD, void *, __int64 *); // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  *((_BYTE *)a1 + 8) = 1;
  *(_QWORD *)a1 = 0LL;
  v4 = *a2;
  if ( *a2 )
  {
    v7 = 0LL;
    (**v4)(
      v4,
      &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri>>,
      &v7);
    v2 = v7;
  }
  v6 = v2;
  winrt::Windows::Foundation::IUnknown::operator=(a1, (winrt::Windows::Foundation::IUnknown *)&v6);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v6);
  return a1;
}
