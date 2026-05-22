/*
 * XREFs of ?GetMessageCallType@InteractionTracker@Interactions@Composition@UI@Windows@@MEAAPEBUMsgCallTypeDefinition@@XZ @ 0x1800903A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct MsgCallTypeDefinition *__fastcall Windows::UI::Composition::Interactions::InteractionTracker::GetMessageCallType(
        Windows::UI::Composition::Interactions::InteractionTracker *this)
{
  return (const struct MsgCallTypeDefinition *)&IInteractionTrackerEvent_Receive<Windows::UI::Composition::Interactions::InteractionTracker>::Type;
}
