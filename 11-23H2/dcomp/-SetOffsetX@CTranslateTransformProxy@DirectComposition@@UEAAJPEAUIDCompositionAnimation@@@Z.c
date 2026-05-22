/*
 * XREFs of ?SetOffsetX@CTranslateTransformProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F5AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTranslateTransformProxy::SetOffsetX(
        DirectComposition::CTranslateTransformProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CTranslateTransformProxy *)((char *)this + 8),
           0,
           a2);
}
