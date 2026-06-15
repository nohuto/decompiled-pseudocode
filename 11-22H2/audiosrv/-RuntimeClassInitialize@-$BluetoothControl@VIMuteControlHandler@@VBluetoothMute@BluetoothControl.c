/*
 * XREFs of ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800F31C0
 * Callers:
 *     ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@VIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Z @ 0x1800F15E0 (--$MakeAndInitialize@VBluetoothMute@BluetoothControls@@VIMuteControlHandler@@AEAPEAUIMMDevice@@A.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180014FC0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180025520 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F1010 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothMute@BluetoothControls@@AEAPEAG$$QEAPEAV34@AEAPEAUIControlChangeNotify@@@Z @ 0x1800F14C4 (--$MakeAndInitialize@VBluetoothMute@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNo.c)
 *     ??4?$com_ptr_t@UIControlChangeNotify@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIControlChangeNotify@@@Z @ 0x1800F1E3C (--4-$com_ptr_t@UIControlChangeNotify@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIControlCh.c)
 *     ??4?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteControlHandler@@@Z @ 0x1800F1EA4 (--4-$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteContro.c)
 *     ?CommonInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAXPEAUIMMDevice@@@Z @ 0x1800F2140 (-CommonInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@Bl.c)
 *     ?MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800F2954 (-MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEAU.c)
 *     ?TryGetResourceManager@BluetoothControls@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800F3F78 (-TryGetResourceManager@BluetoothControls@@YAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::RuntimeClassInitialize(
        struct IControlChangeNotify *a1,
        struct IMMDevice *a2,
        __int64 a3)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v7; // eax
  int v8; // eax
  struct IPartsList **v9; // r8
  __int64 (__fastcall *v10)(__int64, _QWORD *, struct IControlChangeNotifyVtbl **); // r9
  __int64 v11; // r11
  int v12; // eax
  int v13; // eax
  struct IMuteControlHandler *RealControl; // rax
  const char *v15; // r9
  __int64 result; // rax
  int v17; // [rsp+20h] [rbp-98h]
  _QWORD v18[2]; // [rsp+28h] [rbp-90h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v20; // [rsp+48h] [rbp-70h]
  struct IControlChangeNotify *v21; // [rsp+50h] [rbp-68h]
  char v22; // [rsp+58h] [rbp-60h]
  _QWORD v23[11]; // [rsp+60h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  struct IControlChangeNotifyVtbl *v25; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v26; // [rsp+D0h] [rbp+18h]
  __int64 v27; // [rsp+D8h] [rbp+20h] BYREF

  v26 = a3;
  LOBYTE(a1[14].lpVtbl) = 1;
  try
  {
    BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::CommonInitialize(
      (__int64)a1,
      (__int64 *)a2);
    *(_OWORD *)pvar = 0LL;
    v20 = 0LL;
    lpVtbl = a2->lpVtbl;
    v27 = 0LL;
    v7 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))lpVtbl->OpenPropertyStore)(a2, 0LL, &v27);
    if ( v7 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        157LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v7,
        v17);
    v8 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v27 + 40LL))(
           v27,
           &PKEY_Endpoint_LinkedBluetoothEndpoint,
           pvar);
    if ( v8 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        158LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v8,
        v17);
    if ( (int)BluetoothControls::TryGetResourceManager(&a1[6], &a1[17]) >= 0 )
    {
      v17 = (int)a1;
      std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(v18, &a1[19].lpVtbl);
      v23[0] = &std::_Func_impl_no_alloc<_lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_,void,bool>::`vftable';
      v23[1] = a1;
      v23[2] = v18[0];
      v23[3] = v18[1];
      v23[7] = v23;
      v12 = v10(v11, v23, &v25);
      if ( v12 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          169LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
          (const char *)(unsigned int)v12,
          (int)a1);
      BYTE4(v25) = 1;
      a1[18].lpVtbl = v25;
    }
    v21 = a1;
    v22 = 1;
    if ( LOWORD(pvar[0]) == 31 )
    {
      v25 = (struct IControlChangeNotifyVtbl *)a1;
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&a1[13]);
      v13 = Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothMute,BluetoothControls::BluetoothMute,unsigned short * &,BluetoothControls::BluetoothMute *,IControlChangeNotify * &>((struct IControlChangeNotify **)&a1[13]);
      if ( v13 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          184LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
          (const char *)(unsigned int)v13,
          v17);
    }
    LOBYTE(v18[0]) = 1;
    RealControl = BluetoothControls::BluetoothMute::MakeRealControl(a2, a1, v9);
    wil::com_ptr_t<IMuteControlHandler,wil::err_exception_policy>::operator=((__int64 *)&a1[15], (__int64)RealControl);
    wil::com_ptr_t<IControlChangeNotify,wil::err_exception_policy>::operator=((__int64 *)&a1[16], a3);
    PropVariantClear(pvar);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v27);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v25) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xCC,
                     (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
                     v15);
    return (unsigned int)v25;
  }
  return result;
}
