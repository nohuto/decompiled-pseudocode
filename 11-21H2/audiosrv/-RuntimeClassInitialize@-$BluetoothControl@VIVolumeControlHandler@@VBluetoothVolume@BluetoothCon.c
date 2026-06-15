/*
 * XREFs of ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x180064388
 * Callers:
 *     ??$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@VIVolumeControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIVolumeControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Z @ 0x1800C63BC (--$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@VIVolumeControlHandler@@AEAPEAUIMMDevic.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800483C0 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ??$?0V_lambda_aaa43ca83dfd3d10ea8db9a45d6dafd8_@@$0A@@?$function@$$A6AX_N@Z@std@@QEAA@V_lambda_aaa43ca83dfd3d10ea8db9a45d6dafd8_@@@Z @ 0x180062C84 (--$-0V_lambda_aaa43ca83dfd3d10ea8db9a45d6dafd8_@@$0A@@-$function@$$A6AX_N@Z@std@@QEAA@V_lambda_a.c)
 *     ??$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothVolume@BluetoothControls@@AEAPEAG$$QEAPEAV34@AEAPEAUIControlChangeNotify@@@Z @ 0x180062E5C (--$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChange.c)
 *     ?CommonInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAXPEAUIMMDevice@@@Z @ 0x180063424 (-CommonInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@Bl.c)
 *     ?MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x180063968 (-MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@.c)
 *     ?TryGetResourceManager@BluetoothControls@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800647D0 (-TryGetResourceManager@BluetoothControls@@YAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5FBC (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$invoke@P6AJPEAUtagPROPVARIANT@@@ZPEAV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@@wistd@@YAJ$$QEAP6AJPEAUtagPROPVARIANT@@@Z$$QEAPEAV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@@Z @ 0x1800C67A0 (--$invoke@P6AJPEAUtagPROPVARIANT@@@ZPEAV-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-PropVari.c)
 *     ??4?$com_ptr_t@UIControlChangeNotify@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIControlChangeNotify@@@Z @ 0x1800C6AF4 (--4-$com_ptr_t@UIControlChangeNotify@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIControlCh.c)
 *     ??4?$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIVolumeControlHandler@@@Z @ 0x1800C6BC4 (--4-$com_ptr_t@VIVolumeControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIVolumeCo.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::RuntimeClassInitialize(
        struct IControlChangeNotify *a1,
        struct IMMDevice *a2,
        __int64 a3)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v7; // eax
  int v8; // eax
  struct IPartsList **v9; // r8
  struct IControlChangeNotifyVtbl *v10; // rdi
  __int64 (__fastcall *v11)(struct IControlChangeNotifyVtbl *, _QWORD *, struct IControlChangeNotifyVtbl **); // rbx
  _QWORD *v12; // rax
  int v13; // eax
  int v14; // eax
  struct IVolumeControlHandler *RealControl; // rax
  int v17[2]; // [rsp+20h] [rbp-A8h] BYREF
  char v18; // [rsp+28h] [rbp-A0h]
  struct IControlChangeNotify *v19; // [rsp+30h] [rbp-98h] BYREF
  __int64 v20; // [rsp+38h] [rbp-90h] BYREF
  __int128 v21; // [rsp+48h] [rbp-80h] BYREF
  __int64 v22; // [rsp+58h] [rbp-70h]
  _QWORD v23[13]; // [rsp+60h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  struct IControlChangeNotifyVtbl *v25; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v26; // [rsp+E0h] [rbp+18h]
  __int64 v27; // [rsp+E8h] [rbp+20h] BYREF

  v26 = a3;
  LOBYTE(a1[14].lpVtbl) = 1;
  BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::CommonInitialize(
    (__int64)a1,
    (__int64 *)a2);
  v21 = 0LL;
  v22 = 0LL;
  lpVtbl = a2->lpVtbl;
  v27 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))lpVtbl->OpenPropertyStore)(a2, 0LL, &v27);
  if ( v7 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x9E,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v7,
      v17[0]);
  v8 = (*(__int64 (__fastcall **)(__int64, void *, __int128 *))(*(_QWORD *)v27 + 40LL))(
         v27,
         &PKEY_Endpoint_LinkedBluetoothEndpoint,
         &v21);
  if ( v8 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x9F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v8,
      v17[0]);
  if ( (int)BluetoothControls::TryGetResourceManager(&a1[6], &a1[17]) >= 0 )
  {
    v10 = a1[17].lpVtbl;
    v11 = (__int64 (__fastcall *)(struct IControlChangeNotifyVtbl *, _QWORD *, struct IControlChangeNotifyVtbl **))*((_QWORD *)v10->QueryInterface + 3);
    v19 = a1;
    std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v20, &a1[19].lpVtbl);
    v12 = std::function<void (bool)>::function<void (bool)>(v23, (__int64 *)&v19);
    v13 = v11(v10, v12, &v25);
    if ( v13 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xAA,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v13,
        v17[0]);
    BYTE4(v25) = 1;
    a1[18].lpVtbl = v25;
  }
  *(_QWORD *)v17 = a1;
  v18 = 1;
  if ( (_WORD)v21 == 31 )
  {
    v25 = (struct IControlChangeNotifyVtbl *)a1;
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&a1[13]);
    v14 = Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothVolume,BluetoothControls::BluetoothVolume,unsigned short * &,BluetoothControls::BluetoothVolume *,IControlChangeNotify * &>((struct IControlChangeNotify **)&a1[13]);
    if ( v14 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xB9,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v14,
        v17[0]);
  }
  v19 = a1;
  LOBYTE(v20) = 1;
  RealControl = BluetoothControls::BluetoothVolume::MakeRealControl(a2, a1, v9);
  wil::com_ptr_t<IVolumeControlHandler,wil::err_exception_policy>::operator=(&a1[15], RealControl);
  wil::com_ptr_t<IControlChangeNotify,wil::err_exception_policy>::operator=(&a1[16], a3);
  v25 = (struct IControlChangeNotifyVtbl *)&v21;
  *(_QWORD *)v17 = PropVariantClear;
  wistd::invoke<long (*)(tagPROPVARIANT *),wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)> *>(
    v17,
    &v25);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
  return 0LL;
}
