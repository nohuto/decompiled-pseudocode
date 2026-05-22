/*
 * XREFs of ?SetTopLeftRadiusY@CRectangleClipProxy@DirectComposition@@UEAAJM@Z @ 0x1800F6220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRectangleClipProxy::SetTopLeftRadiusY(
        DirectComposition::CRectangleClipProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CRectangleClipProxy *)((char *)this + 8),
           9,
           a2);
}
