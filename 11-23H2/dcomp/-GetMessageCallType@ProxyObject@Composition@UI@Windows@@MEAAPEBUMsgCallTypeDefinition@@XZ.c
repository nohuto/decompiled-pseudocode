/*
 * XREFs of ?GetMessageCallType@ProxyObject@Composition@UI@Windows@@MEAAPEBUMsgCallTypeDefinition@@XZ @ 0x180090670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct MsgCallTypeDefinition *__fastcall Windows::UI::Composition::ProxyObject::GetMessageCallType(
        Windows::UI::Composition::ProxyObject *this)
{
  return (const struct MsgCallTypeDefinition *)&IPropertyChanged_Receive<Windows::UI::Composition::ProxyObject>::Type;
}
