/*
 * XREFs of ?VolumeStepUp@BluetoothVolume@BluetoothControls@@UEAAJPEBU_GUID@@PEAH@Z @ 0x1800C7C80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18006376C (-GetTargetedControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControl.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BluetoothControls::BluetoothVolume::VolumeStepUp(
        BluetoothControls::BluetoothVolume *this,
        const struct _GUID *a2,
        int *a3)
{
  BluetoothControls::BluetoothVolume *v5; // rbx
  _QWORD *TargetedControl; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  (*(void (__fastcall **)(BluetoothControls::BluetoothVolume *))(*(_QWORD *)this + 216LL))(this);
  TargetedControl = (_QWORD *)BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetTargetedControl(
                                (__int64)v5,
                                (__int64)&v8);
  LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(*(_QWORD *)*TargetedControl + 168LL))(
                  *TargetedControl,
                  a2,
                  a3);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
  return (unsigned int)v5;
}
