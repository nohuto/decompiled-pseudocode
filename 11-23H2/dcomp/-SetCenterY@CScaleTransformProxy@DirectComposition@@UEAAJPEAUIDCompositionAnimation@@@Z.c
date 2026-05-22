/*
 * XREFs of ?SetCenterY@CScaleTransformProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F4EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScaleTransformProxy::SetCenterY(
        DirectComposition::CScaleTransformProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CScaleTransformProxy *)((char *)this + 8),
           3u,
           a2);
}
