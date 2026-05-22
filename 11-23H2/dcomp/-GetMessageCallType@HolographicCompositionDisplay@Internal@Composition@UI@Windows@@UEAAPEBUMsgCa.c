/*
 * XREFs of ?GetMessageCallType@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@UEAAPEBUMsgCallTypeDefinition@@XZ @ 0x18008FC70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct MsgCallTypeDefinition *__fastcall Windows::UI::Composition::Internal::HolographicCompositionDisplay::GetMessageCallType(
        Windows::UI::Composition::Internal::HolographicCompositionDisplay *this)
{
  return (const struct MsgCallTypeDefinition *)&IHolographicCompositorDisplayCallbacks_Receive<Windows::UI::Composition::Internal::HolographicCompositionDisplay>::Type;
}
