/*
 * XREFs of ?GetMessageCallType@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@MEAAPEBUMsgCallTypeDefinition@@XZ @ 0x180090FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct MsgCallTypeDefinition *__fastcall Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner::GetMessageCallType(
        Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *this)
{
  return (const struct MsgCallTypeDefinition *)&IAnimationTriggerEvent_Receive<Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner>::Type;
}
