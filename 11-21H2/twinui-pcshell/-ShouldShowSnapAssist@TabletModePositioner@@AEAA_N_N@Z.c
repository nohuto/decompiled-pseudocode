/*
 * XREFs of ?ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z @ 0x180506A18
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180500804 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?ShowLauncherOrSnapAssistInHole@TabletModePositioner@@AEAAJW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x180506D48 (-ShowLauncherOrSnapAssistInHole@TabletModePositioner@@AEAAJW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 *     ?VisibleFullScreenViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@0@Z @ 0x18050A890 (-VisibleFullScreenViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanShowSwitcherOrLauncher@TabletModePositioner@@AEAA_N_N@Z @ 0x180501270 (-CanShowSwitcherOrLauncher@TabletModePositioner@@AEAA_N_N@Z.c)
 */

char __fastcall TabletModePositioner::ShouldShowSnapAssist(TabletModePositioner *this, char a2)
{
  int v3; // eax
  char v4; // cl

  if ( !TabletModePositioner::CanShowSwitcherOrLauncher(this, a2) )
    return 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 80LL))(*((_QWORD *)this + 31), 4LL);
  v4 = 1;
  if ( v3 != 1 )
    return 0;
  return v4;
}
