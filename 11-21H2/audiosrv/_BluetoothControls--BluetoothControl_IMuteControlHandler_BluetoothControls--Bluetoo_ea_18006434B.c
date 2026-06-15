/*
 * XREFs of _BluetoothControls::BluetoothControl_IMuteControlHandler_BluetoothControls::BluetoothMute_::RuntimeClassInitialize_::_1_::catch$3 @ 0x18006434B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C76BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl_IMuteControlHandler_BluetoothControls::BluetoothMute_::RuntimeClassInitialize_::_1_::catch_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0xDD,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
                           a4);
  return 0LL;
}
