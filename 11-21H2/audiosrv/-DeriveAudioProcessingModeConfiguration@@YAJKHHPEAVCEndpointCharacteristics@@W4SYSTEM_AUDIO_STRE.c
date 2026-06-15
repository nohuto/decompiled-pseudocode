/*
 * XREFs of ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x180033030
 * Callers:
 *     AudioServerGetDevicePeriod @ 0x180001D70 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetMixFormat @ 0x180010C40 (AudioServerGetMixFormat.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180019650 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     AudioServerIsFormatSupported @ 0x180021540 (AudioServerIsFormatSupported.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180028DE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D403C (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800F1900 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800F2620 (AudioServerGetSharedModeEnginePeriod.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSystemAudioStream@@@Z @ 0x1800FEAD8 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSyste.c)
 * Callees:
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180002444 (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F714 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?TryGetSaDeviceResourceManagerForEndpoint@@YAJPEBVCEndpointCharacteristics@@PEAPEAUISaDeviceResourceManager@@@Z @ 0x18000FE54 (-TryGetSaDeviceResourceManagerForEndpoint@@YAJPEBVCEndpointCharacteristics@@PEAPEAUISaDeviceReso.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x18002FEE0 (-UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineend.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x180038290 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180048324 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800483C0 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800492E4 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18005B5FC (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x18005D250 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18005DFD0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800C5F24 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x1801440C0 (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180144B04 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ?AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180144F7C (-AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180148BE0 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014A354 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 */

