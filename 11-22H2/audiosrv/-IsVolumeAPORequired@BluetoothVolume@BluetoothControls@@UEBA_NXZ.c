/*
 * XREFs of ?IsVolumeAPORequired@BluetoothVolume@BluetoothControls@@UEBA_NXZ @ 0x1800F2900
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180082658 (-GetTargetedControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControl.c)
 */

char __fastcall BluetoothControls::BluetoothVolume::IsVolumeAPORequired(BluetoothControls::BluetoothVolume *this)
{
  _QWORD *TargetedControl; // rax
  char v2; // bl
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  TargetedControl = BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetTargetedControl(
                      (__int64)this,
                      &v4);
  v2 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*TargetedControl + 64LL))(*TargetedControl);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v4);
  return v2;
}
