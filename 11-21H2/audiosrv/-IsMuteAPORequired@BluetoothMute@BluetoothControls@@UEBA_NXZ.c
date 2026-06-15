/*
 * XREFs of ?IsMuteAPORequired@BluetoothMute@BluetoothControls@@UEBA_NXZ @ 0x1800C73A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetTargetedControl@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180063728 (-GetTargetedControl@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall BluetoothControls::BluetoothMute::IsMuteAPORequired(BluetoothControls::BluetoothMute *this)
{
  _QWORD *TargetedControl; // rax
  char v2; // bl
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  TargetedControl = (_QWORD *)BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::GetTargetedControl(
                                (__int64)this,
                                (__int64)&v4);
  v2 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*TargetedControl + 48LL))(*TargetedControl);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v4);
  return v2;
}
