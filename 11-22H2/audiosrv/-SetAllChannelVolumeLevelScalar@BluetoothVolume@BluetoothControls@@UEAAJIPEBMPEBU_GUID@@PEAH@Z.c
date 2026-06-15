/*
 * XREFs of ?SetAllChannelVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800F3A50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180082658 (-GetTargetedControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControl.c)
 */

__int64 __fastcall BluetoothControls::BluetoothVolume::SetAllChannelVolumeLevelScalar(
        BluetoothControls::BluetoothVolume *this,
        unsigned int a2,
        const float *a3,
        const struct _GUID *a4,
        int *a5)
{
  BluetoothControls::BluetoothVolume *v8; // rbx
  _QWORD *TargetedControl; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v8 = this;
  (*(void (__fastcall **)(BluetoothControls::BluetoothVolume *))(*(_QWORD *)this + 224LL))(this);
  TargetedControl = BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetTargetedControl(
                      (__int64)v8,
                      &v11);
  LODWORD(v8) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const float *, const struct _GUID *, int *))(*(_QWORD *)*TargetedControl + 192LL))(
                  *TargetedControl,
                  a2,
                  a3,
                  a4,
                  a5);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v11);
  return (unsigned int)v8;
}
