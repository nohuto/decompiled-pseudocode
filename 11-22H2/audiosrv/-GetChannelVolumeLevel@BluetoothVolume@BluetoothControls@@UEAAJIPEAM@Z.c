/*
 * XREFs of ?GetChannelVolumeLevel@BluetoothVolume@BluetoothControls@@UEAAJIPEAM@Z @ 0x1800F2540
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180082658 (-GetTargetedControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControl.c)
 */

__int64 __fastcall BluetoothControls::BluetoothVolume::GetChannelVolumeLevel(
        BluetoothControls::BluetoothVolume *this,
        unsigned int a2,
        float *a3)
{
  _QWORD *TargetedControl; // rax
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  TargetedControl = BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetTargetedControl(
                      (__int64)this,
                      &v7);
  LODWORD(a3) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(*(_QWORD *)*TargetedControl + 144LL))(
                  *TargetedControl,
                  a2,
                  a3);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v7);
  return (unsigned int)a3;
}
