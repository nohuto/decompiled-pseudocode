/*
 * XREFs of ?ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ @ 0x1805069C8
 * Callers:
 *     ?MultitaskingViewDismissed@TabletModePositioner@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180041530 (-MultitaskingViewDismissed@TabletModePositioner@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180500804 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?ShowLauncherOrSnapAssistInHole@TabletModePositioner@@AEAAJW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x180506D48 (-ShowLauncherOrSnapAssistInHole@TabletModePositioner@@AEAAJW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 *     ?VisibleFullScreenViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@0@Z @ 0x18050A890 (-VisibleFullScreenViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanShowSwitcherOrLauncher@TabletModePositioner@@AEAA_N_N@Z @ 0x180501270 (-CanShowSwitcherOrLauncher@TabletModePositioner@@AEAA_N_N@Z.c)
 */

char __fastcall TabletModePositioner::ShouldShowLauncher(TabletModePositioner *this)
{
  __int64 v2; // rcx
  char v3; // bl

  if ( !TabletModePositioner::CanShowSwitcherOrLauncher(this, 0) )
    return 0;
  v2 = *((_QWORD *)this + 31);
  v3 = 1;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 80LL))(v2, 1LL) )
    return 0;
  return v3;
}
