/*
 * XREFs of _CEndpointCharacteristics::UpdateDeviceFormatEPProperty_::_1_::dtor$2 @ 0x1800796EA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::UpdateDeviceFormatEPProperty_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)(a2 + 120));
}
