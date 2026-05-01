/*
 * XREFs of ?Current@TaskbarLayout@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1800F9C44
 * Callers:
 *     ?GetTaskbarLayout@CUndockedSearchAppExperienceManagerConfig@@UEAA?AUTaskbarLayout@Shell@UI@WindowsUdk@winrt@@XZ @ 0x18019EEA0 (-GetTaskbarLayout@CUndockedSearchAppExperienceManagerConfig@@UEAA-AUTaskbarLayout@Shell@UI@Windo.c)
 *     ?ExtractMonitorInfo@SearchAppPositionerHelpers@@YA?AUMonitorInfo@@AEBUtagRECT@@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Z @ 0x1801A4914 (-ExtractMonitorInfo@SearchAppPositionerHelpers@@YA-AUMonitorInfo@@AEBUtagRECT@@V-$ComPtr@UIServi.c)
 *     ?CalculateMACFlyoutPosition@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$pair@URect@Foundation@Windows@winrt@@W4TaskbarLocation@Shell@UI@WindowsUdk@4@@std@@PEAUHWND__@@QEAU9@@Z @ 0x1801D0F48 (-CalculateMACFlyoutPosition@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ??$call@P6A?AUTaskbarLayout@Shell@UI@WindowsUdk@winrt@@AEBUITaskbarLayoutStatics@2345@@Z@?$factory_cache_entry@UTaskbarLayout@Shell@UI@WindowsUdk@winrt@@UITaskbarLayoutStatics@2345@@impl@winrt@@QEAA?AUTaskbarLayout@Shell@UI@WindowsUdk@2@$$QEAP6A?AU34562@AEBUITaskbarLayoutStatics@4562@@Z@Z @ 0x180067794 (--$call@P6A-AUTaskbarLayout@Shell@UI@WindowsUdk@winrt@@AEBUITaskbarLayoutStatics@2345@@Z@-$facto.c)
 *     ?Current@?$consume_WindowsUdk_UI_Shell_ITaskbarLayoutStatics@UITaskbarLayoutStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUTaskbarLayout@Shell@UI@WindowsUdk@3@XZ @ 0x1800F9A1C (-Current@-$consume_WindowsUdk_UI_Shell_ITaskbarLayoutStatics@UITaskbarLayoutStatics@Shell@UI@Win.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::WindowsUdk::UI::Shell::TaskbarLayout::Current(_QWORD *a1)
{
  void (__fastcall *v3)(__int64, __int64 *); // [rsp+38h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_1807B3F18);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::TaskbarLayout,winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics> )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayoutStatics<winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>::Current(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::TaskbarLayout,winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>,
      a1);
    _InterlockedDecrement64(&qword_1807B3F18);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B3F18);
    v3 = (void (__fastcall *)(__int64, __int64 *))&_lambda_a9de7e7a0851adce5db2c194794b7096_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::TaskbarLayout,winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics>::call<winrt::WindowsUdk::UI::Shell::TaskbarLayout (*)(winrt::WindowsUdk::UI::Shell::ITaskbarLayoutStatics const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      &v3);
  }
  return a1;
}
