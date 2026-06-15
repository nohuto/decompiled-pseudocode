/*
 * XREFs of _ApplicationSpecificEndpointInfo::GetPersistentId_::_1_::dtor$0 @ 0x1800451FA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::GetPersistentId_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)(a2 + 96));
}
