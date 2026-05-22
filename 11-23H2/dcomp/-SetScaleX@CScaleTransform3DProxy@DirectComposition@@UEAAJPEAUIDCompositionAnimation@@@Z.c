/*
 * XREFs of ?SetScaleX@CScaleTransform3DProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F5F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScaleTransform3DProxy::SetScaleX(
        DirectComposition::CScaleTransform3DProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CScaleTransform3DProxy *)((char *)this + 8),
           0,
           a2);
}
