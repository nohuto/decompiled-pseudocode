/*
 * XREFs of ?SetCenterZ@CRotateTransform3DProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F4F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRotateTransform3DProxy::SetCenterZ(
        DirectComposition::CRotateTransform3DProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CRotateTransform3DProxy *)((char *)this + 8),
           6u,
           a2);
}
