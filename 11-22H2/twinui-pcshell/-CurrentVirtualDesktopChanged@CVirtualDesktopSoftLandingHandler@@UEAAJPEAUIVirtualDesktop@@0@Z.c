/*
 * XREFs of ?CurrentVirtualDesktopChanged@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180617680
 * Callers:
 *     <none>
 * Callees:
 *     ?WithdrawCampaign@CVirtualDesktopSoftLandingHandler@@AEAAJXZ @ 0x180617758 (-WithdrawCampaign@CVirtualDesktopSoftLandingHandler@@AEAAJXZ.c)
 */

__int64 __fastcall CVirtualDesktopSoftLandingHandler::CurrentVirtualDesktopChanged(
        CVirtualDesktopSoftLandingHandler *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  CVirtualDesktopSoftLandingHandler::WithdrawCampaign(this);
  return 0LL;
}
