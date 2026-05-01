/*
 * XREFs of ?IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180030A14
 * Callers:
 *     ?OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1800306EC (-OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?GetOnscreenViewsForMonitor@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@PEAUIObjectArray@@PEAPEAU3@@Z @ 0x180660DB0 (-GetOnscreenViewsForMonitor@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@PEAUIObjectArray@@P.c)
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18066817C (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV-$deque@UtagRE.c)
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18066CA10 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DetermineSnapRegionForView@SnapLayoutHelpers@@YA?AW4SnapRegion@@PEAUIApplicationView@@@Z @ 0x1802E93A4 (-DetermineSnapRegionForView@SnapLayoutHelpers@@YA-AW4SnapRegion@@PEAUIApplicationView@@@Z.c)
 *     ?IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x1802E96F8 (-IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall SnapLayoutHelpers::IsSnappedWindow(SnapLayoutHelpers *this, struct IApplicationView *a2)
{
  char v3; // di
  int (__fastcall *v4)(SnapLayoutHelpers *, GUID *, __int64 *); // rbx
  struct IApplicationView *v5; // rdx
  HWND WindowForView; // rax
  unsigned int v8; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v11 = 0LL;
  if ( (*(int (__fastcall **)(SnapLayoutHelpers *, int *))(*(_QWORD *)this + 88LL))(this, &v10) >= 0 )
  {
    if ( v10 )
    {
      v4 = *(int (__fastcall **)(SnapLayoutHelpers *, GUID *, __int64 *))(*(_QWORD *)this + 104LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
      if ( v4(this, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v11) >= 0
        && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 32LL))(v11, &v9) >= 0
        && (v9 == 2 || v9 == 4) )
      {
        WindowForView = ApplicationViewHelpers::GetWindowForView(this, v5);
        if ( (unsigned int)IsWindowArranged(WindowForView) )
        {
          v8 = SnapLayoutHelpers::DetermineSnapRegionForView(this);
          if ( (unsigned __int8)SnapLayoutHelpers::IsValidSnapRegion(v8) )
            v3 = 1;
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  return v3;
}
