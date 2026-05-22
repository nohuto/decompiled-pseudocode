/*
 * XREFs of ?GetMessageCallType@Visual@Composition@UI@Windows@@UEAAPEBUMsgCallTypeDefinition@@XZ @ 0x18008F920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct MsgCallTypeDefinition *__fastcall Windows::UI::Composition::Visual::GetMessageCallType(
        Windows::UI::Composition::Visual *this)
{
  return (const struct MsgCallTypeDefinition *)&IVisualEvent_Receive<Windows::UI::Composition::Visual>::Type;
}
