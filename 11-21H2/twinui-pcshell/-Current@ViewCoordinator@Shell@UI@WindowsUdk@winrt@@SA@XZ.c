/*
 * XREFs of ?Current@ViewCoordinator@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x18017FC74
 * Callers:
 *     ?RegisterViewCoordinatorEventsInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801A0208 (-RegisterViewCoordinatorEventsInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?RequestSearchAppToHideInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801A0710 (-RequestSearchAppToHideInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Current@?$consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics@UIViewCoordinatorStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUViewCoordinator@Shell@UI@WindowsUdk@3@XZ @ 0x180033B28 (-Current@-$consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics@UIViewCoordinatorStatics@Shell@UI.c)
 *     ??$call@P6A?AUViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBUIViewCoordinatorStatics@2345@@Z@?$factory_cache_entry@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIViewCoordinatorStatics@2345@@impl@winrt@@QEAA?AUViewCoordinator@Shell@UI@WindowsUdk@2@$$QEAP6A?AU34562@AEBUIViewCoordinatorStatics@4562@@Z@Z @ 0x18005508C (--$call@P6A-AUViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBUIViewCoordinatorStatics@2345@@Z@-$f.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::WindowsUdk::UI::Shell::ViewCoordinator::Current(_QWORD *a1)
{
  __int64 (__fastcall *v3)(__int64, __int64); // [rsp+38h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_1807B3EF8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics> )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics<winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>::Current(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>,
      a1);
    _InterlockedDecrement64(&qword_1807B3EF8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B3EF8);
    v3 = _lambda_80fc32ba40679525b9bdda7c054c7fb2_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>::call<winrt::WindowsUdk::UI::Shell::ViewCoordinator (*)(winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
