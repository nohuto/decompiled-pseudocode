/*
 * XREFs of _lambda_ccf65d9649214ffd774f2e628ae5cb52_::_lambda_ccf65d9649214ffd774f2e628ae5cb52_ @ 0x18019B34C
 * Callers:
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x18019D74C (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 * Callees:
 *     ??0UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelemetry@@QEAA@AEBV01@@Z @ 0x180071680 (--0UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelemetry@@QEAA@A.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800F2C90 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z @ 0x180143304 (--0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall lambda_ccf65d9649214ffd774f2e628ae5cb52_::_lambda_ccf65d9649214ffd774f2e628ae5cb52_(
        _BYTE *a1,
        const struct SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *a2,
        winrt::impl **a3,
        _BYTE *a4,
        struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *a5,
        _BYTE *a6)
{
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::UndockedSearchAppExperienceManager_ActivateSearch(
    (SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *)a1,
    a2);
  winrt::hstring::hstring((winrt::hstring *)(a1 + 320), a3);
  a1[328] = *a4;
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(
    (winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)(a1 + 336),
    a5);
  a1[344] = *a6;
  return a1;
}
