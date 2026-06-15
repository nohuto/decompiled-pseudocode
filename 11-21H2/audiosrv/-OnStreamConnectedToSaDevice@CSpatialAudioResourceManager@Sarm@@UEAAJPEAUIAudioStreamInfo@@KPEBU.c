/*
 * XREFs of ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x180016890
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18000F4A4 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18004EB08 (Create_SpatialAudioDevicePropertyReader.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DB488 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusiveModeListener@@@Z @ 0x1801254A8 (--$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusive.c)
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x1801262A0 (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 *     ?Find@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResourcePool@Sarm@@PEAUISaDeviceProxy@@@Z @ 0x18012680C (-Find@-$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResou.c)
 *     ?LogExclusiveListenerRequired@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x1801276CC (-LogExclusiveListenerRequired@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x180127A60 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1801287F4 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCEndpointResourcePool@2@@Z @ 0x180128F18 (-SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCE.c)
 *     ?reset@?$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18012995C (-reset@-$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Sarm::CSpatialAudioResourceManager::OnStreamConnectedToSaDevice(
        Sarm::CSpatialAudioResourceManager *this,
        struct IAudioStreamInfo *a2,
        unsigned int a3,
        struct _GUID *a4,
        const struct SPATIAL_STREAM_PROPERTIES *a5)
{
  struct SPATIAL_STREAM_PROPERTIES *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  HRESULT v12; // eax
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  void (__fastcall **v17)(_QWORD, _QWORD, _QWORD); // rax
  int v18; // eax
  int v19; // ebx
  __int64 v20; // rax
  int v21; // eax
  int v22; // r15d
  bool v23; // bl
  char v24; // r14
  HRESULT v25; // eax
  int ActivationFactory; // eax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v31; // rdx
  CSpatialAudioResourceManagerTraceLogger *v32; // rcx
  int v33; // eax
  unsigned int v34; // edi
  unsigned __int64 v35; // r9
  __int64 v36; // rdx
  __int64 (__fastcall *v37)(struct IAudioStreamInfo *, __int64 *); // rbx
  int v38; // eax
  __int64 v39; // rax
  int v40; // eax
  int v41; // eax
  struct Sarm::CEndpointResourcePool *v42; // r14
  int v43; // eax
  const char *v44; // r9
  wil::details::in1diag3 *v45; // rcx
  unsigned int v46; // ebx
  unsigned int v47; // edi
  __int64 v48; // rax
  int v49; // eax
  unsigned int v50; // ebx
  int UserDataCount; // [rsp+20h] [rbp-E0h]
  struct ISaDeviceProxy *v52; // [rsp+38h] [rbp-C8h] BYREF
  struct SPATIAL_STREAM_PROPERTIES *v53; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v55; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v56; // [rsp+58h] [rbp-A8h] BYREF
  int v57; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v58; // [rsp+64h] [rbp-9Ch] BYREF
  BOOL v59; // [rsp+68h] [rbp-98h] BYREF
  int v60; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v61; // [rsp+70h] [rbp-90h]
  __int64 *v62; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v63; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR v64; // [rsp+88h] [rbp-78h] BYREF
  __int64 v65; // [rsp+98h] [rbp-68h] BYREF
  __int64 v66; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-58h] BYREF
  struct _GUID *v68; // [rsp+B0h] [rbp-50h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+B8h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR v70; // [rsp+C8h] [rbp-38h] BYREF
  EVENT_DESCRIPTOR v71; // [rsp+D8h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+E8h] [rbp-18h] BYREF
  HSTRING string; // [rsp+100h] [rbp+0h] BYREF
  HSTRING_HEADER v74; // [rsp+108h] [rbp+8h] BYREF
  HSTRING v75; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v76[3]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v77; // [rsp+158h] [rbp+58h]
  CLSID pClsid; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+170h] [rbp+70h] BYREF
  void *v80; // [rsp+180h] [rbp+80h]
  int v81; // [rsp+188h] [rbp+88h]
  int v82; // [rsp+18Ch] [rbp+8Ch]
  BOOL *v83; // [rsp+190h] [rbp+90h]
  __int64 v84; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+1A0h] [rbp+A0h] BYREF
  void *v86; // [rsp+1B0h] [rbp+B0h]
  int v87; // [rsp+1B8h] [rbp+B8h]
  int v88; // [rsp+1BCh] [rbp+BCh]
  BOOL *v89; // [rsp+1C0h] [rbp+C0h]
  __int64 v90; // [rsp+1C8h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+1D0h] [rbp+D0h] BYREF
  void *v92; // [rsp+1E0h] [rbp+E0h]
  int v93; // [rsp+1E8h] [rbp+E8h]
  int v94; // [rsp+1ECh] [rbp+ECh]
  struct SPATIAL_STREAM_PROPERTIES **v95; // [rsp+1F0h] [rbp+F0h]
  __int64 v96; // [rsp+1F8h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+200h] [rbp+100h] BYREF
  void *v98; // [rsp+210h] [rbp+110h]
  int v99; // [rsp+218h] [rbp+118h]
  int v100; // [rsp+21Ch] [rbp+11Ch]
  const char *v101; // [rsp+220h] [rbp+120h]
  __int64 v102; // [rsp+228h] [rbp+128h]
  int *v103; // [rsp+230h] [rbp+130h]
  __int64 v104; // [rsp+238h] [rbp+138h]
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v68 = a4;
  v61 = a3;
  v8 = a5;
  v53 = a5;
  if ( (unsigned int)dword_1801C0178 > 5 )
  {
    v57 = 299;
    v103 = &v57;
    v104 = 4LL;
    v101 = "Sarm::CSpatialAudioResourceManager::OnStreamConnectedToSaDevice";
    v102 = 64LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 5;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = (ULONGLONG)off_1801C0180;
    UserData.Size = *(unsigned __int16 *)off_1801C0180;
    UserData.Reserved = 2;
    v98 = &unk_18018BB2A;
    v99 = 21;
    v100 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    v8 = v53;
    a4 = v68;
  }
  memset(v76, 0, sizeof(v76));
  v77 = 0LL;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x12F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)a4);
  if ( !a4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x130,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      0LL);
  if ( !v8 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x131,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)a4);
  v9 = 0LL;
  v65 = 0LL;
  (**(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, __int64 *))a2)(
    a2,
    &GUID_ccc4b3e5_9aeb_4f1c_bcc8_622c2fd6c077,
    &v65);
  if ( v65 )
  {
    v10 = *((_DWORD *)this + 62) == 17 ? (unsigned int)v65 % 0x11 : (unsigned int)v65 % *((_DWORD *)this + 62);
    v11 = *((_QWORD *)this + 29);
    if ( v11 )
    {
      v31 = *(_QWORD *)(v11 + 8 * v10);
      if ( v31 )
      {
        while ( *(_DWORD *)(v31 + 112) != (_DWORD)v65 || *(_QWORD *)v31 != v65 )
        {
          v31 = *(_QWORD *)(v31 + 104);
          if ( !v31 )
            goto LABEL_10;
        }
        v9 = v31 + 8;
      }
    }
  }
LABEL_10:
  if ( v65 )
    (*(void (**)(void))(*(_QWORD *)v65 + 16LL))();
  if ( v9 )
    return 0LL;
  if ( *((_QWORD *)this + 72) )
  {
LABEL_26:
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    v17 = *(void (__fastcall ***)(_QWORD, _QWORD, _QWORD))a2;
    v56 = 0LL;
    v18 = ((__int64 (__fastcall *)(struct IAudioStreamInfo *, __int64 **))v17[14])(a2, &v56);
    v19 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14D,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)(unsigned int)v18,
        UserDataCount);
    }
    else
    {
      if ( v56 )
      {
        v20 = *v56;
        v52 = 0LL;
        v21 = (*(__int64 (__fastcall **)(__int64 *, struct ISaDeviceProxy **))(v20 + 192))(v56, &v52);
        v19 = v21;
        if ( v21 < 0 )
        {
          v35 = (unsigned int)v21;
          v36 = 337LL;
LABEL_107:
          v45 = retaddr;
          goto LABEL_108;
        }
        if ( !v52 )
        {
          v19 = -2005139197;
          v36 = 338LL;
LABEL_106:
          v35 = (unsigned int)v19;
          goto LABEL_107;
        }
        v22 = a3 & 0x800000;
        if ( (a3 & 0x800000) != 0 )
          goto LABEL_96;
        v23 = 0;
        v24 = 0;
        if ( !*((_BYTE *)this + 145) )
        {
LABEL_40:
          if ( (unsigned int)dword_1801C0178 > 4 )
          {
            v59 = v24 != 0;
            v89 = &v59;
            v90 = 4LL;
            *(_DWORD *)&v71.Id = 184549376;
            *(_DWORD *)&v71.Level = 4;
            v71.Keyword = 0LL;
            v85.Ptr = (ULONGLONG)off_1801C0180;
            v85.Size = *(unsigned __int16 *)off_1801C0180;
            v85.Reserved = 2;
            v86 = &unk_18018B89B;
            v87 = 38;
            v88 = 1;
            EventWriteTransfer(RegHandle, &v71, 0LL, 0LL, 3u, &v85);
          }
          if ( v24 )
            v23 = CoGetPSClsid(&GUID_dc493d8a_c0ca_481c_88af_f832a73aaa21, &pClsid) >= 0;
          if ( (unsigned int)dword_1801C0178 > 4 )
          {
            LODWORD(v53) = v23;
            v95 = &v53;
            v96 = 4LL;
            *(_DWORD *)&v64.Id = 184549376;
            *(_DWORD *)&v64.Level = 4;
            v64.Keyword = 0LL;
            v91.Ptr = (ULONGLONG)off_1801C0180;
            v91.Size = *(unsigned __int16 *)off_1801C0180;
            v91.Reserved = 2;
            v92 = &unk_18018B872;
            v93 = 29;
            v94 = 1;
            EventWriteTransfer(RegHandle, &v64, 0LL, 0LL, 3u, &v91);
          }
          if ( !v23 )
          {
            v19 = 0;
            goto LABEL_48;
          }
          v54 = 0LL;
          v37 = *(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 24LL);
          wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v54);
          v38 = v37(a2, &v54);
          v19 = v38;
          if ( v38 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x159,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)(unsigned int)v38,
              UserDataCount);
LABEL_94:
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v54);
            goto LABEL_48;
          }
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v54 + 368LL))(v54) )
          {
            v19 = 0;
            goto LABEL_94;
          }
          v55 = 0LL;
          v39 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v52 + 24LL))(v52);
          v40 = Create_SpatialAudioDevicePropertyReader(v39, 0LL, &v55);
          v19 = v40;
          if ( v40 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x160,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)(unsigned int)v40,
              UserDataCount);
LABEL_93:
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v55);
            goto LABEL_94;
          }
          v41 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v55 + 112LL))(v55, &v60);
          v19 = v41;
          if ( v41 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x163,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)(unsigned int)v41,
              UserDataCount);
            goto LABEL_93;
          }
          if ( !v60 )
          {
            v19 = 0;
            goto LABEL_93;
          }
          *((_QWORD *)&v76[0] + 1) = 0x100000001LL;
          v53 = (struct SPATIAL_STREAM_PROPERTIES *)v76;
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v55);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v54);
LABEL_96:
          v42 = (struct Sarm::CEndpointResourcePool *)util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::Find(
                                                        (char *)this + 152,
                                                        v52);
          *(_QWORD *)&v64.Id = v42;
          if ( !v42 )
          {
            v43 = Sarm::CSpatialAudioResourceManager::SetupEndpointResourcePool(
                    this,
                    v52,
                    (struct Sarm::CEndpointResourcePool **)&v64);
            v19 = v43;
            v45 = retaddr;
            if ( v43 < 0 )
            {
              v35 = (unsigned int)v43;
              v36 = 374LL;
LABEL_108:
              wil::details::in1diag3::Return_Hr(
                v45,
                (void *)v36,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                (const char *)v35,
                UserDataCount);
LABEL_48:
              if ( v52 )
                (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v52 + 16LL))(v52);
              goto LABEL_50;
            }
            v42 = *(struct Sarm::CEndpointResourcePool **)&v64.Id;
            if ( !*(_QWORD *)&v64.Id )
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0x177,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                v44);
          }
          v19 = Sarm::CSpatialAudioResourceManager::AddStream(this, a2, v61, v68, v53, v42);
          if ( v19 < 0 )
          {
            if ( !*((_DWORD *)v42 + 3) && *(_QWORD *)v42 )
              ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos((char *)this + 152);
            v36 = 385LL;
            goto LABEL_106;
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v52);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v56);
          if ( this != (Sarm::CSpatialAudioResourceManager *)-64LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
          if ( !v22 )
          {
            v46 = *((_DWORD *)v53 + 3);
            v47 = *((_DWORD *)v53 + 2);
            v48 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
            v49 = Sarm::CSpatialAudioResourceManager::OnRequestDynamicObjects(this, v48, v47, v46);
            v50 = v49;
            if ( v49 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x18B,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                (const char *)(unsigned int)v49,
                UserDataCount);
              return v50;
            }
          }
          return 0LL;
        }
        v63 = 0LL;
        v75 = 0LL;
        v25 = WindowsCreateStringReference(L"Windows.Graphics.Holographic.HolographicDisplay", 0x2Fu, &v74, &v75);
        if ( v25 < 0 )
        {
          RaiseException(v25, 1u, 0, 0LL);
          __debugbreak();
        }
        else
        {
          ActivationFactory = RoGetActivationFactory(v75, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v63);
          v75 = 0LL;
          if ( ActivationFactory < 0 )
          {
LABEL_38:
            if ( v63 )
              (*(void (__fastcall **)(__int64 *))(*v63 + 16))(v63);
            goto LABEL_40;
          }
          v27 = *v63;
          v67 = 0LL;
          v28 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v27 + 64))(v63, &v67);
          v29 = v67;
          if ( v28 < 0 || !v67 )
          {
LABEL_36:
            if ( v29 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
            goto LABEL_38;
          }
        }
        v24 = 1;
        goto LABEL_36;
      }
      v19 = -2005139190;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14E,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)0x887C010ALL,
        UserDataCount);
    }
LABEL_50:
    if ( v56 )
      (*(void (__fastcall **)(__int64 *))(*v56 + 16))(v56);
    if ( this != (Sarm::CSpatialAudioResourceManager *)-64LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    return (unsigned int)v19;
  }
  if ( *((_BYTE *)this + 145) )
  {
    v62 = 0LL;
    string = 0LL;
    v12 = WindowsCreateStringReference(
            L"Windows.Graphics.Holographic.HolographicDisplay",
            0x2Fu,
            &hstringHeader,
            &string);
    if ( v12 < 0 )
    {
      RaiseException(v12, 1u, 0, 0LL);
      __debugbreak();
    }
    else
    {
      v13 = RoGetActivationFactory(string, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v62);
      string = 0LL;
      if ( v13 < 0 )
      {
LABEL_21:
        if ( v62 )
          (*(void (__fastcall **)(__int64 *))(*v62 + 16))(v62);
        goto LABEL_23;
      }
      v14 = *v62;
      v66 = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v14 + 64))(v62, &v66);
      v16 = v66;
      if ( v15 < 0 || !v66 )
      {
LABEL_19:
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        goto LABEL_21;
      }
    }
    LOBYTE(v9) = 1;
    goto LABEL_19;
  }
LABEL_23:
  if ( (unsigned int)dword_1801C0178 > 4 )
  {
    v58 = (_BYTE)v9 != 0;
    v83 = &v58;
    v84 = 4LL;
    *(_DWORD *)&v70.Id = 184549376;
    *(_DWORD *)&v70.Level = 4;
    v70.Keyword = 0LL;
    v79.Ptr = (ULONGLONG)off_1801C0180;
    v79.Size = *(unsigned __int16 *)off_1801C0180;
    v79.Reserved = 2;
    v80 = &unk_18018B89B;
    v81 = 38;
    v82 = 1;
    EventWriteTransfer(RegHandle, &v70, 0LL, 0LL, 3u, &v79);
  }
  if ( !(_BYTE)v9 )
    goto LABEL_26;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  CSpatialAudioResourceManagerTraceLogger::LogExclusiveListenerRequired(v32, *((unsigned __int8 *)this + 145));
  if ( !*((_BYTE *)this + 145)
    || *((_QWORD *)this + 72)
    || (wil::com_ptr_t<CExclusiveModeListener,wil::err_returncode_policy>::reset((char *)this + 576),
        v33 = Microsoft::WRL::Details::MakeAndInitialize<CExclusiveModeListener,CExclusiveModeListener,>((char *)this + 576),
        v34 = v33,
        v33 >= 0) )
  {
    if ( this != (Sarm::CSpatialAudioResourceManager *)-104LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x143,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
    (const char *)(unsigned int)v33,
    UserDataCount);
  if ( this != (Sarm::CSpatialAudioResourceManager *)-104LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  return v34;
}
