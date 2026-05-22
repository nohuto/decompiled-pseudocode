/*
 * XREFs of ?DisableRedrawRegions@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJXZ @ 0x18008E390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::DisableRedrawRegions(__int64 a1)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(a1 + 8),
           17,
           0LL);
}
