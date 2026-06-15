/*
 * XREFs of ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x1800450A8
 * Callers:
 *     ?CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@_JPEBUtWAVEFORMATEX@@PEAUIStreamInstanceProxy@@PEAPEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x18006BA70 (-CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDes.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2PEAUIProcessSubmixProxy@@U8@PEAUSystemAudioStream@@@Z @ 0x18006CF90 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEA.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D681C (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x1800D9278 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBrid.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1801210C0 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetDevicePeriod @ 0x180121AD0 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetMixFormat @ 0x180122210 (AudioServerGetMixFormat.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1801229E0 (AudioServerGetSharedModeEnginePeriod.c)
 *     AudioServerIsFormatSupported @ 0x180123880 (AudioServerIsFormatSupported.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18000BE24 (-GetExclusiveModeProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineend.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800102C0 (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180029DE8 (-IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_au.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18002C970 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x18002D434 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ?IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@U_GUID@@@Z @ 0x18002EB7C (-IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800453A4 (-GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengine.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?IsConnectorModeSupportedForSWAPOFallback@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800497A0 (-IsConnectorModeSupportedForSWAPOFallback@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpo.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004BB14 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180081448 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_cfabe4c61bc15f8a85c19fe8f19b6830___ @ 0x18011C294 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18011C294.c)
 *     ?AreResourcesAvailableForStream@@YAHPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KH@Z @ 0x18011CCE8 (-AreResourcesAvailableForStream@@YAHPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_au.c)
 *     ?AllowRawStreamCreation@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014B1E0 (-AllowRawStreamCreation@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001.c)
 *     ?GetAvailableConnectorCount@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAI@Z @ 0x18014C1D8 (-GetAvailableConnectorCount@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall DeriveAudioProcessingModeConfiguration(
        unsigned int a1,
        int a2,
        int a3,
        CEndpointCharacteristics **a4,
        unsigned int a5,
        int a6,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a7,
        __int64 *a8,
        int a9,
        int a10,
        __int64 a11,
        struct _GUID *a12,
        struct _GUID *a13,
        struct _GUID *a14,
        struct _GUID *a15,
        _OWORD *a16)
{
  __int64 v18; // r13
  struct _GUID *v19; // r14
  _OWORD *v20; // rsi
  GUID v21; // xmm9
  EffectPack *v22; // rcx
  const char *v23; // r9
  __int64 v24; // rcx
  struct _GUID *v25; // r14
  int v26; // ebx
  unsigned int v27; // ebx
  int v28; // esi
  __int64 v29; // r12
  __int64 v30; // rax
  char v31; // r13
  struct _GUID v32; // xmm6
  struct _GUID v33; // xmm7
  struct _GUID v34; // xmm8
  int v36; // eax
  unsigned int v37; // ebx
  __int64 v38; // rax
  int v39; // eax
  unsigned int v40; // ebx
  EffectPack *v41; // rbx
  CEndpointStoreCache *v42; // rcx
  int EndpointStore; // eax
  unsigned int v44; // esi
  __int64 v45; // rdx
  struct CEndpointStore *v46; // rbx
  int v47; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v48; // edx
  unsigned int v49; // eax
  bool v50; // zf
  struct _GUID *v51; // rax
  char v52; // [rsp+30h] [rbp-178h] BYREF
  char v53; // [rsp+31h] [rbp-177h] BYREF
  void *v54; // [rsp+38h] [rbp-170h] BYREF
  unsigned int v55; // [rsp+40h] [rbp-168h] BYREF
  unsigned int v56; // [rsp+44h] [rbp-164h]
  unsigned int v57; // [rsp+48h] [rbp-160h]
  struct CEndpointStore *v58[2]; // [rsp+50h] [rbp-158h] BYREF
  __int128 v59; // [rsp+60h] [rbp-148h] BYREF
  __int64 v60; // [rsp+70h] [rbp-138h]
  struct _GUID v61; // [rsp+80h] [rbp-128h] BYREF
  struct _GUID v62; // [rsp+90h] [rbp-118h] BYREF
  struct _GUID *v63; // [rsp+A0h] [rbp-108h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+A8h] [rbp-100h] BYREF
  struct _GUID *v65; // [rsp+B0h] [rbp-F8h]
  struct _GUID *v66; // [rsp+B8h] [rbp-F0h]
  struct _GUID *v67; // [rsp+C0h] [rbp-E8h]
  _QWORD v68[4]; // [rsp+D0h] [rbp-D8h] BYREF
  struct _GUID v69; // [rsp+F0h] [rbp-B8h] BYREF
  struct _GUID v70; // [rsp+100h] [rbp-A8h] BYREF
  struct _GUID v71; // [rsp+120h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v18 = a1;
  v57 = a1;
  v66 = a12;
  v67 = a13;
  v65 = a14;
  v19 = a15;
  v63 = a15;
  v20 = a16;
  v54 = a16;
  v21 = GUID_00000000_0000_0000_0000_000000000000;
  v69 = GUID_00000000_0000_0000_0000_000000000000;
  v61 = GUID_00000000_0000_0000_0000_000000000000;
  v62 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a6 == 1 )
  {
    EffectPack::GetExclusiveModeProcessingModeConfiguration(a4[1], (unsigned int)a7, &v69, &v61, &v62);
    v54 = 0LL;
    if ( (int)CEndpointCharacteristics::TryGetCustomResourceManagerService(
                *a4,
                &GUID_39a3af14_c4e0_431e_84af_4d4c1087da45,
                &v54) < 0
      || !v54
      || (v36 = (*(__int64 (__fastcall **)(void *, CEndpointCharacteristics **, __int64, struct _GUID *))(*(_QWORD *)v54 + 112LL))(
                  v54,
                  a4,
                  a11,
                  &v71),
          v37 = v36,
          v36 == -2147467263) )
    {
      v32 = v69;
    }
    else
    {
      if ( v36 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x324,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v36);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v54);
        return v37;
      }
      v32 = v71;
    }
    v33 = v61;
    v21 = v61;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v54);
    goto LABEL_102;
  }
  if ( a5 == 2 )
  {
    if ( a8 )
    {
      v38 = *a8;
      v58[0] = 0LL;
      v39 = (*(__int64 (__fastcall **)(__int64 *, struct CEndpointStore **))(v38 + 80))(a8, v58);
      v40 = v39;
      if ( v39 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x331,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v39);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v58);
        return v40;
      }
      v34 = *(struct _GUID *)(*(__int64 (__fastcall **)(struct CEndpointStore *, struct _GUID *))(*(_QWORD *)v58[0]
                                                                                                + 152LL))(
                               v58[0],
                               &v70);
      v33 = v34;
      v32 = v34;
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v58);
    }
    else
    {
      EffectPack::GetDefaultConnectorProcessingModeConfiguration(a4[1], eHostProcessConnector, &v69, &v61, &v62);
      v34 = v62;
      v33 = v61;
      v32 = v69;
    }
    v21 = v33;
LABEL_52:
    v20 = v54;
LABEL_24:
    if ( v66 )
      *v66 = v32;
    if ( v67 )
      *v67 = v33;
    if ( v65 )
      *v65 = v34;
    if ( v19 )
      *v19 = v34;
    if ( v20 )
      *v20 = v21;
    return 0LL;
  }
  v22 = a4[1];
  if ( a2 )
  {
    if ( !EffectPack::AllowRawStreamCreation(v22, a7) )
      return 2290679847LL;
    v32 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v33 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v34 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v21 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    goto LABEL_52;
  }
  try
  {
    EffectPack::GetDefaultConnectorProcessingModeConfiguration(v22, a7, &v69, &v61, &v62);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3AE,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                           v23);
  }
  if ( a5 > 1 || (unsigned int)v18 >= 0x18 )
  {
    v26 = -2147024809;
    v24 = v18;
    v25 = v65;
  }
  else
  {
    v24 = v18;
    if ( a5 )
      v25 = (struct _GUID *)*(&off_18017DB40 + v18);
    else
      v25 = (struct _GUID *)*(&off_180171820 + v18);
    v26 = 0;
    if ( v25->Data1 )
      v21 = *(GUID *)*(_QWORD *)v25->Data4;
  }
  if ( a5 )
  {
    if ( a5 != 1 )
      goto LABEL_14;
    if ( (_DWORD)v18 == 18 )
    {
      if ( !a3 )
        goto LABEL_14;
      v25 = (struct _GUID *)&unk_18017DC10;
    }
    else
    {
      if ( (_DWORD)v18 != 3 || !a3 )
      {
LABEL_14:
        if ( v26 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x382,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v26);
          return (unsigned int)v26;
        }
        goto LABEL_15;
      }
      v25 = (struct _GUID *)&unk_18017DC00;
    }
  }
  else
  {
    if ( !dword_180199650[v24] || !(unsigned int)CEndpointCharacteristics::GetVirtualSurroundEffectMode(*a4) )
      goto LABEL_14;
    v25 = (struct _GUID *)&unk_18017AE58;
  }
LABEL_15:
  v27 = 0;
  v28 = a7;
  while ( 1 )
  {
    v56 = v27;
    if ( v27 >= v25->Data1 )
    {
      v32 = v69;
      v33 = v61;
      v20 = v54;
      v19 = v63;
LABEL_102:
      v34 = v62;
      goto LABEL_24;
    }
    v29 = 2LL * v27;
    v30 = *(_QWORD *)v25->Data4;
    v71 = *(struct _GUID *)(v30 + 16LL * v27);
    *(_OWORD *)v58 = *(_OWORD *)(v30 + 16LL * v27);
    if ( !(unsigned int)EffectPack::IsConnectorModeSupported(a4[1], v28, 0, (__int64)v58) )
    {
      v31 = 0;
      goto LABEL_19;
    }
    v31 = 1;
    if ( a10 )
      break;
LABEL_19:
    if ( v31 )
    {
      v32 = *(struct _GUID *)(*(_QWORD *)v25->Data4 + 8 * v29);
      v69 = v32;
      if ( a9
        || (v70 = v32,
            v50 = (unsigned int)EffectPack::IsAPOModeSupported((__int64)a4[1], 0, (__int128 *)&v70, v28) == 0,
            v51 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf,
            !v50) )
      {
        v51 = &v69;
      }
      v33 = *v51;
      v34 = v32;
      goto LABEL_23;
    }
    v70 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    if ( (unsigned int)EffectPack::IsConnectorModeSupported(a4[1], v28, 0, (__int64)&v70) )
    {
      v70 = *(struct _GUID *)(*(_QWORD *)v25->Data4 + 8 * v29);
      if ( (unsigned int)EffectPack::IsAPOModeSupported((__int64)a4[1], 0, (__int128 *)&v70, v28) )
      {
        v32 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        v33 = *(struct _GUID *)(*(_QWORD *)v25->Data4 + 8 * v29);
        v34 = v33;
LABEL_23:
        v20 = v54;
        v19 = v63;
        goto LABEL_24;
      }
    }
    ++v27;
  }
  v41 = a4[1];
  if ( *(int *)(gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                  (unsigned __int64 *)(*((_QWORD *)v41 + 159) + 1864LL),
                  v28)
              + 8) <= 0 )
    goto LABEL_95;
  *(GUID *)v58 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( !(unsigned int)EffectPack::IsConnectorModeSupported(v41, v28, 0, (__int64)v58) )
    goto LABEL_95;
  v58[0] = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v42, *((const unsigned __int16 **)*a4 + 6), v58);
  v44 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    v45 = 670LL;
LABEL_70:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v45,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)EndpointStore);
LABEL_71:
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(v58);
    goto LABEL_92;
  }
  v52 = 0;
  v53 = 0;
  v46 = v58[0];
  (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)v58[0] + 13) + 120LL))(
    *((_QWORD *)v58[0] + 13),
    &lpCriticalSection);
  v59 = 0LL;
  v60 = 0LL;
  v47 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v46 + 13) + 88LL))(*((_QWORD *)v46 + 13), &v59);
  v44 = v47;
  if ( v47 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v47);
    if ( (_QWORD)v59 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v59, *((_QWORD *)&v59 + 1));
      std::_Deallocate<16,0>(v59, (v60 - v59) & 0xFFFFFFFFFFFFFFF8uLL);
      v59 = 0LL;
      v60 = 0LL;
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_71;
  }
  v68[0] = &v52;
  v68[1] = &v71;
  v68[2] = &v53;
  std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_cfabe4c61bc15f8a85c19fe8f19b6830___(
    &v70,
    v59,
    *((_QWORD *)&v59 + 1),
    v68);
  if ( (_QWORD)v59 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v59, *((_QWORD *)&v59 + 1));
    std::_Deallocate<16,0>(v59, (v60 - v59) & 0xFFFFFFFFFFFFFFF8uLL);
    v59 = 0LL;
    v60 = 0LL;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( v53 )
  {
    v28 = a7;
    goto LABEL_94;
  }
  EndpointStore = CEndpointCharacteristics::GetAvailableConnectorCount(*a4, v48, &v55);
  v44 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    v45 = 692LL;
    goto LABEL_70;
  }
  v70 = v71;
  v28 = a7;
  if ( EffectPack::IsConnectorModeSupportedForSWAPOFallback(a4[1], a7, &v70) )
  {
    v49 = v55;
    if ( v52 )
      v49 = ++v55;
    if ( v49 <= 1 || (v70 = v71, !AreResourcesAvailableForStream(*a4, &v70, a7, v57, 0)) )
      v31 = 0;
LABEL_94:
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v46);
LABEL_95:
    v27 = v56;
    goto LABEL_19;
  }
  if ( v52 || v55 > 1 )
    goto LABEL_94;
  v44 = -2004287478;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2CE,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)0x8889000ALL);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v46);
LABEL_92:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x38E,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)v44);
  return v44;
}
