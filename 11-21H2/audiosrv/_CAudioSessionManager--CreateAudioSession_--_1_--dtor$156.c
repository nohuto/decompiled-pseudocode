/*
 * XREFs of _CAudioSessionManager::CreateAudioSession_::_1_::dtor$156 @ 0x18006DCE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionManager::CreateAudioSession_::_1_::dtor_156(__int64 a1, __int64 a2)
{
  return std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>,void *>>>(a2 + 200);
}
