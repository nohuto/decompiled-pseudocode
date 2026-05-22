/*
 * XREFs of ?SetTopRightRadiusY@CRectangleClipProxy@DirectComposition@@UEAAJM@Z @ 0x1800F62A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRectangleClipProxy::SetTopRightRadiusY(
        DirectComposition::CRectangleClipProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CRectangleClipProxy *)((char *)this + 8),
           11,
           a2);
}
