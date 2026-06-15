/*
 * XREFs of ?FillLevelsInDB@BluetoothVolume@BluetoothControls@@UEAAXIPEAM@Z @ 0x1800F2430
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180082628 (-GetTargetedControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControl.c)
 */

void __fastcall BluetoothControls::BluetoothVolume::FillLevelsInDB(
        BluetoothControls::BluetoothVolume *this,
        unsigned int a2,
        float *a3)
{
  _QWORD *TargetedControl; // rax
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  TargetedControl = BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetTargetedControl(
                      (__int64)this,
                      &v6);
  (*(void (__fastcall **)(_QWORD, _QWORD, float *))(*(_QWORD *)*TargetedControl + 56LL))(*TargetedControl, a2, a3);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v6);
}
