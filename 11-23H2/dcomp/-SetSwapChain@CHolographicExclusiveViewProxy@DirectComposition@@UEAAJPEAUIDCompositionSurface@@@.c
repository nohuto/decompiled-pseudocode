/*
 * XREFs of ?SetSwapChain@CHolographicExclusiveViewProxy@DirectComposition@@UEAAJPEAUIDCompositionSurface@@@Z @ 0x1800E7910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicExclusiveViewProxy::SetSwapChain(
        DirectComposition::CHolographicExclusiveViewProxy *this,
        struct IUnknown *a2)
{
  return DirectComposition::CResourceProxy::SetReferenceProperty(
           (DirectComposition::CHolographicExclusiveViewProxy *)((char *)this + 8),
           2,
           a2);
}
