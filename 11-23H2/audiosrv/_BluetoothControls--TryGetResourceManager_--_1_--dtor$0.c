/*
 * XREFs of _BluetoothControls::TryGetResourceManager_::_1_::dtor$0 @ 0x1800F4086
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BluetoothControls::TryGetResourceManager_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)(a2 + 88));
}