// Hidden C++ exception states: #wind=21
__int64 __fastcall DeriveAudioProcessingModeConfiguration(
        unsigned int a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a7,
        char *a8,
        int a9,
        int a10,
        __int64 a11,
        struct _GUID *a12,
        struct _GUID *a13,
        struct _GUID *a14,
        struct _GUID *a15,
        struct ISaDeviceResourceManager *a16)
{
  const struct CEndpointCharacteristics *v16; // r13
  unsigned int v17; // r15d
  char *v18; // rcx
  struct _GUID *v19; // rsi
  struct _GUID *v20; // rdi
  struct _GUID *v21; // r12
  struct ISaDeviceResourceManager *v22; // r14
  GUID v23; // xmm9
  int v24; // r14d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v25; // esi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v26; // ebx
  unsigned __int64 v27; // r13
  __int64 v28; // r14
  struct _RTL_CRITICAL_SECTION *v29; // rbx
  _QWORD *v30; // rdx
  struct _RTL_CRITICAL_SECTION **v31; // r15
  int v32; // esi
  unsigned int v33; // edi
  int v34; // r13d
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 i; // rdi
  __int64 v39; // rdi
  struct _RTL_CRITICAL_SECTION *v40; // rbx
  char *v41; // rsi
  __int64 v42; // r14
  unsigned int v43; // r15d
  unsigned int j; // r15d
  __int64 v45; // r15
  struct _RTL_CRITICAL_SECTION *v46; // rbx
  _QWORD *v47; // rdx
  struct _RTL_CRITICAL_SECTION **v48; // r14
  __int64 v49; // rsi
  unsigned int v50; // edi
  int v51; // r13d
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rax
  struct _RTL_CRITICAL_SECTION **k; // rdi
  __int64 v56; // r13
  int v57; // r8d
  int v58; // edx
  __int64 v59; // rax
  int v60; // edx
  __int64 v61; // rax
  GUID v62; // xmm6
  __int64 v63; // r13
  __int64 v64; // rdi
  __int64 v65; // rcx
  unsigned int kk; // esi
  unsigned int v67; // ebx
  __int64 *v68; // rax
  int v69; // edx
  int v70; // r8d
  __int64 v71; // rax
  GUID *v72; // rsi
  GUID *v73; // rax
  __int64 v74; // rcx
  GUID **v75; // r15
  int v76; // ebx
  unsigned int v77; // ecx
  unsigned int v78; // eax
  unsigned __int64 v79; // r14
  __int64 v80; // rbx
  int v81; // eax
  struct _RTL_CRITICAL_SECTION **v82; // rcx
  unsigned int v83; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v84; // ebx
  unsigned __int64 v85; // r13
  __int64 v86; // r15
  struct _RTL_CRITICAL_SECTION *v87; // rbx
  struct _RTL_CRITICAL_SECTION **v88; // rdx
  struct _RTL_CRITICAL_SECTION **v89; // r14
  int v90; // esi
  unsigned int v91; // edi
  int v92; // r13d
  __int64 v93; // rbx
  __int64 v94; // rax
  struct _RTL_CRITICAL_SECTION *v95; // rax
  __int64 m; // rdi
  __int64 v97; // rdi
  struct _RTL_CRITICAL_SECTION *v98; // rbx
  char *v99; // rsi
  __int64 v100; // r14
  unsigned int v101; // r15d
  unsigned int n; // r15d
  __int64 v103; // r15
  struct _RTL_CRITICAL_SECTION *v104; // rbx
  struct _RTL_CRITICAL_SECTION **v105; // rdx
  struct _RTL_CRITICAL_SECTION **v106; // r14
  int v107; // esi
  unsigned int v108; // edi
  int v109; // r13d
  __int64 v110; // rbx
  __int64 v111; // rax
  struct _RTL_CRITICAL_SECTION *v112; // rax
  __int64 ii; // rdi
  __int64 v114; // r13
  int v115; // edx
  int v116; // r8d
  _QWORD *v117; // rcx
  __int64 v118; // rax
  GUID v119; // xmm6
  __int64 v120; // rdi
  __int64 v121; // rcx
  unsigned int jj; // esi
  unsigned int v123; // ebx
  __int64 *v124; // rax
  int v125; // edx
  int v126; // r8d
  __int64 v127; // rax
  bool v128; // zf
  struct _GUID v129; // xmm7
  struct _GUID v130; // xmm8
  struct _GUID v131; // xmm6
  __int64 result; // rax
  unsigned int VirtualSurroundEffectMode; // eax
  SystemEffectChainDescriptor **v134; // rax
  int v135; // eax
  int v136; // eax
  unsigned int v137; // ebx
  __int64 v138; // rax
  int v139; // eax
  unsigned int v140; // ebx
  __int64 v141; // r9
  __int64 v142; // rdx
  __int64 v143; // rax
  __int64 v144; // r9
  __int64 v145; // rdx
  __int64 v146; // rax
  SystemEffectChainDescriptor **v147; // rax
  int v148; // eax
  char *v149; // rdi
  __int64 v150; // r9
  __int64 v151; // rdx
  SystemEffectChainDescriptor **v152; // rax
  int v153; // eax
  __int64 **v154; // rax
  __int64 v155; // rax
  __int64 v156; // r8
  __int64 **v157; // rax
  __int64 v158; // r9
  __int64 v159; // rdx
  SystemEffectChainDescriptor **v160; // rax
  int v161; // eax
  __int64 v162; // rax
  __int64 v163; // r9
  __int64 v164; // rdx
  __int64 v165; // rax
  SystemEffectChainDescriptor **v166; // rax
  int v167; // eax
  char *v168; // rdi
  __int64 v169; // r9
  __int64 v170; // rdx
  SystemEffectChainDescriptor **v171; // rax
  int v172; // eax
  __int64 **v173; // rax
  __int64 v174; // rax
  __int64 v175; // r8
  __int64 **v176; // rax
  int v177; // [rsp+20h] [rbp-2F8h]
  int v178; // [rsp+20h] [rbp-2F8h]
  int v179; // [rsp+20h] [rbp-2F8h]
  unsigned __int64 v180; // [rsp+30h] [rbp-2E8h]
  bool v181; // [rsp+38h] [rbp-2E0h] BYREF
  unsigned int v182; // [rsp+3Ch] [rbp-2DCh]
  unsigned int v183; // [rsp+40h] [rbp-2D8h]
  struct ISaDeviceResourceManager *v184; // [rsp+48h] [rbp-2D0h] BYREF
  struct _GUID v185; // [rsp+50h] [rbp-2C8h] BYREF
  unsigned int v186[2]; // [rsp+60h] [rbp-2B8h]
  struct _RTL_CRITICAL_SECTION **v187; // [rsp+68h] [rbp-2B0h] BYREF
  __int64 v188; // [rsp+70h] [rbp-2A8h]
  struct _RTL_CRITICAL_SECTION **v189; // [rsp+78h] [rbp-2A0h] BYREF
  __int64 v190; // [rsp+80h] [rbp-298h]
  GUID **v191; // [rsp+88h] [rbp-290h]
  char *v192; // [rsp+90h] [rbp-288h] BYREF
  __int64 v193; // [rsp+98h] [rbp-280h]
  struct _RTL_CRITICAL_SECTION **v194; // [rsp+A0h] [rbp-278h] BYREF
  int v195; // [rsp+A8h] [rbp-270h]
  unsigned int v196; // [rsp+ACh] [rbp-26Ch]
  struct _RTL_CRITICAL_SECTION **v197; // [rsp+B0h] [rbp-268h] BYREF
  __int64 v198; // [rsp+B8h] [rbp-260h]
  struct _GUID *v199; // [rsp+C0h] [rbp-258h]
  struct _RTL_CRITICAL_SECTION *v200; // [rsp+C8h] [rbp-250h] BYREF
  struct _RTL_CRITICAL_SECTION *v201; // [rsp+D0h] [rbp-248h] BYREF
  struct _RTL_CRITICAL_SECTION *v202; // [rsp+D8h] [rbp-240h] BYREF
  struct _RTL_CRITICAL_SECTION *v203; // [rsp+E0h] [rbp-238h] BYREF
  char *v204; // [rsp+E8h] [rbp-230h] BYREF
  unsigned int v205; // [rsp+F0h] [rbp-228h]
  int v206; // [rsp+F4h] [rbp-224h]
  struct _GUID v207; // [rsp+100h] [rbp-218h] BYREF
  struct _GUID v208; // [rsp+110h] [rbp-208h] BYREF
  struct _GUID *v209; // [rsp+120h] [rbp-1F8h]
  unsigned int v210[2]; // [rsp+128h] [rbp-1F0h]
  struct _RTL_CRITICAL_SECTION *v211; // [rsp+130h] [rbp-1E8h] BYREF
  struct _RTL_CRITICAL_SECTION *v212; // [rsp+138h] [rbp-1E0h] BYREF
  struct _RTL_CRITICAL_SECTION *v213; // [rsp+140h] [rbp-1D8h] BYREF
  struct _RTL_CRITICAL_SECTION *v214; // [rsp+148h] [rbp-1D0h] BYREF
  PROPVARIANT v215[2]; // [rsp+150h] [rbp-1C8h] BYREF
  __int64 v216; // [rsp+160h] [rbp-1B8h]
  PROPVARIANT pvar[2]; // [rsp+168h] [rbp-1B0h] BYREF
  __int64 v218; // [rsp+178h] [rbp-1A0h]
  PROPVARIANT v219[2]; // [rsp+180h] [rbp-198h] BYREF
  __int64 v220; // [rsp+190h] [rbp-188h]
  PROPVARIANT v221[2]; // [rsp+198h] [rbp-180h] BYREF
  __int64 v222; // [rsp+1A8h] [rbp-170h]
  struct _GUID *v223; // [rsp+1B0h] [rbp-168h]
  GUID v224; // [rsp+1C0h] [rbp-158h]
  SystemEffectChainDescriptor *v225; // [rsp+1D0h] [rbp-148h] BYREF
  std::_Ref_count_base *v226; // [rsp+1D8h] [rbp-140h]
  GUID v227; // [rsp+1E0h] [rbp-138h] BYREF
  GUID v228; // [rsp+1F0h] [rbp-128h]
  SystemEffectChainDescriptor *v229; // [rsp+200h] [rbp-118h] BYREF
  std::_Ref_count_base *v230; // [rsp+208h] [rbp-110h]
  GUID v231; // [rsp+210h] [rbp-108h]
  GUID v232; // [rsp+220h] [rbp-F8h] BYREF
  GUID v233; // [rsp+230h] [rbp-E8h]
  GUID v234; // [rsp+240h] [rbp-D8h] BYREF
  GUID v235; // [rsp+250h] [rbp-C8h] BYREF
  struct _GUID v236; // [rsp+260h] [rbp-B8h] BYREF
  struct _GUID v237; // [rsp+270h] [rbp-A8h] BYREF
  struct _GUID v238; // [rsp+280h] [rbp-98h] BYREF
  GUID v239; // [rsp+290h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+318h] [rbp+0h]

  try
  {
    v16 = (const struct CEndpointCharacteristics *)a4;
    *(_QWORD *)&v185.Data1 = a4;
    v183 = a3;
    v17 = a1;
    v182 = a1;
    v18 = a8;
    v223 = a12;
    v19 = a13;
    *(_QWORD *)&v238.Data1 = a13;
    v20 = a14;
    v209 = a14;
    v21 = a15;
    v199 = a15;
    v22 = a16;
    v184 = a16;
    v23 = GUID_00000000_0000_0000_0000_000000000000;
    v237 = GUID_00000000_0000_0000_0000_000000000000;
    v207 = GUID_00000000_0000_0000_0000_000000000000;
    v208 = GUID_00000000_0000_0000_0000_000000000000;
    if ( a6 == 1 )
    {
      CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(
        (CEndpointCharacteristics *)a4,
        a7,
        &v237,
        &v207,
        &v208);
      v184 = 0LL;
      if ( (int)TryGetSaDeviceResourceManagerForEndpoint(v16, &v184) < 0
        || !v184
        || (v136 = (*(__int64 (__fastcall **)(struct ISaDeviceResourceManager *, const struct CEndpointCharacteristics *, __int64, struct _GUID *))(*(_QWORD *)v184 + 112LL))(
                     v184,
                     v16,
                     a11,
                     &v238),
            v137 = v136,
            v136 == -2147467263) )
      {
        v129 = v237;
      }
      else
      {
        if ( v136 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x322,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v136,
            v179);
          wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v184);
          return v137;
        }
        v129 = v238;
      }
      v130 = v207;
      v23 = v207;
      wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v184);
