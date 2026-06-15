/*
 * XREFs of ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEBGPEAVBluetoothVolume@2@PEAUIControlChangeNotify@@@Z @ 0x1800F38F4
 * Callers:
 *     ??$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothVolume@BluetoothControls@@AEAPEAG$$QEAPEAV34@AEAPEAUIControlChangeNotify@@@Z @ 0x1800F16E8 (--$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChange.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F1010 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIControlChangeNotify@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIControlChangeNotify@@@Z @ 0x1800F1E3C (--4-$com_ptr_t@UIControlChangeNotify@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIControlCh.c)
 *     ??4?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIVolumeControlHandler@@@Z @ 0x1800F1F0C (--4-$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIVolumeCo.c)
 *     ?CommonInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAXPEAUIMMDevice@@@Z @ 0x1800F2140 (-CommonInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@Bl.c)
 *     ?MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800F2A04 (-MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::RuntimeClassInitialize(
        struct IControlChangeNotify *a1,
        __int64 a2,
        struct IControlChangeNotifyVtbl *a3,
        __int64 a4)
{
  struct IMMDeviceEnumeratorVtbl *lpVtbl; // rax
  __int64 (*GetDevice)(void); // rax
  int v9; // eax
  struct IControlChangeNotifyVtbl *v10; // rsi
  struct IPartsList **v11; // r8
  struct IVolumeControlHandler *RealControl; // rax
  const char *v13; // r9
  __int64 result; // rax
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IMMDevice *v17; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(a1[14].lpVtbl) = 0;
  v17 = 0LL;
  lpVtbl = g_DeviceEnumerator->lpVtbl;
  v17 = 0LL;
  GetDevice = (__int64 (*)(void))lpVtbl->GetDevice;
  try
  {
    v9 = GetDevice();
    if ( v9 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        211LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v9,
        v15);
    v10 = a1[13].lpVtbl;
    a1[13].lpVtbl = a3;
    if ( a3 )
      (*((void (__fastcall **)(struct IControlChangeNotifyVtbl *))a3->QueryInterface + 1))(a3);
    if ( v10 )
      (*((void (__fastcall **)(struct IControlChangeNotifyVtbl *))v10->QueryInterface + 2))(v10);
    BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::CommonInitialize(
      (__int64)a1,
      (__int64 *)v17);
    RealControl = BluetoothControls::BluetoothVolume::MakeRealControl(v17, a1, v11);
    wil::com_ptr_t<IVolumeControlHandler,wil::err_exception_policy>::operator=((__int64 *)&a1[15], (__int64)RealControl);
    wil::com_ptr_t<IControlChangeNotify,wil::err_exception_policy>::operator=((__int64 *)&a1[16], a4);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v17);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xDC,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
                           v13);
  }
  return result;
}
