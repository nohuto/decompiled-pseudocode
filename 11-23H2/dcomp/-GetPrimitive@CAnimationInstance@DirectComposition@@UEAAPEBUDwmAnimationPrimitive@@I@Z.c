/*
 * XREFs of ?GetPrimitive@CAnimationInstance@DirectComposition@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x1800E8BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct DwmAnimationPrimitive *__fastcall DirectComposition::CAnimationInstance::GetPrimitive(
        DirectComposition::CAnimationInstance *this,
        unsigned int a2)
{
  return DirectComposition::CAnimationData::PrimitiveAtIndex(
           (DirectComposition::CAnimationInstance *)((char *)this + 96),
           a2);
}
