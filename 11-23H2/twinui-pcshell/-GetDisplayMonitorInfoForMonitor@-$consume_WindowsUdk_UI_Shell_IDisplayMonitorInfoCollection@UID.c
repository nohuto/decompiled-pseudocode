/*
 * XREFs of ?GetDisplayMonitorInfoForMonitor@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x18001A3A8
 * Callers:
 *     ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x18001A074 (-GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_NPEAPEAUHMONITOR__@@@Z @ 0x1800D4F14 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     TaskViewFrame::UpdateWorkAreaAsync$_ResumeCoro$1 @ 0x18028D880 (TaskViewFrame--UpdateWorkAreaAsync$_ResumeCoro$1.c)
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x1804217F8 (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x180438748 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?GetDynamicSystemTrayHeightForMonitor@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUHMONITOR__@@PEAM@Z @ 0x18048EBC0 (-GetDynamicSystemTrayHeightForMonitor@PenMenuSystemTrayManager@implementation@Shell@Internal@Win.c)
 *     ?GetTaskbarHeight@MultitaskingViewGestureHandlerHelpers@@YAMPEAUHMONITOR__@@AEBUDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18055D66C (-GetTaskbarHeight@MultitaskingViewGestureHandlerHelpers@@YAMPEAUHMONITOR__@@AEBUDisplayMonitorIn.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::GetDisplayMonitorInfoForMonitor(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // rcx
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  *a2 = v7;
  return a2;
}
