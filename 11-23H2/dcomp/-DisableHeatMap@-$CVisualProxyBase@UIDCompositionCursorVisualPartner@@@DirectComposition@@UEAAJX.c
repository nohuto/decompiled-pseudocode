/*
 * XREFs of ?DisableHeatMap@?$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJXZ @ 0x18008E3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionCursorVisualPartner>::DisableHeatMap(__int64 a1)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(a1 + 8),
           15,
           0LL);
}
