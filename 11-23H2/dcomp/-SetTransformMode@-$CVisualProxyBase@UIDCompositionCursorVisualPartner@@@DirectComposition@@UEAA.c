/*
 * XREFs of ?SetTransformMode@?$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJW4DCOMPOSITION_TRANSFORM_MODE@@@Z @ 0x1800F6530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionCursorVisualPartner>::SetTransformMode(
        __int64 a1,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(a1 + 8),
           20,
           a2);
}
