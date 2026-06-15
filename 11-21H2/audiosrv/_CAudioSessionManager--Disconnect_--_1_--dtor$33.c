/*
 * XREFs of _CAudioSessionManager::Disconnect_::_1_::dtor$33 @ 0x1800E03BF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManager::Disconnect_::_1_::dtor_33(__int64 a1, __int64 a2)
{
  std::list<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>::~list<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>((void **)(a2 + 104));
}
