/*
 * XREFs of ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18006376C
 * Callers:
 *     ?InitializeAPOs@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180063840 (-InitializeAPOs@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@.c)
 *     ?FillLevels@BluetoothVolume@BluetoothControls@@UEAAXIPEAM@Z @ 0x1800C6E10 (-FillLevels@BluetoothVolume@BluetoothControls@@UEAAXIPEAM@Z.c)
 *     ?GetChannelCount@BluetoothVolume@BluetoothControls@@UEAAJPEAI@Z @ 0x1800C6E80 (-GetChannelCount@BluetoothVolume@BluetoothControls@@UEAAJPEAI@Z.c)
 *     ?GetChannelVolumeLevel@BluetoothVolume@BluetoothControls@@UEAAJIPEAM@Z @ 0x1800C6ED0 (-GetChannelVolumeLevel@BluetoothVolume@BluetoothControls@@UEAAJIPEAM@Z.c)
 *     ?GetChannelVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJIPEAM@Z @ 0x1800C6F30 (-GetChannelVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJIPEAM@Z.c)
 *     ?GetMasterVolumeLevel@BluetoothVolume@BluetoothControls@@UEAAJPEAM@Z @ 0x1800C6F90 (-GetMasterVolumeLevel@BluetoothVolume@BluetoothControls@@UEAAJPEAM@Z.c)
 *     ?GetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJPEAM@Z @ 0x1800C6FE0 (-GetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJPEAM@Z.c)
 *     ?GetVolumeRange@BluetoothVolume@BluetoothControls@@UEAAJIPEAM00@Z @ 0x1800C7140 (-GetVolumeRange@BluetoothVolume@BluetoothControls@@UEAAJIPEAM00@Z.c)
 *     ?GetVolumeStepInfo@BluetoothVolume@BluetoothControls@@UEAAJPEAI0@Z @ 0x1800C71C0 (-GetVolumeStepInfo@BluetoothVolume@BluetoothControls@@UEAAJPEAI0@Z.c)
 *     ?IsVolumeAPORequired@BluetoothVolume@BluetoothControls@@UEBA_NXZ @ 0x1800C7400 (-IsVolumeAPORequired@BluetoothVolume@BluetoothControls@@UEBA_NXZ.c)
 *     ?SetAllChannelVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800C76E0 (-SetAllChannelVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevel@BluetoothVolume@BluetoothControls@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800C7790 (-SetChannelVolumeLevel@BluetoothVolume@BluetoothControls@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800C7830 (-SetChannelVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMasterVolumeLevel@BluetoothVolume@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800C78E0 (-SetMasterVolumeLevel@BluetoothVolume@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800C7980 (-SetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetVolumeLimitScalar@BluetoothVolume@BluetoothControls@@UEAAJM@Z @ 0x1800C7B90 (-SetVolumeLimitScalar@BluetoothVolume@BluetoothControls@@UEAAJM@Z.c)
 *     ?VolumeStepDown@BluetoothVolume@BluetoothControls@@UEAAJPEBU_GUID@@PEAH@Z @ 0x1800C7BF0 (-VolumeStepDown@BluetoothVolume@BluetoothControls@@UEAAJPEBU_GUID@@PEAH@Z.c)
 *     ?VolumeStepUp@BluetoothVolume@BluetoothControls@@UEAAJPEBU_GUID@@PEAH@Z @ 0x1800C7C80 (-VolumeStepUp@BluetoothVolume@BluetoothControls@@UEAAJPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?GetRealControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180063700 (-GetRealControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@.c)
 *     ??0?$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x1800C6874 (--0-$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetTargetedControl(
        __int64 a1,
        __int64 a2)
{
  if ( *(_BYTE *)(a1 + 112) && *(_QWORD *)(a1 + 104) && *(_BYTE *)(a1 + 113) )
    BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetRealControl(
      *(_QWORD *)(a1 + 104),
      a2);
  else
    ATL::CComPtr<ISaDeviceProxy>::CComPtr<ISaDeviceProxy>(a2, a1 + 120);
  return a2;
}
