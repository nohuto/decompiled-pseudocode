/*
 * XREFs of ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800F9E24
 * Callers:
 *     wil::details::lambda_call__lambda_64d58209b0db783832ac6c999c258c0f___::_lambda_call__lambda_64d58209b0db783832ac6c999c258c0f___ @ 0x1800F542C (wil--details--lambda_call__lambda_64d58209b0db783832ac6c999c258c0f___--_lambda_call__lambda_64d5.c)
 *     ?CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F60CC (-CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristic.c)
 *     ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F6550 (-CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDes.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800FA7BC (-RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetTimeSec@CQPCStopWatch@@QEAANXZ @ 0x180005E18 (-GetTimeSec@CQPCStopWatch@@QEAANXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18000CB5C (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?Start@CQPCStopWatch@@QEAAHXZ @ 0x18001E8D0 (-Start@CQPCStopWatch@@QEAAHXZ.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002D580 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HardwareLoopbackEnabled@EffectPack@@QEAAHXZ @ 0x18003E598 (-HardwareLoopbackEnabled@EffectPack@@QEAAHXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D88 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004BB14 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180081418 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D789C (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@43@Z @ 0x1800F4AA4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ??1?$forward_list@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800F53E0 (--1-$forward_list@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDevicePr.c)
 *     ?CreatePrimaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F5F90 (-CreatePrimaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEAUE.c)
 *     ?NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z @ 0x1800F9840 (-NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z.c)
 *     ?clear@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAAXXZ @ 0x1800FB4D0 (-clear@-$forward_list@UDisplacedStreamGroup@@V-$allocator@UDisplacedStreamGroup@@@std@@@std@@QEA.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups(
        CBtAudioResourceManagerBase *this)
{
  char v2; // r13
  CEndpointStoreCache *v3; // rcx
  int EndpointStore; // eax
  unsigned int v5; // ebx
  struct CEndpointStore *v6; // rsi
  _QWORD *v7; // r15
  _QWORD *i; // rdi
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64 *); // r14
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  struct ISaDeviceProxy *v14; // rbx
  __int64 *v15; // rdi
  unsigned __int128 v16; // kr00_16
  int v17; // eax
  __int64 *v18; // r13
  __int64 *v19; // r15
  int v20; // eax
  _QWORD *v21; // rbx
  int v22; // eax
  _QWORD *j; // rbx
  __int64 (__fastcall *v24)(CBtAudioResourceManagerBase *, EffectPack **, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD, _QWORD, __int64 *); // rdi
  int v25; // edi
  __int64 (__fastcall *v26)(struct IDeviceGraphManager *, __int64, __int64, bool, _QWORD); // rdi
  char v27; // al
  __int64 v28; // rdx
  _QWORD *k; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v30; // edi
  __int64 (__fastcall *v31)(struct IDeviceGraphManager *, _QWORD, struct ISaDeviceProxy *, bool, _QWORD); // rdi
  char v32; // al
  __int64 v33; // rdx
  __int64 v35; // rcx
  __int64 *v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // rdi
  _QWORD *v40; // rbx
  int v41[2]; // [rsp+28h] [rbp-E0h]
  _QWORD *v42; // [rsp+60h] [rbp-A8h] BYREF
  struct ISaDeviceProxy *v43; // [rsp+68h] [rbp-A0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp-98h] BYREF
  __int64 v45; // [rsp+78h] [rbp-90h] BYREF
  __int64 v46; // [rsp+80h] [rbp-88h] BYREF
  __int64 v47; // [rsp+88h] [rbp-80h] BYREF
  __int64 v48; // [rsp+90h] [rbp-78h] BYREF
  __int64 (__fastcall ***v49)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp-70h] BYREF
  __int64 (__fastcall ***v50)(_QWORD, GUID *, __int64 *); // [rsp+A0h] [rbp-68h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-60h]
  struct CEndpointStore *v52; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v53; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-40h]
  unsigned __int128 v55; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v56; // [rsp+E0h] [rbp-28h]
  EffectPack *v57[2]; // [rsp+E8h] [rbp-20h] BYREF
  std::_Ref_count_base *v58; // [rsp+F8h] [rbp-10h]
  LARGE_INTEGER v59; // [rsp+100h] [rbp-8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+108h] [rbp+0h] BYREF
  LARGE_INTEGER Frequency; // [rsp+110h] [rbp+8h] BYREF
  __int128 v62; // [rsp+118h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  if ( !*((_QWORD *)this + 6) )
    return 0LL;
  v2 = 0;
  PerformanceCount.QuadPart = 0LL;
  v59.QuadPart = 0LL;
  QueryPerformanceFrequency(&Frequency);
  CQPCStopWatch::Start(&v59);
  v52 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v3, *((const unsigned __int16 **)this + 6), &v52);
  v5 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x165,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)EndpointStore);
    goto LABEL_73;
  }
  v6 = v52;
  (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)v52 + 13) + 120LL))(
    *((_QWORD *)v52 + 13),
    &lpCriticalSection);
  v7 = (_QWORD *)((char *)this + 88);
  for ( i = (_QWORD *)*((_QWORD *)this + 11); i; i = (_QWORD *)*i )
  {
    v49 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(i + 1, &v49) >= 0 && v49 )
    {
      v46 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v49, &v46) >= 0 )
      {
        v48 = 0LL;
        v9 = v46;
        v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v46 + 232LL);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v48);
        v11 = v10(v9, &v48);
        v5 = v11;
        if ( v11 < 0 )
        {
          v12 = 373LL;
          goto LABEL_17;
        }
        if ( v48 )
        {
          v11 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64))(*(_QWORD *)g_DeviceGraphManager + 40LL))(
                  g_DeviceGraphManager,
                  v46);
          v5 = v11;
          if ( v11 < 0 )
          {
            v12 = 377LL;
LABEL_17:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v12,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
              (const char *)(unsigned int)v11);
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v48);
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v46);
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v49);
            goto LABEL_18;
          }
        }
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v48);
      }
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v46);
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v49);
  }
  v42 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v13 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int128 *))(**((_QWORD **)v6 + 13) + 104LL))(
          *((_QWORD *)v6 + 13),
          &v55);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x183,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)v13);
LABEL_35:
    v15 = (__int64 *)v55;
    goto LABEL_36;
  }
  v14 = (struct ISaDeviceProxy *)*((_QWORD *)&v55 + 1);
  v16 = v55;
  v43 = (struct ISaDeviceProxy *)(v16 >> 64);
  v15 = (__int64 *)v16;
  if ( (_QWORD)v55 == *((_QWORD *)&v55 + 1) )
  {
LABEL_36:
    if ( v15 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v15, *((__int64 **)&v55 + 1));
      std::_Deallocate<16,0>((void *)v55, (v56 - v55) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    CBtAudioResourceManagerBase::NotifyStreamChange((RTL_SRWLOCK *)this, 0);
    *(_OWORD *)v57 = 0LL;
    v58 = 0LL;
    v22 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, EffectPack **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                  + 40LL))(
            g_pEndpointCharacteristicsCache,
            *((_QWORD *)this + 6),
            0LL,
            0LL,
            v57);
    v5 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19F,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v22);
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v57);
      goto LABEL_44;
    }
    v62 = 0LL;
    for ( j = (_QWORD *)*v7; j; j = (_QWORD *)*j )
    {
      v50 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(j + 1, &v50) >= 0 && v50 )
      {
        v47 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v50, &v47) >= 0 )
        {
          v45 = 0LL;
          v24 = *(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, EffectPack **, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)this + 152LL);
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v45);
          v41[0] = 0;
          v25 = v24(this, v57, j[2], 0LL, *(_QWORD *)v41, &v62, 0LL, 0LL, &v45);
          if ( v25 < 0 )
          {
            v28 = 431LL;
LABEL_56:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v28,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
              (const char *)(unsigned int)v25);
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v45);
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v47);
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v50);
LABEL_70:
            EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v57);
            std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::~forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>(&v42);
            if ( lpCriticalSection )
              LeaveCriticalSection(lpCriticalSection);
            v5 = v25;
            goto LABEL_73;
          }
          v2 = 1;
          v26 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL);
          v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 248LL))(v47);
          v25 = v26(g_DeviceGraphManager, v47, v45, v27 == 0, 0LL);
          if ( v25 < 0 )
          {
            v28 = 438LL;
            goto LABEL_56;
          }
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v45);
        }
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v47);
      }
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v50);
    }
    std::forward_list<DisplacedStreamGroup>::clear((char *)this + 88);
    for ( k = v42; k; k = (_QWORD *)*k )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)k[1] + 200LL))(k[1]) == 2
        && (unsigned int)EffectPack::HardwareLoopbackEnabled(v57[1]) )
      {
        v30 = eLoopbackConnector;
      }
      else
      {
        v30 = eHostProcessConnector;
      }
      v43 = 0LL;
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v43);
      v25 = CBtAudioResourceManagerBase::CreatePrimaryProfileRenderSaDeviceWithDefaultParameters(
              this,
              (struct EndpointCharacteristicsDescriptor *)v57,
              v30,
              &v43);
      if ( v25 < 0 )
      {
        v33 = 451LL;
        goto LABEL_69;
      }
      v2 = 1;
      v31 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, struct ISaDeviceProxy *, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL);
      v32 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)k[1] + 248LL))(k[1]);
      v25 = v31(g_DeviceGraphManager, k[1], v43, v32 == 0, 0LL);
      if ( v25 < 0 )
      {
        v33 = 458LL;
LABEL_69:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v33,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)v25);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v43);
        goto LABEL_70;
      }
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v43);
    }
    if ( v2 )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v36 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v35,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      if ( *(_DWORD *)v36[1] > 4u )
      {
        if ( tlgKeywordOn(v36[1], 0x400000004000LL) )
        {
          v52 = COERCE_STRUCT_CENDPOINTSTORE_(CQPCStopWatch::GetTimeSec((CQPCStopWatch *)&v59));
          v43 = (struct ISaDeviceProxy *)*((_QWORD *)this + 7);
          v50 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 6);
          v45 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
            v38,
            byte_18019252F,
            v37,
            v38,
            (__int64)&v45,
            (const WCHAR **)&v50,
            (const WCHAR **)&v43,
            (__int64)&v52);
        }
      }
    }
    if ( v58 )
      std::_Ref_count_base::_Decref(v58);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v57);
    v39 = v42;
    v42 = 0LL;
    if ( v39 )
    {
      do
      {
        v40 = (_QWORD *)*v39;
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v39 + 1);
        std::_Deallocate<16,0>(v39, 0x10uLL);
        v39 = v40;
      }
      while ( v40 );
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v6);
    return 0LL;
  }
  while ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*v15 + 80LL))(*v15) == 1 )
  {
LABEL_33:
    if ( ++v15 == (__int64 *)v14 )
    {
      v7 = (_QWORD *)((char *)this + 88);
      v2 = 0;
      goto LABEL_35;
    }
  }
  v53 = 0LL;
  v54 = 0LL;
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(**((_QWORD **)v6 + 13) + 112LL))(
          *((_QWORD *)v6 + 13),
          *v15,
          &v53);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x18E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)v17);
LABEL_30:
    v19 = (__int64 *)v53;
    goto LABEL_31;
  }
  v18 = (__int64 *)*((_QWORD *)&v53 + 1);
  v19 = (__int64 *)v53;
  if ( (_QWORD)v53 == *((_QWORD *)&v53 + 1) )
  {
LABEL_31:
    if ( v19 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v19, *((__int64 **)&v53 + 1));
      std::_Deallocate<16,0>((void *)v53, (v54 - v53) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    goto LABEL_33;
  }
  while ( 1 )
  {
    v20 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64))(*(_QWORD *)g_DeviceGraphManager
                                                                                    + 40LL))(
            g_DeviceGraphManager,
            *v19,
            *v15);
    v5 = v20;
    if ( v20 < 0 )
      break;
    v50 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))&v42;
    v51 = 0LL;
    v21 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v21[1] = *v19;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v21 + 1);
    *v21 = v42;
    v51 = 0LL;
    v42 = v21;
    if ( ++v19 == v18 )
    {
      v14 = v43;
      goto LABEL_30;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x192,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
    (const char *)(unsigned int)v20);
  if ( (_QWORD)v53 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
      (__int64 *)v53,
      *((__int64 **)&v53 + 1));
    std::_Deallocate<16,0>((void *)v53, (v54 - v53) & 0xFFFFFFFFFFFFFFF8uLL);
    v53 = 0LL;
    v54 = 0LL;
  }
  if ( (_QWORD)v55 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
      (__int64 *)v55,
      *((__int64 **)&v55 + 1));
    std::_Deallocate<16,0>((void *)v55, (v56 - v55) & 0xFFFFFFFFFFFFFFF8uLL);
    v55 = 0LL;
    v56 = 0LL;
  }
LABEL_44:
  std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::~forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>(&v42);
LABEL_18:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
LABEL_73:
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v52);
  return v5;
}
