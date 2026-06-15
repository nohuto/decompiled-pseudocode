/*
 * XREFs of _CAudioSessionManager::Disconnect_::_1_::dtor$59 @ 0x18007BE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionManager::Disconnect_::_1_::dtor_59(__int64 a1, __int64 a2)
{
  return std::list<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>::~list<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>(a2 + 200);
}
