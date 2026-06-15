/*
 * XREFs of _AtmosCheck::GetLicenseStatusForEndpointId_::_1_::dtor$1 @ 0x180154ABB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AtmosCheck::GetLicenseStatusForEndpointId_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 96));
}
