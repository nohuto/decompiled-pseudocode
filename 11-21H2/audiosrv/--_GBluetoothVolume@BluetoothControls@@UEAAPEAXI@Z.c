/*
 * XREFs of ??_GBluetoothVolume@BluetoothControls@@UEAAPEAXI@Z @ 0x1800C6CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAA@XZ @ 0x180063180 (--1-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothCont.c)
 */

BluetoothControls::BluetoothVolume *__fastcall BluetoothControls::BluetoothVolume::`scalar deleting destructor'(
        BluetoothControls::BluetoothVolume *this,
        char a2)
{
  BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::~BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
