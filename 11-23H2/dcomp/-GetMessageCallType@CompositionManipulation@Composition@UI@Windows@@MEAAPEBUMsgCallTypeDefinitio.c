/*
 * XREFs of ?GetMessageCallType@CompositionManipulation@Composition@UI@Windows@@MEAAPEBUMsgCallTypeDefinition@@XZ @ 0x1800908E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct MsgCallTypeDefinition *__fastcall Windows::UI::Composition::CompositionManipulation::GetMessageCallType(
        Windows::UI::Composition::CompositionManipulation *this)
{
  return (const struct MsgCallTypeDefinition *)&IManipulationNotification_Receive<Windows::UI::Composition::CompositionManipulation>::Type;
}
