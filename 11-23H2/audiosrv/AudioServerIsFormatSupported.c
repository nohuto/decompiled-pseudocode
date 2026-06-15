/*
 * XREFs of AudioServerIsFormatSupported @ 0x180123830
 * Callers:
 *     AudioServerGetSharedModeEnginePeriod @ 0x180122990 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18000CB5C (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800102C0 (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800179D0 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18003E474 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18003E70C (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x1800450A8 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ??$copy_to@UIMMDevice@@@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIMMDevice@@@Z @ 0x18004756C (--$copy_to@UIMMDevice@@@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIM.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080EE0 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18008148A (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x1800834D0 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18008361E (-IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL.c)
 *     wil::details::lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___::_lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___ @ 0x180083AE0 (wil--details--lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___--_lambda_call__lambda_c61a.c)
 *     McTemplateU0zqttq_EtwEventWriteTransfer @ 0x180083B3C (McTemplateU0zqttq_EtwEventWriteTransfer.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800D15A0 (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180114848 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x180115310 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWA.c)
 *     ?AllowUseofOffloadResources@@YA_NPEAVCEndpointCharacteristics@@PEAUIAudioProcess@@K@Z @ 0x18011CBB8 (-AllowUseofOffloadResources@@YA_NPEAVCEndpointCharacteristics@@PEAUIAudioProcess@@K@Z.c)
 *     ?AreResourcesAvailableForStream@@YAHPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KH@Z @ 0x18011CC98 (-AreResourcesAvailableForStream@@YAHPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_au.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x18011D228 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18011E3D0 (-IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18011E570 (-IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x18011E648 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18011EF4C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@detai.c)
 *     ?IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ @ 0x18014E3FC (-IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioServerIsFormatSupported(
        __int64 a1,
        struct tWAVEFORMATEX *a2,
        int a3,
        __int64 a4,
        struct tWAVEFORMATEX *Src,
        struct tWAVEFORMATEX **a6)
{
  __int64 v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rcx
  struct tWAVEFORMATEX *v14; // rbx
  int MixFormat; // edi
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  int v20; // r8d
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // r9
  void *v24; // rdx
  __int64 v25; // rdx
  unsigned __int64 v26; // r9
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v27; // ebx
  __int64 (__fastcall *v28)(struct IAudioPolicyManager *, __int64, struct IAudioProcess **); // rbx
  int v29; // eax
  __int64 v30; // rdx
  __int64 *v31; // rcx
  int v32; // ebx
  struct tWAVEFORMATEX *v33; // r8
  void *v34; // rdx
  void *v35; // rcx
  void *v36; // rcx
  int v37; // eax
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rcx
  void *v41; // rdx
  struct tWAVEFORMATEX *v42; // rcx
  void *v43; // rdx
  void *v44; // rcx
  struct IUnknown *v45; // rbx
  int v46; // r14d
  int v47; // r15d
  __int64 (__fastcall *v48)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **); // rdi
  int v49; // eax
  int AcceptableSPDIFTypeForDevice; // eax
  struct IUnknown v51; // rax
  int v52; // eax
  void *v53; // rdx
  __int64 v54; // rax
  void *v55; // rcx
  int v56; // eax
  struct tWAVEFORMATEX *v57; // rcx
  int v58; // ecx
  int v59; // r8d
  void *v61; // rcx
  struct tWAVEFORMATEX *pftDueTime; // [rsp+20h] [rbp-E0h]
  int *pftDueTimea; // [rsp+20h] [rbp-E0h]
  struct tWAVEFORMATEX *v64; // [rsp+80h] [rbp-80h] BYREF
  struct IMMDevice *v65; // [rsp+88h] [rbp-78h] BYREF
  struct CEndpointCharacteristics *v66[2]; // [rsp+90h] [rbp-70h] BYREF
  std::_Ref_count_base *v67; // [rsp+A0h] [rbp-60h]
  struct IAudioProcess *v68; // [rsp+A8h] [rbp-58h] BYREF
  struct tWAVEFORMATEX *v69; // [rsp+B0h] [rbp-50h] BYREF
  LPVOID v70; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v71[8]; // [rsp+C0h] [rbp-40h] BYREF
  struct IAudioProcess *v72; // [rsp+C8h] [rbp-38h] BYREF
  int v73[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct _GUID v74; // [rsp+E0h] [rbp-20h] BYREF
  char v75; // [rsp+F0h] [rbp-10h]
  struct _GUID v76; // [rsp+100h] [rbp+0h] BYREF
  char v77; // [rsp+110h] [rbp+10h]
  LPVOID pv[2]; // [rsp+120h] [rbp+20h] BYREF
  LPVOID *v79; // [rsp+130h] [rbp+30h]
  struct KSDATAFORMAT_WAVEFORMATEX *v80; // [rsp+138h] [rbp+38h] BYREF
  char v81; // [rsp+140h] [rbp+40h]
  struct _TP_TIMER *v82[7]; // [rsp+148h] [rbp+48h] BYREF
  IID v83; // [rsp+180h] [rbp+80h] BYREF
  IID v84; // [rsp+190h] [rbp+90h] BYREF
  struct _GUID v85; // [rsp+1A0h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  LODWORD(v68) = a3;
  v69 = a2;
  *(_QWORD *)&v85.Data1 = a1;
  v83 = *(IID *)a4;
  v84 = v83;
  EtwEventActivityIdControl(4LL, &v84);
  v9 = (__int64)g_AudioHealthMonitor;
  v10 = g_AudioSrvWatchDogTimerInMs;
  v12 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v11,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    v82,
    (struct _TP_TIMER *)v12[1],
    v10,
    (struct _TP_TIMER *)L"AudioServerIsFormatSupported",
    v9);
  v14 = v69;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq_EtwEventWriteTransfer(
      v13,
      (int)&AudioSrv_IsFormatSupported_Task_Start,
      &v69->wFormatTag,
      *(_DWORD *)(a4 + 48),
      *(_DWORD *)(a4 + 56),
      *(_DWORD *)(a4 + 68),
      *(_DWORD *)(a4 + 52));
  v71[1] = 1;
  if ( !a3 && !a6 )
  {
    MixFormat = -2147024809;
    v16 = 2147942487LL;
    v17 = 3739LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v16);
LABEL_129:
    wil::details::lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___::_lambda_call__lambda_c61a441f3ee26b9d6c64e9fa4b346816___(
      (__int64)v71,
      v19,
      v20);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v82);
    TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)&v83);
    return (unsigned int)MixFormat;
  }
  v18 = ValidateVadServerSettings((IID *)a4);
  MixFormat = v18;
  if ( v18 < 0 )
  {
    v16 = (unsigned int)v18;
    v17 = 3741LL;
    goto LABEL_8;
  }
  if ( a6 )
    *a6 = 0LL;
  if ( Src->wFormatTag == 0xFFFE && Src->cbSize < 0x16u )
  {
    MixFormat = -2147024809;
    v16 = 2147942487LL;
    v17 = 3748LL;
    goto LABEL_8;
  }
  *(_OWORD *)v66 = 0LL;
  v67 = 0LL;
  v21 = (*(__int64 (__fastcall **)(PVOID, struct tWAVEFORMATEX *, _QWORD, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 40LL))(
          g_pEndpointCharacteristicsCache,
          v14,
          0LL,
          0LL,
          v66);
  MixFormat = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEA9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v21);
LABEL_16:
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v66);
    goto LABEL_129;
  }
  v65 = 0LL;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::copy_to<IMMDevice>((__int64 *)v66[0] + 5, &v65);
  if ( Src->nChannels > 2u && ((Src->wFormatTag - 1) & 0xFFFD) == 0 )
  {
    MixFormat = -2004287480;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEB0,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890008LL);
LABEL_20:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v65);
    goto LABEL_16;
  }
  if ( !(*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v66[0] + 56LL))(v66[0])
    && Src->nChannels > 2u )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetImpl'::`2'::impl,
      1u,
      0,
      v22);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetImpl'::`2'::impl,
      1u,
      2u,
      v23);
  }
  v64 = 0LL;
  *(_QWORD *)&v74.Data1 = &v64;
  *(_QWORD *)v74.Data4 = 0LL;
  v75 = 1;
  MixFormat = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)v74.Data4);
  if ( v75 )
  {
    v24 = **(void ***)&v74.Data1;
    **(_QWORD **)&v74.Data1 = *(_QWORD *)v74.Data4;
    if ( v24 )
      CoTaskMemFree(v24);
  }
  if ( MixFormat < 0 )
  {
    v25 = 3770LL;
LABEL_29:
    v26 = (unsigned int)MixFormat;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v26);
LABEL_31:
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&v64);
    goto LABEL_20;
  }
  v27 = *(_DWORD *)(a4 + 52);
  if ( v27 != eOffloadConnector )
  {
    if ( !a3 )
    {
      v37 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v66[0] + 56LL))(v66[0]);
      v38 = DeriveAudioProcessingModeConfiguration(
              *(_DWORD *)(a4 + 48),
              *(_DWORD *)(a4 + 56),
              *(_DWORD *)(a4 + 128),
              v66,
              v37 == 1,
              0,
              v27,
              0LL,
              0,
              0,
              0LL,
              (struct _GUID *)pv,
              &v85,
              &v74,
              0LL,
              0LL);
      MixFormat = v38;
      if ( v38 < 0 )
      {
        v26 = (unsigned int)v38;
        v25 = 3845LL;
        goto LABEL_30;
      }
      if ( *(_DWORD *)(a4 + 68) )
      {
        *(_QWORD *)&v76.Data1 = 0LL;
        v79 = (LPVOID *)&v76;
        v80 = 0LL;
        v81 = 1;
        MixFormat = DeriveConnectorFormatFromStreamFormat(
                      v66,
                      *(_DWORD *)(a4 + 52),
                      v64,
                      &v74,
                      &v85,
                      (struct _GUID *)pv,
                      1,
                      (struct tWAVEFORMATEX **)&v80);
        if ( v81 )
        {
          v43 = *v79;
          *v79 = v80;
          if ( v43 )
            CoTaskMemFree(v43);
        }
        if ( MixFormat >= 0 )
        {
          v44 = *(void **)&v76.Data1;
          *(_QWORD *)&v76.Data1 = 0LL;
          if ( v44 )
            CoTaskMemFree(v44);
          goto LABEL_117;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF26,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)MixFormat);
        v42 = *(struct tWAVEFORMATEX **)&v76.Data1;
        *(_QWORD *)&v76.Data1 = 0LL;
      }
      else
      {
        if ( *(_DWORD *)(a4 + 132) )
        {
          if ( v64->wFormatTag == 0xFFFE )
          {
            v39 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
                - *(_QWORD *)((char *)&v64[1].nSamplesPerSec + 2);
            if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&v64[1].nSamplesPerSec
                                                                                          + 2) )
              v39 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v64[1].wBitsPerSample;
            if ( !v39 )
              goto LABEL_117;
            v40 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
                - *(_QWORD *)((char *)&v64[1].nSamplesPerSec + 2);
            if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&v64[1].nSamplesPerSec
                                                                                          + 2) )
              v40 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v64[1].wBitsPerSample;
            if ( !v40 )
              goto LABEL_117;
          }
          else if ( ((v64->wFormatTag - 1) & 0xFFFD) == 0 )
          {
            goto LABEL_117;
          }
          MixFormat = -2004287480;
          v25 = 3856LL;
          goto LABEL_29;
        }
        v69 = 0LL;
        *(_QWORD *)&v76.Data1 = &v69;
        *(_QWORD *)v76.Data4 = 0LL;
        v77 = 1;
        MixFormat = EffectPack::GetMixFormat(
                      v66[1],
                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a4 + 52),
                      &v74,
                      (struct tWAVEFORMATEX **)v76.Data4);
        if ( v77 )
        {
          v41 = **(void ***)&v76.Data1;
          **(_QWORD **)&v76.Data1 = *(_QWORD *)v76.Data4;
          if ( v41 )
            CoTaskMemFree(v41);
        }
        if ( MixFormat < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xF16,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)MixFormat);
          wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&v69);
          goto LABEL_31;
        }
        MixFormat = IsStreamFormatSupportedForMixFormat(
                      v66,
                      &v85,
                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a4 + 52),
                      v69,
                      v64,
                      a6);
        v42 = v69;
        v69 = 0LL;
      }
      if ( v42 )
        CoTaskMemFree(v42);
      goto LABEL_31;
    }
    v45 = (struct IUnknown *)v65;
    v46 = IsExclusiveModeDisabled((struct IUnknown *)v65) == 0;
    v47 = IsOffloadDisabled(v45);
    if ( v47 && !v46 )
      goto LABEL_95;
    if ( g_PolicyManager )
    {
      v72 = 0LL;
      v48 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager + 32LL);
      wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)&v72);
      v49 = v48(g_PolicyManager, *(_QWORD *)&v85.Data1, &v72);
      MixFormat = v49;
      if ( v49 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF33,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v49);
        v31 = (__int64 *)&v72;
        goto LABEL_37;
      }
      if ( v46 )
        v46 = (*(__int64 (__fastcall **)(struct IAudioProcess *, _QWORD, __int64))(*(_QWORD *)v72 + 144LL))(
                v72,
                *(unsigned int *)(a4 + 48),
                1LL);
      if ( !v47 && (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v72 + 88LL))(v72) )
        LOBYTE(v47) = AllowUseofOffloadResources(v66[0], v72, *(_DWORD *)(a4 + 48)) == 0;
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v72);
    }
    if ( !v46 )
    {
LABEL_95:
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&v64);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v65);
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v66);
      MixFormat = -2004287474;
      goto LABEL_129;
    }
    if ( IsSPDIFFormat(v64) && CEndpointCharacteristics::IsSPDIFEndpoint(v66[0]) )
    {
      AcceptableSPDIFTypeForDevice = GetAcceptableSPDIFTypeForDevice((struct IMMDevice *)v45, v64, 0LL, v47);
      MixFormat = AcceptableSPDIFTypeForDevice;
      if ( AcceptableSPDIFTypeForDevice < 0 )
      {
        v26 = (unsigned int)AcceptableSPDIFTypeForDevice;
        v25 = 3912LL;
        goto LABEL_30;
      }
      goto LABEL_117;
    }
    v51.lpVtbl = v45->lpVtbl;
    *(_QWORD *)v73 = 0LL;
    pftDueTimea = v73;
    v52 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64))v51.lpVtbl[1].QueryInterface)(
            v45,
            &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
            23LL);
    MixFormat = v52;
    if ( v52 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF4E,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v52);
LABEL_102:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v73);
      goto LABEL_31;
    }
    v70 = 0LL;
    v79 = &v70;
    v80 = 0LL;
    v81 = 1;
    MixFormat = CreateKSFormatFromWFXFormat(v64, &v80);
    if ( v81 )
    {
      v53 = *v79;
      *v79 = v80;
      if ( v53 )
        CoTaskMemFree(v53);
    }
    if ( MixFormat < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF51,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)MixFormat);
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v70);
      goto LABEL_102;
    }
    v54 = **(_QWORD **)v73;
    *(_QWORD *)&v85.Data1 = 0LL;
    LODWORD(pftDueTimea) = v47;
    if ( (*(int (__fastcall **)(_QWORD, LPVOID, _QWORD, _QWORD, int *, struct _GUID *))(v54 + 80))(
           *(_QWORD *)v73,
           v70,
           *(unsigned int *)v70,
           0LL,
           pftDueTimea,
           &v85) < 0 )
    {
      *(_QWORD *)&v74.Data1 = 0LL;
      if ( (int)CEndpointCharacteristics::TryGetCustomResourceManagerService(
                  v66[0],
                  &GUID_39a3af14_c4e0_431e_84af_4d4c1087da45,
                  (void **)&v74) < 0
        || !*(_QWORD *)&v74.Data1 )
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v74);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v85);
        v61 = v70;
        v70 = 0LL;
        if ( v61 )
          CoTaskMemFree(v61);
        goto LABEL_128;
      }
      if ( (*(int (__fastcall **)(_QWORD, struct CEndpointCharacteristics **, _QWORD, struct tWAVEFORMATEX *, struct tWAVEFORMATEX **))(**(_QWORD **)&v74.Data1 + 104LL))(
             *(_QWORD *)&v74.Data1,
             v66,
             (unsigned int)v68,
             Src,
             a6) < 0 )
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v74);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v85);
        wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v70);
LABEL_128:
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v73);
        wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&v64);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v65);
        EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v66);
        MixFormat = -2004287480;
        goto LABEL_129;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v74);
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v85);
    v55 = v70;
    v70 = 0LL;
    if ( v55 )
      CoTaskMemFree(v55);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v73);
    goto LABEL_117;
  }
  v68 = 0LL;
  v28 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                 + 32LL);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)&v68);
  v29 = v28(g_PolicyManager, a1, &v68);
  MixFormat = v29;
  if ( v29 < 0 )
  {
    v30 = 3775LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v29);
LABEL_36:
    v31 = (__int64 *)&v68;
LABEL_37:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v31);
    goto LABEL_31;
  }
  if ( !AllowUseofOffloadResources(v66[0], v68, *(_DWORD *)(a4 + 48)) )
  {
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v68);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&v64);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v65);
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v66);
    MixFormat = 1;
    goto LABEL_129;
  }
  v32 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v68 + 120LL))(v68);
  v29 = DeriveAudioProcessingModeConfiguration(
          *(_DWORD *)(a4 + 48),
          *(_DWORD *)(a4 + 56),
          *(_DWORD *)(a4 + 128),
          v66,
          0,
          a3,
          eOffloadConnector,
          0LL,
          0,
          0,
          (__int64)Src,
          &v74,
          &v85,
          &v76,
          0LL,
          0LL);
  MixFormat = v29;
  if ( v29 < 0 )
  {
    v30 = 3803LL;
    goto LABEL_35;
  }
  pv[0] = 0LL;
  *(_QWORD *)&v76.Data1 = pv;
  *(_QWORD *)v76.Data4 = 0LL;
  v77 = 1;
  MixFormat = DeriveOffloadConnectorFormatFromStreamFormat(
                v66,
                v64,
                v33,
                &v85,
                pftDueTime,
                *(_DWORD *)(a4 + 48),
                (struct tWAVEFORMATEX **)v76.Data4);
  if ( v77 )
  {
    v34 = **(void ***)&v76.Data1;
    **(_QWORD **)&v76.Data1 = *(_QWORD *)v76.Data4;
    if ( v34 )
      CoTaskMemFree(v34);
  }
  if ( MixFormat < 0 )
  {
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(pv);
    goto LABEL_36;
  }
  v85 = v74;
  if ( !(unsigned int)AreResourcesAvailableForStream(v66[0], &v85, *(_DWORD *)(a4 + 52), *(_DWORD *)(a4 + 48), v32) )
  {
    MixFormat = -2004287480;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEEA,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890008LL);
    v35 = pv[0];
    pv[0] = 0LL;
    if ( v35 )
      CoTaskMemFree(v35);
    goto LABEL_36;
  }
  v36 = pv[0];
  pv[0] = 0LL;
  if ( v36 )
    CoTaskMemFree(v36);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v68);
LABEL_117:
  v85 = *(struct _GUID *)*((_QWORD *)v66[1] + 159);
  v56 = PublishApoTelemetry((CEndpointStoreCache *)v69, &v85);
  if ( v56 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF69,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v56);
  v57 = v64;
  v64 = 0LL;
  if ( v57 )
    CoTaskMemFree(v57);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v65);
  if ( v67 )
    std::_Ref_count_base::_Decref(v67);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v66);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      v58,
      (unsigned int)&AudioSrv_IsFormatSupported_Task_Stop,
      v59,
      1,
      (__int64)&v85);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v82);
  EtwEventActivityIdControl(4LL, &v84);
  return 0LL;
}
