/*
 * XREFs of _BluetoothControls::TryGetResourceManager_::_1_::dtor$1 @ 0x1800F40E2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BluetoothControls::TryGetResourceManager_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 80));
}
