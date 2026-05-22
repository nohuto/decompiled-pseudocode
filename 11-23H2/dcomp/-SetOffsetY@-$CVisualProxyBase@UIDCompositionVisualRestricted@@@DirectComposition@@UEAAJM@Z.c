/*
 * XREFs of ?SetOffsetY@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJM@Z @ 0x18000C980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::SetOffsetY(__int64 a1, float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(a1 + 8),
           1u,
           a2);
}
