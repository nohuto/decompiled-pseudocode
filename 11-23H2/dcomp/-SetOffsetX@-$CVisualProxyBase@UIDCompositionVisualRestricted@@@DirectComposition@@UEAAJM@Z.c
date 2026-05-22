/*
 * XREFs of ?SetOffsetX@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJM@Z @ 0x18000D1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::SetOffsetX(__int64 a1, float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty((DirectComposition::CResourceProxy *)(a1 + 8), 0, a2);
}
