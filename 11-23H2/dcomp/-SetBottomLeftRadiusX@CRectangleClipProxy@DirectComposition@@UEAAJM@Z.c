/*
 * XREFs of ?SetBottomLeftRadiusX@CRectangleClipProxy@DirectComposition@@UEAAJM@Z @ 0x1800F4B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRectangleClipProxy::SetBottomLeftRadiusX(
        DirectComposition::CRectangleClipProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CRectangleClipProxy *)((char *)this + 8),
           12,
           a2);
}
