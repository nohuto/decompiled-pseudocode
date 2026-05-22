/*
 * XREFs of ?SetTop@CRectangleClipProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800B5690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRectangleClipProxy::SetTop(
        DirectComposition::CRectangleClipProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CRectangleClipProxy *)((char *)this + 8),
           5u,
           a2);
}
