/*
 * XREFs of ?SetTopLeftRadiusX@CRectangleClipProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F6200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRectangleClipProxy::SetTopLeftRadiusX(
        DirectComposition::CRectangleClipProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CRectangleClipProxy *)((char *)this + 8),
           8u,
           a2);
}
