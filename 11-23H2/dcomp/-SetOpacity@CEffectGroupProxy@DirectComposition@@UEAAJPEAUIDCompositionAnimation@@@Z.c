/*
 * XREFs of ?SetOpacity@CEffectGroupProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x18000EE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CEffectGroupProxy::SetOpacity(
        DirectComposition::CEffectGroupProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CEffectGroupProxy *)((char *)this + 8),
           0,
           a2);
}
