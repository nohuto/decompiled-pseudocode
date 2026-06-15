/*
 * XREFs of ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18001ECEC
 * Callers:
 *     ??$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeStrip@@AEAPEBG@Z @ 0x18001EAF4 (--$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVol.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ShouldUseBluetoothControls@BluetoothControls@@YAJPEAUIMMDevice@@PEA_N@Z @ 0x18001F0D4 (-ShouldUseBluetoothControls@BluetoothControls@@YAJPEAUIMMDevice@@PEA_N@Z.c)
 *     ?GetPath@VolumeHelpers@@YAJPEAUIMMDevice@@PEAPEAUIPartsList@@@Z @ 0x18001F194 (-GetPath@VolumeHelpers@@YAJPEAUIMMDevice@@PEAPEAUIPartsList@@@Z.c)
 *     ??0CMeterControlBase@@QEAA@XZ @ 0x180020DD0 (--0CMeterControlBase@@QEAA@XZ.c)
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180020EF8 (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180020F4C (-Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolum.c)
 *     ?Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteControlHandler@@@Z @ 0x1800212E0 (-Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteCon.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002D1B8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800DDE2C (WPP_SF_S.c)
 *     ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@VIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Z @ 0x1800F15E0 (--$MakeAndInitialize@VBluetoothMute@BluetoothControls@@VIMuteControlHandler@@AEAPEAUIMMDevice@@A.c)
 *     ??$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@VIVolumeControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIVolumeControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Z @ 0x1800F1804 (--$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@VIVolumeControlHandler@@AEAPEAUIMMDevic.c)
 *     ?Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z @ 0x180110F7C (-Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z.c)
 *     ?Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180128338 (-Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CVolumeStrip::RuntimeClassInitialize(
        struct IVolumeControlHandler **this,
        const unsigned __int16 *a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // ebx
  struct IMMDeviceEnumeratorVtbl *lpVtbl; // rax
  int v11; // eax
  int ShouldUseBluetoothControls; // eax
  bool *v13; // r8
  struct IPartsList **v14; // r8
  char v15; // si
  _QWORD *v16; // r15
  int Path; // eax
  struct IMMDeviceVtbl *v18; // r14
  bool v19; // zf
  _QWORD *v20; // rsi
  struct IMMDeviceVtbl *v21; // rax
  struct IMMDeviceVtbl *v22; // rbx
  char v23; // r14
  int v24; // eax
  struct IMMDevice *v25; // rcx
  struct IMMDeviceVtbl *v26; // rcx
  CMeterControlBase *v27; // rax
  CMeterControlBase *v28; // rbx
  int v29; // eax
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // r9
  int v34; // [rsp+20h] [rbp-30h]
  struct IMMDevice *v35; // [rsp+30h] [rbp-20h] BYREF
  struct IMMDevice *v36; // [rsp+38h] [rbp-18h] BYREF
  IMMDevice *v37; // [rsp+40h] [rbp-10h]
  char v38; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  IMMDevice v40; // [rsp+90h] [rbp+40h] BYREF
  __int64 v41; // [rsp+A0h] [rbp+50h] BYREF
  struct IMMDevice v42; // [rsp+A8h] [rbp+58h] BYREF

  v4 = this + 19;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    this + 19,
    0LL);
  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  v8 = _AllocStringWorker<CTCoAllocPolicy>(v6, v5, a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x146,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v8,
      v34);
    return v9;
  }
  v35 = 0LL;
  lpVtbl = g_DeviceEnumerator->lpVtbl;
  v35 = 0LL;
  v11 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, struct IMMDevice **))lpVtbl->GetDevice)(
          g_DeviceEnumerator,
          *v4,
          &v35);
  v9 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x149,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v11,
      v34);
    goto LABEL_36;
  }
  v41 = 0LL;
  ShouldUseBluetoothControls = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v35->lpVtbl->QueryInterface)(
                                 v35,
                                 &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
                                 &v41);
  v9 = ShouldUseBluetoothControls;
  if ( ShouldUseBluetoothControls < 0 )
  {
    v31 = 332LL;
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)ShouldUseBluetoothControls,
      v34);
LABEL_48:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v41);
    goto LABEL_36;
  }
  ShouldUseBluetoothControls = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v41 + 64LL))(
                                 v41,
                                 (char *)this + 160);
  v9 = ShouldUseBluetoothControls;
  if ( ShouldUseBluetoothControls < 0 )
  {
    v31 = 334LL;
    goto LABEL_43;
  }
  LOBYTE(v40.lpVtbl) = 0;
  ShouldUseBluetoothControls = BluetoothControls::ShouldUseBluetoothControls((BluetoothControls *)v35, &v40, v13);
  v9 = ShouldUseBluetoothControls;
  if ( ShouldUseBluetoothControls < 0 )
  {
    v31 = 337LL;
    goto LABEL_43;
  }
  v15 = (char)v40.lpVtbl;
  v16 = this + 21;
  if ( LOBYTE(v40.lpVtbl) )
  {
    v40.lpVtbl = (struct IMMDeviceVtbl *)(this + 1);
    v36 = v35;
    ShouldUseBluetoothControls = Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothVolume,IVolumeControlHandler,IMMDevice * &,IControlChangeNotify * &>(
                                   this + 21,
                                   &v36,
                                   &v40);
    v9 = ShouldUseBluetoothControls;
    if ( ShouldUseBluetoothControls < 0 )
    {
      v31 = 340LL;
      goto LABEL_43;
    }
  }
  v42.lpVtbl = 0LL;
  Path = VolumeHelpers::GetPath((VolumeHelpers *)v35, &v42, v14);
  v9 = Path;
  if ( Path < 0 )
  {
    if ( Path == -2004287484 )
    {
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v42);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v41);
      v9 = -2004287484;
      goto LABEL_36;
    }
    v32 = 345LL;
    goto LABEL_45;
  }
  if ( !*v16 && v42.lpVtbl )
    CVolumeHardware::Make(
      v35,
      (struct IControlChangeNotify *)((unsigned __int64)(this + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
      (struct IPartsList *)v42.lpVtbl,
      this + 21);
  if ( !*v16 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_3a53c1b98d243e7fdf5f1bbdfd5ff184_Traceguids, a2);
    }
    v18 = (struct IMMDeviceVtbl *)(this + 1);
    Path = CVolumeSoftware::Make(
             v35,
             (struct IControlChangeNotify *)((unsigned __int64)(this + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
             this + 21);
    v9 = Path;
    if ( Path >= 0 )
      goto LABEL_15;
    v32 = 359LL;
LABEL_45:
    v33 = (unsigned int)Path;
LABEL_46:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)v33,
      v34);
LABEL_47:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v42);
    goto LABEL_48;
  }
  v18 = (struct IMMDeviceVtbl *)(this + 1);
LABEL_15:
  v19 = v15 == 0;
  v20 = this + 22;
  if ( !v19 )
  {
    v40.lpVtbl = v18;
    v36 = v35;
    Path = Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothMute,IMuteControlHandler,IMMDevice * &,IControlChangeNotify * &>(
             this + 22,
             &v36,
             &v40);
    v9 = Path;
    if ( Path < 0 )
    {
      v32 = 371LL;
      goto LABEL_45;
    }
  }
  if ( !*v20 )
  {
    if ( v42.lpVtbl )
      CMuteHardware::Make(
        v35,
        (struct IControlChangeNotify *)((unsigned __int64)v18 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
        (struct IPartsList *)v42.lpVtbl,
        this + 22);
    if ( !*v20 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_3a53c1b98d243e7fdf5f1bbdfd5ff184_Traceguids, a2);
      }
      Path = CMuteSoftware::Make(
               v35,
               (struct IControlChangeNotify *)((unsigned __int64)v18 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
               this + 22);
      v9 = Path;
      if ( Path < 0 )
      {
        v32 = 384LL;
        goto LABEL_45;
      }
    }
  }
  if ( v42.lpVtbl )
  {
    v21 = (struct IMMDeviceVtbl *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v22 = v21;
    v40.lpVtbl = v21;
    if ( !v21 )
    {
      v36 = 0LL;
      v9 = -2147024882;
      v33 = 2147942414LL;
      v32 = 395LL;
      goto LABEL_46;
    }
    CMeterControlBase::CMeterControlBase((CMeterControlBase *)v21);
    v22->QueryInterface = (HRESULT (__stdcall *)(IMMDevice *, const IID *const, void **))&CMeterHardware::`vftable';
    v22->OpenPropertyStore = 0LL;
    v22->GetId = 0LL;
    v36 = (struct IMMDevice *)v22;
    v37 = (IMMDevice *)&v36;
    v23 = 1;
    v38 = 1;
    v24 = CMeterHardware::Initialize((CMeterHardware *)v22, v35, (struct IPartsList *)v42.lpVtbl);
    v25 = v36;
    if ( v24 >= 0 )
    {
      this[23] = (struct IVolumeControlHandler *)v36;
      v23 = 0;
    }
    if ( v23 )
      ((void (__fastcall *)(struct IMMDevice *))v25->lpVtbl->Release)(v25);
  }
  v26 = (struct IMMDeviceVtbl *)this[23];
  if ( !v26 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_3a53c1b98d243e7fdf5f1bbdfd5ff184_Traceguids, a2);
    }
    v27 = (CMeterControlBase *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
    v28 = v27;
    v37 = (IMMDevice *)v27;
    if ( !v27 )
    {
      v40.lpVtbl = 0LL;
      v9 = -2147024882;
      v33 = 2147942414LL;
      v32 = 410LL;
      goto LABEL_46;
    }
    CMeterControlBase::CMeterControlBase(v27);
    *(_QWORD *)v28 = &CMeterSoftware::`vftable';
    *((_QWORD *)v28 + 4) = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)v28 + 1, 0, 0);
    v40.lpVtbl = (struct IMMDeviceVtbl *)v28;
    v37 = &v40;
    v38 = 1;
    v29 = (*(__int64 (__fastcall **)(CMeterControlBase *, struct IMMDevice *))(*(_QWORD *)v28 + 48LL))(v28, v35);
    v9 = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19D,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
        (const char *)(unsigned int)v29,
        v34);
      (*((void (__fastcall **)(struct IMMDeviceVtbl *))v40.lpVtbl->QueryInterface + 2))(v40.lpVtbl);
      goto LABEL_47;
    }
    v26 = v40.lpVtbl;
    this[23] = (struct IVolumeControlHandler *)v40.lpVtbl;
  }
  Path = (*((__int64 (__fastcall **)(struct IMMDeviceVtbl *))v26->QueryInterface + 12))(v26);
  v9 = Path;
  if ( Path < 0 )
  {
    v32 = 429LL;
    goto LABEL_45;
  }
  Path = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v20 + 56LL))(*v20);
  v9 = Path;
  if ( Path < 0 )
  {
    v32 = 430LL;
    goto LABEL_45;
  }
  Path = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 200LL))(*v16);
  v9 = Path;
  if ( Path < 0 )
  {
    v32 = 431LL;
    goto LABEL_45;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v42);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v41);
  v9 = 0;
LABEL_36:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v35);
  return v9;
}
