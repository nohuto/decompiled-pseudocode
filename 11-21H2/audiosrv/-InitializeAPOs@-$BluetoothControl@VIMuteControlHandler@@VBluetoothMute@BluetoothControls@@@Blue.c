/*
 * XREFs of ?InitializeAPOs@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800637C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetTargetedControl@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEBA?AV?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180063728 (-GetTargetedControl@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::InitializeAPOs(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  _QWORD *TargetedControl; // rax
  __int64 v9[3]; // [rsp+30h] [rbp-18h] BYREF

  TargetedControl = (_QWORD *)BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::GetTargetedControl(
                                a1,
                                (__int64)v9);
  LODWORD(a4) = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)*TargetedControl + 64LL))(
                  *TargetedControl,
                  a2,
                  a3,
                  a4);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v9);
  return (unsigned int)a4;
}
