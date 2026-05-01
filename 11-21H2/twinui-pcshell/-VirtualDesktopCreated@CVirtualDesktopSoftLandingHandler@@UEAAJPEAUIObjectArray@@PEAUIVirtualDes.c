/*
 * XREFs of ?VirtualDesktopCreated@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@@Z @ 0x18055C1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?WithdrawCampaign@CVirtualDesktopSoftLandingHandler@@AEAAJXZ @ 0x18055C1E8 (-WithdrawCampaign@CVirtualDesktopSoftLandingHandler@@AEAAJXZ.c)
 */

__int64 __fastcall CVirtualDesktopSoftLandingHandler::VirtualDesktopCreated(
        CVirtualDesktopSoftLandingHandler *this,
        struct IObjectArray *a2,
        struct IVirtualDesktop *a3)
{
  CVirtualDesktopSoftLandingHandler::WithdrawCampaign(this);
  return 0LL;
}
