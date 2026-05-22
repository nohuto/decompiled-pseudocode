/*
 * XREFs of ?SetTransform@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJAEBUD2D_MATRIX_4X4_F@@@Z @ 0x1800F6390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::SetTransform(
        __int64 a1,
        const void *a2)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CResourceProxy *)(a1 + 8),
           11,
           a2,
           0x40uLL);
}
