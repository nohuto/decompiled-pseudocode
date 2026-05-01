/*
 * XREFs of ?GetCurrentAsync@DisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801886E8
 * Callers:
 *     CActionCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1801DC010 (CActionCenterExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     CControlCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1801DE180 (CControlCenterExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x1801E0920 (CToastCenterExperienceManager--RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1801E15D0 (CStartExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::UpdateMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1801F2490 (winrt--Windows--Internal--Shell--implementation--PenMenuSystemTrayManager--UpdateMo_ea_1801F2490.c)
 *     MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x18020D0F0 (MultitaskingViewGestureHandler--CacheMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     TaskViewFrame::UpdateWorkAreaAsync$_ResumeCoro$1 @ 0x18028D880 (TaskViewFrame--UpdateWorkAreaAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?GetCurrentAsync@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollectionStatics@UIDisplayMonitorInfoCollectionStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180188760 (-GetCurrentAsync@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollectionStatics@UIDisplayMon.c)
 *     ??$call@P6A?AU?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@AEBUIDisplayMonitorInfoCollectionStatics@Shell@UI@WindowsUdk@4@@Z@?$factory_cache_entry@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@UIDisplayMonitorInfoCollectionStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AU?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@2@AEBUIDisplayMonitorInfoCollectionStatics@Shell@UI@WindowsUdk@2@@Z@Z @ 0x1801887B4 (--$call@P6A-AU-$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Founda.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection::GetCurrentAsync(__int64 a1)
{
  const struct winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollectionStatics *(__fastcall *v3)(const struct winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollectionStatics *, __int64); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18098E068);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection,winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollectionStatics> )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollectionStatics<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollectionStatics>::GetCurrentAsync(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection,winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollectionStatics>,
      a1);
    _InterlockedDecrement64(&qword_18098E068);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E068);
    v3 = _lambda_faee3f0e95e2d80e7101cf985e892c5a_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection,winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollectionStatics>::call<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection> (*)(winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollectionStatics const &)>(
      a1,
      a1,
      &v3);
  }
  return a1;
}
