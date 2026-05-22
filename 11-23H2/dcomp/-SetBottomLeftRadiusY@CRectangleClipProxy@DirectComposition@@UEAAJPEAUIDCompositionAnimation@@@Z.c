/*
 * XREFs of ?SetBottomLeftRadiusY@CRectangleClipProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F4BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRectangleClipProxy::SetBottomLeftRadiusY(
        DirectComposition::CRectangleClipProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CRectangleClipProxy *)((char *)this + 8),
           0xDu,
           a2);
}
