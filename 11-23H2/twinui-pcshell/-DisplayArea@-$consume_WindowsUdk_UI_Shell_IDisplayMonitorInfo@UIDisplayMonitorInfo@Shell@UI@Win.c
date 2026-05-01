/*
 * XREFs of ?DisplayArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006F618
 * Callers:
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_NPEAPEAUHMONITOR__@@@Z @ 0x1800D4F14 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     _lambda_5b1893e84c025059ea9350e935de1321_::operator()_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_const_&_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs_const_&_ @ 0x18028CE68 (_lambda_5b1893e84c025059ea9350e935de1321_--operator()_winrt--WindowsUdk--UI--Shell--DisplayMonit.c)
 *     TaskViewFrame::UpdateWorkAreaAsync$_ResumeCoro$1 @ 0x18028D880 (TaskViewFrame--UpdateWorkAreaAsync$_ResumeCoro$1.c)
 *     ?GetDynamicSystemTrayHeightForMonitor@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUHMONITOR__@@PEAM@Z @ 0x18048EBC0 (-GetDynamicSystemTrayHeightForMonitor@PenMenuSystemTrayManager@implementation@Shell@Internal@Win.c)
 *     ?GetTaskbarHeight@MultitaskingViewGestureHandlerHelpers@@YAMPEAUHMONITOR__@@AEBUDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18055D66C (-GetTaskbarHeight@MultitaskingViewGestureHandlerHelpers@@YAMPEAUHMONITOR__@@AEBUDisplayMonitorIn.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_OWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DisplayArea(
        _QWORD *a1,
        _OWORD *a2)
{
  int v3; // eax

  *a2 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 64LL))(*a1);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  return a2;
}
