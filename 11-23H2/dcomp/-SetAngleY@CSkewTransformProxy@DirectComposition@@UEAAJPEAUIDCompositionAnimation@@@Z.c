/*
 * XREFs of ?SetAngleY@CSkewTransformProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F46E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSkewTransformProxy::SetAngleY(
        DirectComposition::CSkewTransformProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CSkewTransformProxy *)((char *)this + 8),
           1u,
           a2);
}