LABEL_406:
      v131 = v208;
LABEL_230:
      v21 = v199;
    }
    else
    {
      v24 = a5;
      if ( a5 == 2 )
      {
        if ( a8 )
        {
          v138 = *(_QWORD *)a8;
          *(_QWORD *)&v185.Data1 = 0LL;
          v139 = (*(__int64 (__fastcall **)(char *, struct _GUID *))(v138 + 80))(a8, &v185);
          v140 = v139;
          if ( v139 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x32F,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)(unsigned int)v139,
              v177);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v185);
            return v140;
          }
          v131 = *(struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, struct _GUID *))(**(_QWORD **)&v185.Data1 + 112LL))(
                                    *(_QWORD *)&v185.Data1,
                                    &v238);
          v130 = v131;
          v129 = v131;
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v185);
          v21 = v199;
        }
        else
        {
          CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
            (CEndpointCharacteristics *)a4,
            eHostProcessConnector,
            &v237,
            &v207,
            &v208);
          v131 = v208;
          v130 = v207;
          v129 = v237;
        }
        v23 = v130;
        v22 = v184;
      }
      else
      {
        if ( !a2 )
        {
          v25 = a7;
          v26 = a7;
          if ( a7 == eLoopbackConnector )
          {
            v26 = eHostProcessConnector;
          }
          else if ( a7 )
          {
            goto LABEL_12;
          }
          if ( !*(_BYTE *)(a4 + 9727) )
          {
            v18 = *(char **)(a4 + 80);
            if ( v18 )
            {
              *(_OWORD *)pvar = 0LL;
              v218 = 0LL;
              if ( (*(int (__fastcall **)(char *, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v18 + 40LL))(
                     v18,
                     &PKEY_AudioEndpoint_Disable_SysFx,
                     pvar) >= 0
                && LOWORD(pvar[0]) == 19
                && LODWORD(pvar[1]) )
              {
                PropVariantClear(pvar);
                v56 = (__int64)v16 + 168;
                goto LABEL_84;
              }
              PropVariantClear(pvar);
            }
          }
LABEL_12:
          v27 = v26;
          v180 = v26;
          if ( (unsigned __int64)(int)v26 >= *(_QWORD *)(*(_QWORD *)&v185.Data1 + 1792LL) )
            goto LABEL_408;
          v28 = *(_QWORD *)(*(_QWORD *)&v185.Data1 + 1800LL) + 96LL * (int)v26;
          if ( *(_BYTE *)(v28 + 52) )
          {
            v29 = (struct _RTL_CRITICAL_SECTION *)(v28 + 56);
            EnterCriticalSection((LPCRITICAL_SECTION)(v28 + 56));
            v200 = (struct _RTL_CRITICAL_SECTION *)(v28 + 56);
            v31 = 0LL;
            v197 = 0LL;
            v32 = 0;
            v198 = 0LL;
            v33 = 0;
            v34 = 0;
            if ( *(int *)(v28 + 40) > 0 )
            {
              v35 = 0LL;
              while ( 1 )
              {
                if ( v35 < 0 || v34 >= *(_DWORD *)(v28 + 40) )
                {
                  ATL::_AtlRaiseException(0xC000008C, (unsigned int)v30);
                  __debugbreak();
                }
                v30 = (_QWORD *)(v35 + *(_QWORD *)(v28 + 32));
                *(_QWORD *)v186 = v30;
                if ( v32 == v33 )
                {
                  if ( v33 )
                  {
                    v33 = 2 * v32;
                    if ( (v32 & 0x40000000) != 0 )
                      goto LABEL_281;
                  }
                  else
                  {
                    v33 = 1;
                  }
                  if ( v33 > 0x7FFFFFFuLL
                    || (v36 = _o__recalloc(v31, v33, 16LL), (v31 = (struct _RTL_CRITICAL_SECTION **)v36) == 0LL) )
                  {
LABEL_281:
                    v141 = 2147942414LL;
                    v142 = 502LL;
LABEL_282:
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v142,
                      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                      (const char *)v141,
                      v177);
                    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v197);
                    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v200);
                    goto LABEL_42;
                  }
                  HIDWORD(v198) = v33;
                  v197 = (struct _RTL_CRITICAL_SECTION **)v36;
                  v30 = *(_QWORD **)v186;
                }
                v18 = (char *)&v31[2 * v32];
                if ( v18 )
                {
                  *(_QWORD *)v18 = 0LL;
                  *((_QWORD *)v18 + 1) = 0LL;
                  v37 = v30[1];
                  if ( v37 )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)(v37 + 8));
                    v33 = HIDWORD(v198);
                    v32 = v198;
                    v31 = v197;
                  }
                  *(_QWORD *)v18 = *v30;
                  *((_QWORD *)v18 + 1) = v30[1];
                }
                LODWORD(v198) = ++v32;
                ++v34;
                v35 += 16LL;
                if ( v34 >= *(_DWORD *)(v28 + 40) )
                {
                  v29 = v200;
                  break;
                }
              }
            }
            for ( i = 0LL; (int)i < v32; i = (unsigned int)(i + 1) )
            {
              if ( (int)i < 0 )
              {
                ATL::_AtlRaiseException(0xC000008C, (unsigned int)v30);
                goto LABEL_285;
              }
              if ( BYTE4(v31[2 * (int)i]->OwningThread) )
              {
                v134 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                         &v197,
                                                         (unsigned int)i);
                v135 = SystemEffectChainDescriptor::Resolve(*v134, (struct SystemEffectDescriptor *)v28);
                if ( v135 < 0 )
                {
                  v141 = (unsigned int)v135;
                  v142 = 508LL;
                  goto LABEL_282;
                }
              }
            }
            if ( v31 )
            {
              if ( v32 > 0 )
              {
                ++v31;
                i = (unsigned int)v32;
                do
                {
                  v29 = *v31;
                  if ( *v31 && _InterlockedExchangeAdd(&v29->LockCount, 0xFFFFFFFF) == 1 )
                  {
LABEL_285:
                    ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v29->DebugInfo->Type)(v29);
                    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v29);
                  }
                  v31 += 2;
                  --i;
                }
                while ( i );
                v29 = v200;
                v31 = v197;
              }
              free(v31);
            }
            if ( v29 )
              LeaveCriticalSection(v29);
