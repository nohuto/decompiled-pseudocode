/*
 * XREFs of ?CurrentVirtualDesktopChanged@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x18055C110
 * Callers:
 *     <none>
 * Callees:
 *     ?WithdrawCampaign@CVirtualDesktopSoftLandingHandler@@AEAAJXZ @ 0x18055C1E8 (-WithdrawCampaign@CVirtualDesktopSoftLandingHandler@@AEAAJXZ.c)
 */

__int64 __fastcall CVirtualDesktopSoftLandingHandler::CurrentVirtualDesktopChanged(
        CVirtualDesktopSoftLandingHandler *this,
        struct IObjectArray *a2,
        struct IVirtualDesktop *a3,
        struct IVirtualDesktop *a4)
{
  CVirtualDesktopSoftLandingHandler::WithdrawCampaign(this);
  return 0LL;
}
