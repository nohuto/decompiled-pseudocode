/*
 * XREFs of _CheckConnectorSupportForPeriodicity_::_1_::dtor$1 @ 0x180162E9F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckConnectorSupportForPeriodicity_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 48));
}