LABEL_42:
            v27 = v180;
          }
          if ( v27 >= *(_QWORD *)(*(_QWORD *)&v185.Data1 + 1808LL) )
            goto LABEL_408;
          v39 = *(_QWORD *)(*(_QWORD *)&v185.Data1 + 1816LL) + 96 * v27;
          if ( *(_BYTE *)(v39 + 52) )
          {
            v40 = (struct _RTL_CRITICAL_SECTION *)(v39 + 56);
            EnterCriticalSection((LPCRITICAL_SECTION)(v39 + 56));
            v211 = (struct _RTL_CRITICAL_SECTION *)(v39 + 56);
            v41 = 0LL;
            v204 = 0LL;
            v42 = 0LL;
            v205 = 0;
            v206 = 0;
            v43 = 0;
            if ( *(int *)(v39 + 40) > 0 )
            {
              while ( 1 )
              {
                v143 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                         v39 + 32,
                         v43);
                if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                      &v204,
                                      v143) )
                  break;
                if ( (signed int)++v43 >= *(_DWORD *)(v39 + 40) )
                {
                  v42 = v205;
                  v41 = v204;
                  goto LABEL_46;
                }
              }
              v144 = 2147942414LL;
              v145 = 502LL;
LABEL_291:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v145,
                (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                (const char *)v144,
                v177);
              ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v204);
              wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v211);
            }
            else
            {
LABEL_46:
              for ( j = 0; (int)j < (int)v42; ++j )
              {
                v146 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                         &v204,
                         j);
                v18 = *(char **)v146;
                if ( *(_BYTE *)(*(_QWORD *)v146 + 20LL) )
                {
                  v147 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                           &v204,
                                                           j);
                  v148 = SystemEffectChainDescriptor::Resolve(*v147, (struct SystemEffectDescriptor *)v39);
                  if ( v148 < 0 )
                  {
                    v144 = (unsigned int)v148;
                    v145 = 508LL;
                    goto LABEL_291;
                  }
                }
              }
              if ( v41 )
              {
                if ( (int)v42 > 0 )
                {
                  v149 = v41;
                  do
                  {
                    std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v149);
                    v149 += 16;
                    --v42;
                  }
                  while ( v42 );
                }
                free(v41);
              }
              if ( v40 )
                LeaveCriticalSection(v40);
            }
          }
          if ( v27 >= *(_QWORD *)(*(_QWORD *)&v185.Data1 + 1824LL) )
            goto LABEL_408;
          v45 = *(_QWORD *)(*(_QWORD *)&v185.Data1 + 1832LL) + 96 * v27;
          if ( *(_BYTE *)(v45 + 52) )
          {
            v46 = (struct _RTL_CRITICAL_SECTION *)(v45 + 56);
            EnterCriticalSection((LPCRITICAL_SECTION)(v45 + 56));
            v201 = (struct _RTL_CRITICAL_SECTION *)(v45 + 56);
            v48 = 0LL;
            v194 = 0LL;
            v49 = 0LL;
            v195 = 0;
            v50 = 0;
            v196 = 0;
            v51 = 0;
            if ( *(int *)(v45 + 40) > 0 )
            {
              v52 = 0LL;
              while ( 1 )
              {
                if ( v52 < 0 || v51 >= *(_DWORD *)(v45 + 40) )
                {
                  ATL::_AtlRaiseException(0xC000008C, (unsigned int)v47);
                  __debugbreak();
                }
                v47 = (_QWORD *)(v52 + *(_QWORD *)(v45 + 32));
                *(_QWORD *)v186 = v47;
                if ( (_DWORD)v49 == v50 )
                {
                  if ( v50 )
                  {
                    v50 = 2 * v49;
                    if ( (v49 & 0x40000000) != 0 )
                      goto LABEL_300;
                  }
                  else
                  {
                    v50 = 1;
                  }
                  if ( v50 > 0x7FFFFFFuLL
                    || (v53 = _o__recalloc(v48, v50, 16LL), (v48 = (struct _RTL_CRITICAL_SECTION **)v53) == 0LL) )
                  {
LABEL_300:
                    v150 = 2147942414LL;
                    v151 = 502LL;
LABEL_301:
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v151,
                      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                      (const char *)v150,
                      v177);
                    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v194);
                    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v201);
                    goto LABEL_81;
                  }
                  v196 = v50;
                  v194 = (struct _RTL_CRITICAL_SECTION **)v53;
                  v47 = *(_QWORD **)v186;
                }
                v18 = (char *)&v48[2 * (int)v49];
                if ( v18 )
                {
                  *(_QWORD *)v18 = 0LL;
                  *((_QWORD *)v18 + 1) = 0LL;
                  v54 = v47[1];
                  if ( v54 )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)(v54 + 8));
                    v50 = v196;
                    LODWORD(v49) = v195;
                    v48 = v194;
                  }
                  *(_QWORD *)v18 = *v47;
                  *((_QWORD *)v18 + 1) = v47[1];
                }
                v49 = (unsigned int)(v49 + 1);
                v195 = v49;
                ++v51;
                v52 += 16LL;
                if ( v51 >= *(_DWORD *)(v45 + 40) )
                {
                  v46 = v201;
                  break;
                }
              }
            }
            for ( k = 0LL; (int)k < (int)v49; k = (struct _RTL_CRITICAL_SECTION **)(unsigned int)((_DWORD)k + 1) )
            {
              if ( (int)k < 0 )
              {
                ATL::_AtlRaiseException(0xC000008C, (unsigned int)v47);
                goto LABEL_306;
              }
              if ( BYTE4(v48[2 * (int)k]->OwningThread) )
              {
                v152 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                         &v194,
                                                         (unsigned int)k);
                v153 = SystemEffectChainDescriptor::Resolve(*v152, (struct SystemEffectDescriptor *)v45);
                if ( v153 < 0 )
                {
                  v150 = (unsigned int)v153;
                  v151 = 508LL;
                  goto LABEL_301;
                }
              }
            }
            if ( v48 )
            {
              if ( (int)v49 > 0 )
              {
                k = v48 + 1;
                do
                {
                  v46 = *k;
                  if ( *k && _InterlockedExchangeAdd(&v46->LockCount, 0xFFFFFFFF) == 1 )
                  {
LABEL_306:
                    ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v46->DebugInfo->Type)(v46);
                    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v46);
                  }
                  k += 2;
                  --v49;
                }
                while ( v49 );
                v46 = v201;
                v48 = v194;
              }
              free(v48);
            }
            if ( v46 )
              LeaveCriticalSection(v46);
LABEL_81:
            v27 = v180;
          }
          if ( v27 >= *(_QWORD *)(*(_QWORD *)&v185.Data1 + 152LL) )
            goto LABEL_408;
          v56 = *(_QWORD *)(*(_QWORD *)&v185.Data1 + 160LL) + 16 * v27;
          v24 = a5;
          v25 = a7;
          v17 = v182;
