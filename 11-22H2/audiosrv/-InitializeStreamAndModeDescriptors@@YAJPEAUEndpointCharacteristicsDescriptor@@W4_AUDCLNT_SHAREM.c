/*
 * XREFs of ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N_N66W4_BridgeStreamProperties@@6PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x18006F1BC
 * Callers:
 *     ?CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@_JPEBUtWAVEFORMATEX@@PEAUIStreamInstanceProxy@@PEAPEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x18006BA70 (-CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDes.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2PEAUIProcessSubmixProxy@@U8@PEAUSystemAudioStream@@@Z @ 0x18006CF90 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEA.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x1800D9278 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBrid.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000BEC4 (-CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpo.c)
 *     ?CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@@Z @ 0x18000DD28 (-CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 *     ??$?4U?$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@$0A@@?$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U?$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010218 (--$-4U-$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@$0A@@-$unique_ptr@UAUDIO_DEVICE_MODE.c)
 *     ??$?4U?$default_delete@UMODE_PARAMS@@@std@@$0A@@?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001024C (--$-4U-$default_delete@UMODE_PARAMS@@@std@@$0A@@-$unique_ptr@UMODE_PARAMS@@U-$default_delete@UMO.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180015DAC (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ??1?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180015DEC (--1-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$copy_to@UIMMDevice@@@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIMMDevice@@@Z @ 0x18004756C (--$copy_to@UIMMDevice@@@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIM.c)
 *     ??1?$unique_ptr@UAUDIO_NOTIFICATION_BLOCK@@U?$default_delete@UAUDIO_NOTIFICATION_BLOCK@@@std@@@std@@QEAA@XZ @ 0x18004B11C (--1-$unique_ptr@UAUDIO_NOTIFICATION_BLOCK@@U-$default_delete@UAUDIO_NOTIFICATION_BLOCK@@@std@@@s.c)
 *     ??1?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ @ 0x18004B140 (--1-$unique_ptr@UMODE_PARAMS@@U-$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ.c)
 *     ??$try_copy@UIApoAuxiliaryInputConfiguration@@@?$com_ptr_t@UIAudioProcessingObject@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIApoAuxiliaryInputConfiguration@@Uerr_returncode_policy@wil@@@1@XZ @ 0x18004B180 (--$try_copy@UIApoAuxiliaryInputConfiguration@@@-$com_ptr_t@UIAudioProcessingObject@@Uerr_returnc.c)
 *     ??$try_copy@UIApoAcousticEchoCancellation@@@?$com_ptr_t@UIAudioProcessingObject@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIApoAcousticEchoCancellation@@Uerr_returncode_policy@wil@@@1@XZ @ 0x18004B1C8 (--$try_copy@UIApoAcousticEchoCancellation@@@-$com_ptr_t@UIAudioProcessingObject@@Uerr_returncode.c)
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180055B50 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     ?GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180055DB8 (-GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006706C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006A07C (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@@@details@wil@@QEAA_NXZ @ 0x180070670 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z @ 0x1800DB1FC (-GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z.c)
 *     ?GetLfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18014CC5C (-GetLfx@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIComposi.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall InitializeStreamAndModeDescriptors(
        struct IAudioProcessingObject *a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        _QWORD *a6,
        __int64 a7,
        _OWORD *a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        IID *a15,
        __int64 a16,
        GUID *a17,
        __int64 a18,
        __int64 a19,
        char a20,
        char a21,
        unsigned __int8 a22,
        char a23,
        __int64 a24,
        __int64 a25,
        int a26,
        __int64 a27,
        _QWORD *a28,
        _QWORD **a29)
{
  unsigned int v29; // edi
  int v31; // r12d
  struct IAudioProcessingObject *v32; // r15
  IID *v33; // rsi
  unsigned int *v34; // rbx
  struct IAudioProcessingObject v35; // rcx
  bool v36; // al
  unsigned int v37; // edi
  __int64 v38; // rdx
  unsigned int *v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // edx
  int v42; // eax
  EffectPack *v43; // rcx
  int Lfx; // eax
  __int64 v45; // rdx
  void *v46; // rcx
  __int64 v47; // rax
  void *v48; // rcx
  unsigned int v49; // r12d
  unsigned int *v50; // rax
  __int64 v51; // rdi
  unsigned int *v52; // rax
  unsigned int v53; // r8d
  unsigned int v54; // edx
  GUID v55; // xmm0
  void *v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rdi
  unsigned int *v59; // rax
  __int64 v60; // rcx
  unsigned int v61; // r15d
  int v62; // edi
  unsigned int v63; // ecx
  __int64 v64; // rdx
  void *v65; // rcx
  GUID *v66; // rax
  __int128 v67; // xmm2
  __int128 v68; // xmm3
  __int64 v69; // xmm0_8
  BOOL v71; // eax
  int StreamEffect; // eax
  __int64 v73; // rax
  void *v74; // rcx
  unsigned int v75; // esi
  __int64 v76; // rdi
  unsigned int *v77; // rax
  unsigned int v78; // r8d
  unsigned int v79; // edx
  __int64 v80; // rdx
  unsigned int *v81; // rax
  void *v82; // rcx
  int ContainerProperty; // eax
  __int64 v84; // rdx
  IID *v85; // rsi
  int ModeEffect; // eax
  __int64 v87; // r9
  __int64 v88; // rdx
  void *v89; // rcx
  __int64 v90; // rax
  void *v91; // rcx
  int v92; // r13d
  char CanProcessingModeBeParameterized; // r12
  unsigned int v94; // r15d
  char *v95; // rax
  char *v96; // rdi
  unsigned int v97; // edx
  unsigned int v98; // ecx
  struct _GUID *v99; // r13
  __int64 *v100; // rax
  __int64 *v101; // rsi
  EffectPack *lpVtbl; // rcx
  int v103; // eax
  void *v104; // rcx
  unsigned int *v105; // rax
  struct IAudioSystemEffects2 **v107; // [rsp+28h] [rbp-E0h]
  struct ICompositeSystemEffect *v108; // [rsp+48h] [rbp-C0h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID v110; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v111; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v112; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID v113; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v114; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v115; // [rsp+7Ch] [rbp-8Ch] BYREF
  char *v116; // [rsp+80h] [rbp-88h] BYREF
  struct IAudioProcessingObject *v117[2]; // [rsp+88h] [rbp-80h] BYREF
  IID rclsid; // [rsp+98h] [rbp-70h] BYREF
  char v119; // [rsp+A8h] [rbp-60h]
  struct IAudioProcessingObject *v120; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int *v121; // [rsp+C0h] [rbp-48h]
  struct _GUID v122; // [rsp+C8h] [rbp-40h] BYREF
  char v123; // [rsp+D8h] [rbp-30h]
  struct _GUID v124; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD *v125; // [rsp+F8h] [rbp-10h]
  __int64 v126; // [rsp+100h] [rbp-8h] BYREF
  _QWORD **v127; // [rsp+108h] [rbp+0h]
  CLSID pClsid; // [rsp+110h] [rbp+8h] BYREF
  char v129; // [rsp+120h] [rbp+18h]
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v29 = a4;
  LODWORD(v116) = a4;
  v31 = a2;
  LODWORD(v112) = a2;
  v32 = a1;
  v120 = a1;
  *(_QWORD *)&v124.Data1 = a7;
  v33 = a15;
  *(_QWORD *)&rclsid.Data1 = a15;
  v125 = a28;
  v127 = a29;
  v34 = 0LL;
  v121 = 0LL;
  v111 = 0LL;
  v35.lpVtbl = a1->lpVtbl;
  v126 = 0LL;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::copy_to<IMMDevice>(
    (__int64 *)&v35.lpVtbl->GetRegistrationProperties,
    &v126);
  if ( !a28 )
    goto LABEL_127;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::GetImpl'::`2'::impl) )
    v36 = a5 != eLoopbackConnector && !a22;
  else
    v36 = a5 != eLoopbackConnector;
  if ( (a3 & 0x800000) != 0 )
  {
    if ( v31 )
    {
      v37 = -2147418113;
      v38 = 273LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v38,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v37);
LABEL_139:
      std::unique_ptr<MODE_PARAMS>::~unique_ptr<MODE_PARAMS>(&v111);
      goto LABEL_178;
    }
    v39 = (unsigned int *)CoTaskMemAlloc(0x15CuLL);
    v34 = v39;
    v121 = v39;
    if ( !v39 )
    {
      v37 = -2147024882;
      v38 = 278LL;
      goto LABEL_14;
    }
    memset_0(v39, 0, 0x15CuLL);
    v34[34] = a3;
    v40 = v34[82];
    v34[40] = 1;
    *(GUID *)&v34[4 * v40 + 83] = GUID_fed4acc3_87c9_45e9_a026_5b59a855e687;
    ++v34[82];
    v34[1] = 1;
    goto LABEL_76;
  }
  if ( v31 || (a5 & 0xFFFFFFFC) != 0 || a5 == eOffloadConnector )
  {
    v113 = 0LL;
    LODWORD(v112) = 0;
    if ( a5 != eOffloadConnector || v31 )
    {
      v81 = (unsigned int *)CoTaskMemAlloc(0x160uLL);
      v34 = v81;
      v121 = v81;
      if ( v81 )
      {
        memset_0(v81, 0, 0x160uLL);
        *v34 = v29;
        v34[34] = a3;
        goto LABEL_109;
      }
      v37 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F0,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x8007000ELL);
    }
    else
    {
      v108 = 0LL;
      v122 = *(struct _GUID *)*(_QWORD *)&v124.Data1;
      StreamEffect = EffectPack::GetStreamEffect(
                       (EffectPack *)v32[1].lpVtbl,
                       &v122,
                       0,
                       eOffloadConnector,
                       &v108,
                       0LL,
                       0LL);
      v37 = StreamEffect;
      if ( StreamEffect < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1CE,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)StreamEffect);
        wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)&v108);
        v46 = v113;
        v113 = 0LL;
        goto LABEL_137;
      }
      if ( v108 )
      {
        v73 = *(_QWORD *)v108;
        *(_QWORD *)&pClsid.Data1 = &v113;
        *(_QWORD *)pClsid.Data4 = 0LL;
        v129 = 1;
        (*(void (__fastcall **)(struct ICompositeSystemEffect *, __int64 *, unsigned __int8 *))(v73 + 32))(
          v108,
          &v112,
          pClsid.Data4);
        if ( v129 )
        {
          v74 = **(void ***)&pClsid.Data1;
          **(_QWORD **)&pClsid.Data1 = *(_QWORD *)pClsid.Data4;
          if ( v74 )
            CoTaskMemFree(v74);
        }
      }
      v75 = v112;
      v76 = 16LL * (unsigned int)v112;
      v77 = (unsigned int *)CoTaskMemAlloc(v76 + 332);
      v34 = v77;
      v121 = v77;
      if ( v77 )
      {
        memset_0(v77, 0, v76 + 332);
        *v34 = 0;
        v34[34] = a3;
        *((_QWORD *)v34 + 18) = 0LL;
        v34[82] = 0;
        v34[40] = 0;
        v78 = 0;
        v79 = 0;
        if ( (_DWORD)v112 )
        {
          while ( v79 <= 0x1F )
          {
            v34[40] |= 1 << v79;
            *(_OWORD *)&v34[4 * v79 + 83] = *((_OWORD *)v113 + v78);
            v79 = v34[82] + 1;
            v34[82] = v79;
            if ( ++v78 >= (unsigned int)v112 )
              goto LABEL_101;
          }
          v80 = 480LL;
LABEL_103:
          v37 = -2147418113;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v80,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)0x8000FFFFLL);
          wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)&v108);
          v56 = v113;
          v113 = 0LL;
          goto LABEL_46;
        }
LABEL_101:
        v34[1] = 0;
        if ( v79 > v75 )
        {
          v80 = 488LL;
          goto LABEL_103;
        }
        wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)&v108);
        v33 = *(IID **)&rclsid.Data1;
LABEL_109:
        v82 = v113;
        v113 = 0LL;
        if ( v82 )
          CoTaskMemFree(v82);
LABEL_76:
        *(_OWORD *)(v34 + 41) = *(_OWORD *)*(_QWORD *)&v124.Data1;
        *(_OWORD *)(v34 + 45) = *a8;
        v34[2] = a5;
        *((_QWORD *)v34 + 16) = a10;
        v34[30] = *(unsigned __int16 *)(a10 + 16) + 18;
        *((_QWORD *)v34 + 3) = a12;
        *((_QWORD *)v34 + 4) = a13;
        v34[3] = a9;
        *((_QWORD *)v34 + 2) = a14;
        v66 = &GUID_00000000_0000_0000_0000_000000000000;
        if ( a17 )
          v66 = a17;
        *((GUID *)v34 + 3) = *v66;
        v67 = *(_OWORD *)(a18 + 16);
        v68 = *(_OWORD *)(a18 + 32);
        v69 = *(_QWORD *)(a18 + 48);
        *(_OWORD *)(v34 + 50) = *(_OWORD *)a18;
        *(_OWORD *)(v34 + 54) = v67;
        *(_OWORD *)(v34 + 58) = v68;
        *((_QWORD *)v34 + 31) = v69;
        *((_QWORD *)v34 + 14) = a19;
        v34[76] = a26;
        if ( a26 != 2 )
          a27 = 0LL;
        *((_QWORD *)v34 + 39) = a27;
        v34[70] = v31 == 1;
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::GetImpl'::`2'::impl) )
          v34[80] = a22;
        v71 = ((_DWORD)v116 != 2 || a5) && (!a22 || a26 != 2);
        v34[81] = v71;
        *((GUID *)v34 + 4) = GUID_00000000_0000_0000_0000_000000000000;
        if ( v33
          && (*(_QWORD *)&v33->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
           || *(_QWORD *)v33->Data4 != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4) )
        {
          rclsid = *v33;
          ContainerProperty = GetContainerProperty(&rclsid, &PKEY_Audio_CPMemoryManager, (struct _GUID *)v34 + 4);
          v37 = ContainerProperty;
          if ( ContainerProperty < 0 )
          {
            v84 = 535LL;
LABEL_117:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v84,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)(unsigned int)ContainerProperty);
            goto LABEL_48;
          }
        }
        *((GUID *)v34 + 5) = GUID_00000000_0000_0000_0000_000000000000;
        if ( v33
          && (*(_QWORD *)&v33->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
           || *(_QWORD *)v33->Data4 != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4) )
        {
          rclsid = *v33;
          ContainerProperty = GetContainerProperty(&rclsid, &PKEY_Audio_CPEventManager, (struct _GUID *)v34 + 5);
          v37 = ContainerProperty;
          if ( ContainerProperty < 0 )
          {
            v84 = 542LL;
            goto LABEL_117;
          }
        }
        if ( a16
          && (*(_QWORD *)a16 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
           || *(_QWORD *)(a16 + 8) != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4) )
        {
          *((_OWORD *)v34 + 6) = *(_OWORD *)a16;
        }
LABEL_127:
        v110 = 0LL;
        v115 = 0;
        v117[0] = 0LL;
        v108 = 0LL;
        v85 = *(IID **)&v124.Data1;
        rclsid = *(IID *)*(_QWORD *)&v124.Data1;
        ModeEffect = EffectPack::GetModeEffect((EffectPack *)v32[1].lpVtbl, &rclsid, 0, a5, &v108, v117, 0LL);
        v37 = ModeEffect;
        if ( ModeEffect < 0 )
        {
          v87 = (unsigned int)ModeEffect;
          v88 = 556LL;
LABEL_129:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v88,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)v87);
LABEL_130:
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v117);
LABEL_131:
          v89 = v110;
          v110 = 0LL;
LABEL_132:
          if ( v89 )
            CoTaskMemFree(v89);
          wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)&v108);
          goto LABEL_176;
        }
        v37 = 0;
        if ( v108 )
        {
          v90 = *(_QWORD *)v108;
          *(_QWORD *)&rclsid.Data1 = &v110;
          *(_QWORD *)rclsid.Data4 = 0LL;
          v119 = 1;
          (*(void (__fastcall **)(struct ICompositeSystemEffect *, unsigned int *, unsigned __int8 *))(v90 + 32))(
            v108,
            &v115,
            rclsid.Data4);
          if ( v119 )
          {
            v91 = **(void ***)&rclsid.Data1;
            **(_QWORD **)&rclsid.Data1 = *(_QWORD *)rclsid.Data4;
            if ( v91 )
              CoTaskMemFree(v91);
          }
        }
        if ( (a3 & 0x800000) == 0 && !a22 )
        {
          if ( v31 )
            goto LABEL_171;
          if ( (a5 & 0xFFFFFFFC) != 0 )
            goto LABEL_171;
          if ( a5 == eLoopbackConnector )
            goto LABEL_171;
          v92 = (int)v116;
          if ( (_DWORD)v116 == 2 )
            goto LABEL_171;
          rclsid = *v85;
          CanProcessingModeBeParameterized = EffectPack::CanProcessingModeBeParameterized(
                                               (EffectPack *)v32[1].lpVtbl,
                                               &rclsid,
                                               a5);
          if ( !CanProcessingModeBeParameterized
            && (*a6 != *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
             || a6[1] != *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4
             || !(unsigned int)EffectPack::CanBuildProcessingModesOnRawConnector(
                                 (__int64)v32[1].lpVtbl,
                                 (unsigned int)a5,
                                 0LL)) )
          {
            goto LABEL_171;
          }
          v94 = 1;
          if ( v115 > 1 )
            v94 = v115;
          v95 = (char *)operator new[](16 * (v94 + 4LL), (const struct std::nothrow_t *)&std::nothrow);
          v96 = v95;
          v116 = v95;
          if ( v95 )
          {
            memset_0(v95, 0, 16 * (v94 + 4LL));
            *(_DWORD *)v96 = v92;
            *((_DWORD *)v96 + 1) = 0;
            *((_DWORD *)v96 + 15) = 0;
            v97 = 0;
            if ( v115 )
            {
              v98 = 0;
              while ( v98 <= 0x1F )
              {
                *((_DWORD *)v96 + 8) |= 1 << v98;
                *(_OWORD *)&v96[16 * (*((_DWORD *)v96 + 15))++ + 64] = *((_OWORD *)v110 + v97);
                v98 = *((_DWORD *)v96 + 15);
                if ( ++v97 >= v115 )
                  goto LABEL_161;
              }
              v37 = -2147418113;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x258,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)0x8000FFFFLL);
              goto LABEL_163;
            }
LABEL_161:
            v99 = *(struct _GUID **)&v124.Data1;
            *(_OWORD *)(v96 + 36) = *(_OWORD *)*(_QWORD *)&v124.Data1;
            wil::com_ptr_t<IAudioProcessingObject,wil::err_returncode_policy>::try_copy<IApoAuxiliaryInputConfiguration>(
              (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))v117,
              &rclsid);
            *((_DWORD *)v96 + 13) = *(_QWORD *)&rclsid.Data1 != 0LL;
            wil::com_ptr_t<IAudioProcessingObject,wil::err_returncode_policy>::try_copy<IApoAcousticEchoCancellation>(
              (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))v117,
              &v122);
            *((_DWORD *)v96 + 14) = *(_QWORD *)&v122.Data1 != 0LL;
            if ( *((_DWORD *)v96 + 15) > v94 )
            {
              v37 = -2147418113;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x267,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)0x8000FFFFLL);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v122);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&rclsid);
LABEL_163:
              std::unique_ptr<AUDIO_NOTIFICATION_BLOCK>::~unique_ptr<AUDIO_NOTIFICATION_BLOCK>((void **)&v116);
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v117);
              goto LABEL_131;
            }
            *((_QWORD *)v96 + 2) = a11;
            *((_DWORD *)v96 + 2) = *(unsigned __int16 *)(a11 + 16) + 18;
            v100 = (__int64 *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
            v101 = v100;
            v37 = 0;
            if ( v100 )
            {
              v111 = v100;
              *(_OWORD *)v100 = 0LL;
              if ( CanProcessingModeBeParameterized )
              {
                lpVtbl = (EffectPack *)v120[1].lpVtbl;
                v120 = 0LL;
                *v100 = 0LL;
                v124 = *v99;
                v103 = EffectPack::GetModeEffect(
                         lpVtbl,
                         &v124,
                         1u,
                         a5,
                         (struct ICompositeSystemEffect **)v100,
                         &v120,
                         0LL);
                v37 = v103;
                if ( v103 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x273,
                    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                    (const char *)(unsigned int)v103);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v120);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v122);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&rclsid);
                  std::unique_ptr<AUDIO_NOTIFICATION_BLOCK>::~unique_ptr<AUDIO_NOTIFICATION_BLOCK>((void **)&v116);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v117);
                  v89 = v110;
                  v110 = 0LL;
                  goto LABEL_132;
                }
                wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v120);
                v37 = 0;
              }
              std::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>::operator=<std::default_delete<AUDIO_DEVICE_MODE_DESCRIPTOR>,0>(
                (void **)v101 + 1,
                (void **)&v116);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v122);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&rclsid);
              std::unique_ptr<AUDIO_NOTIFICATION_BLOCK>::~unique_ptr<AUDIO_NOTIFICATION_BLOCK>((void **)&v116);
              goto LABEL_171;
            }
            v111 = 0LL;
            v37 = -2147024882;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x26C,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)0x8007000ELL);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v122);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&rclsid);
          }
          else
          {
            v37 = -2147024882;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x250,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)0x8007000ELL);
          }
          std::unique_ptr<AUDIO_NOTIFICATION_BLOCK>::~unique_ptr<AUDIO_NOTIFICATION_BLOCK>((void **)&v116);
          goto LABEL_130;
        }
        if ( v31 )
        {
          v37 = -2147418113;
          v87 = 2147549183LL;
          v88 = 566LL;
          goto LABEL_129;
        }
LABEL_171:
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v117);
        v104 = v110;
        v110 = 0LL;
        if ( v104 )
          CoTaskMemFree(v104);
        wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)&v108);
        if ( v125 )
        {
          v105 = v34;
          v34 = 0LL;
          *v125 = v105;
        }
        std::unique_ptr<MODE_PARAMS>::operator=<std::default_delete<MODE_PARAMS>,0>(v127, &v111);
LABEL_176:
        std::unique_ptr<MODE_PARAMS>::~unique_ptr<MODE_PARAMS>(&v111);
        if ( v34 )
          goto LABEL_177;
        goto LABEL_178;
      }
      v37 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D5,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x8007000ELL);
      wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)&v108);
    }
    v46 = v113;
    v113 = 0LL;
    goto LABEL_137;
  }
  pv = 0LL;
  v41 = 0;
  v114 = 0;
  if ( v36 )
  {
    v108 = 0LL;
    v42 = EffectPack::EndpointConnectorSupportsProcessingModes((EffectPack *)v32[1].lpVtbl, a5);
    v43 = (EffectPack *)v32[1].lpVtbl;
    if ( v42 )
    {
      v108 = 0LL;
      v122 = *(struct _GUID *)*(_QWORD *)&v124.Data1;
      Lfx = EffectPack::GetStreamEffect(v43, &v122, 0, a5, &v108, 0LL, 0LL);
      v37 = Lfx;
      if ( Lfx < 0 )
      {
        v45 = 312LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v45,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)Lfx);
        wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)&v108);
LABEL_23:
        v46 = pv;
        pv = 0LL;
        goto LABEL_137;
      }
    }
    else
    {
      v108 = 0LL;
      Lfx = EffectPack::GetLfx(v43, a5, &v108, 0LL, v107);
      v37 = Lfx;
      if ( Lfx < 0 )
      {
        v45 = 317LL;
        goto LABEL_22;
      }
    }
    if ( v108 )
    {
      v47 = *(_QWORD *)v108;
      *(_QWORD *)&v122.Data1 = &pv;
      *(_QWORD *)v122.Data4 = 0LL;
      v123 = 1;
      (*(void (__fastcall **)(struct ICompositeSystemEffect *, unsigned int *, unsigned __int8 *))(v47 + 32))(
        v108,
        &v114,
        v122.Data4);
      if ( v123 )
      {
        v48 = **(void ***)&v122.Data1;
        **(_QWORD **)&v122.Data1 = *(_QWORD *)v122.Data4;
        if ( v48 )
          CoTaskMemFree(v48);
      }
    }
    wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)&v108);
    v41 = v114;
    v29 = (unsigned int)v116;
  }
  if ( v29 )
  {
    if ( v29 != 1 )
    {
      if ( v29 != 2 )
      {
        v37 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1C1,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x80070057LL);
        goto LABEL_23;
      }
      v49 = 3;
      v50 = (unsigned int *)CoTaskMemAlloc(0x17CuLL);
      v34 = v50;
      v121 = v50;
      if ( v50 )
      {
        memset_0(v50, 0, 0x17CuLL);
        *v34 = (a5 != eLoopbackConnector) + 1;
        v34[34] = a3;
        v34[82] = 3;
        *(GUID *)(v34 + 83) = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
        *(GUID *)(v34 + 87) = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
        *(GUID *)(v34 + 91) = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
        v34[40] = 0;
LABEL_69:
        v34[1] = a3 >> 31;
        if ( v34[82] > v49 )
        {
          v64 = 453LL;
          goto LABEL_72;
        }
        v65 = pv;
        pv = 0LL;
        if ( v65 )
          CoTaskMemFree(v65);
        v31 = v112;
        goto LABEL_76;
      }
      v37 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B0,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x8007000ELL);
      v46 = pv;
      pv = 0LL;
LABEL_137:
      if ( v46 )
        CoTaskMemFree(v46);
      goto LABEL_139;
    }
    v49 = v41 + 2;
    v51 = 16LL * (v41 + 2);
    v52 = (unsigned int *)CoTaskMemAlloc(v51 + 332);
    v34 = v52;
    v121 = v52;
    if ( v52 )
    {
      memset_0(v52, 0, v51 + 332);
      *v34 = 1;
      v34[34] = a3;
      *((_QWORD *)v34 + 18) = 0LL;
      v34[40] = 0;
      v34[82] = 0;
      *((_QWORD *)v34 + 33) = a24;
      *((_QWORD *)v34 + 34) = a25;
      if ( a23 )
        *((_QWORD *)v34 + 32) = a19;
      v53 = 0;
      v54 = 0;
      if ( v114 )
      {
        while ( v54 <= 0x1F )
        {
          v34[40] |= 1 << v54;
          *(_OWORD *)&v34[4 * v54 + 83] = *((_OWORD *)pv + v53);
          v54 = v34[82] + 1;
          v34[82] = v54;
          if ( ++v53 >= v114 )
            goto LABEL_44;
        }
        v37 = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x19D,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x8000FFFFLL);
        v56 = pv;
        pv = 0LL;
        goto LABEL_46;
      }
LABEL_44:
      *(GUID *)&v34[4 * v54 + 83] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
      ++v34[82];
      v55 = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
LABEL_68:
      *(GUID *)&v34[4 * v34[82]++ + 83] = v55;
      goto LABEL_69;
    }
    v57 = 397LL;
LABEL_88:
    v37 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v57,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x8007000ELL);
    v46 = pv;
    pv = 0LL;
    goto LABEL_137;
  }
  v49 = v41 + 4;
  v58 = 16LL * (v41 + 4);
  v59 = (unsigned int *)CoTaskMemAlloc(v58 + 332);
  v34 = v59;
  v121 = v59;
  if ( !v59 )
  {
    v57 = 331LL;
    goto LABEL_88;
  }
  memset_0(v59, 0, v58 + 332);
  *v34 = 0;
  v34[34] = a3;
  *((_QWORD *)v34 + 18) = 0LL;
  v34[82] = 0;
  v34[40] = 0;
  if ( a21 )
  {
    v60 = v34[82];
    v34[40] = 1;
    *(GUID *)&v34[4 * v60 + 83] = GUID_7bf2a436_2a30_4797_90ee_0f66b8426d75;
    ++v34[82];
    goto LABEL_64;
  }
  v61 = 0;
  if ( !v114 )
  {
LABEL_63:
    v32 = v120;
LABEL_64:
    *(GUID *)&v34[4 * v34[82]++ + 83] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
    *(GUID *)&v34[4 * v34[82]++ + 83] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
    *(GUID *)&v34[4 * v34[82]++ + 83] = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
    if ( a21 || !a20 || CoGetPSClsid(&GUID_5849e670_4969_44de_8904_75ed892b627e, &pClsid) < 0 )
      goto LABEL_69;
    v55 = GUID_e3eff23b_5360_40a1_8e7b_506b6283b5d4;
    goto LABEL_68;
  }
  while ( 1 )
  {
    if ( *((_QWORD *)pv + 2 * v61) == *(_QWORD *)&GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data1
      && *((_QWORD *)pv + 2 * v61 + 1) == *(_QWORD *)GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data4 )
    {
      if ( IsGetDefaultSpatialRenderingModePresent() )
      {
        if ( RpcImpersonateClient(0LL) >= 0 )
        {
          v62 = IsVirtualSurroundAllowedForProcess(a9);
          RpcRevertToSelf();
          if ( !v62 )
            goto LABEL_61;
        }
      }
    }
    v63 = v34[82];
    if ( v63 > 0x1F )
      break;
    v34[40] |= 1 << v63;
    *(_OWORD *)&v34[4 * v63 + 83] = *((_OWORD *)pv + v61);
    ++v34[82];
LABEL_61:
    if ( ++v61 >= v114 )
    {
      v33 = *(IID **)&rclsid.Data1;
      goto LABEL_63;
    }
  }
  v64 = 366LL;
LABEL_72:
  v37 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v64,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)0x8000FFFFLL);
  v56 = pv;
  pv = 0LL;
LABEL_46:
  if ( v56 )
    CoTaskMemFree(v56);
LABEL_48:
  std::unique_ptr<MODE_PARAMS>::~unique_ptr<MODE_PARAMS>(&v111);
LABEL_177:
  CoTaskMemFree(v34);
LABEL_178:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v126);
  return v37;
}
