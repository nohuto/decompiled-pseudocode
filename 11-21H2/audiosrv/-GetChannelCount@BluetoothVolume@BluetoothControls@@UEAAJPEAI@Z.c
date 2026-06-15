/*
 * XREFs of ?GetChannelCount@BluetoothVolume@BluetoothControls@@UEAAJPEAI@Z @ 0x1800C6E80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18006376C (-GetTargetedControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControl.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BluetoothControls::BluetoothVolume::GetChannelCount(
        BluetoothControls::BluetoothVolume *this,
        unsigned int *a2)
{
  _QWORD *TargetedControl; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  TargetedControl = (_QWORD *)BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetTargetedControl(
                                (__int64)this,
                                (__int64)&v5);
  LODWORD(a2) = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*TargetedControl + 80LL))(
                  *TargetedControl,
                  a2);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v5);
  return (unsigned int)a2;
}