LABEL_84:
          v57 = *(_DWORD *)(v56 + 8);
          if ( v57 )
          {
            v58 = 0;
            if ( v57 <= 0 )
              goto LABEL_90;
            while ( 1 )
            {
              v18 = (char *)(*(_QWORD *)v56 + 16LL * v58);
              v59 = *(_QWORD *)v18 - *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1;
              if ( *(_QWORD *)v18 == *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1 )
                v59 = *((_QWORD *)v18 + 1) - *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4;
              if ( !v59 )
                break;
              if ( ++v58 >= v57 )
                goto LABEL_90;
            }
            if ( v58 == -1 )
            {
LABEL_90:
              v60 = 0;
              if ( v57 <= 0 )
                goto LABEL_310;
              while ( 1 )
              {
                v18 = (char *)(*(_QWORD *)v56 + 16LL * v60);
                v61 = *(_QWORD *)v18 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
                if ( *(_QWORD *)v18 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
                  v61 = *((_QWORD *)v18 + 1) - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
                if ( !v61 )
                  break;
                if ( ++v60 >= v57 )
                  goto LABEL_310;
              }
              if ( v60 == -1 )
LABEL_310:
                v62 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v56, 0LL);
              else
                v62 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
            }
            else
            {
              v62 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
            }
          }
          else
          {
            v62 = GUID_00000000_0000_0000_0000_000000000000;
          }
          v224 = v62;
          v239 = v62;
          v63 = *(_QWORD *)&v185.Data1;
          if ( (unsigned __int64)(int)v25 < *(_QWORD *)(*(_QWORD *)&v185.Data1 + 1808LL) )
          {
            v64 = *(_QWORD *)(*(_QWORD *)&v185.Data1 + 1816LL) + 96LL * (int)v25;
            v65 = *(_QWORD *)(*(_QWORD *)&v185.Data1 + 80LL);
            if ( v65 )
            {
              *(_OWORD *)v219 = 0LL;
              v220 = 0LL;
              if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v65 + 40LL))(
                     v65,
                     &PKEY_AudioEndpoint_Disable_SysFx,
                     v219) >= 0
                && LOWORD(v219[0]) == 19
                && LODWORD(v219[1]) )
              {
                PropVariantClear(v219);
                if ( v25 != eKeywordDetectorConnector )
                {
                  v234 = v62;
                  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                       (__int64 *)v64,
                                       &v234) != -1 )
                  {
LABEL_333:
                    v73 = &v239;
                    v72 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
LABEL_114:
                    v237 = v62;
                    v207 = *v73;
                    v208 = v62;
                    if ( v24 )
                    {
                      if ( v24 == 1 && v17 < 0x18 )
                        goto LABEL_116;
                    }
                    else if ( v17 < 0x18 )
                    {
LABEL_116:
                      v74 = v17;
                      if ( v24 )
                        v75 = (GUID **)*(&off_18016D480 + v17);
                      else
                        v75 = (GUID **)*(&off_18016D240 + v17);
                      v191 = v75;
                      v76 = 0;
                      if ( *(_DWORD *)v75 )
                        v23 = *v75[1];
LABEL_120:
                      if ( v24 )
                      {
                        v77 = v182;
                        if ( v24 != 1 )
                          goto LABEL_123;
                        if ( v182 == 18 )
                        {
                          if ( !v183 )
                            goto LABEL_123;
                          v75 = (GUID **)&unk_18016C8E0;
                        }
                        else
                        {
                          if ( v182 != 3 || !v183 )
                            goto LABEL_123;
                          v75 = (GUID **)&unk_18016C8D0;
                        }
                      }
                      else
                      {
                        if ( !dword_180192F00[v74] )
                        {
                          v77 = v182;
LABEL_123:
                          if ( v76 >= 0 )
                          {
LABEL_124:
                            v78 = 0;
                            while ( 1 )
                            {
                              v183 = v78;
                              if ( v78 >= *(_DWORD *)v75 )
                                goto LABEL_405;
                              v79 = v78;
                              *(_QWORD *)v186 = v78;
                              v80 = v78;
                              v236 = v75[1][v78];
                              v81 = UseSupportedConnectorMode(
                                      (struct CEndpointCharacteristics *)v63,
                                      v77,
                                      a7,
                                      &v236,
                                      a10,
                                      &v181);
                              v83 = v81;
                              if ( v81 < 0 )
                              {
                                wil::details::in1diag3::Return_Hr(
                                  retaddr,
                                  (void *)0x386,
                                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                                  (const char *)(unsigned int)v81,
                                  v178);
                                return v83;
                              }
                              if ( v181 )
                              {
                                v129 = v75[1][v80];
                                v237 = v129;
                                if ( a9
                                  || (v185 = v129,
                                      (unsigned int)CEndpointCharacteristics::IsAPOModeSupported(
                                                      (CEndpointCharacteristics *)v63,
                                                      &v185,
                                                      a7)) )
                                {
                                  v72 = &v237;
                                }
                                v130 = *v72;
                                v131 = v129;
                                v20 = v209;
                                v19 = *(struct _GUID **)&v238.Data1;
                                v22 = v184;
                                goto LABEL_230;
                              }
                              v233 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                              v84 = a7;
                              if ( a7 == eHostProcessConnector && !*(_BYTE *)(v63 + 9727) )
                              {
                                v82 = *(struct _RTL_CRITICAL_SECTION ***)(v63 + 80);
                                if ( v82 )
                                {
                                  *(_OWORD *)v221 = 0LL;
                                  v222 = 0LL;
                                  if ( ((int (__fastcall *)(struct _RTL_CRITICAL_SECTION **, const PROPERTYKEY *, PROPVARIANT *))(*v82)[1].DebugInfo)(
                                         v82,
                                         &PKEY_AudioEndpoint_Disable_SysFx,
                                         v221) >= 0
                                    && LOWORD(v221[0]) == 19
                                    && LODWORD(v221[1]) )
                                  {
                                    PropVariantClear(v221);
                                    v114 = v63 + 168;
                                    goto LABEL_206;
                                  }
                                  PropVariantClear(v221);
                                }
                              }
                              v85 = a7;
                              if ( (unsigned __int64)(int)a7 >= *(_QWORD *)(*(_QWORD *)&v185.Data1 + 1792LL) )
                                goto LABEL_404;
                              v86 = *(_QWORD *)(*(_QWORD *)&v185.Data1 + 1800LL) + 96LL * (int)a7;
                              if ( *(_BYTE *)(v86 + 52) )
                              {
                                v87 = (struct _RTL_CRITICAL_SECTION *)(v86 + 56);
                                EnterCriticalSection((LPCRITICAL_SECTION)(v86 + 56));
                                v202 = (struct _RTL_CRITICAL_SECTION *)(v86 + 56);
                                v89 = 0LL;
                                v187 = 0LL;
                                v90 = 0;
                                v188 = 0LL;
                                v91 = 0;
                                v92 = 0;
                                if ( *(int *)(v86 + 40) > 0 )
                                {
                                  v93 = 0LL;
                                  while ( 1 )
                                  {
                                    if ( v93 < 0 || v92 >= *(_DWORD *)(v86 + 40) )
                                    {
                                      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v88);
                                      __debugbreak();
                                    }
                                    v88 = (struct _RTL_CRITICAL_SECTION **)(v93 + *(_QWORD *)(v86 + 32));
                                    *(_QWORD *)v210 = v88;
                                    if ( v90 == v91 )
                                    {
                                      if ( v91 )
                                      {
                                        v91 = 2 * v90;
                                        if ( (v90 & 0x40000000) != 0 )
                                          goto LABEL_355;
                                      }
                                      else
                                      {
                                        v91 = 1;
                                      }
                                      if ( v91 > 0x7FFFFFFuLL
                                        || (v94 = _o__recalloc(v89, v91, 16LL),
                                            (v89 = (struct _RTL_CRITICAL_SECTION **)v94) == 0LL) )
                                      {
LABEL_355:
                                        v158 = 2147942414LL;
                                        v159 = 502LL;
LABEL_356:
                                        wil::details::in1diag3::Return_Hr(
                                          retaddr,
                                          (void *)v159,
                                          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                          (const char *)v158,
                                          v178);
                                        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v187);
                                        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v202);
                                        goto LABEL_164;
                                      }
                                      HIDWORD(v188) = v91;
                                      v187 = (struct _RTL_CRITICAL_SECTION **)v94;
                                      v88 = *(struct _RTL_CRITICAL_SECTION ***)v210;
                                    }
                                    v82 = &v89[2 * v90];
                                    if ( v82 )
                                    {
                                      *v82 = 0LL;
                                      v82[1] = 0LL;
                                      v95 = v88[1];
                                      if ( v95 )
                                      {
                                        _InterlockedIncrement(&v95->LockCount);
                                        v91 = HIDWORD(v188);
                                        v90 = v188;
                                        v89 = v187;
                                      }
                                      *v82 = *v88;
                                      v82[1] = v88[1];
                                    }
                                    LODWORD(v188) = ++v90;
                                    ++v92;
                                    v93 += 16LL;
                                    if ( v92 >= *(_DWORD *)(v86 + 40) )
                                    {
                                      v87 = v202;
                                      break;
                                    }
                                  }
                                }
                                for ( m = 0LL; (int)m < v90; m = (unsigned int)(m + 1) )
                                {
                                  if ( (int)m < 0 )
                                  {
                                    ATL::_AtlRaiseException(0xC000008C, (unsigned int)v88);
LABEL_361:
                                    ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v87->DebugInfo->Type)(v87);
                                    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v87);
                                    while ( 1 )
                                    {
                                      v89 += 2;
                                      if ( !--m )
                                        break;
LABEL_157:
                                      v87 = *v89;
                                      if ( *v89 && _InterlockedExchangeAdd(&v87->LockCount, 0xFFFFFFFF) == 1 )
                                        goto LABEL_361;
                                    }
                                    v87 = v202;
                                    v89 = v187;
                                    goto LABEL_161;
                                  }
                                  if ( BYTE4(v89[2 * (int)m]->OwningThread) )
                                  {
                                    v160 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                                             &v187,
                                                                             (unsigned int)m);
                                    v161 = SystemEffectChainDescriptor::Resolve(
                                             *v160,
                                             (struct SystemEffectDescriptor *)v86);
                                    if ( v161 < 0 )
                                    {
                                      v158 = (unsigned int)v161;
                                      v159 = 508LL;
                                      goto LABEL_356;
                                    }
                                  }
                                }
                                if ( !v89 )
                                  goto LABEL_162;
                                if ( v90 > 0 )
                                {
                                  ++v89;
                                  m = (unsigned int)v90;
                                  goto LABEL_157;
                                }
LABEL_161:
                                free(v89);
                                v187 = 0LL;
LABEL_162:
                                v188 = 0LL;
                                if ( v87 )
                                  LeaveCriticalSection(v87);
LABEL_164:
                                v85 = a7;
                              }
                              if ( v85 >= *(_QWORD *)(*(_QWORD *)&v185.Data1 + 1808LL) )
                                goto LABEL_404;
                              v97 = *(_QWORD *)(*(_QWORD *)&v185.Data1 + 1816LL) + 96 * v85;
                              if ( *(_BYTE *)(v97 + 52) )
                              {
                                v98 = (struct _RTL_CRITICAL_SECTION *)(v97 + 56);
                                EnterCriticalSection((LPCRITICAL_SECTION)(v97 + 56));
                                v213 = (struct _RTL_CRITICAL_SECTION *)(v97 + 56);
                                v99 = 0LL;
                                v192 = 0LL;
                                v100 = 0LL;
                                v193 = 0LL;
                                v101 = 0;
                                if ( *(int *)(v97 + 40) > 0 )
                                {
                                  while ( 1 )
                                  {
                                    v162 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                             v97 + 32,
                                             v101);
                                    if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                                          &v192,
                                                          v162) )
                                      break;
                                    if ( (signed int)++v101 >= *(_DWORD *)(v97 + 40) )
                                    {
                                      v100 = (unsigned int)v193;
                                      v99 = v192;
                                      goto LABEL_168;
                                    }
                                  }
                                  v163 = 2147942414LL;
                                  v164 = 502LL;
