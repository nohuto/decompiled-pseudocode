/*
 * XREFs of ?AddRef@VirtualDesktop@@WCI@EAAKXZ @ 0x1802A2570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktop::AddRef(__int64 a1)
{
  return VirtualDesktopController::AddRef((VirtualDesktopController *)(a1 - 40));
}
