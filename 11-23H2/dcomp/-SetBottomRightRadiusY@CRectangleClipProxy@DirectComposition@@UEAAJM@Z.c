/*
 * XREFs of ?SetBottomRightRadiusY@CRectangleClipProxy@DirectComposition@@UEAAJM@Z @ 0x1800F4C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRectangleClipProxy::SetBottomRightRadiusY(
        DirectComposition::CRectangleClipProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CRectangleClipProxy *)((char *)this + 8),
           15,
           a2);
}