LABEL_367:
                                  wil::details::in1diag3::Return_Hr(
                                    retaddr,
                                    (void *)v164,
                                    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                    (const char *)v163,
                                    v178);
                                  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v192);
                                  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v213);
                                }
                                else
                                {
LABEL_168:
                                  for ( n = 0; (int)n < (int)v100; ++n )
                                  {
                                    v165 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                             &v192,
                                             n);
                                    v82 = *(struct _RTL_CRITICAL_SECTION ***)v165;
                                    if ( *(_BYTE *)(*(_QWORD *)v165 + 20LL) )
                                    {
                                      v166 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                                               &v192,
                                                                               n);
                                      v167 = SystemEffectChainDescriptor::Resolve(
                                               *v166,
                                               (struct SystemEffectDescriptor *)v97);
                                      if ( v167 < 0 )
                                      {
                                        v163 = (unsigned int)v167;
                                        v164 = 508LL;
                                        goto LABEL_367;
                                      }
                                    }
                                  }
                                  if ( v99 )
                                  {
                                    if ( (int)v100 > 0 )
                                    {
                                      v168 = v99;
                                      do
                                      {
                                        std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v168);
                                        v168 += 16;
                                        --v100;
                                      }
                                      while ( v100 );
                                    }
                                    free(v99);
                                    v192 = 0LL;
                                  }
                                  v193 = 0LL;
                                  if ( v98 )
                                    LeaveCriticalSection(v98);
                                }
                              }
                              if ( v85 >= *(_QWORD *)(*(_QWORD *)&v185.Data1 + 1824LL) )
                                goto LABEL_404;
                              v103 = *(_QWORD *)(*(_QWORD *)&v185.Data1 + 1832LL) + 96 * v85;
                              if ( *(_BYTE *)(v103 + 52) )
                              {
                                v104 = (struct _RTL_CRITICAL_SECTION *)(v103 + 56);
                                EnterCriticalSection((LPCRITICAL_SECTION)(v103 + 56));
                                v203 = (struct _RTL_CRITICAL_SECTION *)(v103 + 56);
                                v106 = 0LL;
                                v189 = 0LL;
                                v107 = 0;
                                v190 = 0LL;
                                v108 = 0;
                                v109 = 0;
                                if ( *(int *)(v103 + 40) > 0 )
                                {
                                  v110 = 0LL;
                                  while ( 1 )
                                  {
                                    if ( v110 < 0 || v109 >= *(_DWORD *)(v103 + 40) )
                                    {
                                      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v105);
                                      __debugbreak();
                                    }
                                    v105 = (struct _RTL_CRITICAL_SECTION **)(v110 + *(_QWORD *)(v103 + 32));
                                    *(_QWORD *)v210 = v105;
                                    if ( v107 == v108 )
                                    {
                                      if ( v108 )
                                      {
                                        v108 = 2 * v107;
                                        if ( (v107 & 0x40000000) != 0 )
                                          goto LABEL_376;
                                      }
                                      else
                                      {
                                        v108 = 1;
                                      }
                                      if ( v108 > 0x7FFFFFFuLL
                                        || (v111 = _o__recalloc(v106, v108, 16LL),
                                            (v106 = (struct _RTL_CRITICAL_SECTION **)v111) == 0LL) )
                                      {
LABEL_376:
                                        v169 = 2147942414LL;
                                        v170 = 502LL;
LABEL_377:
                                        wil::details::in1diag3::Return_Hr(
                                          retaddr,
                                          (void *)v170,
                                          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                                          (const char *)v169,
                                          v178);
                                        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v189);
                                        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v203);
                                        goto LABEL_203;
                                      }
                                      HIDWORD(v190) = v108;
                                      v189 = (struct _RTL_CRITICAL_SECTION **)v111;
                                      v105 = *(struct _RTL_CRITICAL_SECTION ***)v210;
                                    }
                                    v82 = &v106[2 * v107];
                                    if ( v82 )
                                    {
                                      *v82 = 0LL;
                                      v82[1] = 0LL;
                                      v112 = v105[1];
                                      if ( v112 )
                                      {
                                        _InterlockedIncrement(&v112->LockCount);
                                        v108 = HIDWORD(v190);
                                        v107 = v190;
                                        v106 = v189;
                                      }
                                      *v82 = *v105;
                                      v82[1] = v105[1];
                                    }
                                    LODWORD(v190) = ++v107;
                                    ++v109;
                                    v110 += 16LL;
                                    if ( v109 >= *(_DWORD *)(v103 + 40) )
                                    {
                                      v104 = v203;
                                      break;
                                    }
                                  }
                                }
                                for ( ii = 0LL; (int)ii < v107; ii = (unsigned int)(ii + 1) )
                                {
                                  if ( (int)ii < 0 )
                                  {
                                    ATL::_AtlRaiseException(0xC000008C, (unsigned int)v105);
LABEL_382:
                                    ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v104->DebugInfo->Type)(v104);
                                    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v104);
                                    while ( 1 )
                                    {
                                      v106 += 2;
                                      if ( !--ii )
                                        break;
LABEL_196:
                                      v104 = *v106;
                                      if ( *v106 && _InterlockedExchangeAdd(&v104->LockCount, 0xFFFFFFFF) == 1 )
                                        goto LABEL_382;
                                    }
                                    v104 = v203;
                                    v106 = v189;
                                    goto LABEL_200;
                                  }
                                  if ( BYTE4(v106[2 * (int)ii]->OwningThread) )
                                  {
                                    v171 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                                             &v189,
                                                                             (unsigned int)ii);
                                    v172 = SystemEffectChainDescriptor::Resolve(
                                             *v171,
                                             (struct SystemEffectDescriptor *)v103);
                                    if ( v172 < 0 )
                                    {
                                      v169 = (unsigned int)v172;
                                      v170 = 508LL;
                                      goto LABEL_377;
                                    }
                                  }
                                }
                                if ( !v106 )
                                  goto LABEL_201;
                                if ( v107 > 0 )
                                {
                                  ++v106;
                                  ii = (unsigned int)v107;
                                  goto LABEL_196;
                                }
