/*
 * XREFs of ?GetMasterVolumeLevelScalar@BluetoothVolume@BluetoothControls@@UEAAJPEAM@Z @ 0x1800C6FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetTargetedControl@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18006376C (-GetTargetedControl@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControl.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WriteCachedControlValue@BluetoothVolume@BluetoothControls@@AEAAXM@Z @ 0x1800C7D08 (-WriteCachedControlValue@BluetoothVolume@BluetoothControls@@AEAAXM@Z.c)
 */

__int64 __fastcall BluetoothControls::BluetoothVolume::GetMasterVolumeLevelScalar(
        BluetoothControls::BluetoothVolume *this,
        float *a2)
{
  _QWORD *TargetedControl; // rax
  int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  TargetedControl = (_QWORD *)BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::GetTargetedControl(
                                (__int64)this,
                                (__int64)&v8);
  v5 = (*(__int64 (__fastcall **)(_QWORD, float *))(*(_QWORD *)*TargetedControl + 112LL))(*TargetedControl, a2);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
  if ( v5 >= 0 )
  {
    BluetoothControls::BluetoothVolume::WriteCachedControlValue(this, *a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C0,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
}
