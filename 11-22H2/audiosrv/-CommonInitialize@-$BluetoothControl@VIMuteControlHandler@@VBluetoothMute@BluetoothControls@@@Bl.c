/*
 * XREFs of ?CommonInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAXPEAUIMMDevice@@@Z @ 0x1800F2140
 * Callers:
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800F31C0 (-RuntimeClassInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControl.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEBGPEAVBluetoothMute@2@PEAUIControlChangeNotify@@@Z @ 0x1800F34AC (-RuntimeClassInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@Blu_ea_1800F34AC.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800F3608 (-RuntimeClassInitialize@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothCon.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEBGPEAVBluetoothVolume@2@PEAUIControlChangeNotify@@@Z @ 0x1800F38F4 (-RuntimeClassInitialize@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume_ea_1800F38F4.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800281F0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180080F6A (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F1010 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::CommonInitialize(
        __int64 a1,
        __int64 *a2)
{
  __int64 (__fastcall *v4)(__int64 *, LPVOID *); // rbx
  int v5; // eax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+20h] [rbp-40h]
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  int v20[2]; // [rsp+38h] [rbp-28h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v24; // [rsp+98h] [rbp+38h] BYREF
  LPVOID pv; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+48h] BYREF

  pv = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64 *, LPVOID *))(*a2 + 40);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v5 = v4(a2, &pv);
  if ( v5 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      227LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v5,
      v18);
  v6 = -1LL;
  v7 = -1LL;
  do
    ++v7;
  while ( *((_WORD *)pv + v7) );
  std::wstring::assign((char *)(a1 + 48), pv, v7);
  v9 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                   v8,
                   _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v9 > 4u )
  {
    v24 = *(unsigned __int8 *)(a1 + 112);
    *(_QWORD *)v20 = pv;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      (__int64)v9,
      byte_180191E29,
      v10,
      v11,
      (const WCHAR **)v20,
      (__int64)&v24);
  }
  v19 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))*a2)(
          a2,
          &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
          &v19);
  if ( v12 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      237LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v12,
      v18);
  v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 24LL))(v19, a1 + 80);
  if ( v13 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      238LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v13,
      v18);
  *(_OWORD *)pvar = 0LL;
  v22 = 0LL;
  v14 = *a2;
  v26 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v14 + 32))(a2, 0LL, &v26);
  if ( v15 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      242LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v15,
      v18);
  v16 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v26 + 40LL))(
          v26,
          &PKEY_Device_FriendlyName,
          pvar);
  if ( v16 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      244LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v16,
      v18);
  if ( LOWORD(pvar[0]) == 31 )
  {
    do
      ++v6;
    while ( *((_WORD *)pvar[1] + v6) );
    std::wstring::assign((char *)(a1 + 16), pvar[1], v6);
  }
  v17 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v26 + 40LL))(
          v26,
          &PKEY_Endpoint_CustomResourceManagerContext,
          pvar);
  if ( v17 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      250LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v17,
      v18);
  if ( LOWORD(pvar[0]) == 72 )
    *(_OWORD *)(a1 + 84) = *(_OWORD *)pvar[1];
  PropVariantClear(pvar);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v26);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v19);
  if ( pv )
    CoTaskMemFree(pv);
}
