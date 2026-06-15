/*
 * XREFs of _CAudioSessionManager::DisconnectSessionsForTsSession_::_1_::dtor$6 @ 0x1800E065D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManager::DisconnectSessionsForTsSession_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  std::list<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>::~list<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>((void **)(a2 + 72));
}
