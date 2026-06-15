/*
 * XREFs of _IsEndpointDefaultAudioEndpoint_::_1_::dtor$1 @ 0x180100DE9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsEndpointDefaultAudioEndpoint_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)(a2 + 120));
}
