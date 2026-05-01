/*
 * XREFs of ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x18056FECC
 * Callers:
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18056FE30 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x1805BF140 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 *     _lambda_ee220ff7548bede1c40267f3ce601e5d_::operator() @ 0x1805CD460 (_lambda_ee220ff7548bede1c40267f3ce601e5d_--operator().c)
 * Callees:
 *     ?CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x1800776C8 (-CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x1802EBA92 (-CanResizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsWindowInHighZOrderBand@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x1807463A4 (-IsWindowInHighZOrderBand@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall TabletModePositionerHelpers::IsOperableWindow(TabletModePositionerHelpers *this, HWND a2)
{
  HWND v3; // rdx
  char v4; // bl
  HWND v5; // rdx
  HWND v6; // rdx

  v4 = 0;
  if ( IsWindow((HWND)this)
    && ApplicationViewHelpers::CanResizeWindow(this, v3)
    && ApplicationViewHelpers::CanMaximizeWindow(this, v5) )
  {
    return !ApplicationViewHelpers::IsWindowInHighZOrderBand(this, v6);
  }
  return v4;
}
