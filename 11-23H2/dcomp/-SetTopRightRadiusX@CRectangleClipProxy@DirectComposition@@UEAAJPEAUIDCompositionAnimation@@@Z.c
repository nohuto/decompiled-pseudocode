/*
 * XREFs of ?SetTopRightRadiusX@CRectangleClipProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F6280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRectangleClipProxy::SetTopRightRadiusX(
        DirectComposition::CRectangleClipProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CRectangleClipProxy *)((char *)this + 8),
           0xAu,
           a2);
}
