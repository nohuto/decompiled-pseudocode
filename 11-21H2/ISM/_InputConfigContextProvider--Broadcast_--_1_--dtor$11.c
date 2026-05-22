/*
 * XREFs of _InputConfigContextProvider::Broadcast_::_1_::dtor$11 @ 0x18005526E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputConfigContextProvider::Broadcast_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  return std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::~variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>(a2 + 64);
}
