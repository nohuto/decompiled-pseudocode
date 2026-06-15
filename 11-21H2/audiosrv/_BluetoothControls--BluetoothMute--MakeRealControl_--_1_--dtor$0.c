/*
 * XREFs of _BluetoothControls::BluetoothMute::MakeRealControl_::_1_::dtor$0 @ 0x180063956
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BluetoothControls::BluetoothMute::MakeRealControl_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 72));
}
