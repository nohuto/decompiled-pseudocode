/*
 * XREFs of ?AddRef@VirtualDesktop@@WBI@EAAKXZ @ 0x1802A2530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktop::AddRef(__int64 a1)
{
  return VirtualDesktopController::AddRef((VirtualDesktopController *)(a1 - 24));
}
