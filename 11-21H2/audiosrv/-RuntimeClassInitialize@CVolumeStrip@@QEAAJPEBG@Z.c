/*
 * XREFs of ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18004493C
 * Callers:
 *     ??$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeStrip@@AEAPEBG@Z @ 0x180044844 (--$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVol.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180044D2C (-Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolum.c)
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18004507C (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteControlHandler@@@Z @ 0x1800450D0 (-Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteCon.c)
 *     ?GetPath@VolumeHelpers@@YAJPEAUIMMDevice@@PEAPEAUIPartsList@@@Z @ 0x180045964 (-GetPath@VolumeHelpers@@YAJPEAUIMMDevice@@PEAPEAUIPartsList@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18004AA38 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18004AA90 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ??0CMeterControlBase@@QEAA@XZ @ 0x18004B76C (--0CMeterControlBase@@QEAA@XZ.c)
 *     ?ShouldUseBluetoothControls@BluetoothControls@@YAJPEAUIMMDevice@@PEA_N@Z @ 0x180051808 (-ShouldUseBluetoothControls@BluetoothControls@@YAJPEAUIMMDevice@@PEA_N@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_S @ 0x1800C6210 (WPP_SF_S.c)
 *     ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@VIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Z @ 0x1800C62BC (--$MakeAndInitialize@VBluetoothMute@BluetoothControls@@VIMuteControlHandler@@AEAPEAUIMMDevice@@A.c)
 *     ??$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@VIVolumeControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIVolumeControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Z @ 0x1800C63BC (--$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@VIVolumeControlHandler@@AEAPEAUIMMDevic.c)
 *     ?Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z @ 0x1800CA5BC (-Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z.c)
 *     ?Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@@@Z @ 0x1800CD298 (-Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CVolumeStrip::RuntimeClassInitialize(CVolumeStrip *this, const unsigned __int16 *a2)
{
  void **v4; // r14
  void *v5; // rcx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r15
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // eax
  int ShouldUseBluetoothControls; // eax
  bool *v12; // r8
  struct IPartsList **v13; // r8
  char lpVtbl; // r14
  _QWORD *v15; // r15
  int Path; // eax
  unsigned int v17; // esi
  struct IMMDeviceVtbl *v18; // rsi
  bool v19; // zf
  _QWORD *v20; // r14
  CMeterControlBase *v21; // rax
  struct IMMDeviceVtbl *v22; // rbx
  char v23; // si
  int v24; // eax
  struct IMMDeviceVtbl *v25; // rcx
  struct IMMDeviceVtbl *v26; // rcx
  CMeterControlBase *v27; // rax
  CMeterControlBase *v28; // rbx
  int v29; // eax
  int v30; // eax
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r9
  unsigned __int16 **v35; // [rsp+20h] [rbp-40h]
  int v36; // [rsp+20h] [rbp-40h]
  unsigned __int64 *v37; // [rsp+28h] [rbp-38h]
  unsigned int v38; // [rsp+30h] [rbp-30h]
  __int64 v39; // [rsp+40h] [rbp-20h] BYREF
  struct IMMDevice *v40; // [rsp+48h] [rbp-18h] BYREF
  char v41; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  IMMDevice v43; // [rsp+A0h] [rbp+40h] BYREF
  struct IMMDevice *v44; // [rsp+B0h] [rbp+50h] BYREF
  struct IMMDevice v45; // [rsp+B8h] [rbp+58h] BYREF

  v4 = (void **)((char *)this + 152);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (char *)this + 152,
    0LL);
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  *v4 = 0LL;
  v7 = v6 + 1;
  if ( v6 + 1 < v6 || !is_mul_ok(v7, 2uLL) )
  {
    v8 = -2147024362;
    goto LABEL_74;
  }
  v8 = CTCoAllocPolicy::Alloc(v5, (v7 * (unsigned __int128)2uLL) >> 64, 2 * v7, v4);
  if ( (v8 & 0x80000000) != 0 )
  {
LABEL_74:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x146,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)v8,
      (int)v35);
    return v8;
  }
  StringCchCopyNExW((unsigned __int16 *)*v4, v6 + 1, a2, v6, v35, v37, v38);
  v44 = 0LL;
  v9 = *(_QWORD *)g_DeviceEnumerator;
  v44 = 0LL;
  v10 = (*(__int64 (__fastcall **)(LPVOID, void *, struct IMMDevice **))(v9 + 40))(g_DeviceEnumerator, *v4, &v44);
  v8 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x149,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v10,
      v36);
    goto LABEL_37;
  }
  v39 = 0LL;
  ShouldUseBluetoothControls = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v44->lpVtbl->QueryInterface)(
                                 v44,
                                 &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
                                 &v39);
  v8 = ShouldUseBluetoothControls;
  if ( ShouldUseBluetoothControls < 0 )
  {
    v32 = 332LL;
LABEL_45:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)ShouldUseBluetoothControls,
      v36);
    goto LABEL_36;
  }
  ShouldUseBluetoothControls = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v39 + 64LL))(
                                 v39,
                                 (char *)this + 160);
  v8 = ShouldUseBluetoothControls;
  if ( ShouldUseBluetoothControls < 0 )
  {
    v32 = 334LL;
    goto LABEL_45;
  }
  LOBYTE(v43.lpVtbl) = 0;
  ShouldUseBluetoothControls = BluetoothControls::ShouldUseBluetoothControls((BluetoothControls *)v44, &v43, v12);
  v8 = ShouldUseBluetoothControls;
  if ( ShouldUseBluetoothControls < 0 )
  {
    v32 = 337LL;
    goto LABEL_45;
  }
  lpVtbl = (char)v43.lpVtbl;
  v15 = (_QWORD *)((char *)this + 168);
  if ( LOBYTE(v43.lpVtbl) )
  {
    v43.lpVtbl = (struct IMMDeviceVtbl *)((char *)this + 8);
    v40 = v44;
    ShouldUseBluetoothControls = Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothVolume,IVolumeControlHandler,IMMDevice * &,IControlChangeNotify * &>(
                                   (char *)this + 168,
                                   &v40,
                                   &v43);
    v8 = ShouldUseBluetoothControls;
    if ( ShouldUseBluetoothControls < 0 )
    {
      v32 = 340LL;
      goto LABEL_45;
    }
  }
  v45.lpVtbl = 0LL;
  Path = VolumeHelpers::GetPath((VolumeHelpers *)v44, &v45, v13);
  v17 = Path;
  if ( Path < 0 )
  {
    v8 = -2004287484;
    if ( Path != -2004287484 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x159,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
        (const char *)(unsigned int)Path,
        v36);
      v8 = v17;
    }
    goto LABEL_35;
  }
  if ( *v15 )
  {
    v18 = (struct IMMDeviceVtbl *)((char *)this + 8);
  }
  else if ( !v45.lpVtbl
         || (v18 = (struct IMMDeviceVtbl *)((char *)this + 8),
             CVolumeHardware::Make(
               v44,
               (struct IControlChangeNotify *)this + 1,
               (struct IPartsList *)v45.lpVtbl,
               (struct IVolumeControlHandler **)this + 21),
             !*v15) )
  {
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_63a4fa3387a03256ea8ee70028ce711d_Traceguids, a2);
    }
    v18 = (struct IMMDeviceVtbl *)((char *)this + 8);
    v30 = CVolumeSoftware::Make(
            v44,
            (struct IControlChangeNotify *)this + 1,
            (struct IVolumeControlHandler **)this + 21);
    v8 = v30;
    if ( v30 < 0 )
    {
      v33 = 359LL;
LABEL_71:
      v34 = (unsigned int)v30;
      goto LABEL_72;
    }
  }
  v19 = lpVtbl == 0;
  v20 = (_QWORD *)((char *)this + 176);
  if ( !v19 )
  {
    v43.lpVtbl = v18;
    v40 = v44;
    v30 = Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothMute,IMuteControlHandler,IMMDevice * &,IControlChangeNotify * &>(
            (char *)this + 176,
            &v40,
            &v43);
    v8 = v30;
    if ( v30 < 0 )
    {
      v33 = 371LL;
      goto LABEL_71;
    }
  }
  if ( !*v20 )
  {
    if ( !v45.lpVtbl
      || (CMuteHardware::Make(
            v44,
            (struct IControlChangeNotify *)v18,
            (struct IPartsList *)v45.lpVtbl,
            (struct IMuteControlHandler **)this + 22),
          !*v20) )
    {
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_63a4fa3387a03256ea8ee70028ce711d_Traceguids, a2);
      }
      v30 = CMuteSoftware::Make(v44, (struct IControlChangeNotify *)v18, (struct IMuteControlHandler **)this + 22);
      v8 = v30;
      if ( v30 < 0 )
      {
        v33 = 384LL;
        goto LABEL_71;
      }
    }
  }
  if ( v45.lpVtbl )
  {
    v21 = (CMeterControlBase *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v22 = (struct IMMDeviceVtbl *)v21;
    v40 = (struct IMMDevice *)v21;
    if ( !v21 )
    {
      v43.lpVtbl = 0LL;
      v8 = -2147024882;
      v34 = 2147942414LL;
      v33 = 395LL;
LABEL_72:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v33,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
        (const char *)v34,
        v36);
      goto LABEL_35;
    }
    CMeterControlBase::CMeterControlBase(v21);
    v22->QueryInterface = (HRESULT (__stdcall *)(IMMDevice *, const IID *const, void **))&CMeterHardware::`vftable';
    v22->OpenPropertyStore = 0LL;
    v22->GetId = 0LL;
    v43.lpVtbl = v22;
    v40 = &v43;
    v23 = 1;
    v41 = 1;
    v24 = CMeterHardware::Initialize((CMeterHardware *)v22, v44, (struct IPartsList *)v45.lpVtbl);
    v25 = v43.lpVtbl;
    if ( v24 >= 0 )
    {
      *((IMMDevice *)this + 23) = v43;
      v23 = 0;
    }
    if ( v23 )
      (*((void (__fastcall **)(struct IMMDeviceVtbl *))v25->QueryInterface + 2))(v25);
  }
  v26 = (struct IMMDeviceVtbl *)*((_QWORD *)this + 23);
  if ( v26 )
    goto LABEL_31;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_63a4fa3387a03256ea8ee70028ce711d_Traceguids, a2);
  }
  v27 = (CMeterControlBase *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v28 = v27;
  v40 = (struct IMMDevice *)v27;
  if ( !v27 )
  {
    v43.lpVtbl = 0LL;
    v8 = -2147024882;
    v34 = 2147942414LL;
    v33 = 410LL;
    goto LABEL_72;
  }
  CMeterControlBase::CMeterControlBase(v27);
  *(_QWORD *)v28 = &CMeterSoftware::`vftable';
  *((_QWORD *)v28 + 4) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)v28 + 1, 0, 0);
  v43.lpVtbl = (struct IMMDeviceVtbl *)v28;
  v40 = &v43;
  v41 = 1;
  v29 = (*(__int64 (__fastcall **)(CMeterControlBase *, struct IMMDevice *))(*(_QWORD *)v28 + 48LL))(v28, v44);
  v8 = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v29,
      v36);
    (*((void (__fastcall **)(struct IMMDeviceVtbl *))v43.lpVtbl->QueryInterface + 2))(v43.lpVtbl);
    goto LABEL_35;
  }
  v26 = v43.lpVtbl;
  *((IMMDevice *)this + 23) = v43;
LABEL_31:
  v30 = (*((__int64 (__fastcall **)(struct IMMDeviceVtbl *))v26->QueryInterface + 12))(v26);
  v8 = v30;
  if ( v30 < 0 )
  {
    v33 = 429LL;
    goto LABEL_71;
  }
  v30 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v20 + 56LL))(*v20);
  v8 = v30;
  if ( v30 < 0 )
  {
    v33 = 430LL;
    goto LABEL_71;
  }
  v30 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 192LL))(*v15);
  v8 = v30;
  if ( v30 < 0 )
  {
    v33 = 431LL;
    goto LABEL_71;
  }
  v8 = 0;
LABEL_35:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
LABEL_36:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
LABEL_37:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
  return v8;
}
