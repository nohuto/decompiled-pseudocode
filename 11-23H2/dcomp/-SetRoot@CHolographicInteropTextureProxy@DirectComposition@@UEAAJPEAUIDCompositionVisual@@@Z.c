/*
 * XREFs of ?SetRoot@CHolographicInteropTextureProxy@DirectComposition@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x1800E7AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicInteropTextureProxy::SetRoot(
        DirectComposition::CHolographicInteropTextureProxy *this,
        struct IUnknown *a2)
{
  return DirectComposition::CResourceProxy::SetReferenceProperty(
           (DirectComposition::CHolographicInteropTextureProxy *)((char *)this + 8),
           7,
           a2);
}
