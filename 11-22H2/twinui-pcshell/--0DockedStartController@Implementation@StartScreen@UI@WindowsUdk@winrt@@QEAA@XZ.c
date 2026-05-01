/*
 * XREFs of ??0DockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x1801E117C
 * Callers:
 *     ??0CStartExperienceManager@@QEAA@_N@Z @ 0x180135958 (--0CStartExperienceManager@@QEAA@_N@Z.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??$call@AEAV_lambda_801d211dba091c701284f95d6b93acb3_@@@?$factory_cache_entry@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@UIDockedStartControllerFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_801d211dba091c701284f95d6b93acb3_@@@Z @ 0x1801E0F9C (--$call@AEAV_lambda_801d211dba091c701284f95d6b93acb3_@@@-$factory_cache_entry@UDockedStartContro.c)
 *     ??R_lambda_801d211dba091c701284f95d6b93acb3_@@QEBA@AEBUIDockedStartControllerFactory@Implementation@StartScreen@UI@WindowsUdk@winrt@@@Z @ 0x1801E1394 (--R_lambda_801d211dba091c701284f95d6b93acb3_@@QEBA@AEBUIDockedStartControllerFactory@Implementat.c)
 */

// Hidden C++ exception states: #wind=4
winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController *__fastcall winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController::DockedStartController(
        winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController *this)
{
  _QWORD v3[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v4; // [rsp+68h] [rbp+20h] BYREF
  char v5; // [rsp+70h] [rbp+28h] BYREF
  __int64 v6; // [rsp+78h] [rbp+30h] BYREF

  *(_QWORD *)this = 0LL;
  v6 = 0LL;
  v4 = 0LL;
  v3[0] = &v6;
  v3[1] = &v4;
  _InterlockedIncrement64(&qword_18098E228);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController,winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartControllerFactory> )
  {
    _lambda_801d211dba091c701284f95d6b93acb3_::operator()(
      v3,
      &v5,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController,winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartControllerFactory>);
    _InterlockedDecrement64(&qword_18098E228);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E228);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController,winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartControllerFactory>::call<_lambda_801d211dba091c701284f95d6b93acb3_ &>(
      0LL,
      (__int64)&v5,
      (__int64)v3);
  }
  winrt::Windows::Foundation::IUnknown::operator=(this, (winrt::Windows::Foundation::IUnknown *)&v5);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v5);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v4);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v6);
  return this;
}