LABEL_200:
                                free(v106);
                                v189 = 0LL;
LABEL_201:
                                v190 = 0LL;
                                if ( v104 )
                                  LeaveCriticalSection(v104);
LABEL_203:
                                v85 = a7;
                              }
                              if ( v85 >= *(_QWORD *)(*(_QWORD *)&v185.Data1 + 152LL) )
                              {
LABEL_404:
                                _o_terminate(v82);
                                __debugbreak();
LABEL_405:
                                v129 = v237;
                                v130 = v207;
                                v20 = v209;
                                v19 = *(struct _GUID **)&v238.Data1;
                                v22 = v184;
                                goto LABEL_406;
                              }
                              v114 = *(_QWORD *)(*(_QWORD *)&v185.Data1 + 160LL) + 16 * v85;
                              v79 = *(_QWORD *)v186;
                              v75 = v191;
                              v84 = a7;
LABEL_206:
                              v115 = 0;
                              v116 = *(_DWORD *)(v114 + 8);
                              if ( v116 <= 0 )
                              {
LABEL_384:
                                v63 = *(_QWORD *)&v185.Data1;
                                goto LABEL_255;
                              }
                              while ( 1 )
                              {
                                v117 = (_QWORD *)(*(_QWORD *)v114 + 16LL * v115);
                                v118 = *v117 - *(_QWORD *)&v233.Data1;
                                if ( *v117 == *(_QWORD *)&v233.Data1 )
                                  v118 = v117[1] - *(_QWORD *)v233.Data4;
                                if ( !v118 )
                                  break;
                                if ( ++v115 >= v116 )
                                  goto LABEL_384;
                              }
                              v63 = *(_QWORD *)&v185.Data1;
                              if ( v115 != -1 )
                              {
                                v18 = (char *)(2 * v79);
                                v119 = v75[1][v79];
                                if ( (unsigned __int64)(int)v84 >= *(_QWORD *)(*(_QWORD *)&v185.Data1 + 1808LL) )
                                  goto LABEL_407;
                                v120 = *(_QWORD *)(*(_QWORD *)&v185.Data1 + 1816LL) + 96LL * (int)v84;
                                v121 = *(_QWORD *)(*(_QWORD *)&v185.Data1 + 80LL);
                                if ( !v121 )
                                  goto LABEL_216;
                                *(_OWORD *)v215 = 0LL;
                                v216 = 0LL;
                                if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v121 + 40LL))(
                                       v121,
                                       &PKEY_AudioEndpoint_Disable_SysFx,
                                       v215) < 0
                                  || LOWORD(v215[0]) != 19
                                  || !LODWORD(v215[1]) )
                                {
                                  PropVariantClear(v215);
LABEL_216:
                                  v231 = v119;
                                  v232 = v119;
                                  if ( *(_BYTE *)(v120 + 52) )
                                  {
                                    for ( jj = 0; ; ++jj )
                                    {
                                      if ( (signed int)jj >= *(_DWORD *)(v120 + 40) )
                                        goto LABEL_219;
                                      if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                                   v120 + 32,
                                                                   jj)
                                                    + 20LL) )
                                      {
                                        v173 = (__int64 **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                             v120 + 32,
                                                             jj);
                                        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                                             *v173,
                                                             &v232) != -1 )
                                          break;
                                      }
                                    }
                                    EnterCriticalSection((LPCRITICAL_SECTION)(v120 + 56));
                                    v214 = (struct _RTL_CRITICAL_SECTION *)(v120 + 56);
                                    v174 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                             v120 + 32,
                                             jj);
                                    std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v229, v174, v175);
                                    if ( (int)SystemEffectChainDescriptor::Resolve(
                                                v229,
                                                (struct SystemEffectDescriptor *)v120) < 0 )
                                    {
                                      if ( v230 )
                                        std::_Ref_count_base::_Decref(v230);
                                      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v214);
                                      v79 = *(_QWORD *)v186;
                                      goto LABEL_221;
                                    }
                                    if ( v230 )
                                      std::_Ref_count_base::_Decref(v230);
                                    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v214);
