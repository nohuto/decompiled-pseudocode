/*
 * XREFs of ?SetTopLeftRadiusX@CRectangleClipProxy@DirectComposition@@UEAAJM@Z @ 0x1800F61E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRectangleClipProxy::SetTopLeftRadiusX(
        DirectComposition::CRectangleClipProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CRectangleClipProxy *)((char *)this + 8),
           8,
           a2);
}
