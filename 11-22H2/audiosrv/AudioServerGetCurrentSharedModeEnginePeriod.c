/*
 * XREFs of AudioServerGetCurrentSharedModeEnginePeriod @ 0x1801210C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18000CB5C (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000E360 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800179D0 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18003E474 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     MIDL_user_allocate @ 0x18003EE80 (MIDL_user_allocate.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x1800450A8 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004BB14 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x18005690C (-DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18005E0B4 (-DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioeng.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     CreateAudioMediaType @ 0x180069874 (CreateAudioMediaType.c)
 *     memcpy_0 @ 0x18006A809 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080F10 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180081448 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800D15F0 (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800D8770 (--1-$vector@V-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIProcessSubm.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180114898 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_40dac1f929b9a0a734d3dd9d5e6c5fd9___ @ 0x18011C238 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18011C238.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x1801205B4 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 *     ?DeriveStreamFormatFromMixFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18014BAB8 (-DeriveStreamFormatFromMixFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoin.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioServerGetCurrentSharedModeEnginePeriod(
        __int64 a1,
        const unsigned __int16 *a2,
        __int64 a3,
        _QWORD *a4,
        int *a5)
{
  __int64 pftDueTime; // rbx
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 *v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v16; // ebx
  int v17; // eax
  CEndpointStoreCache *v18; // rcx
  int EndpointStore; // eax
  volatile signed __int32 *v20; // rbx
  int v21; // eax
  struct _GUID v22; // xmm6
  const struct tWAVEFORMATEX *v23; // rax
  int MixFormat; // edi
  void *v25; // rax
  HRESULT v26; // eax
  struct _GUID v27; // xmm6
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  const struct tWAVEFORMATEX *v31; // rax
  void *v32; // rax
  __int64 v33; // rdi
  double v34; // xmm6_8
  struct _GUID v35; // xmm8
  void *v36; // rax
  HRESULT AudioMediaType; // eax
  struct _GUID v38; // xmm7
  __int64 v39; // rdx
  const struct tWAVEFORMATEX *v40; // rax
  void *v41; // rax
  int v42; // eax
  void *v43; // rax
  int SharedModeEnginePeriodicity; // eax
  WAVEFORMATEX *v45; // rcx
  WAVEFORMATEX *v46; // rcx
  unsigned __int16 *v47; // r9
  int v48; // r8d
  DWORD nSamplesPerSec; // edx
  void *v50; // rax
  WAVEFORMATEX *v52; // rcx
  void *v53; // rcx
  WAVEFORMATEX *pAudioFormat; // [rsp+88h] [rbp-80h] BYREF
  void *Src; // [rsp+90h] [rbp-78h] BYREF
  WAVEFORMATEX *v56; // [rsp+98h] [rbp-70h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-68h] BYREF
  struct CEndpointStore *v58[2]; // [rsp+A8h] [rbp-60h] BYREF
  struct _GUID v59; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v60; // [rsp+C8h] [rbp-40h]
  struct _GUID v61; // [rsp+D8h] [rbp-30h] BYREF
  EffectPack *v62[2]; // [rsp+E8h] [rbp-20h] BYREF
  std::_Ref_count_base *v63; // [rsp+F8h] [rbp-10h]
  IAudioMediaType *v64[2]; // [rsp+108h] [rbp+0h] BYREF
  __int128 v65; // [rsp+118h] [rbp+10h] BYREF
  __int64 v66; // [rsp+128h] [rbp+20h]
  struct _GUID v67; // [rsp+138h] [rbp+30h] BYREF
  IAudioMediaType *ppIAudioMediaType[2]; // [rsp+148h] [rbp+40h] BYREF
  struct tWAVEFORMATEX *v69[2]; // [rsp+158h] [rbp+50h] BYREF
  __int64 *v70; // [rsp+168h] [rbp+60h]
  struct _TP_TIMER *pv[7]; // [rsp+178h] [rbp+70h] BYREF
  IID v72; // [rsp+1B0h] [rbp+A8h] BYREF
  IID v73; // [rsp+1C0h] [rbp+B8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+240h] [rbp+138h]

  v72 = *(IID *)a3;
  v73 = v72;
  EtwEventActivityIdControl(4LL, &v73);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  v11 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v10,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v11[1],
    v9,
    (struct _TP_TIMER *)L"AudioServerGetCurrentSharedModeEnginePeriod",
    pftDueTime);
  v12 = ValidateVadServerSettings((IID *)a3);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1028,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v12);
LABEL_70:
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)&v72);
    return v13;
  }
  *(_OWORD *)v62 = 0LL;
  v63 = 0LL;
  v14 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, EffectPack **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                                  + 40LL))(
          g_pEndpointCharacteristicsCache,
          a2,
          0LL,
          0LL,
          v62);
  v13 = v14;
  if ( v14 < 0 )
  {
    v15 = 4142LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v14);
LABEL_69:
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v62);
    goto LABEL_70;
  }
  v16 = *(_DWORD *)(a3 + 52);
  v17 = (*(__int64 (__fastcall **)(EffectPack *))(*(_QWORD *)v62[0] + 56LL))(v62[0]);
  v14 = DeriveAudioProcessingModeConfiguration(
          *(_DWORD *)(a3 + 48),
          *(_DWORD *)(a3 + 56),
          *(_DWORD *)(a3 + 128),
          v62,
          v17 == 1,
          0,
          v16,
          0LL,
          0,
          0,
          0LL,
          &v61,
          &v67,
          (struct _GUID *)v64,
          0LL,
          0LL);
  v13 = v14;
  if ( v14 < 0 )
  {
    v15 = 4164LL;
    goto LABEL_5;
  }
  v58[0] = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v18, a2, v58);
  v13 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x104A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)EndpointStore);
LABEL_68:
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)v58);
    goto LABEL_69;
  }
  v57 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v20 = (volatile signed __int32 *)v58[0];
  v21 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v58[0] + 13) + 88LL))(
          *((_QWORD *)v58[0] + 13),
          &v65);
  v22 = v61;
  if ( v21 >= 0 )
  {
    v60 = &v57;
    *(struct _GUID *)v69 = v61;
    v70 = &v57;
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_40dac1f929b9a0a734d3dd9d5e6c5fd9___(
      (__int64)&v59,
      v65,
      *((__int64 *)&v65 + 1),
      (__int64)v69);
  }
  Src = 0LL;
  pAudioFormat = 0LL;
  *(_QWORD *)v59.Data4 = 0LL;
  LOBYTE(v60) = 1;
  if ( !v57 )
  {
    v56 = 0LL;
    *(_QWORD *)&v59.Data1 = &v56;
    v35 = *(struct _GUID *)v64;
    v61 = *(struct _GUID *)v64;
    MixFormat = EffectPack::GetMixFormat(
                  v62[1],
                  (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
                  &v61,
                  (struct tWAVEFORMATEX **)v59.Data4);
    if ( (_BYTE)v60 )
    {
      v36 = **(void ***)&v59.Data1;
      **(_QWORD **)&v59.Data1 = *(_QWORD *)v59.Data4;
      if ( v36 )
        CoTaskMemFree(v36);
    }
    if ( MixFormat >= 0 )
    {
      v64[0] = 0LL;
      AudioMediaType = CreateAudioMediaType(v56, v56->cbSize + 18, v64);
      MixFormat = AudioMediaType;
      if ( AudioMediaType >= 0 )
      {
        *(_QWORD *)&v61.Data1 = 0LL;
        v38 = v67;
        MixFormat = EffectPack::DeriveStreamFormatFromMixFormat(
                      v62[1],
                      &v67,
                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
                      v64[0],
                      (struct IAudioMediaType **)&v61);
        if ( MixFormat >= 0 )
        {
          *(_QWORD *)&v59.Data1 = &Src;
          *(_QWORD *)v59.Data4 = 0LL;
          LOBYTE(v60) = 1;
          v40 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v61.Data1 + 40LL))(*(_QWORD *)&v61.Data1);
          MixFormat = CloneWaveFormat(v40, (struct tWAVEFORMATEX **)v59.Data4);
          if ( (_BYTE)v60 )
          {
            v41 = **(void ***)&v59.Data1;
            **(_QWORD **)&v59.Data1 = *(_QWORD *)v59.Data4;
            if ( v41 )
              CoTaskMemFree(v41);
          }
          if ( MixFormat >= 0 )
          {
            v69[0] = (struct tWAVEFORMATEX *)&pAudioFormat;
            v69[1] = 0LL;
            LOBYTE(v70) = 1;
            v42 = *(_DWORD *)(a3 + 68);
            v67 = v22;
            *(struct _GUID *)ppIAudioMediaType = v38;
            v59 = v35;
            MixFormat = DeriveConnectorFormatFromStreamFormat(
                          v62,
                          *(_DWORD *)(a3 + 52),
                          v56,
                          &v59,
                          (struct _GUID *)ppIAudioMediaType,
                          &v67,
                          v42,
                          &v69[1]);
            if ( (_BYTE)v70 )
            {
              v43 = *(void **)v69[0];
              *(_QWORD *)v69[0] = v69[1];
              if ( v43 )
                CoTaskMemFree(v43);
            }
            if ( MixFormat >= 0 )
            {
              v59 = v22;
              SharedModeEnginePeriodicity = EffectPack::GetSharedModeEnginePeriodicity(
                                              (__int64)v62[1],
                                              *(_DWORD *)(a3 + 52),
                                              (__int64)pAudioFormat,
                                              (__int128 *)&v59,
                                              0,
                                              (__int64)a5,
                                              0LL,
                                              0LL,
                                              0LL);
              MixFormat = SharedModeEnginePeriodicity;
              if ( SharedModeEnginePeriodicity < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x1090,
                  (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                  (const char *)(unsigned int)SharedModeEnginePeriodicity);
                wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v61);
                wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v64);
                v45 = v56;
                v56 = 0LL;
                if ( v45 )
                  CoTaskMemFree(v45);
                goto LABEL_18;
              }
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v61);
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v64);
              v46 = v56;
              v56 = 0LL;
              if ( v46 )
                CoTaskMemFree(v46);
              goto LABEL_64;
            }
            v39 = 4238LL;
          }
          else
          {
            v39 = 4227LL;
          }
        }
        else
        {
          v39 = 4225LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v39,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)MixFormat);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v61);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x107E,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)AudioMediaType);
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v64);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x107B,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)MixFormat);
    }
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&v56);
    goto LABEL_18;
  }
  *(_QWORD *)&v59.Data1 = &pAudioFormat;
  v23 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 48LL))(v57);
  MixFormat = CloneWaveFormat(v23, (struct tWAVEFORMATEX **)v59.Data4);
  if ( (_BYTE)v60 )
  {
    v25 = **(void ***)&v59.Data1;
    **(_QWORD **)&v59.Data1 = *(_QWORD *)v59.Data4;
    if ( v25 )
      CoTaskMemFree(v25);
  }
  if ( MixFormat < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1060,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)MixFormat);
LABEL_18:
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&pAudioFormat);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&Src);
    std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>((__int64)&v65);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v57);
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)v58);
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v62);
    v13 = MixFormat;
    goto LABEL_70;
  }
  ppIAudioMediaType[0] = 0LL;
  v26 = CreateAudioMediaType(pAudioFormat, pAudioFormat->cbSize + 18, ppIAudioMediaType);
  MixFormat = v26;
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1065,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v26);
LABEL_21:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)ppIAudioMediaType);
    goto LABEL_18;
  }
  *(_QWORD *)&v61.Data1 = 0LL;
  v27 = v67;
  v28 = EffectPack::DeriveDevicePipeFormatFromConnectorFormat(
          v62[1],
          &v67,
          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
          ppIAudioMediaType[0],
          (struct IAudioMediaType **)&v61);
  MixFormat = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x106A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v28);
LABEL_24:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v61);
    goto LABEL_21;
  }
  v64[0] = 0LL;
  v67 = v27;
  v29 = EffectPack::DeriveMixFormatFromDevicePipeFormat(
          v62[1],
          &v67,
          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
          *(struct IAudioMediaType **)&v61.Data1,
          v64,
          0LL);
  MixFormat = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x106D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v29);
LABEL_27:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v64);
    goto LABEL_24;
  }
  v56 = 0LL;
  v67 = v27;
  MixFormat = EffectPack::DeriveStreamFormatFromMixFormat(
                v62[1],
                &v67,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 52),
                v64[0],
                (struct IAudioMediaType **)&v56);
  if ( MixFormat < 0 )
  {
    v30 = 4208LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)MixFormat);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v56);
    goto LABEL_27;
  }
  *(_QWORD *)&v59.Data1 = &Src;
  *(_QWORD *)v59.Data4 = 0LL;
  LOBYTE(v60) = 1;
  v31 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(WAVEFORMATEX *))(*(_QWORD *)&v56->wFormatTag + 40LL))(v56);
  MixFormat = CloneWaveFormat(v31, (struct tWAVEFORMATEX **)v59.Data4);
  if ( (_BYTE)v60 )
  {
    v32 = **(void ***)&v59.Data1;
    **(_QWORD **)&v59.Data1 = *(_QWORD *)v59.Data4;
    if ( v32 )
      CoTaskMemFree(v32);
  }
  if ( MixFormat < 0 )
  {
    v30 = 4210LL;
    goto LABEL_30;
  }
  v33 = v57;
  v34 = (double)*(int *)(((__int64 (__fastcall *)(IAudioMediaType *))ppIAudioMediaType[0]->lpVtbl->GetAudioFormat)(ppIAudioMediaType[0])
                       + 4);
  *a5 = (int)((double)(*(int (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL))(v33) * v34 / 10000000.0 + 0.5);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v56);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v64);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v61);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)ppIAudioMediaType);
LABEL_64:
  v47 = (unsigned __int16 *)Src;
  v48 = *((_DWORD *)Src + 1);
  nSamplesPerSec = pAudioFormat->nSamplesPerSec;
  if ( v48 != nSamplesPerSec )
    *a5 = TranslateFrameCountBetweenSamplingRates(*a5, nSamplesPerSec, v48);
  v50 = MIDL_user_allocate(v47[8] + 18LL);
  *a4 = v50;
  if ( !v50 )
  {
    v13 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x109F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x8007000ELL);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&pAudioFormat);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&Src);
    std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>((__int64)&v65);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v57);
    goto LABEL_68;
  }
  memcpy_0(v50, Src, *((unsigned __int16 *)Src + 8) + 18LL);
  v52 = pAudioFormat;
  pAudioFormat = 0LL;
  if ( v52 )
    CoTaskMemFree(v52);
  v53 = Src;
  Src = 0LL;
  if ( v53 )
    CoTaskMemFree(v53);
  if ( (_QWORD)v65 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
      (__int64 *)v65,
      *((__int64 **)&v65 + 1));
    std::_Deallocate<16,0>((void *)v65, (v66 - v65) & 0xFFFFFFFFFFFFFFF8uLL);
    v65 = 0LL;
    v66 = 0LL;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v57);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v20);
  if ( v63 )
    std::_Ref_count_base::_Decref(v63);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v62);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v73);
  return 0LL;
}
