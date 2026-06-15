/*
 * XREFs of _CEndpointCharacteristics::IsFormatSupportedByHwAudioEngine_::_1_::dtor$4 @ 0x18014E095
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::IsFormatSupportedByHwAudioEngine_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
