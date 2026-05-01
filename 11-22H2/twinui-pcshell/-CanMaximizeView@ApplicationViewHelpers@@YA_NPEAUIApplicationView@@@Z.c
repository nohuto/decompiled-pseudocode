/*
 * XREFs of ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18007769C
 * Callers:
 *     ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180074DE8 (-_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800770B4 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18066817C (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV-$deque@UtagRE.c)
 *     ?IsSnappableWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NPEAUIVirtualDesktopManagerInternal@@@Z @ 0x180673DF8 (-IsSnappableWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NPEAUIVi.c)
 *     ?RuntimeClassInitialize@CSnappedWindow@@QEAAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@@Z @ 0x180686D58 (-RuntimeClassInitialize@CSnappedWindow@@QEAAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x1800776C8 (-CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

char __fastcall ApplicationViewHelpers::CanMaximizeView(ApplicationViewHelpers *this, struct IApplicationView *a2)
{
  char v2; // bl
  ApplicationViewHelpers *WindowForView; // rax
  HWND v4; // rdx

  v2 = 0;
  WindowForView = (ApplicationViewHelpers *)ApplicationViewHelpers::GetWindowForView(this, a2);
  if ( WindowForView )
    return ApplicationViewHelpers::CanMaximizeWindow(WindowForView, v4);
  return v2;
}
