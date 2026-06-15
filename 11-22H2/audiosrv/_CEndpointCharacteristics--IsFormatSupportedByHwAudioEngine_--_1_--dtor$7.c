/*
 * XREFs of _CEndpointCharacteristics::IsFormatSupportedByHwAudioEngine_::_1_::dtor$7 @ 0x18014E0B9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::IsFormatSupportedByHwAudioEngine_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)(a2 + 80));
}
