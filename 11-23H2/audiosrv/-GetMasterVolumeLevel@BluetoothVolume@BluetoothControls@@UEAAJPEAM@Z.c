/*
 * XREFs of ?GetMasterVolumeLevel@BluetoothVolume@BluetoothControls@@UEAAJPEAM@Z @ 0x180082460
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180082628 (-GetTargetedControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControl.c)
 */

__int64 __fastcall BluetoothControls::BluetoothVolume::GetMasterVolumeLevel(
        BluetoothControls::BluetoothVolume *this,
        float *a2)
{
  _QWORD *TargetedControl; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  TargetedControl = (_QWORD *)BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetTargetedControl(
                                this,
                                &v5);
  LODWORD(a2) = (*(__int64 (__fastcall **)(_QWORD, float *))(*(_QWORD *)*TargetedControl + 112LL))(*TargetedControl, a2);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v5);
  return (unsigned int)a2;
}
