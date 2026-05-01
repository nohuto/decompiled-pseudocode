/*
 * XREFs of ?MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z @ 0x1805C3E30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800F43A8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1801BDC18 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z @ 0x180564DE0 (-IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18056FE30 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsViewFullScreen@TabletModeViewManager@@AEAA_NPEAUIApplicationView@@@Z @ 0x1805C3D78 (-IsViewFullScreen@TabletModeViewManager@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x1805C4460 (-ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEA.c)
 */

__int64 __fastcall TabletModeViewManager::MoveSizeAttempted(
        __int64 a1,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        unsigned int a3)
{
  enum _TABLETMODESTATE *v6; // rdx
  TabletModeHelpers *v7; // rcx
  bool v8; // bl
  struct IApplicationView *v9; // rdx
  bool IsViewFullScreen; // al
  struct tagPOINT Point; // [rsp+78h] [rbp+20h] BYREF

  v8 = IsSurfaceHubWithWin32VtcEnabled() && PPISideBarHelpers::IsSideBarView(a2);
  if ( TabletModeHelpers::IsTabletMode(v7, v6)
    && TabletModePositionerHelpers::IsOperableView(
         (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))a2,
         v9)
    && !v8 )
  {
    if ( a3 == 2 )
      goto LABEL_13;
    if ( a3 == 3 || a3 == 4 )
    {
      GetPhysicalCursorPos(&Point);
      (*(void (__fastcall **)(__int64, __int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *), _QWORD, struct tagPOINT))(*(_QWORD *)a1 + 72LL))(
        a1,
        a2,
        a3,
        Point);
      return 0LL;
    }
    if ( a3 == 5 || a3 - 6 <= 1 )
    {
LABEL_13:
      IsViewFullScreen = TabletModeViewManager::IsViewFullScreen((IUnknown **)(a1 - 88), (struct IApplicationView *)a2);
      TabletModeViewManager::ShowWindowArrangementView(a1 - 88, a2, 0LL, 0LL, 0LL, 0LL, IsViewFullScreen, 1, 0LL);
    }
  }
  return 0LL;
}
