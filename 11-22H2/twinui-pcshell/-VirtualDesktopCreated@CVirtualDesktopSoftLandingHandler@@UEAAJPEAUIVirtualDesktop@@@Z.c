/*
 * XREFs of ?VirtualDesktopCreated@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180617740
 * Callers:
 *     <none>
 * Callees:
 *     ?WithdrawCampaign@CVirtualDesktopSoftLandingHandler@@AEAAJXZ @ 0x180617758 (-WithdrawCampaign@CVirtualDesktopSoftLandingHandler@@AEAAJXZ.c)
 */

__int64 __fastcall CVirtualDesktopSoftLandingHandler::VirtualDesktopCreated(
        CVirtualDesktopSoftLandingHandler *this,
        struct IVirtualDesktop *a2)
{
  CVirtualDesktopSoftLandingHandler::WithdrawCampaign(this);
  return 0LL;
}
