/*
 * XREFs of _CAudioSessionManager::RevokeSessionsWithoutDataFlowAccess_::_1_::dtor$2 @ 0x1800E1383
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManager::RevokeSessionsWithoutDataFlowAccess_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>(a2 + 32);
}
