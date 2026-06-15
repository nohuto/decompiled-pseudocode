/*
 * XREFs of ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEBGPEAVBluetoothMute@2@PEAUIControlChangeNotify@@@Z @ 0x180064228
 * Callers:
 *     ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothMute@BluetoothControls@@AEAPEAG$$QEAPEAV34@AEAPEAUIControlChangeNotify@@@Z @ 0x180062D4C (--$MakeAndInitialize@VBluetoothMute@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNo.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CommonInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAXPEAUIMMDevice@@@Z @ 0x180063424 (-CommonInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@Bl.c)
 *     ?MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800638B8 (-MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEAU.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5FBC (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIControlChangeNotify@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIControlChangeNotify@@@Z @ 0x1800C6AF4 (--4-$com_ptr_t@UIControlChangeNotify@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIControlCh.c)
 *     ??4?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteControlHandler@@@Z @ 0x1800C6B5C (--4-$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteContro.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::RuntimeClassInitialize(
        struct IControlChangeNotify *a1,
        __int64 a2,
        struct IControlChangeNotifyVtbl *a3,
        __int64 a4)
{
  __int64 v7; // rax
  __int64 (*v8)(void); // rax
  int v9; // eax
  struct IControlChangeNotifyVtbl *lpVtbl; // rsi
  struct IPartsList **v11; // r8
  struct IMuteControlHandler *RealControl; // rax
  const char *v13; // r9
  __int64 result; // rax
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IMMDevice *v17; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(a1[14].lpVtbl) = 0;
  v17 = 0LL;
  v7 = *(_QWORD *)g_DeviceEnumerator;
  v17 = 0LL;
  v8 = *(__int64 (**)(void))(v7 + 40);
  try
  {
    v9 = v8();
    if ( v9 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xD4,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v9,
        v15);
    lpVtbl = a1[13].lpVtbl;
    a1[13].lpVtbl = a3;
    if ( a3 )
      (*((void (__fastcall **)(struct IControlChangeNotifyVtbl *))a3->QueryInterface + 1))(a3);
    if ( lpVtbl )
      (*((void (__fastcall **)(struct IControlChangeNotifyVtbl *))lpVtbl->QueryInterface + 2))(lpVtbl);
    BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::CommonInitialize(
      (__int64)a1,
      (__int64 *)v17);
    RealControl = BluetoothControls::BluetoothMute::MakeRealControl(v17, a1, v11);
    wil::com_ptr_t<IMuteControlHandler,wil::err_exception_policy>::operator=(&a1[15], RealControl);
    wil::com_ptr_t<IControlChangeNotify,wil::err_exception_policy>::operator=(&a1[16], a4);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xDD,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
                           v13);
  }
  return result;
}
