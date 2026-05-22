/*
 * XREFs of _SystemContextManager::RegisterSystemContextEndpoint_::_1_::dtor$2 @ 0x18014FA6C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemContextManager::RegisterSystemContextEndpoint_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::~variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>(a2 + 32);
}
