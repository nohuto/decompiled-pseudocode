/*
 * XREFs of _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$13 @ 0x18007A94E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionManager::CAudioSessionManager_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  return std::list<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>::~list<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>(*(_QWORD *)(a2 + 56) + 8LL);
}
