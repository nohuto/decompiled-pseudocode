/*
 * XREFs of ?SetAngleX@CSkewTransformProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F46A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSkewTransformProxy::SetAngleX(
        DirectComposition::CSkewTransformProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CSkewTransformProxy *)((char *)this + 8),
           0,
           a2);
}
