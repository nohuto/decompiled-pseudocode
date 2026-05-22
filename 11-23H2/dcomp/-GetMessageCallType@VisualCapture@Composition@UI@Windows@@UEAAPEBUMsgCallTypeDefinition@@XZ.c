/*
 * XREFs of ?GetMessageCallType@VisualCapture@Composition@UI@Windows@@UEAAPEBUMsgCallTypeDefinition@@XZ @ 0x1800907E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct MsgCallTypeDefinition *__fastcall Windows::UI::Composition::VisualCapture::GetMessageCallType(
        Windows::UI::Composition::VisualCapture *this)
{
  return (const struct MsgCallTypeDefinition *)&IVisualCaptureEvent_Receive<Windows::UI::Composition::VisualCapture>::Type;
}
