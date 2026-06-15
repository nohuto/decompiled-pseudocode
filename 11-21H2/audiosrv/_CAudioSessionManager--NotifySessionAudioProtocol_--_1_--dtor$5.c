/*
 * XREFs of _CAudioSessionManager::NotifySessionAudioProtocol_::_1_::dtor$5 @ 0x18006D2A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionManager::NotifySessionAudioProtocol_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return std::list<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>::~list<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>(a2 + 56);
}
