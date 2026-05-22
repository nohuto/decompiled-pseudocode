/*
 * XREFs of ?SetCompositeMode@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJW4DCOMPOSITION_COMPOSITE_MODE@@@Z @ 0x1800F51D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::SetCompositeMode(
        __int64 a1,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(a1 + 8),
           9,
           a2);
}
