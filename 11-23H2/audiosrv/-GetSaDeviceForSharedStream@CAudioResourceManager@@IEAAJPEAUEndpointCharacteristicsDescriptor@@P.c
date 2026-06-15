/*
 * XREFs of ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAVCAudioSessionManager@@55PEAPEAUISaDeviceProxy@@@Z @ 0x180048B18
 * Callers:
 *     ?CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@_JPEBUtWAVEFORMATEX@@PEAUIStreamInstanceProxy@@PEAPEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x18006BA80 (-CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDes.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2PEAUIProcessSubmixProxy@@U8@PEAUSystemAudioStream@@@Z @ 0x18006CFA0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEA.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x1800D9228 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBrid.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800455A0 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D88 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsConnectorModeSupportedForSWAPOFallback@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800497A0 (-IsConnectorModeSupportedForSWAPOFallback@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpo.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004BB14 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18006A80D (memcmp_0.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_375715949059ca002adeaf36d6f47e10___ @ 0x18006ACE4 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006ACE4.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_7800ae632c03a9c3e8babfed67b18905___ @ 0x18006ADC0 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006ADC0.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_9d1eb366f2eca1ef6a6b30eb976eca35___ @ 0x18006AF7C (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006AF7C.c)
 *     _lambda_375715949059ca002adeaf36d6f47e10_::_lambda_375715949059ca002adeaf36d6f47e10_ @ 0x18006B038 (_lambda_375715949059ca002adeaf36d6f47e10_--_lambda_375715949059ca002adeaf36d6f47e10_.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x18006B080 (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     ??1?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18006B08C (--1-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180081418 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??1?$CAutoPtr@USaDeviceParams@@@ATL@@QEAA@XZ @ 0x180081450 (--1-$CAutoPtr@USaDeviceParams@@@ATL@@QEAA@XZ.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_8ca1e289a39bec89671b15596d0b6f7f___ @ 0x1800D8160 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_IS.c)
 *     ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800D8720 (--1-$vector@V-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIProcessSubm.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800D8854 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800DCAB8 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescripto.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800DDC7C (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 *     WPP_SF_ @ 0x1800DDCA8 (WPP_SF_.c)
 *     WPP_SF_P @ 0x1800DDD3C (WPP_SF_P.c)
 *     WPP_SF_d @ 0x1800DDE44 (WPP_SF_d.c)
 *     WPP_SF_i @ 0x1800DDEE4 (WPP_SF_i.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CAudioResourceManager::GetSaDeviceForSharedStream(
        CAudioResourceManager *this,
        EffectPack **a2,
        struct ISaDeviceResourceManager *a3,
        struct SaDeviceParams *a4,
        unsigned int a5,
        enum _AUDCLNT_SHAREMODE a6,
        struct SaDeviceResourceParams *a7,
        bool a8,
        struct CAudioSessionManager *a9,
        bool a10,
        bool a11,
        struct ISaDeviceProxy **a12)
{
  struct EndpointCharacteristicsDescriptor *v14; // rbx
  struct SaDeviceResourceParams *v15; // r14
  CEndpointStoreCache *v16; // rcx
  int EndpointStore; // eax
  unsigned int v18; // ebx
  struct CEndpointStore *v20; // rbx
  int v21; // eax
  unsigned int v22; // edi
  bool v23; // r14
  CAudioResourceManager *v24; // rcx
  struct ISaDeviceResourceManager *v25; // r8
  bool v26; // zf
  unsigned int v27; // eax
  int SaDeviceForPackagedApp; // eax
  char v29; // si
  int v30; // eax
  int v31; // eax
  __int64 v32; // r8
  char v33; // r12
  _QWORD *i; // rbx
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  unsigned __int16 *v37; // r14
  __int64 v38; // rsi
  const void *v39; // rax
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // r8
  unsigned __int64 v43; // rax
  struct ISaDeviceProxy *v44; // rcx
  struct CEndpointStore *v45; // rdi
  char v46; // r14
  _QWORD *v47; // rbx
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // rbx
  int v52; // eax
  unsigned int v53; // esi
  int v54; // eax
  struct SaDeviceResourceParams *v55; // r12
  struct EndpointCharacteristicsDescriptor *v56; // r14
  int v57; // esi
  int v58; // esi
  __int64 v59; // rax
  __int64 v60; // rdx
  struct ISaDeviceProxy *v61; // [rsp+50h] [rbp-89h] BYREF
  __int128 v62; // [rsp+58h] [rbp-81h] BYREF
  __int64 v63; // [rsp+68h] [rbp-71h]
  __int64 v64; // [rsp+70h] [rbp-69h] BYREF
  SaDeviceParams *v65; // [rsp+78h] [rbp-61h] BYREF
  __int128 v66; // [rsp+80h] [rbp-59h] BYREF
  __int64 v67; // [rsp+90h] [rbp-49h]
  struct CEndpointStore *v68; // [rsp+98h] [rbp-41h] BYREF
  __int64 v69; // [rsp+A0h] [rbp-39h] BYREF
  struct EndpointCharacteristicsDescriptor *v70; // [rsp+A8h] [rbp-31h] BYREF
  struct SaDeviceResourceParams *v71[2]; // [rsp+B0h] [rbp-29h] BYREF
  struct _GUID v72; // [rsp+C0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+3Fh]

  v14 = (struct EndpointCharacteristicsDescriptor *)a2;
  v70 = (struct EndpointCharacteristicsDescriptor *)a2;
  v15 = a7;
  v71[0] = a7;
  v72 = (struct _GUID)*((_OWORD *)a4 + 3);
  if ( !EffectPack::IsConnectorModeSupportedForSWAPOFallback(
          a2[1],
          *((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)a4 + 2),
          &v72) )
    goto LABEL_14;
  v68 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v16, *(const unsigned __int16 **)(*(_QWORD *)v14 + 48LL), &v68);
  v18 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A0,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)EndpointStore);
LABEL_4:
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(&v68);
    return v18;
  }
  v62 = 0LL;
  v63 = 0LL;
  v20 = v68;
  v21 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v68 + 13) + 88LL))(*((_QWORD *)v68 + 13), &v62);
  v22 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A3,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v21);
    if ( (_QWORD)v62 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v62, *((_QWORD *)&v62 + 1));
      std::_Deallocate<16,0>((void *)v62, (v63 - v62) & 0xFFFFFFFFFFFFFFF8uLL);
      v62 = 0LL;
      v63 = 0LL;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v20);
    return v22;
  }
  std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_8ca1e289a39bec89671b15596d0b6f7f___(
    &v69,
    v62,
    *((_QWORD *)&v62 + 1),
    a4);
  v23 = v69 != *((_QWORD *)&v62 + 1);
  v22 = v69 != *((_QWORD *)&v62 + 1) ? 0x887C0043 : 0;
  if ( (_QWORD)v62 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v62, *((_QWORD *)&v62 + 1));
    std::_Deallocate<16,0>((void *)v62, (v63 - v62) & 0xFFFFFFFFFFFFFFF8uLL);
    v62 = 0LL;
    v63 = 0LL;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v20);
  v14 = v70;
  v26 = !v23;
  v15 = v71[0];
  if ( v26 )
  {
LABEL_14:
    if ( a3 )
      v27 = (*(__int64 (__fastcall **)(struct ISaDeviceResourceManager *, struct EndpointCharacteristicsDescriptor *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, struct ISaDeviceProxy **))(*(_QWORD *)a3 + 48LL))(
              a3,
              v14,
              a4,
              a5,
              a6,
              v15,
              a12);
    else
      v27 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct EndpointCharacteristicsDescriptor *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, _QWORD, _QWORD, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
              g_DeviceGraphManager,
              v14,
              a4,
              a5,
              a6,
              v15,
              0LL,
              0LL,
              a12);
    v22 = v27;
    v24 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_a12ee458e5d235ad00fc6562119251bf_Traceguids, v27);
    }
  }
  if ( v22 == -2005139364 )
  {
    if ( a8 )
    {
      SaDeviceForPackagedApp = CAudioResourceManager::RetryGetSaDeviceForPackagedApp(
                                 v24,
                                 v14,
                                 v25,
                                 a4,
                                 a5,
                                 a6,
                                 v15,
                                 a9,
                                 a12);
      v18 = SaDeviceForPackagedApp;
      if ( SaDeviceForPackagedApp >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7CC,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)SaDeviceForPackagedApp);
      return v18;
    }
    goto LABEL_28;
  }
  if ( v22 != -2005139360 && v22 != -2005139389 )
  {
    if ( (v22 & 0x80000000) == 0 )
      return 0LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8BE,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v22);
    return v22;
  }
  v29 = 0;
  v68 = 0LL;
  v30 = CEndpointStoreCache::GetEndpointStore(v24, *(const unsigned __int16 **)a4, &v68);
  v18 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7DA,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v30);
    goto LABEL_4;
  }
  v66 = 0LL;
  v67 = 0LL;
  v31 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v68 + 13) + 88LL))(*((_QWORD *)v68 + 13), &v66);
  v18 = v31;
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7DD,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v31);
LABEL_132:
    std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(&v66);
    goto LABEL_4;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_P(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, v32, (__int64)(*((_QWORD *)&v66 + 1) - v66) >> 3);
  }
  v61 = 0LL;
  v33 = 0;
  for ( i = (_QWORD *)v66; ; ++i )
  {
    v35 = (_QWORD *)*((_QWORD *)&v66 + 1);
    if ( i == *((_QWORD **)&v66 + 1) )
      break;
    v36 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, struct _GUID *))(*(_QWORD *)*i + 40LL))(*i, &v72);
    if ( *v36 == *((_QWORD *)a4 + 6)
      && v36[1] == *((_QWORD *)a4 + 7)
      && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 80LL))(*i) == *((_DWORD *)a4 + 2)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 88LL))(*i) )
    {
      if ( !a11
        || (v37 = (unsigned __int16 *)*((_QWORD *)a4 + 2),
            v38 = v37[8],
            v39 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 48LL))(*i),
            v40 = memcmp_0(v39, v37, v38 + 18),
            v29 = 0,
            !v40) )
      {
        if ( a10 )
        {
          if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i) != *((_QWORD *)a4 + 4) )
            continue;
        }
        else if ( v33 || (v33 = 0, (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 136LL))(*i)) )
        {
          v33 = 1;
        }
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v41 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i);
          WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, v42, v41);
        }
        Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(&v61, i);
        v43 = abs64((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 32LL))(*i) - *((_QWORD *)a4 + 4));
        v44 = v61;
        if ( v61 && v43 && v33 )
        {
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v61);
          v44 = v61;
        }
        v61 = 0LL;
        *a12 = v44;
      }
    }
  }
  v45 = v68;
  if ( *a12 )
    goto LABEL_101;
  v64 = 0LL;
  v46 = 0;
  v47 = (_QWORD *)v66;
  while ( 2 )
  {
    if ( v47 == v35 )
      goto LABEL_124;
    v48 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, struct _GUID *))(*(_QWORD *)*v47 + 40LL))(*v47, &v72);
    if ( *v48 != *((_QWORD *)a4 + 6)
      || v48[1] != *((_QWORD *)a4 + 7)
      || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 80LL))(*v47) != *((_DWORD *)a4 + 2)
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 88LL))(*v47) )
    {
LABEL_72:
      ++v47;
      v35 = (_QWORD *)*((_QWORD *)&v66 + 1);
      continue;
    }
    break;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 152LL))(*v47) )
  {
    v29 = 1;
    goto LABEL_72;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 120LL))(*v47) )
  {
    v46 = 1;
    goto LABEL_72;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v49 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 32LL))(*v47);
    WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, v50, v49);
  }
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(&v64, v47);
  v51 = v64;
  if ( !v64 )
  {
LABEL_124:
    if ( a11 || a10 )
    {
      if ( v46 )
      {
        v18 = -2004287448;
        v60 = 2139LL;
LABEL_131:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v60,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)v18);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v64);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v61);
        goto LABEL_132;
      }
      if ( v29 )
      {
        v18 = -2004287447;
        v60 = 2140LL;
        goto LABEL_131;
      }
    }
    v18 = -2005139360;
    v60 = 2142LL;
    goto LABEL_131;
  }
  v65 = 0LL;
  v52 = (*(__int64 (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)v64 + 104LL))(v64, &v65);
  v53 = v52;
  if ( v52 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x864,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v52);
LABEL_80:
    ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>(&v65);
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v64);
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v61);
    std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(&v66);
    v18 = v53;
    goto LABEL_4;
  }
  v62 = 0LL;
  v63 = 0LL;
  v54 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(**((_QWORD **)v45 + 13) + 112LL))(
          *((_QWORD *)v45 + 13),
          v51,
          &v62);
  v53 = v54;
  if ( v54 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x868,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v54);
    std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(&v62);
    goto LABEL_80;
  }
  v69 = v51;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v69);
  std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_9d1eb366f2eca1ef6a6b30eb976eca35___(
    &v72,
    v62,
    *((_QWORD *)&v62 + 1),
    &v69);
  Microsoft::WRL::ComPtr<IProcessSubmixProxy>::~ComPtr<IProcessSubmixProxy>(&v72);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_a12ee458e5d235ad00fc6562119251bf_Traceguids);
  }
  std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(&v66);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v64);
  v55 = v71[0];
  v56 = v70;
  v18 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct EndpointCharacteristicsDescriptor *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, _QWORD, _QWORD, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
          g_DeviceGraphManager,
          v70,
          a4,
          a5,
          a6,
          v71[0],
          0LL,
          0LL,
          a12);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_a12ee458e5d235ad00fc6562119251bf_Traceguids, v18);
  }
  if ( (v18 & 0x80000000) != 0 )
  {
    v71[0] = 0LL;
    v57 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct EndpointCharacteristicsDescriptor *, SaDeviceParams *, __int64, _DWORD, struct SaDeviceResourceParams *, _QWORD, _QWORD, struct SaDeviceResourceParams **))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            v56,
            v65,
            2LL,
            0,
            v55,
            0LL,
            0LL,
            v71);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        19LL,
        &WPP_a12ee458e5d235ad00fc6562119251bf_Traceguids,
        (unsigned int)v57);
    }
    if ( v57 >= 0 )
    {
      v70 = 0LL;
      v58 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct EndpointCharacteristicsDescriptor *, SaDeviceParams *, __int64, _DWORD, struct SaDeviceResourceParams *, _QWORD, _QWORD, struct EndpointCharacteristicsDescriptor **))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
              g_DeviceGraphManager,
              v56,
              v65,
              2LL,
              0,
              v55,
              0LL,
              0LL,
              &v70);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          20LL,
          &WPP_a12ee458e5d235ad00fc6562119251bf_Traceguids,
          (unsigned int)v58);
      }
      if ( v58 >= 0 )
      {
        v59 = lambda_375715949059ca002adeaf36d6f47e10_::_lambda_375715949059ca002adeaf36d6f47e10_(&v72, &v70);
        std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_375715949059ca002adeaf36d6f47e10___(
          &v69,
          v62,
          *((_QWORD *)&v62 + 1),
          v59);
        ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v69);
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v70);
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v71);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8B9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v18);
    if ( (_QWORD)v62 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v62, *((_QWORD *)&v62 + 1));
      std::_Deallocate<16,0>((void *)v62, (v63 - v62) & 0xFFFFFFFFFFFFFFF8uLL);
      v62 = 0LL;
      v63 = 0LL;
    }
    if ( v65 )
      SaDeviceParams::`scalar deleting destructor'(v65);
    v65 = 0LL;
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v64);
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v61);
    if ( (_QWORD)v66 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v66, *((_QWORD *)&v66 + 1));
      std::_Deallocate<16,0>((void *)v66, (v67 - v66) & 0xFFFFFFFFFFFFFFF8uLL);
      v66 = 0LL;
      v67 = 0LL;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v45);
    return v18;
  }
  std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_7800ae632c03a9c3e8babfed67b18905___(
    &v72,
    v62,
    *((_QWORD *)&v62 + 1),
    a12);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_a12ee458e5d235ad00fc6562119251bf_Traceguids);
  }
  if ( (_QWORD)v62 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v62, *((_QWORD *)&v62 + 1));
    std::_Deallocate<16,0>((void *)v62, (v63 - v62) & 0xFFFFFFFFFFFFFFF8uLL);
    v62 = 0LL;
    v63 = 0LL;
  }
  if ( v65 )
    SaDeviceParams::`scalar deleting destructor'(v65);
  v65 = 0LL;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v64);
LABEL_101:
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v61);
  if ( (_QWORD)v66 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v66, *((_QWORD *)&v66 + 1));
    std::_Deallocate<16,0>((void *)v66, (v67 - v66) & 0xFFFFFFFFFFFFFFF8uLL);
    v66 = 0LL;
    v67 = 0LL;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v45);
  return 0LL;
}
