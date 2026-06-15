/*
 * XREFs of _BluetoothControls::BluetoothControl_IMuteControlHandler_BluetoothControls::BluetoothMute_::RuntimeClassInitialize_::_1_::catch$19 @ 0x1800641E6
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C76BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl_IMuteControlHandler_BluetoothControls::BluetoothMute_::RuntimeClassInitialize_::_1_::catch_19(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 208) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 200),
                            (void *)0xCD,
                            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
                            a4);
  return 0LL;
}
