/*
 * XREFs of ?IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804F0D80
 * Callers:
 *     ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804F1340 (-OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x1800F184C (-CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18023A026 (-CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1805EFB48 (-HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsViewShownInSwitchers@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1805EFC10 (-IsViewShownInSwitchers@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsWindowInHighZOrderBand@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x1805EFC5C (-IsWindowInHighZOrderBand@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall Win32ViewOperationPolicy::IsOperableView(
        Win32ViewOperationPolicy *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64))
{
  char v3; // bl
  ApplicationViewHelpers *WindowForView; // rdi
  HWND v5; // rdx
  HWND v6; // rdx
  HWND v7; // rdx
  struct IApplicationView *v8; // rdx
  struct IApplicationView *v9; // rdx

  v3 = 0;
  WindowForView = (ApplicationViewHelpers *)ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
  if ( IsWindow((HWND)WindowForView)
    && ApplicationViewHelpers::CanResizeWindow(WindowForView, v5)
    && ApplicationViewHelpers::CanMaximizeWindow(WindowForView, v6)
    && !ApplicationViewHelpers::IsWindowInHighZOrderBand(WindowForView, v7)
    && !ApplicationViewHelpers::HasRootSwitchableOwner((struct IUnknown *)a2, v8) )
  {
    return ApplicationViewHelpers::IsViewShownInSwitchers((ApplicationViewHelpers *)a2, v9);
  }
  return v3;
}
