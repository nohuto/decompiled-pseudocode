/*
 * XREFs of ?TryGetResourceManager@BluetoothControls@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800647D0
 * Callers:
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x180063F40 (-RuntimeClassInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControl.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x180064388 (-RuntimeClassInitialize@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothCon.c)
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryGetSaDeviceResourceManagerForEndpoint@@YAJPEBVCEndpointCharacteristics@@PEAPEAUISaDeviceResourceManager@@@Z @ 0x18000FE54 (-TryGetSaDeviceResourceManagerForEndpoint@@YAJPEBVCEndpointCharacteristics@@PEAPEAUISaDeviceReso.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x180148D40 (-GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall BluetoothControls::TryGetResourceManager(const unsigned __int16 *a1, __int64 *a2)
{
  int EndpointCharacteristics; // eax
  unsigned int v4; // ebx
  int SaDeviceResourceManagerForEndpoint; // eax
  __int64 v6; // rdx
  struct ISaDeviceResourceManager *v7; // rcx
  __int64 v8; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ISaDeviceResourceManager *v12; // [rsp+30h] [rbp+8h] BYREF
  struct CEndpointCharacteristics *v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = 0LL;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    a1 = *(const unsigned __int16 **)a1;
  EndpointCharacteristics = GetEndpointCharacteristics(a1, 0, &v13);
  v4 = EndpointCharacteristics;
  if ( EndpointCharacteristics >= 0 )
  {
    v12 = 0LL;
    SaDeviceResourceManagerForEndpoint = TryGetSaDeviceResourceManagerForEndpoint(v13, &v12);
    v4 = SaDeviceResourceManagerForEndpoint;
    if ( SaDeviceResourceManagerForEndpoint < 0 )
    {
      v6 = 32LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)SaDeviceResourceManagerForEndpoint,
        v10);
LABEL_17:
      wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v12);
      goto LABEL_18;
    }
    v7 = v12;
    if ( !v12 )
    {
      v4 = -2147023728;
      goto LABEL_17;
    }
    v8 = *a2;
    *a2 = 0LL;
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v7 = v12;
    }
    if ( v7 )
    {
      SaDeviceResourceManagerForEndpoint = (**(__int64 (__fastcall ***)(struct ISaDeviceResourceManager *, GUID *, __int64 *))v7)(
                                             v7,
                                             &GUID_2c514db3_1b76_4d4e_86f9_fce05a5d2b85,
                                             a2);
      v4 = SaDeviceResourceManagerForEndpoint;
      if ( SaDeviceResourceManagerForEndpoint < 0 )
      {
        v6 = 36LL;
        goto LABEL_13;
      }
    }
    else
    {
      *a2 = 0LL;
    }
    v4 = 0;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
    (const char *)(unsigned int)EndpointCharacteristics,
    v10);
LABEL_18:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
  return v4;
}
