/*
 * XREFs of _CEndpointCharacteristics::DeriveAndCacheMixFormatsForConnector_::_1_::dtor$10 @ 0x180146387
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::DeriveAndCacheMixFormatsForConnector_::_1_::dtor_10(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 96));
}
