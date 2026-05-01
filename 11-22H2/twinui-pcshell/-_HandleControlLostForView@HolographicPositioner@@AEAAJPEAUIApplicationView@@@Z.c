/*
 * XREFs of ?_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804AEF1C
 * Callers:
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180152FD0 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 *     ?ControlLost@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1804AAED0 (-ControlLost@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkn.c)
 *     ?_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x1804AFAA4 (-_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32Appli.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _LogEventWithApplicationViewData__ @ 0x1804A90A8 (_LogEventWithApplicationViewData__.c)
 *     ?_EnableSystemVisuals@HolographicPositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x1804AE124 (-_EnableSystemVisuals@HolographicPositioner@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B02E8 (-_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1804B05F4 (-_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIViewHostI.c)
 */

__int64 __fastcall HolographicPositioner::_HandleControlLostForView(
        HolographicPositioner *this,
        struct IApplicationView *a2)
{
  HolographicPositioner *v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  LogEventWithApplicationViewData__(
    (__int64)a2,
    (void (__fastcall *)(LPVOID *))HolographicPositionerTelemetry::HandleControlLostForView<unsigned short const *>);
  HolographicPositioner::_TransitionViewFromHolographic(this, a2, 0LL);
  v5 = HolographicPositioner::_RaiseViewRemoved(this, a2);
  if ( v5 < 0 )
  {
    v6 = 1721LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = HolographicPositioner::_EnableSystemVisuals(
         v4,
         (int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2,
         1u);
  if ( v5 < 0 )
  {
    v6 = 1724LL;
    goto LABEL_3;
  }
  return 0LL;
}
