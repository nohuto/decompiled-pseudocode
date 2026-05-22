/*
 * XREFs of ?SetBottomLeftRadiusY@CRectangleClipProxy@DirectComposition@@UEAAJM@Z @ 0x1800F4BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRectangleClipProxy::SetBottomLeftRadiusY(
        DirectComposition::CRectangleClipProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CRectangleClipProxy *)((char *)this + 8),
           13,
           a2);
}
