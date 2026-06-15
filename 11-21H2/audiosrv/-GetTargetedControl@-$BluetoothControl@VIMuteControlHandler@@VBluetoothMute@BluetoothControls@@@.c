/*
 * XREFs of ?GetTargetedControl@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180063728
 * Callers:
 *     ?InitializeAPOs@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800637C0 (-InitializeAPOs@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@Blue.c)
 *     ?GetMute@BluetoothMute@BluetoothControls@@UEAAJPEAH@Z @ 0x1800C7070 (-GetMute@BluetoothMute@BluetoothControls@@UEAAJPEAH@Z.c)
 *     ?IsMuteAPORequired@BluetoothMute@BluetoothControls@@UEBA_NXZ @ 0x1800C73A0 (-IsMuteAPORequired@BluetoothMute@BluetoothControls@@UEBA_NXZ.c)
 *     ?SetMute@BluetoothMute@BluetoothControls@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1800C7A40 (-SetMute@BluetoothMute@BluetoothControls@@UEAAJHPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ??0?$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x1800C6874 (--0-$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::GetTargetedControl(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx

  if ( *(_BYTE *)(a1 + 112) && *(_QWORD *)(a1 + 104) && *(_BYTE *)(a1 + 113) )
    v3 = *(_QWORD *)(a1 + 104) + 120LL;
  else
    v3 = a1 + 120;
  ATL::CComPtr<ISaDeviceProxy>::CComPtr<ISaDeviceProxy>(a2, v3);
  return a2;
}
