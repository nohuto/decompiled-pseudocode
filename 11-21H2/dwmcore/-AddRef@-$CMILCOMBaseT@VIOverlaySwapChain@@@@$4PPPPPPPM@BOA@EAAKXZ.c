/*
 * XREFs of ?AddRef@?$CMILCOMBaseT@VIOverlaySwapChain@@@@$4PPPPPPPM@BOA@EAAKXZ @ 0x180108350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILCOMBaseT<IOverlaySwapChain>::AddRef(__int64 a1)
{
  return CMILCOMBaseT<IDeviceResource>::AddRef(a1 - *(int *)(a1 - 4) - 480);
}
