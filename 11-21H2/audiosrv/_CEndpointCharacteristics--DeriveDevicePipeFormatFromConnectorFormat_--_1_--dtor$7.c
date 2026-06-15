/*
 * XREFs of _CEndpointCharacteristics::DeriveDevicePipeFormatFromConnectorFormat_::_1_::dtor$7 @ 0x1801469F3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::DeriveDevicePipeFormatFromConnectorFormat_::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 48));
}
