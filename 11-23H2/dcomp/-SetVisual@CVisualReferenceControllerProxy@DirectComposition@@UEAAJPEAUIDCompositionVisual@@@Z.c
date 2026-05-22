/*
 * XREFs of ?SetVisual@CVisualReferenceControllerProxy@DirectComposition@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x1800F6630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualReferenceControllerProxy::SetVisual(
        DirectComposition::CVisualReferenceControllerProxy *this,
        struct IUnknown *a2)
{
  return DirectComposition::CResourceProxy::SetReferenceProperty(
           (DirectComposition::CVisualReferenceControllerProxy *)((char *)this + 8),
           0,
           a2);
}
