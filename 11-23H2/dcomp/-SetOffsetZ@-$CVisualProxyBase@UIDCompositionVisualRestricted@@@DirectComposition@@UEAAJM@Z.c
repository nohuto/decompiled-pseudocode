/*
 * XREFs of ?SetOffsetZ@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJM@Z @ 0x1800F5B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::SetOffsetZ(__int64 a1, float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty((DirectComposition::CResourceProxy *)(a1 + 8), 2, a2);
}
