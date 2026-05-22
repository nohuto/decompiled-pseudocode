/*
 * XREFs of ?SetVisible@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJH@Z @ 0x1800F6610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::SetVisible(__int64 a1, int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(a1 + 8),
           37,
           a2);
}
