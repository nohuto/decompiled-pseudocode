/*
 * XREFs of ?SetTopRightRadiusX@CRectangleClipProxy@DirectComposition@@UEAAJM@Z @ 0x1800F6260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRectangleClipProxy::SetTopRightRadiusX(
        DirectComposition::CRectangleClipProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CRectangleClipProxy *)((char *)this + 8),
           10,
           a2);
}
