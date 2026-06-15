/*
 * XREFs of ?SetAllChannelVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800C76E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18006376C (-GetTargetedControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControl.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
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
  (*(void (__fastcall **)(BluetoothControls::BluetoothVolume *))(*(_QWORD *)this + 216LL))(this);
  TargetedControl = (_QWORD *)BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetTargetedControl(
                                (__int64)v8,
                                (__int64)&v11);
  LODWORD(v8) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const float *, const struct _GUID *, int *))(*(_QWORD *)*TargetedControl + 184LL))(
                  *TargetedControl,
                  a2,
                  a3,
                  a4,
                  a5);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
  return (unsigned int)v8;
}
