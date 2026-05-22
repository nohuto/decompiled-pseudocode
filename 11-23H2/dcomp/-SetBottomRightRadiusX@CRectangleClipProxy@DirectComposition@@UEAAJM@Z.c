/*
 * XREFs of ?SetBottomRightRadiusX@CRectangleClipProxy@DirectComposition@@UEAAJM@Z @ 0x1800F4C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRectangleClipProxy::SetBottomRightRadiusX(
        DirectComposition::CRectangleClipProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CRectangleClipProxy *)((char *)this + 8),
           14,
           a2);
}
