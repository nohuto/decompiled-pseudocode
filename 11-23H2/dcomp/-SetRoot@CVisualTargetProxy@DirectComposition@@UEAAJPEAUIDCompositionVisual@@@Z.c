/*
 * XREFs of ?SetRoot@CVisualTargetProxy@DirectComposition@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x180012FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualTargetProxy::SetRoot(
        DirectComposition::CVisualTargetProxy *this,
        struct IUnknown *a2)
{
  return DirectComposition::CResourceProxy::SetReferenceProperty(
           (DirectComposition::CVisualTargetProxy *)((char *)this + 8),
           0x34u,
           a2);
}