LABEL_219:
                                    v79 = *(_QWORD *)v186;
                                  }
                                  v123 = 0;
                                  if ( *(int *)(v120 + 40) <= 0 )
                                    goto LABEL_221;
                                  while ( 1 )
                                  {
                                    v176 = (__int64 **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                         v120 + 32,
                                                         v123);
                                    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                                         *v176,
                                                         &v232) != -1 )
                                      break;
                                    if ( (signed int)++v123 >= *(_DWORD *)(v120 + 40) )
                                      goto LABEL_221;
                                  }
                                  if ( v123 == -1 )
                                  {
LABEL_221:
                                    v124 = *(__int64 **)(v120 + 16);
                                    if ( !v124 )
                                      goto LABEL_255;
                                    v125 = 0;
                                    v126 = *((_DWORD *)v124 + 2);
                                    if ( v126 <= 0 )
                                      goto LABEL_255;
                                    a4 = *v124;
                                    while ( 1 )
                                    {
                                      v127 = *(_QWORD *)(a4 + 16LL * v125) - *(_QWORD *)&v231.Data1;
                                      if ( !v127 )
                                        v127 = *(_QWORD *)(a4 + 16LL * v125 + 8) - *(_QWORD *)v231.Data4;
                                      if ( !v127 )
                                        break;
                                      if ( ++v125 >= v126 )
                                        goto LABEL_255;
                                    }
                                    v128 = v125 == -1;
                                  }
                                  else
                                  {
                                    v128 = *(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                        v120 + 32,
                                                        v123) == 0LL;
                                  }
                                  if ( !v128 )
                                    goto LABEL_229;
                                  goto LABEL_255;
                                }
                                PropVariantClear(v215);
                                if ( v84 == eKeywordDetectorConnector )
                                  goto LABEL_216;
                                v235 = v119;
                                if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                                     (__int64 *)v120,
                                                     &v235) != -1 )
                                {
LABEL_229:
                                  v129 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                                  v130 = v75[1][v79];
                                  v131 = v130;
                                  v20 = v209;
                                  v19 = *(struct _GUID **)&v238.Data1;
                                  v22 = v184;
                                  goto LABEL_230;
                                }
                              }
LABEL_255:
                              v78 = v183 + 1;
                              v72 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                              v77 = v182;
                            }
                          }
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0x37A,
                            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                            (const char *)(unsigned int)v76,
                            v177);
                          return (unsigned int)v76;
                        }
                        VirtualSurroundEffectMode = CEndpointCharacteristics::GetVirtualSurroundEffectMode(*(CEndpointCharacteristics **)&v185.Data1);
                        v77 = v182;
                        if ( !VirtualSurroundEffectMode )
                          goto LABEL_123;
                        v75 = (GUID **)&unk_18016C8F0;
                      }
                      v191 = v75;
                      goto LABEL_124;
                    }
                    v76 = -2147024809;
                    v74 = v17;
                    v75 = v191;
                    goto LABEL_120;
                  }
LABEL_113:
                  v72 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                  v73 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                  goto LABEL_114;
                }
              }
              else
              {
                PropVariantClear(v219);
              }
            }
            v228 = v62;
            v227 = v62;
            if ( *(_BYTE *)(v64 + 52) )
            {
              for ( kk = 0; ; ++kk )
              {
                if ( (signed int)kk >= *(_DWORD *)(v64 + 40) )
                  goto LABEL_104;
                if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                             v64 + 32,
                                             kk)
                              + 20LL) )
                {
                  v154 = (__int64 **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                       v64 + 32,
                                       kk);
                  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v154, &v227) != -1 )
                    break;
                }
              }
              EnterCriticalSection((LPCRITICAL_SECTION)(v64 + 56));
              v212 = (struct _RTL_CRITICAL_SECTION *)(v64 + 56);
              v155 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                       v64 + 32,
                       kk);
              std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v225, v155, v156);
              if ( (int)SystemEffectChainDescriptor::Resolve(v225, (struct SystemEffectDescriptor *)v64) >= 0 )
              {
                if ( v226 )
                  std::_Ref_count_base::_Decref(v226);
                wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v212);
LABEL_104:
                v24 = a5;
                goto LABEL_105;
              }
              if ( v226 )
                std::_Ref_count_base::_Decref(v226);
              wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v212);
              v24 = a5;
            }
            else
            {
LABEL_105:
              v67 = 0;
              if ( *(int *)(v64 + 40) > 0 )
              {
                while ( 1 )
                {
                  v157 = (__int64 **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                       v64 + 32,
                                       v67);
                  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v157, &v227) != -1 )
                    break;
                  if ( (signed int)++v67 >= *(_DWORD *)(v64 + 40) )
                    goto LABEL_106;
                }
                if ( v67 != -1 )
                {
                  if ( *(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                    v64 + 32,
                                    v67) )
                    goto LABEL_333;
                  goto LABEL_113;
                }
              }
            }
LABEL_106:
            v68 = *(__int64 **)(v64 + 16);
            if ( v68 )
            {
              v69 = 0;
              v70 = *((_DWORD *)v68 + 2);
              if ( v70 > 0 )
              {
                a4 = *v68;
                while ( 1 )
                {
                  v71 = *(_QWORD *)(a4 + 16LL * v69) - *(_QWORD *)&v228.Data1;
                  if ( !v71 )
                    v71 = *(_QWORD *)(a4 + 16LL * v69 + 8) - *(_QWORD *)v228.Data4;
                  if ( !v71 )
                    break;
                  if ( ++v69 >= v70 )
                    goto LABEL_113;
                }
                if ( v69 != -1 )
                  goto LABEL_333;
              }
            }
            goto LABEL_113;
          }
LABEL_407:
          _o_terminate(v18);
          __debugbreak();
LABEL_408:
          _o_terminate(v18);
          __debugbreak();
          __debugbreak();
          JUMPOUT(0x180090542LL);
        }
        if ( !CEndpointCharacteristics::AllowRawStreamCreation((CEndpointCharacteristics *)a4, a7) )
          return 2290679847LL;
        v129 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        v130 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        v131 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        v23 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        v22 = v184;
      }
    }
    if ( v223 )
      *v223 = v129;
    if ( v19 )
      *v19 = v130;
    if ( v20 )
      *v20 = v131;
    if ( v21 )
      *v21 = v131;
    if ( v22 )
      *(GUID *)v22 = v23;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3A6,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                           (const char *)a4);
  }
  return result;
}
