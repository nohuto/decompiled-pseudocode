/*
 * XREFs of _lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_::_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8__0 @ 0x18019B480
 * Callers:
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x18019D74C (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 * Callees:
 *     ??0UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelemetry@@QEAA@AEBV01@@Z @ 0x180071680 (--0UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelemetry@@QEAA@A.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800F2C90 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z @ 0x180143304 (--0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1801492F0 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_::_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8__0(
        __int64 a1,
        const struct SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *a2,
        winrt::impl **a3,
        _BYTE *a4,
        struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *a5,
        _BYTE *a6,
        __int64 *a7,
        __int64 a8)
{
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::UndockedSearchAppExperienceManager_ActivateSearch(
    (SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *)a1,
    a2);
  winrt::hstring::hstring((winrt::hstring *)(a1 + 320), a3);
  *(_BYTE *)(a1 + 328) = *a4;
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(
    (winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)(a1 + 336),
    a5);
  *(_BYTE *)(a1 + 344) = *a6;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
    (__int64 *)(a1 + 352),
    a7);
  *(_QWORD *)(a1 + 360) = a8;
  return a1;
}
