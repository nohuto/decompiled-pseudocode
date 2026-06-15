/*
 * XREFs of ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x1800C3DE4
 * Callers:
 *     ?OnStreamStateChanged@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x180063B9C (-OnStreamStateChanged@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@.c)
 *     ?OnStreamStateChanged@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x180063C28 (-OnStreamStateChanged@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothContr.c)
 *     _lambda_a5ecd82779a8f654c07843c2a2062ee4_::operator() @ 0x18006697C (_lambda_a5ecd82779a8f654c07843c2a2062ee4_--operator().c)
 * Callees:
 *     <none>
 */

struct CSerialWorkQueue *GetSerialWorkQueue(void)
{
  return (struct CSerialWorkQueue *)(*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
}
