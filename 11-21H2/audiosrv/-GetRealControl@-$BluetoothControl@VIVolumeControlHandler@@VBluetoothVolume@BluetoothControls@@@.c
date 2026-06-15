/*
 * XREFs of ?GetRealControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180063700
 * Callers:
 *     ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18006376C (-GetTargetedControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControl.c)
 *     ?CChannels@BluetoothVolume@BluetoothControls@@UEBAIXZ @ 0x1800C6DB0 (-CChannels@BluetoothVolume@BluetoothControls@@UEBAIXZ.c)
 * Callees:
 *     ??0?$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x1800C6874 (--0-$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetRealControl(
        __int64 a1,
        __int64 a2)
{
  ATL::CComPtr<ISaDeviceProxy>::CComPtr<ISaDeviceProxy>(a2, a1 + 120);
  return a2;
}
