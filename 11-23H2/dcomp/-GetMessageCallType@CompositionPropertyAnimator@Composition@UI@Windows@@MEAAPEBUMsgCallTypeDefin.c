/*
 * XREFs of ?GetMessageCallType@CompositionPropertyAnimator@Composition@UI@Windows@@MEAAPEBUMsgCallTypeDefinition@@XZ @ 0x180091070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct MsgCallTypeDefinition *__fastcall Windows::UI::Composition::CompositionPropertyAnimator::GetMessageCallType(
        Windows::UI::Composition::CompositionPropertyAnimator *this)
{
  return (const struct MsgCallTypeDefinition *)&IAnimationEvent_Receive<Windows::UI::Composition::CompositionPropertyAnimator>::Type;
}
