/*
 * XREFs of ?GetMessageCallType@HolographicCompositor@Internal@Composition@UI@Windows@@UEAAPEBUMsgCallTypeDefinition@@XZ @ 0x18008FC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct MsgCallTypeDefinition *__fastcall Windows::UI::Composition::Internal::HolographicCompositor::GetMessageCallType(
        Windows::UI::Composition::Internal::HolographicCompositor *this)
{
  return (const struct MsgCallTypeDefinition *)&IHolographicCompositionCallbacks_Receive<Windows::UI::Composition::Internal::HolographicCompositor>::Type;
}
