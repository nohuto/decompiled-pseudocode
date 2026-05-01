/*
 * XREFs of ?IsOperableWindow@@YA_NPEAUHWND__@@@Z @ 0x1804B36F8
 * Callers:
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x1801574D0 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804B365C (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?OnShowWindowPolicy@CDesktopPositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1804FB760 (-OnShowWindowPolicy@CDesktopPositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 *     _lambda_3d05abe18940be18f5c65a3df56cea1e_::operator() @ 0x180514BD0 (_lambda_3d05abe18940be18f5c65a3df56cea1e_--operator().c)
 * Callees:
 *     ?CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x1800F184C (-CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x18023A026 (-CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsWindowInHighZOrderBand@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x1805EFC5C (-IsWindowInHighZOrderBand@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall IsOperableWindow(HWND this)
{
  HWND v2; // rdx
  char v3; // bl
  HWND v4; // rdx
  HWND v5; // rdx

  v3 = 0;
  if ( IsWindow(this)
    && ApplicationViewHelpers::CanResizeWindow((ApplicationViewHelpers *)this, v2)
    && ApplicationViewHelpers::CanMaximizeWindow((ApplicationViewHelpers *)this, v4) )
  {
    return !ApplicationViewHelpers::IsWindowInHighZOrderBand((ApplicationViewHelpers *)this, v5);
  }
  return v3;
}
