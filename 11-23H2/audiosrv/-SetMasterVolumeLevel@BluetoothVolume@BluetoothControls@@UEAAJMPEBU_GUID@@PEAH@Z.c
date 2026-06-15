/*
 * XREFs of ?SetMasterVolumeLevel@BluetoothVolume@BluetoothControls@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800F3C10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180082628 (-GetTargetedControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControl.c)
 */

__int64 __fastcall BluetoothControls::BluetoothVolume::SetMasterVolumeLevel(
        BluetoothControls::BluetoothVolume *this,
        float a2,
        const struct _GUID *a3,
        int *a4)
{
  BluetoothControls::BluetoothVolume *v6; // rbx
  _QWORD *TargetedControl; // rax
  __int64 v8; // rdx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v6 = this;
  (*(void (__fastcall **)(BluetoothControls::BluetoothVolume *))(*(_QWORD *)this + 224LL))(this);
  TargetedControl = BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetTargetedControl(
                      (__int64)v6,
                      &v10);
  LODWORD(v6) = (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *, int *))(*(_QWORD *)*TargetedControl
                                                                                        + 96LL))(
                  *TargetedControl,
                  v8,
                  a3,
                  a4);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v10);
  return (unsigned int)v6;
}
