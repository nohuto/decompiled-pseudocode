/*
 * XREFs of ?GetMessageCallType@CompositionEffectFactory@Composition@UI@Windows@@MEAAPEBUMsgCallTypeDefinition@@XZ @ 0x180090FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct MsgCallTypeDefinition *__fastcall Windows::UI::Composition::CompositionEffectFactory::GetMessageCallType(
        Windows::UI::Composition::CompositionEffectFactory *this)
{
  return (const struct MsgCallTypeDefinition *)&IEffectTemplateEvent_Receive<Windows::UI::Composition::CompositionEffectFactory>::Type;
}
