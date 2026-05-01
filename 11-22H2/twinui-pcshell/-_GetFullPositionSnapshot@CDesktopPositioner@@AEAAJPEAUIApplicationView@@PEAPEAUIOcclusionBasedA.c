/*
 * XREFs of ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x180075324
 * Callers:
 *     ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180074DE8 (-_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800770B4 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z @ 0x1805B3250 (-DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1805B3CB4 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION.c)
 *     ?ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1805B4610 (-ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPositionSnapshot@@UIOcclusionBasedApplicationViewPosition@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAPEAUHWND__@@@Z @ 0x180076C80 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPositionSnapshot@@UIOcclusionBasedApplicati.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopPositioner::_GetFullPositionSnapshot(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IOcclusionBasedApplicationViewPosition **a3)
{
  int v4; // ebx
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CDesktopPositioner *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  *a3 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IApplicationView *, CDesktopPositioner **))(*(_QWORD *)a2 + 72LL))(a2, &v9);
  if ( v4 < 0 )
  {
    v6 = 2313LL;
  }
  else
  {
    v4 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPositionSnapshot,IOcclusionBasedApplicationViewPosition,HWND__ * &>(
           a3,
           &v9);
    if ( v4 >= 0 )
      return 0LL;
    v6 = 2314LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v4,
    v7);
  return (unsigned int)v4;
}
