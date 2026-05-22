/*
 * XREFs of ?SetLeft@CRectangleClipProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800B5610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRectangleClipProxy::SetLeft(
        DirectComposition::CRectangleClipProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CRectangleClipProxy *)((char *)this + 8),
           4u,
           a2);
}
