/*
 * XREFs of _CAudioSession::PruneTerminatedOwningProcesses_::_1_::dtor$0 @ 0x18007A122
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::PruneTerminatedOwningProcesses_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(a2 + 32);
}
