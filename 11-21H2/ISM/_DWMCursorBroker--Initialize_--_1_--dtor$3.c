/*
 * XREFs of _DWMCursorBroker::Initialize_::_1_::dtor$3 @ 0x180058353
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursorBroker::Initialize_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::~variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>(a2 + 88);
}
