/*
 * XREFs of _PhoneCallAudio::SwitchActivePhoneCallEndpoint_::_1_::dtor$5 @ 0x18013DADE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PhoneCallAudio::SwitchActivePhoneCallEndpoint_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)(a2 + 184));
}
