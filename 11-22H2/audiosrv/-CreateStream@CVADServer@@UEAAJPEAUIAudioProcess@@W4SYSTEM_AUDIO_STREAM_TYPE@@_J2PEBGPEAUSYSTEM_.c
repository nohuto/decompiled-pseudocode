/*
 * XREFs of ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000F420
 * Callers:
 *     AudioServerCreateStream @ 0x180011CB0 (AudioServerCreateStream.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StreamRequiresPreStartRegistration@@YA_NPEAUIAudioStreamInfo@@@Z @ 0x18000BCF4 (-StreamRequiresPreStartRegistration@@YA_NPEAUIAudioStreamInfo@@@Z.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18000CB5C (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?move_to@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000CF64 (-move_to@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     ??$MakeAndInitialize@VCAudioStream@@V1@AEAPEAUIAudioProcess@@_NAEAKPEAUVadServerSettings@@AEAW4SYSTEM_AUDIO_STREAM_TYPE@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioStream@@AEAPEAUIAudioProcess@@$$QEA_NAEAK$$QEAPEAUVadServerSettings@@AEAW4SYSTEM_AUDIO_STREAM_TYPE@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@Z @ 0x1800102E4 (--$MakeAndInitialize@VCAudioStream@@V1@AEAPEAUIAudioProcess@@_NAEAKPEAUVadServerSettings@@AEAW4S.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180014FC0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180015DAC (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ??1SystemAudioStream@@QEAA@XZ @ 0x180016C84 (--1SystemAudioStream@@QEAA@XZ.c)
 *     ?GetAudioResourcePriority@@YAKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHH@Z @ 0x18001761C (-GetAudioResourcePriority@@YAKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHH@Z.c)
 *     ??0SystemAudioStream@@QEAA@XZ @ 0x180018824 (--0SystemAudioStream@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800303D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??9@YA_NAEBU_GUID@@0@Z @ 0x18004AF44 (--9@YA_NAEBU_GUID@@0@Z.c)
 *     ?GetConnectorProcessingMode@EffectPack@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@I@Z @ 0x180065A4C (-GetConnectorProcessingMode@EffectPack@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_00.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@@@details@wil@@QEAA_NXZ @ 0x180070670 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@.c)
 *     ?CreateBridgeSinkAudioClientForMicInjection@CVADServer@@AEAAJPEAUIMMDevice@@U_GUID@@_K@Z @ 0x180073B44 (-CreateBridgeSinkAudioClientForMicInjection@CVADServer@@AEAAJPEAUIMMDevice@@U_GUID@@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0zqttq_EtwEventWriteTransfer @ 0x180083B6C (McTemplateU0zqttq_EtwEventWriteTransfer.c)
 *     ??I?$com_ptr_t@UIStreamGroupProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIStreamGroupProxy@@XZ @ 0x1800D1628 (--I-$com_ptr_t@UIStreamGroupProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIStreamGroupProx.c)
 *     ??I?$com_ptr_t@UIBridgeStreamInstanceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIBridgeStreamInstanceProxy@@XZ @ 0x1800D892C (--I-$com_ptr_t@UIBridgeStreamInstanceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIBridge.c)
 *     ??I?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIMMDevice@@XZ @ 0x1800D896C (--I-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIMMDevice@@XZ.c)
 *     ??I?$com_ptr_t@UISaDeviceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUISaDeviceProxy@@XZ @ 0x1800D89AC (--I-$com_ptr_t@UISaDeviceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUISaDeviceProxy@@XZ.c)
 *     ??I?$com_ptr_t@UIStreamInstanceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIStreamInstanceProxy@@XZ @ 0x1800D89CC (--I-$com_ptr_t@UIStreamInstanceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIStreamInstan.c)
 *     ?GenerateStreamIdentifier@@YA_JXZ @ 0x1800EB6CC (-GenerateStreamIdentifier@@YA_JXZ.c)
 *     wil::details::lambda_call__lambda_192e387dcf8e46dd73c68c7fa6747328___::_lambda_call__lambda_192e387dcf8e46dd73c68c7fa6747328___ @ 0x18011C648 (wil--details--lambda_call__lambda_192e387dcf8e46dd73c68c7fa6747328___--_lambda_call__lambda_192e.c)
 *     wil::details::lambda_call__lambda_2e636c8b0c21056e5525154b5d5db667___::_lambda_call__lambda_2e636c8b0c21056e5525154b5d5db667___ @ 0x18011C678 (wil--details--lambda_call__lambda_2e636c8b0c21056e5525154b5d5db667___--_lambda_call__lambda_2e63.c)
 *     wil::details::lambda_call__lambda_3536bcdc4a42b08960a322f6b0b186f2___::_lambda_call__lambda_3536bcdc4a42b08960a322f6b0b186f2___ @ 0x18011C6D4 (wil--details--lambda_call__lambda_3536bcdc4a42b08960a322f6b0b186f2___--_lambda_call__lambda_3536.c)
 *     ?GetConnectorProcessingModeCount@EffectPack@@QEAAIW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014C42C (-GetConnectorProcessingModeCount@EffectPack@@QEAAIW4__MIDL___MIDL_itf_audioengineendpoint_0000_0.c)
 *     ?GetMMDevice@CEndpointCharacteristics@@QEAAXPEAPEAUIMMDevice@@@Z @ 0x18014CD28 (-GetMMDevice@CEndpointCharacteristics@@QEAAXPEAPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVADServer::CreateStream(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct IMMDeviceVtbl *a4,
        struct IMMDeviceVtbl *a5,
        __int64 a6,
        struct SYSTEM_AUDIO_STREAM *a7)
{
  unsigned int *v10; // rsi
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  struct IMMDeviceVtbl *v17; // r15
  struct IMMDeviceVtbl *v18; // r14
  struct IMMDevice *v19; // rsi
  int v20; // eax
  unsigned int ConnectorProcessingModeCount; // r14d
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(__int64, __int64); // rbx
  __int64 v24; // rax
  int v25; // eax
  __int64 (__fastcall *v26)(struct IAudioResourceManager *, CEndpointCharacteristics **, __int64); // rbx
  __int64 StreamIdentifier; // rax
  int v28; // edx
  int v29; // eax
  CEndpointCharacteristics *v30; // rbx
  struct IMMDevice **v31; // rax
  __int64 v32; // rdi
  __int64 (__fastcall *v33)(__int64, __int64); // rbx
  __int64 v34; // rax
  int v35; // eax
  unsigned int *v36; // rbx
  __int64 (__fastcall *v37)(unsigned int *, __int64); // rdi
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  unsigned int v41; // edi
  unsigned __int64 v42; // rax
  struct SYSTEM_AUDIO_STREAM *v43; // rdi
  int v44; // eax
  __int64 v45; // rax
  bool started; // al
  struct IMMDeviceVtbl *v47; // rbx
  __int64 v48; // rcx
  int v50; // [rsp+20h] [rbp-160h]
  CEndpointCharacteristics **v51; // [rsp+20h] [rbp-160h]
  int lpVtbl; // [rsp+20h] [rbp-160h]
  struct IMMDeviceVtbl *v53; // [rsp+100h] [rbp-80h] BYREF
  bool v54; // [rsp+108h] [rbp-78h] BYREF
  _BYTE v55[4]; // [rsp+10Ch] [rbp-74h] BYREF
  __int64 v56; // [rsp+110h] [rbp-70h] BYREF
  unsigned int *v57; // [rsp+118h] [rbp-68h] BYREF
  struct IMMDevice *v58; // [rsp+120h] [rbp-60h] BYREF
  int v59[2]; // [rsp+128h] [rbp-58h] BYREF
  struct IMMDeviceVtbl *v60; // [rsp+130h] [rbp-50h]
  struct _GUID v61; // [rsp+138h] [rbp-48h] BYREF
  char v62; // [rsp+148h] [rbp-38h]
  __int64 v63; // [rsp+150h] [rbp-30h] BYREF
  struct _GUID v64; // [rsp+158h] [rbp-28h] BYREF
  char v65; // [rsp+168h] [rbp-18h]
  CEndpointCharacteristics *v66[2]; // [rsp+170h] [rbp-10h] BYREF
  __int64 v67; // [rsp+180h] [rbp+0h]
  __int64 v68; // [rsp+188h] [rbp+8h]
  struct _GUID v69; // [rsp+190h] [rbp+10h] BYREF
  struct SYSTEM_AUDIO_STREAM *v70; // [rsp+1A0h] [rbp+20h]
  struct _GUID v71; // [rsp+1B0h] [rbp+30h] BYREF
  __int128 v72; // [rsp+1C0h] [rbp+40h] BYREF
  _BYTE v73[1296]; // [rsp+1D0h] [rbp+50h] BYREF
  _BYTE v74[1296]; // [rsp+6E0h] [rbp+560h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C48h] [rbp+AC8h]

  v60 = a4;
  *(_QWORD *)&v71.Data1 = a2;
  v58 = (struct IMMDevice *)a1;
  *(_QWORD *)&v61.Data1 = a2;
  LODWORD(v56) = a3;
  v68 = a6;
  v70 = a7;
  v10 = (unsigned int *)(a1 + 296);
  v57 = (unsigned int *)(a1 + 296);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq_EtwEventWriteTransfer(
      *(_DWORD *)(a1 + 316),
      (unsigned int)&VadServer_CreateStream_Task_Start,
      *(_QWORD *)(a1 + 184),
      *v10,
      *(_DWORD *)(a1 + 304),
      *(_DWORD *)(a1 + 316),
      *(_DWORD *)(a1 + 300));
  else
    v57 = (unsigned int *)(a1 + 296);
  v55[1] = 1;
  *(_OWORD *)v66 = 0LL;
  v67 = 0LL;
  memset_0(a7, 0, 0x4E8uLL);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
  v63 = a1 + 192;
  if ( !*(_DWORD *)(a1 + 160) )
  {
    v11 = -2004287487;
    v12 = 1470LL;
LABEL_58:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v11,
      v50);
    goto LABEL_59;
  }
  if ( *(_QWORD *)(a1 + 168) )
  {
    v11 = -2004287486;
    v12 = 1471LL;
    goto LABEL_58;
  }
  if ( a3 > 2
    || ((v13 = *v10, a3) || !dword_1801878D0[3 * v13])
    && (a3 != 1 || !dword_1801878D0[3 * v13 + 1])
    && (a3 != 2 || !dword_1801878D0[3 * v13 + 2]) )
  {
    v11 = -2147024809;
    v12 = 1474LL;
    goto LABEL_58;
  }
  v53 = 0LL;
  *(_QWORD *)v59 = a1 + 248;
  *(_QWORD *)&v69.Data1 = a1 + 236;
  v54 = *(_DWORD *)(a1 + 232) == 1;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(
    &v53,
    dword_1801878D0);
  v14 = Microsoft::WRL::Details::MakeAndInitialize<CAudioStream,CAudioStream,IAudioProcess * &,bool,unsigned long &,VadServerSettings *,enum SYSTEM_AUDIO_STREAM_TYPE &,ATL::CComHeapPtr<tWAVEFORMATEX> &>(
          (unsigned int)&v53,
          (unsigned int)&v61,
          (unsigned int)&v54,
          (int)a1 + 236,
          (__int64)v59,
          (__int64)&v56,
          a1 + 152);
  v11 = v14;
  if ( v14 < 0 )
  {
    v15 = 1478LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v14,
      (int)v51);
LABEL_50:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v53);
LABEL_59:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v63);
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v66);
    wil::details::lambda_call__lambda_2e636c8b0c21056e5525154b5d5db667___::_lambda_call__lambda_2e636c8b0c21056e5525154b5d5db667___(v55);
    return (unsigned int)v11;
  }
  v51 = v66;
  v14 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache + 40LL))(
          g_pEndpointCharacteristicsCache,
          *(_QWORD *)(a1 + 184),
          0LL,
          0LL);
  v11 = v14;
  if ( v14 < 0 )
  {
    v15 = 1481LL;
    goto LABEL_17;
  }
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 120LL))(a2);
  LODWORD(v56) = GetAudioResourcePriority(
                   (enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001)(a3 - 1 <= 1),
                   *v10,
                   0,
                   v16);
  SystemAudioStream::SystemAudioStream((SystemAudioStream *)v73);
  *(_QWORD *)&v61.Data1 = v73;
  *(_QWORD *)v61.Data4 = &v53;
  v64 = v61;
  v65 = 1;
  *(_QWORD *)&v61.Data1 = *(_QWORD *)(*(_QWORD *)g_AudioResourceManager + 24LL);
  v72 = *(_OWORD *)((char *)&v58[53].lpVtbl + 4);
  v17 = a5;
  v18 = v60;
  v19 = v58;
  lpVtbl = (int)v58[38].lpVtbl;
  v11 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, _QWORD, unsigned __int64, _QWORD))&v61.Data1)(
          g_AudioResourceManager,
          *(_QWORD *)&v71.Data1,
          (unsigned __int64)&v53->AddRef & -(__int64)(v53 != 0LL),
          *v57);
  if ( v11 < 0 )
  {
LABEL_49:
    wil::details::lambda_call__lambda_192e387dcf8e46dd73c68c7fa6747328___::_lambda_call__lambda_192e387dcf8e46dd73c68c7fa6747328___(&v64);
    SystemAudioStream::~SystemAudioStream((SystemAudioStream *)v73);
    goto LABEL_50;
  }
  v20 = (*((__int64 (__fastcall **)(struct IMMDeviceVtbl *, struct IMMDeviceVtbl *))v19[18].lpVtbl->QueryInterface + 27))(
          v19[18].lpVtbl,
          v53);
  v11 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x605,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v20,
      lpVtbl);
    goto LABEL_49;
  }
  *(_QWORD *)&v71.Data1 = v19;
  *(_QWORD *)v71.Data4 = &v53;
  v61 = v71;
  v62 = 1;
  v65 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::GetImpl'::`2'::impl) )
  {
    ConnectorProcessingModeCount = EffectPack::GetConnectorProcessingModeCount(v66[1], eHostProcessConnector);
    if ( LODWORD(v19[53].lpVtbl)
      && (unsigned int)EffectPack::EndpointConnectorSupportsProcessingModes(v66[1], eHostProcessConnector)
      && ConnectorProcessingModeCount > 1
      && !LODWORD(v19[51].lpVtbl) )
    {
      v56 = 0LL;
      v22 = (__int64)v53;
      v23 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)v53->AddRef + 23);
      v24 = wil::com_ptr_t<IStreamInstanceProxy,wil::err_returncode_policy>::operator&(&v56);
      v25 = v23(v22 + 8, v24);
      v11 = v25;
      if ( v25 >= 0 )
      {
        SystemAudioStream::SystemAudioStream((SystemAudioStream *)v74);
        v26 = *(__int64 (__fastcall **)(struct IAudioResourceManager *, CEndpointCharacteristics **, __int64))(*(_QWORD *)g_AudioResourceManager + 104LL);
        wil::com_ptr_t<IBridgeStreamInstanceProxy,wil::err_returncode_policy>::operator&(&v19[71]);
        StreamIdentifier = GenerateStreamIdentifier();
        lpVtbl = v28;
        v29 = v26(g_AudioResourceManager, v66, StreamIdentifier);
        v11 = v29;
        if ( v29 >= 0 )
        {
          v58 = 0LL;
          v30 = v66[0];
          v31 = (struct IMMDevice **)wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::operator&(&v58);
          CEndpointCharacteristics::GetMMDevice(v30, v31);
          v57 = 0LL;
          v32 = (__int64)v53;
          v33 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)v53->AddRef + 14);
          v34 = wil::com_ptr_t<IStreamGroupProxy,wil::err_returncode_policy>::operator&(&v57);
          v35 = v33(v32 + 8, v34);
          v11 = v35;
          if ( v35 >= 0 )
          {
            *(_QWORD *)v59 = 0LL;
            v36 = v57;
            v37 = *(__int64 (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)v57 + 232LL);
            v38 = wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::operator&(v59);
            v39 = v37(v36, v38);
            v11 = v39;
            if ( v39 >= 0 )
            {
              (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)v59 + 40LL))(*(_QWORD *)v59, &v72);
              v41 = 0;
              while ( 1 )
              {
                EffectPack::GetConnectorProcessingMode(v66[1], &v71, eHostProcessConnector, v41);
                if ( (unsigned __int8)operator!=(&v72, &v71) )
                {
                  v42 = (*((__int64 (__fastcall **)(struct IMMDeviceVtbl *))v19[71].lpVtbl->QueryInterface + 12))(v19[71].lpVtbl);
                  v69 = v71;
                  v39 = CVADServer::CreateBridgeSinkAudioClientForMicInjection((CVADServer *)v19, v58, &v69, v42);
                  v11 = v39;
                  if ( v39 < 0 )
                    break;
                }
                if ( ++v41 >= ConnectorProcessingModeCount )
                {
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v59);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v57);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v58);
                  SystemAudioStream::~SystemAudioStream((SystemAudioStream *)v74);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v56);
                  v17 = a5;
                  goto LABEL_45;
                }
              }
              v40 = 1588LL;
            }
            else
            {
              v40 = 1577LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v40,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)(unsigned int)v39,
              lpVtbl);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v59);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x626,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)(unsigned int)v35,
              lpVtbl);
          }
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v57);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v58);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x61F,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v29,
            lpVtbl);
        }
        SystemAudioStream::~SystemAudioStream((SystemAudioStream *)v74);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x615,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v25,
          lpVtbl);
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v56);
      goto LABEL_48;
    }
LABEL_45:
    v18 = v60;
  }
  v43 = v70;
  v44 = SystemAudioStream::move_to((SystemAudioStream *)v73, v70);
  v11 = v44;
  if ( v44 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v44,
      lpVtbl);
LABEL_48:
    wil::details::lambda_call__lambda_3536bcdc4a42b08960a322f6b0b186f2___::_lambda_call__lambda_3536bcdc4a42b08960a322f6b0b186f2___(&v61);
    goto LABEL_49;
  }
  v45 = (__int64)v53;
  *((_QWORD *)v43 + 5) = v53[7].Activate;
  v19[69].lpVtbl = *(struct IMMDeviceVtbl **)(v45 + 416);
  started = StreamRequiresPreStartRegistration((struct IAudioStreamInfo *)((v45 + 8) & -(__int64)(v45 != 0)));
  LOBYTE(v19[65].lpVtbl) = started;
  *((_DWORD *)v43 + 235) = started;
  v19[67].lpVtbl = v18;
  v19[68].lpVtbl = v17;
  v47 = v19[21].lpVtbl;
  v48 = (__int64)v53;
  v19[21].lpVtbl = v53;
  if ( v48 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 8LL))(v48);
  if ( v47 )
    (*((void (__fastcall **)(struct IMMDeviceVtbl *))v47->QueryInterface + 2))(v47);
  v62 = 0;
  wil::details::lambda_call__lambda_3536bcdc4a42b08960a322f6b0b186f2___::_lambda_call__lambda_3536bcdc4a42b08960a322f6b0b186f2___(&v61);
  wil::details::lambda_call__lambda_192e387dcf8e46dd73c68c7fa6747328___::_lambda_call__lambda_192e387dcf8e46dd73c68c7fa6747328___(&v64);
  SystemAudioStream::~SystemAudioStream((SystemAudioStream *)v73);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v53);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v63);
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v66);
  wil::details::lambda_call__lambda_2e636c8b0c21056e5525154b5d5db667___::_lambda_call__lambda_2e636c8b0c21056e5525154b5d5db667___(v55);
  return 0LL;
}
