/*
 * XREFs of ?close_and_wait@operation_guard@wil@@QEAAXXZ @ 0x180064DD0
 * Callers:
 *     ??1operation_guard@wil@@QEAA@XZ @ 0x180063360 (--1operation_guard@wil@@QEAA@XZ.c)
 *     ?ProviderFinalRelease@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@UEAAXXZ @ 0x180063CC0 (-ProviderFinalRelease@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@.c)
 *     ?ProviderFinalRelease@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAAXXZ @ 0x180063D70 (-ProviderFinalRelease@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothContr.c)
 * Callees:
 *     ?wait@?$slim_event_t@$00@wil@@QEAA_NXZ @ 0x180064ED0 (-wait@-$slim_event_t@$00@wil@@QEAA_NXZ.c)
 */

void __fastcall wil::operation_guard::close_and_wait(wil::operation_guard *this)
{
  *((_BYTE *)this + 8) = 1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 1, 0xFFFFFFFF) > 1 )
    wil::slim_event_t<1>::wait(this);
}
