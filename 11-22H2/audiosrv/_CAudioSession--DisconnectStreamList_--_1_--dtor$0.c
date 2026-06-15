/*
 * XREFs of _CAudioSession::DisconnectStreamList_::_1_::dtor$0 @ 0x18007CA11
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::DisconnectStreamList_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>(a2 + 48);
}
