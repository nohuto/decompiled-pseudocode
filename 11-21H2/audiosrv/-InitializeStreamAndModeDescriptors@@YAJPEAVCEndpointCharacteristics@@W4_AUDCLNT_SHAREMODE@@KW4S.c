/*
 * XREFs of ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180030430
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180028DE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSystemAudioStream@@@Z @ 0x1800FEAD8 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSyste.c)
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F714 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18002C3F0 (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002EC80 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180048324 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800483C0 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18005B5FC (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x18005D250 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18005DFD0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180061D9C (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800C5F24 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z @ 0x180100470 (-GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x1801440C0 (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180144B04 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180149014 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180149B64 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 */

// Hidden C++ exception states: #wind=62
__int64 __fastcall InitializeStreamAndModeDescriptors(
        SIZE_T a1,
        int a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        unsigned int a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct _RTL_CRITICAL_SECTION *a6,
        struct _GUID *a7,
        _OWORD *a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        _QWORD *a16,
        GUID *a17,
        __int64 a18,
        __int64 a19,
        char a20,
        char a21,
        char a22,
        __int64 a23,
        __int64 a24,
        _QWORD *a25,
        __int64 a26)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v26; // esi
  SIZE_T v28; // rbx
  __int64 v29; // r13
  __int64 v30; // r15
  signed int v31; // edx
  void *v32; // rcx
  volatile signed __int32 **v33; // r14
  int v34; // r12d
  __int64 v35; // rdi
  __int64 v36; // r15
  volatile signed __int32 **v37; // r8
  __int64 v38; // rax
  volatile signed __int32 **v39; // rcx
  volatile signed __int32 *v40; // rax
  __int64 v41; // r15
  __int64 v42; // r15
  volatile signed __int32 **v43; // r8
  __int64 v44; // rax
  volatile signed __int32 **v45; // rcx
  volatile signed __int32 *v46; // rax
  struct _GUID v47; // xmm6
  __int64 v48; // r15
  volatile signed __int32 **v49; // r8
  __int64 v50; // rax
  volatile signed __int32 **v51; // rcx
  volatile signed __int32 *v52; // rax
  __int64 v53; // r15
  __int64 v54; // r15
  volatile signed __int32 **v55; // r8
  __int64 v56; // rax
  volatile signed __int32 **v57; // rcx
  volatile signed __int32 *v58; // rax
  int v59; // r15d
  __int64 v60; // rdi
  signed int v61; // edx
  __int64 v62; // r9
  __int64 *v63; // rcx
  int v64; // r8d
  int v65; // r11d
  __int64 v66; // r10
  __int64 v67; // rax
  __int64 v68; // rdx
  int Lfx; // edi
  void (__fastcall *v70)(struct ICompositeSystemEffect *, unsigned int *, void **); // rax
  void *v71; // rcx
  unsigned int v72; // ecx
  unsigned int v73; // r15d
  SIZE_T v74; // rdi
  unsigned int *v75; // rax
  unsigned int v76; // esi
  __int64 v77; // rax
  unsigned int v78; // ecx
  void *v79; // rcx
  struct _GUID *v80; // r8
  GUID *v81; // rax
  __int128 v82; // xmm2
  __int128 v83; // xmm3
  __int64 v84; // xmm0_8
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  volatile signed __int32 **v88; // r13
  struct _GUID v89; // xmm6
  unsigned __int64 v90; // rsi
  volatile signed __int32 **v91; // r14
  volatile signed __int32 *v92; // rdi
  unsigned int v93; // r12d
  signed int v94; // edx
  _QWORD *v95; // r8
  __int64 v96; // rax
  volatile signed __int32 **v97; // rcx
  __int64 v98; // rax
  int v99; // r12d
  __int64 v100; // r14
  volatile signed __int32 **v101; // rdi
  unsigned int v102; // r12d
  unsigned int v103; // r12d
  volatile signed __int32 **v104; // r14
  volatile signed __int32 *v105; // rdi
  unsigned int v106; // r12d
  signed int v107; // edx
  _QWORD *v108; // r8
  __int64 v109; // rax
  volatile signed __int32 **v110; // rcx
  __int64 v111; // rax
  int v112; // r12d
  __int64 v113; // r12
  __int64 v114; // r14
  unsigned int v115; // edi
  __int64 *v116; // rax
  int v117; // edx
  int v118; // r8d
  __int64 v119; // r9
  __int64 v120; // rax
  bool v121; // zf
  int v122; // r14d
  volatile signed __int32 **v123; // r14
  volatile signed __int32 *v124; // rdi
  unsigned int v125; // r12d
  signed int v126; // edx
  _QWORD *v127; // r8
  __int64 v128; // rax
  volatile signed __int32 **v129; // rcx
  __int64 v130; // rax
  int v131; // r12d
  __int64 v132; // r14
  volatile signed __int32 **v133; // rdi
  unsigned int v134; // r12d
  unsigned int v135; // r12d
  volatile signed __int32 **v136; // r14
  volatile signed __int32 *v137; // rdi
  unsigned int v138; // r12d
  signed int v139; // edx
  _QWORD *v140; // r8
  __int64 v141; // rax
  volatile signed __int32 **v142; // rcx
  __int64 v143; // rax
  int v144; // r12d
  __int64 v145; // rax
  int v146; // edx
  int v147; // r8d
  __int64 v148; // r9
  __int64 v149; // rax
  unsigned int v150; // r9d
  __int64 v151; // rdx
  int InitializedSystemEffectInterface; // eax
  unsigned int v153; // edi
  void (__fastcall *v154)(__int64, unsigned int *, volatile signed __int32 ***); // rax
  void *v155; // rcx
  LPCRITICAL_SECTION v156; // rcx
  char *v157; // rax
  volatile signed __int32 **v158; // r14
  volatile signed __int32 *v159; // rdi
  unsigned int v160; // r12d
  signed int v161; // edx
  _QWORD *v162; // r8
  __int64 v163; // rax
  volatile signed __int32 **v164; // rcx
  __int64 v165; // rax
  int v166; // r12d
  __int64 v167; // r14
  volatile signed __int32 **v168; // rdi
  unsigned int v169; // r12d
  unsigned int v170; // r12d
  volatile signed __int32 **v171; // r14
  volatile signed __int32 *v172; // rdi
  unsigned int v173; // r12d
  signed int v174; // edx
  _QWORD *v175; // r8
  __int64 v176; // rax
  volatile signed __int32 **v177; // rcx
  __int64 v178; // rax
  int v179; // r12d
  __int64 v180; // rax
  int v181; // edx
  int v182; // r8d
  __int64 v183; // r9
  __int64 v184; // rax
  __int64 v185; // rdi
  unsigned int v186; // r12d
  int v187; // r8d
  signed int v188; // edx
  int v189; // r14d
  __int64 v190; // rdi
  volatile signed __int32 **v191; // r14
  int v192; // edi
  signed int v193; // edx
  _QWORD *v194; // r8
  __int64 v195; // rax
  volatile signed __int32 **v196; // rcx
  __int64 v197; // rax
  volatile signed __int32 **v198; // r13
  volatile signed __int32 **v199; // r14
  volatile signed __int32 *v200; // rdi
  __int64 v201; // r14
  volatile signed __int32 **v202; // rdi
  volatile signed __int32 **v203; // r14
  signed int v204; // edx
  _QWORD *v205; // r8
  __int64 v206; // rax
  char *v207; // rcx
  __int64 v208; // rax
  volatile signed __int32 **v209; // r14
  volatile signed __int32 *v210; // rdi
  __int64 v211; // rax
  int v212; // r8d
  __int64 v213; // r9
  __int64 v214; // rax
  char *v215; // rax
  __int64 v216; // r8
  unsigned int v217; // ecx
  __int64 v218; // rax
  unsigned int v219; // ecx
  __int64 v220; // rax
  __int64 v221; // rdx
  void *v222; // rcx
  unsigned int *v223; // rax
  volatile signed __int32 **v224; // rax
  unsigned int v225; // ebx
  __int64 v227; // rdx
  unsigned int *v228; // rax
  __int64 v229; // r9
  __int64 v230; // rdx
  SystemEffectChainDescriptor **v231; // rax
  int v232; // eax
  __int64 v233; // rax
  __int64 v234; // r9
  __int64 v235; // rdx
  SystemEffectChainDescriptor **v236; // rax
  int v237; // eax
  __int64 v238; // r9
  __int64 v239; // rdx
  SystemEffectChainDescriptor **v240; // rax
  int v241; // eax
  __int64 v242; // r9
  __int64 v243; // rdx
  SystemEffectChainDescriptor **v244; // rax
  int v245; // eax
  __int64 v246; // rax
  __int64 v247; // r9
  __int64 v248; // rdx
  SystemEffectChainDescriptor **v249; // rax
  int v250; // eax
  __int64 v251; // r9
  __int64 v252; // rdx
  SystemEffectChainDescriptor **v253; // rax
  int v254; // eax
  __int64 **v255; // rax
  __int64 v256; // rax
  __int64 v257; // r8
  __int64 *v258; // rcx
  __int64 v259; // rdx
  struct ICompositeSystemEffect *v260; // rcx
  unsigned int v261; // ecx
  __int64 v262; // rdx
  unsigned int *v263; // rax
  int v264; // ecx
  SIZE_T v265; // rdi
  unsigned int *v266; // rax
  unsigned int v267; // r8d
  unsigned int v268; // ecx
  unsigned int *v269; // rax
  unsigned int v270; // ecx
  int v271; // edi
  void *v272; // rcx
  int StreamEffect; // eax
  unsigned int v274; // edi
  void (__fastcall *v275)(struct ICompositeSystemEffect *, unsigned int *, void **); // rax
  void *v276; // rcx
  unsigned int v277; // esi
  SIZE_T v278; // rdi
  unsigned int *v279; // rax
  unsigned int v280; // r8d
  unsigned int v281; // ecx
  __int64 v282; // rdx
  unsigned int *v283; // rax
  void *v284; // rcx
  int ContainerProperty; // eax
  unsigned int v286; // edi
  int v287; // eax
  unsigned int v288; // edi
  __int64 v289; // r9
  __int64 v290; // rdx
  SystemEffectChainDescriptor **v291; // rax
  int v292; // eax
  __int64 v293; // rax
  __int64 v294; // r9
  __int64 v295; // rdx
  SystemEffectChainDescriptor **v296; // rax
  int v297; // eax
  volatile signed __int32 **v298; // r14
  __int64 v299; // r9
  __int64 v300; // rdx
  SystemEffectChainDescriptor **v301; // rax
  int v302; // eax
  __int64 **v303; // rax
  __int64 v304; // rax
  __int64 v305; // r8
  __int64 **v306; // rax
  __int64 v307; // r9
  __int64 v308; // rdx
  SystemEffectChainDescriptor **v309; // rax
  int v310; // eax
  __int64 v311; // rax
  __int64 v312; // r9
  __int64 v313; // rdx
  SystemEffectChainDescriptor **v314; // rax
  int v315; // eax
  volatile signed __int32 **v316; // r14
  __int64 v317; // r9
  __int64 v318; // rdx
  SystemEffectChainDescriptor **v319; // rax
  int v320; // eax
  __int64 v321; // rdx
  __int64 v322; // r9
  __int64 v323; // rdx
  SystemEffectChainDescriptor **v324; // rax
  int v325; // eax
  __int64 v326; // rax
  __int64 v327; // r9
  __int64 v328; // rdx
  SystemEffectChainDescriptor **v329; // rax
  int v330; // eax
  volatile signed __int32 **v331; // r14
  __int64 v332; // r9
  __int64 v333; // rdx
  SystemEffectChainDescriptor **v334; // rax
  int v335; // eax
  __int64 v336; // r9
  __int64 v337; // rdx
  SystemEffectChainDescriptor **v338; // rax
  int v339; // eax
  __int64 v340; // rax
  __int64 v341; // r9
  __int64 v342; // rdx
  SystemEffectChainDescriptor **v343; // rax
  int v344; // eax
  volatile signed __int32 **v345; // r14
  __int64 v346; // r9
  __int64 v347; // rdx
  SystemEffectChainDescriptor **v348; // rax
  int v349; // eax
  LPVOID v350; // rcx
  void *v351; // rcx
  struct IAudioSystemEffects2 **v352; // [rsp+28h] [rbp-E0h]
  unsigned int *v353; // [rsp+68h] [rbp-A0h]
  signed int v354; // [rsp+70h] [rbp-98h]
  signed int v355; // [rsp+70h] [rbp-98h]
  signed int v356; // [rsp+70h] [rbp-98h]
  signed int v357; // [rsp+70h] [rbp-98h]
  signed int v358; // [rsp+70h] [rbp-98h]
  signed int v359; // [rsp+70h] [rbp-98h]
  signed int v360; // [rsp+70h] [rbp-98h]
  signed int v361; // [rsp+70h] [rbp-98h]
  int v362; // [rsp+70h] [rbp-98h]
  signed int v364; // [rsp+74h] [rbp-94h]
  signed int v365; // [rsp+74h] [rbp-94h]
  signed int v366; // [rsp+74h] [rbp-94h]
  signed int v367; // [rsp+74h] [rbp-94h]
  unsigned int v369; // [rsp+78h] [rbp-90h]
  volatile signed __int32 **v370; // [rsp+80h] [rbp-88h]
  _QWORD *v371; // [rsp+88h] [rbp-80h]
  _QWORD *v372; // [rsp+88h] [rbp-80h]
  _QWORD *v373; // [rsp+88h] [rbp-80h]
  _QWORD *v374; // [rsp+88h] [rbp-80h]
  _QWORD *v375; // [rsp+88h] [rbp-80h]
  _QWORD *v376; // [rsp+88h] [rbp-80h]
  _QWORD *v377; // [rsp+88h] [rbp-80h]
  _QWORD *v378; // [rsp+88h] [rbp-80h]
  unsigned int v379; // [rsp+90h] [rbp-78h] BYREF
  __int64 v380; // [rsp+98h] [rbp-70h]
  struct ICompositeSystemEffect *v381; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v382; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v383; // [rsp+ACh] [rbp-5Ch]
  unsigned int v384; // [rsp+B0h] [rbp-58h] BYREF
  LPVOID pv; // [rsp+B8h] [rbp-50h] BYREF
  struct _GUID *v386; // [rsp+C0h] [rbp-48h]
  char *v387; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v388; // [rsp+D0h] [rbp-38h]
  volatile signed __int32 **v389; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v390; // [rsp+E0h] [rbp-28h]
  LPVOID v391; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v392; // [rsp+F0h] [rbp-18h] BYREF
  LPVOID v393; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 **v394; // [rsp+100h] [rbp-8h] BYREF
  __int64 v395; // [rsp+108h] [rbp+0h]
  volatile signed __int32 **v396; // [rsp+110h] [rbp+8h] BYREF
  __int64 v397; // [rsp+118h] [rbp+10h]
  volatile signed __int32 **v398; // [rsp+120h] [rbp+18h] BYREF
  __int64 v399; // [rsp+128h] [rbp+20h]
  volatile signed __int32 **v400; // [rsp+130h] [rbp+28h] BYREF
  __int64 v401; // [rsp+138h] [rbp+30h]
  volatile signed __int32 **v402; // [rsp+140h] [rbp+38h] BYREF
  __int64 v403; // [rsp+148h] [rbp+40h]
  volatile signed __int32 **v404; // [rsp+150h] [rbp+48h] BYREF
  __int64 v405; // [rsp+158h] [rbp+50h]
  volatile signed __int32 **v406; // [rsp+160h] [rbp+58h] BYREF
  __int64 v407; // [rsp+168h] [rbp+60h]
  volatile signed __int32 **v408; // [rsp+170h] [rbp+68h] BYREF
  __int64 v409; // [rsp+178h] [rbp+70h]
  volatile signed __int32 **v410; // [rsp+180h] [rbp+78h] BYREF
  __int64 v411; // [rsp+188h] [rbp+80h]
  volatile signed __int32 **v412; // [rsp+190h] [rbp+88h] BYREF
  __int64 v413; // [rsp+198h] [rbp+90h]
  volatile signed __int32 **v414; // [rsp+1A0h] [rbp+98h] BYREF
  __int64 v415; // [rsp+1A8h] [rbp+A0h]
  __int64 v416; // [rsp+1B0h] [rbp+A8h] BYREF
  struct ICompositeSystemEffect *v417; // [rsp+1B8h] [rbp+B0h] BYREF
  volatile signed __int32 **v418; // [rsp+1C0h] [rbp+B8h] BYREF
  volatile signed __int32 **v419; // [rsp+1C8h] [rbp+C0h] BYREF
  volatile signed __int32 **v420; // [rsp+1D0h] [rbp+C8h] BYREF
  unsigned int v421; // [rsp+1D8h] [rbp+D0h]
  int v422; // [rsp+1DCh] [rbp+D4h]
  volatile signed __int32 *v423; // [rsp+1E0h] [rbp+D8h] BYREF
  unsigned int v424; // [rsp+1E8h] [rbp+E0h]
  int v425; // [rsp+1ECh] [rbp+E4h]
  volatile signed __int32 *v426; // [rsp+1F0h] [rbp+E8h] BYREF
  unsigned int v427; // [rsp+1F8h] [rbp+F0h]
  int v428; // [rsp+1FCh] [rbp+F4h]
  volatile signed __int32 **v429; // [rsp+200h] [rbp+F8h] BYREF
  unsigned int v430; // [rsp+208h] [rbp+100h]
  int v431; // [rsp+20Ch] [rbp+104h]
  volatile signed __int32 **v432; // [rsp+210h] [rbp+108h] BYREF
  unsigned int v433; // [rsp+218h] [rbp+110h]
  int v434; // [rsp+21Ch] [rbp+114h]
  void *Block; // [rsp+220h] [rbp+118h] BYREF
  __int64 v436; // [rsp+228h] [rbp+120h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+230h] [rbp+128h] BYREF
  LPCRITICAL_SECTION v438; // [rsp+238h] [rbp+130h] BYREF
  LPCRITICAL_SECTION v439; // [rsp+240h] [rbp+138h] BYREF
  LPCRITICAL_SECTION v440; // [rsp+248h] [rbp+140h] BYREF
  LPCRITICAL_SECTION v441; // [rsp+250h] [rbp+148h] BYREF
  LPCRITICAL_SECTION v442; // [rsp+258h] [rbp+150h] BYREF
  LPCRITICAL_SECTION v443; // [rsp+260h] [rbp+158h] BYREF
  LPCRITICAL_SECTION v444; // [rsp+268h] [rbp+160h] BYREF
  LPCRITICAL_SECTION v445; // [rsp+270h] [rbp+168h] BYREF
  LPCRITICAL_SECTION v446; // [rsp+278h] [rbp+170h] BYREF
  LPCRITICAL_SECTION v447; // [rsp+280h] [rbp+178h] BYREF
  LPCRITICAL_SECTION v448; // [rsp+288h] [rbp+180h] BYREF
  LPCRITICAL_SECTION v449; // [rsp+290h] [rbp+188h] BYREF
  LPCRITICAL_SECTION v450; // [rsp+298h] [rbp+190h] BYREF
  LPCRITICAL_SECTION v451; // [rsp+2A0h] [rbp+198h] BYREF
  LPCRITICAL_SECTION v452; // [rsp+2A8h] [rbp+1A0h] BYREF
  LPCRITICAL_SECTION v453; // [rsp+2B0h] [rbp+1A8h] BYREF
  __int64 v454; // [rsp+2B8h] [rbp+1B0h]
  LPCRITICAL_SECTION v455; // [rsp+2C0h] [rbp+1B8h] BYREF
  struct _RTL_CRITICAL_SECTION *v456; // [rsp+2C8h] [rbp+1C0h] BYREF
  struct _RTL_CRITICAL_SECTION *v457; // [rsp+2D0h] [rbp+1C8h] BYREF
  __int64 v458; // [rsp+2D8h] [rbp+1D0h]
  PROPVARIANT v459[2]; // [rsp+2E0h] [rbp+1D8h] BYREF
  __int64 v460; // [rsp+2F0h] [rbp+1E8h]
  PROPVARIANT pvar[2]; // [rsp+2F8h] [rbp+1F0h] BYREF
  __int64 v462; // [rsp+308h] [rbp+200h]
  PROPVARIANT v463[2]; // [rsp+310h] [rbp+208h] BYREF
  __int64 v464; // [rsp+320h] [rbp+218h]
  PROPVARIANT v465[2]; // [rsp+328h] [rbp+220h] BYREF
  __int64 v466; // [rsp+338h] [rbp+230h]
  PROPVARIANT v467[2]; // [rsp+340h] [rbp+238h] BYREF
  __int64 v468; // [rsp+350h] [rbp+248h]
  PROPVARIANT v469[2]; // [rsp+358h] [rbp+250h] BYREF
  __int64 v470; // [rsp+368h] [rbp+260h]
  struct _GUID v471; // [rsp+378h] [rbp+270h] BYREF
  LPVOID *v472; // [rsp+388h] [rbp+280h]
  volatile signed __int32 **v473; // [rsp+390h] [rbp+288h] BYREF
  char v474; // [rsp+398h] [rbp+290h]
  LPVOID *p_pv; // [rsp+3A0h] [rbp+298h]
  void *v476; // [rsp+3A8h] [rbp+2A0h] BYREF
  char v477; // [rsp+3B0h] [rbp+2A8h]
  LPVOID *v478; // [rsp+3B8h] [rbp+2B0h]
  void *v479; // [rsp+3C0h] [rbp+2B8h] BYREF
  char v480; // [rsp+3C8h] [rbp+2C0h]
  _QWORD *v481; // [rsp+3D0h] [rbp+2C8h]
  SystemEffectChainDescriptor *v482; // [rsp+3D8h] [rbp+2D0h] BYREF
  std::_Ref_count_base *v483; // [rsp+3E0h] [rbp+2D8h]
  SystemEffectChainDescriptor *v484; // [rsp+3E8h] [rbp+2E0h] BYREF
  std::_Ref_count_base *v485; // [rsp+3F0h] [rbp+2E8h]
  struct _GUID v486; // [rsp+3F8h] [rbp+2F0h]
  struct _GUID v487; // [rsp+408h] [rbp+300h] BYREF
  struct _GUID v488; // [rsp+418h] [rbp+310h] BYREF
  struct _GUID v489; // [rsp+428h] [rbp+320h]
  GUID v490; // [rsp+438h] [rbp+330h]
  __int128 v491; // [rsp+448h] [rbp+340h]
  struct _GUID v492; // [rsp+458h] [rbp+350h] BYREF
  int v493[4]; // [rsp+468h] [rbp+360h] BYREF
  IID rclsid; // [rsp+478h] [rbp+370h] BYREF
  IID v495; // [rsp+488h] [rbp+380h] BYREF
  int v496[4]; // [rsp+498h] [rbp+390h] BYREF
  struct _GUID v497; // [rsp+4A8h] [rbp+3A0h] BYREF
  struct _GUID v498; // [rsp+4B8h] [rbp+3B0h] BYREF
  CLSID pClsid; // [rsp+4C8h] [rbp+3C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+520h] [rbp+418h]

  v383 = a4;
  v26 = a3;
  v28 = a1;
  v386 = a7;
  v29 = a15;
  v481 = a25;
  v30 = a26;
  v454 = a26;
  v353 = 0LL;
  v370 = 0LL;
  v458 = 0LL;
  v458 = *(_QWORD *)(a1 + 16);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v458 + 8LL))(v458);
  LODWORD(v33) = 1;
  if ( !a25 )
  {
    v34 = a5;
    v80 = v386;
    goto LABEL_230;
  }
  if ( (v26 & 0x800000) != 0 )
  {
    if ( a2 )
    {
      v225 = -2147418113;
      v227 = 280LL;
    }
    else
    {
      v228 = (unsigned int *)CoTaskMemAlloc(0x130uLL);
      v353 = v228;
      if ( v228 )
      {
        memset_0(v228, 0, 0x130uLL);
        *v353 = 0;
        v353[34] = v26;
        *((_QWORD *)v353 + 18) = 0LL;
        v353[50] = 0;
        v353[40] = 0;
        v353[40] |= 1 << v353[50];
        *(GUID *)&v353[4 * v353[50]++ + 72] = GUID_fed4acc3_87c9_45e9_a026_5b59a855e687;
        v353[1] = 1;
        goto LABEL_215;
      }
      v225 = -2147024882;
      v227 = 285LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v227,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v225,
      (int)v352);
    goto LABEL_654;
  }
  if ( a2 )
  {
    v34 = a5;
    goto LABEL_793;
  }
  v34 = a5;
  if ( (a5 & 0xFFFFFFFC) != 0 || a5 == eOffloadConnector )
  {
LABEL_793:
    v391 = 0LL;
    v382 = 0;
    if ( v34 != 1 || a2 )
    {
      v283 = (unsigned int *)CoTaskMemAlloc(0x130uLL);
      v353 = v283;
      if ( !v283 )
      {
        v225 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F7,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x8007000ELL,
          (int)v352);
        goto LABEL_824;
      }
      memset_0(v283, 0, 0x130uLL);
      *v353 = v383;
      v353[34] = v26;
      *((_QWORD *)v353 + 18) = 0LL;
      v353[50] = 0;
      v353[1] = 0;
    }
    else
    {
      v417 = 0LL;
      v497 = *v386;
      StreamEffect = CEndpointCharacteristics::GetStreamEffect(
                       (CEndpointCharacteristics *)v28,
                       &v497,
                       0,
                       eOffloadConnector,
                       &v417,
                       0LL,
                       0LL);
      v274 = StreamEffect;
      if ( StreamEffect < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D5,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)StreamEffect,
          (int)v352);
        v225 = v274;
LABEL_811:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v417);
LABEL_824:
        v272 = v391;
        v391 = 0LL;
LABEL_825:
        if ( v272 )
          CoTaskMemFree(v272);
        goto LABEL_654;
      }
      if ( v417 )
      {
        v275 = *(void (__fastcall **)(struct ICompositeSystemEffect *, unsigned int *, void **))(*(_QWORD *)v417 + 32LL);
        v478 = &v391;
        v479 = 0LL;
        v480 = 1;
        v275(v417, &v382, &v479);
        if ( v480 )
        {
          v276 = *v478;
          *v478 = v479;
          if ( v276 )
            CoTaskMemFree(v276);
        }
      }
      v277 = v382;
      v278 = 16 * (v382 + 18LL);
      v279 = (unsigned int *)CoTaskMemAlloc(v278);
      v353 = v279;
      if ( !v279 )
      {
        v225 = -2147024882;
        v282 = 476LL;
        goto LABEL_810;
      }
      memset_0(v279, 0, v278);
      *v353 = 0;
      v353[34] = a3;
      *((_QWORD *)v353 + 18) = 0LL;
      v353[50] = 0;
      v353[40] = 0;
      v280 = 0;
      if ( v382 )
      {
        while ( 1 )
        {
          v281 = v353[50];
          if ( v281 > 0x1F )
            break;
          v353[40] |= 1 << v281;
          *(_OWORD *)&v353[4 * v353[50]++ + 72] = *((_OWORD *)v391 + v280);
          if ( ++v280 >= v382 )
            goto LABEL_805;
        }
        v225 = -2147418113;
        v282 = 487LL;
        goto LABEL_810;
      }
LABEL_805:
      v353[1] = 0;
      if ( v353[50] > v277 )
      {
        v225 = -2147418113;
        v282 = 495LL;
LABEL_810:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v282,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)v225,
          (int)v352);
        goto LABEL_811;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v417);
    }
    v284 = v391;
    v391 = 0LL;
    if ( v284 )
      CoTaskMemFree(v284);
    goto LABEL_216;
  }
  v35 = 0LL;
  pv = 0LL;
  v379 = 0;
  if ( a5 == eLoopbackConnector )
    goto LABEL_197;
  v29 = 0LL;
  v381 = 0LL;
  v26 = a5;
  if ( (unsigned __int64)(int)a5 >= *(_QWORD *)(v28 + 1792) )
    goto LABEL_760;
  v36 = *(_QWORD *)(v28 + 1800) + 96LL * (int)a5;
  if ( *(_BYTE *)(v36 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v36 + 56));
    lpCriticalSection = (LPCRITICAL_SECTION)(v36 + 56);
    v33 = 0LL;
    v402 = 0LL;
    v35 = 0LL;
    v403 = 0LL;
    v34 = 0;
    v31 = 0;
    v354 = 0;
    if ( *(int *)(v36 + 40) > 0 )
    {
      while ( 1 )
      {
        if ( v29 < 0 || v31 >= *(_DWORD *)(v36 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, v31);
          __debugbreak();
        }
        v37 = (volatile signed __int32 **)(v29 + *(_QWORD *)(v36 + 32));
        v380 = (__int64)v37;
        if ( (_DWORD)v35 == v34 )
        {
          if ( v34 )
          {
            v34 = 2 * v35;
            if ( (v35 & 0x40000000) != 0 )
              goto LABEL_668;
          }
          else
          {
            v34 = 1;
          }
          if ( (unsigned int)v34 > 0x7FFFFFFuLL
            || (v38 = _o__recalloc(v33, (unsigned int)v34, 16LL), (v33 = (volatile signed __int32 **)v38) == 0LL) )
          {
LABEL_668:
            v229 = 2147942414LL;
            v230 = 502LL;
            goto LABEL_670;
          }
          HIDWORD(v403) = v34;
          v402 = (volatile signed __int32 **)v38;
          v31 = v354;
          v37 = (volatile signed __int32 **)v380;
        }
        v39 = &v33[2 * (int)v35];
        if ( v39 )
        {
          *v39 = 0LL;
          v39[1] = 0LL;
          v40 = v37[1];
          if ( v40 )
          {
            _InterlockedIncrement(v40 + 2);
            v34 = HIDWORD(v403);
            LODWORD(v35) = v403;
            v33 = v402;
          }
          *v39 = *v37;
          v39[1] = v37[1];
        }
        v35 = (unsigned int)(v35 + 1);
        LODWORD(v403) = v35;
        v354 = ++v31;
        v29 += 16LL;
        if ( v31 >= *(_DWORD *)(v36 + 40) )
        {
          v29 = 0LL;
          break;
        }
      }
    }
    v34 = 0;
    if ( (int)v35 <= 0 )
    {
LABEL_31:
      if ( v33 )
      {
        if ( (int)v35 > 0 )
        {
          ++v33;
          v36 = (unsigned int)v35;
          do
          {
            v35 = (__int64)*v33;
            if ( *v33 && _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 8), 0xFFFFFFFF) == 1 )
            {
LABEL_675:
              (**(void (__fastcall ***)(volatile signed __int32 *))v35)((volatile signed __int32 *)v35);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v35);
            }
            v33 += 2;
            --v36;
          }
          while ( v36 );
          v33 = v402;
        }
        free(v33);
      }
      v32 = lpCriticalSection;
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
    }
    else
    {
      v29 = (__int64)v33;
      while ( 1 )
      {
        if ( v34 < 0 || v34 >= (int)v35 )
        {
          ATL::_AtlRaiseException(0xC000008C, v31);
          goto LABEL_675;
        }
        if ( *(_BYTE *)(*(_QWORD *)v29 + 20LL) )
        {
          v231 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                   &v402,
                                                   (unsigned int)v34);
          v232 = SystemEffectChainDescriptor::Resolve(*v231, (struct SystemEffectDescriptor *)v36);
          if ( v232 < 0 )
            break;
        }
        ++v34;
        v29 += 16LL;
        if ( v34 >= (int)v35 )
        {
          v29 = 0LL;
          goto LABEL_31;
        }
      }
      v229 = (unsigned int)v232;
      v230 = 508LL;
LABEL_670:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v230,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v229,
        (int)v352);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v402);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&lpCriticalSection);
      v29 = 0LL;
    }
  }
  if ( (unsigned __int64)(int)a5 >= *(_QWORD *)(v28 + 1808) )
    goto LABEL_760;
  v33 = (volatile signed __int32 **)(*(_QWORD *)(v28 + 1816) + 96LL * (int)a5);
  if ( *((_BYTE *)v33 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v33 + 7));
    v438 = (LPCRITICAL_SECTION)(v33 + 7);
    v35 = v29;
    v423 = (volatile signed __int32 *)v29;
    v41 = (unsigned int)v29;
    v424 = v29;
    v425 = v29;
    v34 = v29;
    if ( *((int *)v33 + 10) > 0 )
    {
      while ( 1 )
      {
        v233 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                 v33 + 4,
                 (unsigned int)v34);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v423,
                              v233) )
          break;
        if ( ++v34 >= *((_DWORD *)v33 + 10) )
        {
          v41 = v424;
          v35 = (__int64)v423;
          goto LABEL_44;
        }
      }
      v234 = 2147942414LL;
      v235 = 502LL;
    }
    else
    {
LABEL_44:
      v34 = v29;
      if ( (int)v41 <= 0 )
      {
LABEL_45:
        if ( v35 )
        {
          if ( (int)v41 > 0 )
          {
            v33 = (volatile signed __int32 **)v35;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v33);
              v33 += 2;
              --v41;
            }
            while ( v41 );
          }
          free((void *)v35);
        }
        v32 = v438;
        if ( v438 )
          LeaveCriticalSection(v438);
        goto LABEL_48;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                     &v423,
                                     (unsigned int)v34)
                      + 20LL) )
        {
          v236 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                   &v423,
                                                   (unsigned int)v34);
          v237 = SystemEffectChainDescriptor::Resolve(*v236, (struct SystemEffectDescriptor *)v33);
          if ( v237 < 0 )
            break;
        }
        if ( ++v34 >= (int)v41 )
          goto LABEL_45;
      }
      v234 = (unsigned int)v237;
      v235 = 508LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v235,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v234,
      (int)v352);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v423);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v438);
  }
LABEL_48:
  if ( (unsigned __int64)(int)a5 >= *(_QWORD *)(v28 + 1824) )
    goto LABEL_760;
  v42 = *(_QWORD *)(v28 + 1832) + 96LL * (int)a5;
  if ( *(_BYTE *)(v42 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v42 + 56));
    v439 = (LPCRITICAL_SECTION)(v42 + 56);
    v33 = (volatile signed __int32 **)v29;
    v404 = (volatile signed __int32 **)v29;
    v35 = (unsigned int)v29;
    v405 = 0LL;
    v34 = v29;
    v31 = v29;
    v355 = v29;
    if ( *(int *)(v42 + 40) > 0 )
    {
      while ( 1 )
      {
        if ( v29 < 0 || v31 >= *(_DWORD *)(v42 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, v31);
          __debugbreak();
        }
        v43 = (volatile signed __int32 **)(v29 + *(_QWORD *)(v42 + 32));
        v380 = (__int64)v43;
        if ( (_DWORD)v35 == v34 )
        {
          if ( v34 )
          {
            v34 = 2 * v35;
            if ( (v35 & 0x40000000) != 0 )
              goto LABEL_691;
          }
          else
          {
            v34 = 1;
          }
          if ( (unsigned int)v34 > 0x7FFFFFFuLL
            || (v44 = _o__recalloc(v33, (unsigned int)v34, 16LL), (v33 = (volatile signed __int32 **)v44) == 0LL) )
          {
LABEL_691:
            v238 = 2147942414LL;
            v239 = 502LL;
            goto LABEL_693;
          }
          HIDWORD(v405) = v34;
          v404 = (volatile signed __int32 **)v44;
          v31 = v355;
          v43 = (volatile signed __int32 **)v380;
        }
        v45 = &v33[2 * (int)v35];
        if ( v45 )
        {
          *v45 = 0LL;
          v45[1] = 0LL;
          v46 = v43[1];
          if ( v46 )
          {
            _InterlockedIncrement(v46 + 2);
            v34 = HIDWORD(v405);
            LODWORD(v35) = v405;
            v33 = v404;
          }
          *v45 = *v43;
          v45[1] = v43[1];
        }
        v35 = (unsigned int)(v35 + 1);
        LODWORD(v405) = v35;
        v355 = ++v31;
        v29 += 16LL;
        if ( v31 >= *(_DWORD *)(v42 + 40) )
        {
          v29 = 0LL;
          break;
        }
      }
    }
    v34 = v29;
    if ( (int)v35 <= 0 )
    {
LABEL_72:
      if ( v33 )
      {
        if ( (int)v35 > 0 )
        {
          ++v33;
          v42 = (unsigned int)v35;
          do
          {
            v35 = (__int64)*v33;
            if ( *v33 && _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 8), 0xFFFFFFFF) == 1 )
            {
LABEL_698:
              (**(void (__fastcall ***)(volatile signed __int32 *))v35)((volatile signed __int32 *)v35);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v35);
            }
            v33 += 2;
            --v42;
          }
          while ( v42 );
          v33 = v404;
        }
        free(v33);
      }
      v32 = v439;
      if ( v439 )
        LeaveCriticalSection(v439);
    }
    else
    {
      v29 = (__int64)v33;
      while ( 1 )
      {
        if ( v34 < 0 || v34 >= (int)v35 )
        {
          ATL::_AtlRaiseException(0xC000008C, v31);
          goto LABEL_698;
        }
        if ( *(_BYTE *)(*(_QWORD *)v29 + 20LL) )
        {
          v240 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                   &v404,
                                                   (unsigned int)v34);
          v241 = SystemEffectChainDescriptor::Resolve(*v240, (struct SystemEffectDescriptor *)v42);
          if ( v241 < 0 )
            break;
        }
        ++v34;
        v29 += 16LL;
        if ( v34 >= (int)v35 )
        {
          v29 = 0LL;
          goto LABEL_72;
        }
      }
      v238 = (unsigned int)v241;
      v239 = 508LL;
LABEL_693:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v239,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v238,
        (int)v352);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v404);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v439);
      v29 = 0LL;
    }
  }
  if ( (unsigned __int64)(int)a5 >= *(_QWORD *)(v28 + 64) )
    goto LABEL_760;
  if ( !*(_DWORD *)(*(_QWORD *)(v28 + 72) + 4LL * (int)a5) )
  {
    v260 = v381;
    v381 = (struct ICompositeSystemEffect *)v29;
    if ( v260 )
      (*(void (__fastcall **)(struct ICompositeSystemEffect *))(*(_QWORD *)v260 + 16LL))(v260);
    v34 = a5;
    Lfx = CEndpointCharacteristics::GetLfx((CEndpointCharacteristics *)v28, a5, &v381, 0LL, v352);
    if ( Lfx < 0 )
    {
      v259 = 324LL;
      goto LABEL_757;
    }
    goto LABEL_759;
  }
  v32 = v381;
  v381 = (struct ICompositeSystemEffect *)v29;
  if ( v32 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v32 + 16LL))(v32);
  v47 = *v386;
  v381 = (struct ICompositeSystemEffect *)v29;
  if ( (unsigned __int64)(int)a5 >= *(_QWORD *)(v28 + 1792) )
    goto LABEL_760;
  v48 = *(_QWORD *)(v28 + 1800) + 96LL * (int)a5;
  if ( *(_BYTE *)(v48 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v48 + 56));
    v440 = (LPCRITICAL_SECTION)(v48 + 56);
    v33 = (volatile signed __int32 **)v29;
    v406 = (volatile signed __int32 **)v29;
    v35 = (unsigned int)v29;
    v407 = 0LL;
    v34 = v29;
    v31 = v29;
    v356 = v29;
    if ( *(int *)(v48 + 40) > 0 )
    {
      while ( 1 )
      {
        if ( v29 < 0 || v31 >= *(_DWORD *)(v48 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, v31);
          __debugbreak();
        }
        v49 = (volatile signed __int32 **)(v29 + *(_QWORD *)(v48 + 32));
        v380 = (__int64)v49;
        if ( (_DWORD)v35 == v34 )
        {
          if ( v34 )
          {
            v34 = 2 * v35;
            if ( (v35 & 0x40000000) != 0 )
              goto LABEL_700;
          }
          else
          {
            v34 = 1;
          }
          if ( (unsigned int)v34 > 0x7FFFFFFuLL
            || (v50 = _o__recalloc(v33, (unsigned int)v34, 16LL), (v33 = (volatile signed __int32 **)v50) == 0LL) )
          {
LABEL_700:
            v242 = 2147942414LL;
            v243 = 502LL;
            goto LABEL_702;
          }
          HIDWORD(v407) = v34;
          v406 = (volatile signed __int32 **)v50;
          v31 = v356;
          v49 = (volatile signed __int32 **)v380;
        }
        v51 = &v33[2 * (int)v35];
        if ( v51 )
        {
          *v51 = 0LL;
          v51[1] = 0LL;
          v52 = v49[1];
          if ( v52 )
          {
            _InterlockedIncrement(v52 + 2);
            v34 = HIDWORD(v407);
            LODWORD(v35) = v407;
            v33 = v406;
          }
          *v51 = *v49;
          v51[1] = v49[1];
        }
        v35 = (unsigned int)(v35 + 1);
        LODWORD(v407) = v35;
        v356 = ++v31;
        v29 += 16LL;
        if ( v31 >= *(_DWORD *)(v48 + 40) )
        {
          v29 = 0LL;
          break;
        }
      }
    }
    v34 = v29;
    if ( (int)v35 <= 0 )
    {
LABEL_110:
      if ( v33 )
      {
        if ( (int)v35 > 0 )
        {
          ++v33;
          v48 = (unsigned int)v35;
          do
          {
            v35 = (__int64)*v33;
            if ( *v33 && _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 8), 0xFFFFFFFF) == 1 )
            {
LABEL_707:
              (**(void (__fastcall ***)(volatile signed __int32 *))v35)((volatile signed __int32 *)v35);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v35);
            }
            v33 += 2;
            --v48;
          }
          while ( v48 );
          v33 = v406;
        }
        free(v33);
      }
      v32 = v440;
      if ( v440 )
        LeaveCriticalSection(v440);
    }
    else
    {
      v29 = (__int64)v33;
      while ( 1 )
      {
        if ( v34 < 0 || v34 >= (int)v35 )
        {
          ATL::_AtlRaiseException(0xC000008C, v31);
          goto LABEL_707;
        }
        if ( *(_BYTE *)(*(_QWORD *)v29 + 20LL) )
        {
          v244 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                   &v406,
                                                   (unsigned int)v34);
          v245 = SystemEffectChainDescriptor::Resolve(*v244, (struct SystemEffectDescriptor *)v48);
          if ( v245 < 0 )
            break;
        }
        ++v34;
        v29 += 16LL;
        if ( v34 >= (int)v35 )
        {
          v29 = 0LL;
          goto LABEL_110;
        }
      }
      v242 = (unsigned int)v245;
      v243 = 508LL;
LABEL_702:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v243,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v242,
        (int)v352);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v406);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v440);
      v29 = 0LL;
    }
  }
  if ( (unsigned __int64)(int)a5 >= *(_QWORD *)(v28 + 1808) )
    goto LABEL_760;
  v33 = (volatile signed __int32 **)(*(_QWORD *)(v28 + 1816) + 96LL * (int)a5);
  if ( *((_BYTE *)v33 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v33 + 7));
    v441 = (LPCRITICAL_SECTION)(v33 + 7);
    v35 = v29;
    v426 = (volatile signed __int32 *)v29;
    v53 = (unsigned int)v29;
    v427 = v29;
    v428 = v29;
    v34 = v29;
    if ( *((int *)v33 + 10) > 0 )
    {
      while ( 1 )
      {
        v246 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                 v33 + 4,
                 (unsigned int)v34);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v426,
                              v246) )
          break;
        if ( ++v34 >= *((_DWORD *)v33 + 10) )
        {
          v53 = v427;
          v35 = (__int64)v426;
          goto LABEL_123;
        }
      }
      v247 = 2147942414LL;
      v248 = 502LL;
    }
    else
    {
LABEL_123:
      v34 = v29;
      if ( (int)v53 <= 0 )
      {
LABEL_124:
        if ( v35 )
        {
          if ( (int)v53 > 0 )
          {
            v33 = (volatile signed __int32 **)v35;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v33);
              v33 += 2;
              --v53;
            }
            while ( v53 );
          }
          free((void *)v35);
        }
        v32 = v441;
        if ( v441 )
          LeaveCriticalSection(v441);
        goto LABEL_127;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                     &v426,
                                     (unsigned int)v34)
                      + 20LL) )
        {
          v249 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                   &v426,
                                                   (unsigned int)v34);
          v250 = SystemEffectChainDescriptor::Resolve(*v249, (struct SystemEffectDescriptor *)v33);
          if ( v250 < 0 )
            break;
        }
        if ( ++v34 >= (int)v53 )
          goto LABEL_124;
      }
      v247 = (unsigned int)v250;
      v248 = 508LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v248,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v247,
      (int)v352);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v426);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v441);
  }
LABEL_127:
  if ( (unsigned __int64)(int)a5 >= *(_QWORD *)(v28 + 1824) )
    goto LABEL_760;
  v54 = *(_QWORD *)(v28 + 1832) + 96LL * (int)a5;
  if ( *(_BYTE *)(v54 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v54 + 56));
    v442 = (LPCRITICAL_SECTION)(v54 + 56);
    v33 = (volatile signed __int32 **)v29;
    v408 = (volatile signed __int32 **)v29;
    v35 = (unsigned int)v29;
    v409 = 0LL;
    v34 = v29;
    v31 = v29;
    v357 = v29;
    if ( *(int *)(v54 + 40) > 0 )
    {
      while ( 1 )
      {
        if ( v29 < 0 || v31 >= *(_DWORD *)(v54 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, v31);
          __debugbreak();
        }
        v55 = (volatile signed __int32 **)(v29 + *(_QWORD *)(v54 + 32));
        v380 = (__int64)v55;
        if ( (_DWORD)v35 == v34 )
        {
          if ( v34 )
          {
            v34 = 2 * v35;
            if ( (v35 & 0x40000000) != 0 )
              goto LABEL_723;
          }
          else
          {
            v34 = 1;
          }
          if ( (unsigned int)v34 > 0x7FFFFFFuLL
            || (v56 = _o__recalloc(v33, (unsigned int)v34, 16LL), (v33 = (volatile signed __int32 **)v56) == 0LL) )
          {
LABEL_723:
            v251 = 2147942414LL;
            v252 = 502LL;
            goto LABEL_725;
          }
          HIDWORD(v409) = v34;
          v408 = (volatile signed __int32 **)v56;
          v31 = v357;
          v55 = (volatile signed __int32 **)v380;
        }
        v57 = &v33[2 * (int)v35];
        if ( v57 )
        {
          *v57 = 0LL;
          v57[1] = 0LL;
          v58 = v55[1];
          if ( v58 )
          {
            _InterlockedIncrement(v58 + 2);
            v34 = HIDWORD(v409);
            LODWORD(v35) = v409;
            v33 = v408;
          }
          *v57 = *v55;
          v57[1] = v55[1];
        }
        v35 = (unsigned int)(v35 + 1);
        LODWORD(v409) = v35;
        v357 = ++v31;
        v29 += 16LL;
        if ( v31 >= *(_DWORD *)(v54 + 40) )
        {
          v29 = 0LL;
          break;
        }
      }
    }
    v34 = v29;
    if ( (int)v35 <= 0 )
    {
LABEL_150:
      if ( v33 )
      {
        if ( (int)v35 > 0 )
        {
          ++v33;
          v54 = (unsigned int)v35;
          do
          {
            v35 = (__int64)*v33;
            if ( *v33 && _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 8), 0xFFFFFFFF) == 1 )
            {
LABEL_730:
              (**(void (__fastcall ***)(volatile signed __int32 *))v35)((volatile signed __int32 *)v35);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v35);
            }
            v33 += 2;
            --v54;
          }
          while ( v54 );
          v33 = v408;
        }
        free(v33);
      }
      v32 = v442;
      if ( v442 )
        LeaveCriticalSection(v442);
    }
    else
    {
      v29 = (__int64)v33;
      while ( 1 )
      {
        if ( v34 < 0 || v34 >= (int)v35 )
        {
          ATL::_AtlRaiseException(0xC000008C, v31);
          goto LABEL_730;
        }
        if ( *(_BYTE *)(*(_QWORD *)v29 + 20LL) )
        {
          v253 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                   &v408,
                                                   (unsigned int)v34);
          v254 = SystemEffectChainDescriptor::Resolve(*v253, (struct SystemEffectDescriptor *)v54);
          if ( v254 < 0 )
            break;
        }
        ++v34;
        v29 += 16LL;
        if ( v34 >= (int)v35 )
          goto LABEL_150;
      }
      v251 = (unsigned int)v254;
      v252 = 508LL;
LABEL_725:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v252,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v251,
        (int)v352);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v408);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v442);
    }
  }
  if ( (unsigned __int64)(int)a5 >= *(_QWORD *)(v28 + 64) )
    goto LABEL_760;
  if ( !*(_DWORD *)(*(_QWORD *)(v28 + 72) + 4LL * (int)a5) )
    goto LABEL_758;
  if ( (unsigned __int64)(int)a5 >= *(_QWORD *)(v28 + 1792) )
    goto LABEL_760;
  v29 = 96LL * (int)a5;
  v33 = (volatile signed __int32 **)(v29 + *(_QWORD *)(v28 + 1800));
  if ( !*(_QWORD *)(v28 + 80) )
  {
LABEL_167:
    v121 = *((_BYTE *)v33 + 52) == 0;
    v488 = v47;
    v471 = v47;
    if ( !v121 )
    {
      v59 = 0;
      if ( *((int *)v33 + 10) > 0 )
      {
        v60 = 0LL;
        while ( 1 )
        {
          if ( v59 < 0 || v59 >= *((_DWORD *)v33 + 10) )
          {
            ATL::_AtlRaiseException(0xC000008C, v31);
            __debugbreak();
          }
          if ( *(_BYTE *)(*(_QWORD *)&v33[4][v60] + 20LL) )
          {
            v255 = (__int64 **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                 v33 + 4,
                                 (unsigned int)v59);
            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v255, &v471) != -1 )
              break;
          }
          ++v59;
          v60 += 4LL;
          if ( v59 >= *((_DWORD *)v33 + 10) )
            goto LABEL_174;
        }
        v35 = (__int64)(v33 + 7);
        EnterCriticalSection((LPCRITICAL_SECTION)(v33 + 7));
        v456 = (struct _RTL_CRITICAL_SECTION *)(v33 + 7);
        v256 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                 v33 + 4,
                 (unsigned int)v59);
        std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v482, v256, v257);
        if ( (int)SystemEffectChainDescriptor::Resolve(v482, (struct SystemEffectDescriptor *)v33) < 0 )
        {
          if ( v483 )
            std::_Ref_count_base::_Decref(v483);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v456);
LABEL_740:
          v258 = (__int64 *)v33[2];
          if ( v258 )
          {
            v34 = a5;
            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v258, &v488) == -1 )
              goto LABEL_759;
LABEL_188:
            if ( (unsigned __int64)(int)a5 < *(_QWORD *)(v28 + 1792) )
            {
              v68 = v29 + *(_QWORD *)(v28 + 1800);
              *(struct _GUID *)v493 = v47;
              v29 = 0LL;
              LODWORD(v33) = 1;
              Lfx = CEndpointCharacteristics::GetInitializedSystemEffectInterface(
                      (CEndpointCharacteristics *)v28,
                      v68,
                      1,
                      0,
                      (__int128 *)v493,
                      0,
                      0,
                      v34,
                      &v381,
                      0LL,
                      0LL);
              if ( Lfx >= 0 )
                goto LABEL_190;
              v259 = 319LL;
LABEL_757:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v259,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)Lfx,
                (int)v352);
              v225 = Lfx;
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v381);
LABEL_791:
              v272 = pv;
              pv = (LPVOID)v29;
              goto LABEL_825;
            }
LABEL_760:
            _o_terminate(v32);
LABEL_761:
            v261 = v72 - 1;
            if ( v261 )
            {
              if ( v261 != 1 )
              {
                v225 = -2147024809;
                v262 = 456LL;
                goto LABEL_790;
              }
              v73 = 3;
              v263 = (unsigned int *)CoTaskMemAlloc(0x150uLL);
              v353 = v263;
              if ( v263 )
              {
                memset_0(v263, 0, 0x150uLL);
                v264 = v35;
                LOBYTE(v264) = v34 != 2;
                *v353 = v264 + 1;
                v353[34] = v26;
                *((_QWORD *)v353 + 18) = v35;
                v353[50] = 3;
                *((GUID *)v353 + 18) = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
                *((GUID *)v353 + 19) = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
                *((GUID *)v353 + 20) = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
                v353[40] = v35;
                goto LABEL_211;
              }
              v262 = 439LL;
            }
            else
            {
              v73 = v379 + 2;
              v265 = 16 * (v379 + 2 + 18LL);
              v266 = (unsigned int *)CoTaskMemAlloc(v265);
              v353 = v266;
              if ( v266 )
              {
                memset_0(v266, 0, v265);
                *v353 = (unsigned int)v33;
                v353[34] = v26;
                v35 = 0LL;
                *((_QWORD *)v353 + 18) = 0LL;
                v353[40] = 0;
                v353[50] = 0;
                *((_QWORD *)v353 + 34) = a23;
                *((_QWORD *)v353 + 35) = a24;
                if ( a22 )
                  *((_QWORD *)v353 + 33) = a19;
                v267 = 0;
                if ( !v379 )
                {
LABEL_773:
                  *(GUID *)&v353[4 * v353[50]++ + 72] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
                  v269 = v353;
                  *(GUID *)&v353[4 * v353[50] + 72] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
                  goto LABEL_786;
                }
                while ( 1 )
                {
                  v268 = v353[50];
                  if ( v268 > 0x1F )
                    break;
                  v353[40] |= (_DWORD)v33 << v268;
                  *(_OWORD *)&v353[4 * v353[50]++ + 72] = *((_OWORD *)pv + v267);
                  if ( ++v267 >= v379 )
                    goto LABEL_773;
                }
                v225 = -2147418113;
                v262 = 420LL;
                goto LABEL_790;
              }
              v262 = 404LL;
            }
LABEL_789:
            v225 = -2147024882;
            goto LABEL_790;
          }
LABEL_758:
          v34 = a5;
          goto LABEL_759;
        }
        if ( v483 )
          std::_Ref_count_base::_Decref(v483);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v456);
      }
    }
LABEL_174:
    v61 = 0;
    v35 = *((unsigned int *)v33 + 10);
    if ( (int)v35 > 0 )
    {
      v62 = 0LL;
      while ( 1 )
      {
        if ( v62 < 0 || v61 >= (int)v35 )
        {
          ATL::_AtlRaiseException(0xC000008C, v61);
          __debugbreak();
        }
        v63 = *(__int64 **)&v33[4][v62];
        v64 = 0;
        v65 = *((_DWORD *)v63 + 2);
        if ( v65 > 0 )
        {
          v66 = *v63;
          while ( 1 )
          {
            v32 = (void *)(2LL * v64);
            v67 = *(_QWORD *)(v66 + 16LL * v64) - *(_QWORD *)&v471.Data1;
            if ( !v67 )
              v67 = *(_QWORD *)(v66 + 16LL * v64 + 8) - *(_QWORD *)v471.Data4;
            if ( !v67 )
              break;
            if ( ++v64 >= v65 )
              goto LABEL_748;
          }
          if ( v64 != -1 )
            break;
        }
LABEL_748:
        ++v61;
        v62 += 4LL;
        if ( v61 >= (int)v35 )
          goto LABEL_740;
      }
      if ( v61 != -1 )
      {
        if ( v61 < 0 || v61 >= (int)v35 )
        {
          ATL::_AtlRaiseException(0xC000008C, v61);
          __debugbreak();
        }
        v34 = a5;
        if ( !*(_QWORD *)&v33[4][4 * v61] )
          goto LABEL_759;
        goto LABEL_188;
      }
    }
    goto LABEL_740;
  }
  *(_OWORD *)pvar = 0LL;
  v462 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**(_QWORD **)(v28 + 80) + 40LL))(
         *(_QWORD *)(v28 + 80),
         &PKEY_AudioEndpoint_Disable_SysFx,
         pvar) < 0
    || LOWORD(pvar[0]) != 19
    || !LODWORD(pvar[1]) )
  {
    PropVariantClear(pvar);
    goto LABEL_167;
  }
  PropVariantClear(pvar);
  v34 = a5;
  if ( a5 == eKeywordDetectorConnector )
    goto LABEL_167;
  v492 = v47;
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)v33, &v492) != -1 )
    goto LABEL_188;
LABEL_759:
  LODWORD(v33) = 1;
LABEL_190:
  v35 = 0LL;
  if ( v381 )
  {
    v70 = *(void (__fastcall **)(struct ICompositeSystemEffect *, unsigned int *, void **))(*(_QWORD *)v381 + 32LL);
    p_pv = &pv;
    v476 = 0LL;
    v477 = 1;
    v70(v381, &v379, &v476);
    if ( v477 )
    {
      v71 = *p_pv;
      *p_pv = v476;
      if ( v71 )
        CoTaskMemFree(v71);
    }
  }
  if ( v381 )
    (*(void (__fastcall **)(struct ICompositeSystemEffect *))(*(_QWORD *)v381 + 16LL))(v381);
  v29 = a15;
  v26 = a3;
LABEL_197:
  v72 = v383;
  if ( v383 )
    goto LABEL_761;
  v73 = v379 + 4;
  v74 = 16 * (v379 + 4 + 18LL);
  v75 = (unsigned int *)CoTaskMemAlloc(v74);
  v353 = v75;
  if ( !v75 )
  {
    v262 = 338LL;
    goto LABEL_789;
  }
  memset_0(v75, 0, v74);
  v35 = 0LL;
  *v353 = 0;
  v353[34] = v26;
  *((_QWORD *)v353 + 18) = 0LL;
  v353[50] = 0;
  v353[40] = 0;
  if ( a21 )
  {
    v270 = v353[50];
    if ( v270 <= 0x1F )
    {
      v353[40] |= 1 << v270;
      *(GUID *)&v353[4 * v353[50]++ + 72] = GUID_7bf2a436_2a30_4797_90ee_0f66b8426d75;
      goto LABEL_209;
    }
    v225 = -2147418113;
    v262 = 350LL;
    goto LABEL_790;
  }
  v76 = 0;
  if ( !v379 )
    goto LABEL_208;
  do
  {
    v77 = *((_QWORD *)pv + 2 * v76) - *(_QWORD *)&GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data1;
    if ( !v77 )
      v77 = *((_QWORD *)pv + 2 * v76 + 1) - *(_QWORD *)GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data4;
    if ( v77
      || !(unsigned __int8)IsGetDefaultSpatialRenderingModePresent()
      || RpcImpersonateClient(0LL) < 0
      || (v271 = IsVirtualSurroundAllowedForProcess(a9), RpcRevertToSelf(), v271) )
    {
      v78 = v353[50];
      if ( v78 <= 0x1F )
      {
        v353[40] |= 1 << v78;
        *(_OWORD *)&v353[4 * v353[50]++ + 72] = *((_OWORD *)pv + v76);
        goto LABEL_206;
      }
      v225 = -2147418113;
      v262 = 373LL;
LABEL_790:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v262,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v225,
        (int)v352);
      v29 = 0LL;
      goto LABEL_791;
    }
LABEL_206:
    ++v76;
  }
  while ( v76 < v379 );
  v35 = 0LL;
LABEL_208:
  v26 = a3;
LABEL_209:
  *(GUID *)&v353[4 * v353[50]++ + 72] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
  *(GUID *)&v353[4 * v353[50]++ + 72] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
  *(GUID *)&v353[4 * v353[50]++ + 72] = GUID_07252659_bb6b_4b79_b78b_623f6699a579;
  if ( !a21 && a20 && CoGetPSClsid(&GUID_dc493d8a_c0ca_481c_88af_f832a73aaa21, &pClsid) >= 0 )
  {
    v269 = v353;
    *(GUID *)&v353[4 * v353[50] + 72] = GUID_122595e5_20a2_47d3_8604_4a613ff6cca7;
LABEL_786:
    ++v269[50];
  }
LABEL_211:
  v353[1] = (unsigned int)v26 >> 31;
  if ( v353[50] > v73 )
  {
    v225 = -2147418113;
    v262 = 460LL;
    goto LABEL_790;
  }
  v79 = pv;
  pv = (LPVOID)v35;
  if ( v79 )
    CoTaskMemFree(v79);
  v30 = v454;
LABEL_215:
  v34 = a5;
LABEL_216:
  v80 = v386;
  *(struct _GUID *)(v353 + 41) = *v386;
  *(_OWORD *)(v353 + 45) = *a8;
  v353[2] = v34;
  *((_QWORD *)v353 + 16) = a10;
  v353[30] = *(unsigned __int16 *)(a10 + 16) + 18;
  *((_QWORD *)v353 + 3) = a12;
  *((_QWORD *)v353 + 4) = a13;
  v353[3] = a9;
  *((_QWORD *)v353 + 2) = a14;
  v81 = a17;
  if ( !a17 )
    v81 = &GUID_00000000_0000_0000_0000_000000000000;
  *((GUID *)v353 + 3) = *v81;
  v82 = *(_OWORD *)(a18 + 16);
  v83 = *(_OWORD *)(a18 + 32);
  v84 = *(_QWORD *)(a18 + 48);
  *((_OWORD *)v353 + 13) = *(_OWORD *)a18;
  *((_OWORD *)v353 + 14) = v82;
  *((_OWORD *)v353 + 15) = v83;
  *((_QWORD *)v353 + 32) = v84;
  *((_QWORD *)v353 + 14) = a19;
  *((GUID *)v353 + 4) = GUID_00000000_0000_0000_0000_000000000000;
  if ( v29 )
  {
    v85 = *(_QWORD *)v29 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)v29 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v85 = *(_QWORD *)(v29 + 8) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v85 )
    {
      rclsid = *(IID *)v29;
      ContainerProperty = GetContainerProperty(&rclsid, &PKEY_Audio_CPMemoryManager, (struct _GUID *)v353 + 4);
      v286 = ContainerProperty;
      if ( ContainerProperty < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x212,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)ContainerProperty,
          (int)v352);
        v225 = v286;
        goto LABEL_654;
      }
      v80 = v386;
    }
    *((GUID *)v353 + 5) = GUID_00000000_0000_0000_0000_000000000000;
    v86 = *(_QWORD *)v29 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)v29 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v86 = *(_QWORD *)(v29 + 8) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v86 )
    {
      v495 = *(IID *)v29;
      v287 = GetContainerProperty(&v495, &PKEY_Audio_CPEventManager, (struct _GUID *)v353 + 5);
      v288 = v287;
      if ( v287 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x219,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v287,
          (int)v352);
        v225 = v288;
        goto LABEL_654;
      }
      v80 = v386;
    }
  }
  else
  {
    *((GUID *)v353 + 5) = GUID_00000000_0000_0000_0000_000000000000;
  }
  v32 = a16;
  if ( a16 )
  {
    v87 = *a16 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *a16 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v87 = a16[1] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v87 )
      *((_OWORD *)v353 + 6) = *(_OWORD *)a16;
  }
LABEL_230:
  if ( !v30 )
    goto LABEL_1006;
  v88 = 0LL;
  v393 = 0LL;
  v384 = 0;
  v392 = 0LL;
  v416 = 0LL;
  v89 = *v80;
  v416 = 0LL;
  v392 = 0LL;
  v90 = v34;
  if ( (unsigned __int64)v34 >= *(_QWORD *)(v28 + 1792) )
    goto LABEL_1005;
  v30 = *(_QWORD *)(v28 + 1800) + 96LL * v34;
  if ( *(_BYTE *)(v30 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v30 + 56));
    v443 = (LPCRITICAL_SECTION)(v30 + 56);
    v91 = 0LL;
    v410 = 0LL;
    v92 = 0LL;
    v411 = 0LL;
    v93 = 0;
    v94 = 0;
    v358 = 0;
    if ( *(int *)(v30 + 40) > 0 )
    {
      while ( 1 )
      {
        if ( (__int64)v88 < 0 || v94 >= *(_DWORD *)(v30 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, v94);
          __debugbreak();
        }
        v95 = (volatile signed __int32 **)((char *)v88 + *(_QWORD *)(v30 + 32));
        v371 = v95;
        if ( (_DWORD)v92 == v93 )
        {
          if ( v93 )
          {
            v93 = 2 * (_DWORD)v92;
            if ( ((unsigned int)v92 & 0x40000000) != 0 )
              goto LABEL_829;
          }
          else
          {
            v93 = 1;
          }
          if ( v93 > 0x7FFFFFFuLL
            || (v96 = _o__recalloc(v91, v93, 16LL), (v91 = (volatile signed __int32 **)v96) == 0LL) )
          {
LABEL_829:
            v289 = 2147942414LL;
            v290 = 502LL;
            goto LABEL_831;
          }
          HIDWORD(v411) = v93;
          v410 = (volatile signed __int32 **)v96;
          v94 = v358;
          v95 = v371;
        }
        v97 = &v91[2 * (int)v92];
        if ( v97 )
        {
          *v97 = 0LL;
          v97[1] = 0LL;
          v98 = v95[1];
          if ( v98 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v98 + 8));
            v93 = HIDWORD(v411);
            LODWORD(v92) = v411;
            v91 = v410;
          }
          *v97 = (volatile signed __int32 *)*v95;
          v97[1] = (volatile signed __int32 *)v95[1];
        }
        v92 = (volatile signed __int32 *)(unsigned int)((_DWORD)v92 + 1);
        LODWORD(v411) = (_DWORD)v92;
        v358 = ++v94;
        v88 += 2;
        if ( v94 >= *(_DWORD *)(v30 + 40) )
        {
          v88 = 0LL;
          break;
        }
      }
    }
    v99 = 0;
    if ( (int)v92 <= 0 )
    {
LABEL_255:
      if ( v91 )
      {
        if ( (int)v92 > 0 )
        {
          ++v91;
          v30 = (unsigned int)v92;
          do
          {
            v92 = *v91;
            if ( *v91 && _InterlockedExchangeAdd(v92 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_836:
              (**(void (__fastcall ***)(volatile signed __int32 *))v92)(v92);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v92);
            }
            v91 += 2;
            --v30;
          }
          while ( v30 );
          v91 = v410;
        }
        free(v91);
      }
      v32 = v443;
      if ( v443 )
        LeaveCriticalSection(v443);
    }
    else
    {
      v88 = v91;
      while ( 1 )
      {
        if ( v99 < 0 || v99 >= (int)v92 )
        {
          ATL::_AtlRaiseException(0xC000008C, v94);
          goto LABEL_836;
        }
        if ( *((_BYTE *)*v88 + 20) )
        {
          v291 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                   &v410,
                                                   (unsigned int)v99);
          v292 = SystemEffectChainDescriptor::Resolve(*v291, (struct SystemEffectDescriptor *)v30);
          if ( v292 < 0 )
            break;
        }
        ++v99;
        v88 += 2;
        if ( v99 >= (int)v92 )
        {
          v88 = 0LL;
          goto LABEL_255;
        }
      }
      v289 = (unsigned int)v292;
      v290 = 508LL;
LABEL_831:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v290,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v289,
        (int)v352);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v410);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v443);
      v88 = 0LL;
    }
  }
  if ( v90 >= *(_QWORD *)(v28 + 1808) )
    goto LABEL_1005;
  v100 = *(_QWORD *)(v28 + 1816) + 96 * v90;
  if ( *(_BYTE *)(v100 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v100 + 56));
    v444 = (LPCRITICAL_SECTION)(v100 + 56);
    v101 = v88;
    v420 = v88;
    v30 = (unsigned int)v88;
    v421 = (unsigned int)v88;
    v422 = (int)v88;
    v102 = (unsigned int)v88;
    if ( *(int *)(v100 + 40) > 0 )
    {
      while ( 1 )
      {
        v293 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                 v100 + 32,
                 v102);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v420,
                              v293) )
          break;
        if ( (signed int)++v102 >= *(_DWORD *)(v100 + 40) )
        {
          v30 = v421;
          v101 = v420;
          goto LABEL_268;
        }
      }
      v294 = 2147942414LL;
      v295 = 502LL;
    }
    else
    {
LABEL_268:
      v103 = (unsigned int)v88;
      if ( (int)v30 <= 0 )
      {
LABEL_269:
        if ( v101 )
        {
          if ( (int)v30 > 0 )
          {
            v298 = v101;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v298);
              v298 += 2;
              --v30;
            }
            while ( v30 );
          }
          free(v101);
        }
        v32 = v444;
        if ( v444 )
          LeaveCriticalSection(v444);
        goto LABEL_272;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                     &v420,
                                     v103)
                      + 20LL) )
        {
          v296 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                   &v420,
                                                   v103);
          v297 = SystemEffectChainDescriptor::Resolve(*v296, (struct SystemEffectDescriptor *)v100);
          if ( v297 < 0 )
            break;
        }
        if ( (int)++v103 >= (int)v30 )
          goto LABEL_269;
      }
      v294 = (unsigned int)v297;
      v295 = 508LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v295,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v294,
      (int)v352);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v420);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v444);
  }
LABEL_272:
  if ( v90 >= *(_QWORD *)(v28 + 1824) )
    goto LABEL_1005;
  v30 = *(_QWORD *)(v28 + 1832) + 96 * v90;
  if ( *(_BYTE *)(v30 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v30 + 56));
    v445 = (LPCRITICAL_SECTION)(v30 + 56);
    v104 = v88;
    v412 = v88;
    v105 = (volatile signed __int32 *)(unsigned int)v88;
    v413 = 0LL;
    v106 = (unsigned int)v88;
    v107 = (int)v88;
    v359 = (int)v88;
    if ( *(int *)(v30 + 40) > 0 )
    {
      while ( 1 )
      {
        if ( (__int64)v88 < 0 || v107 >= *(_DWORD *)(v30 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, v107);
          __debugbreak();
        }
        v108 = (volatile signed __int32 **)((char *)v88 + *(_QWORD *)(v30 + 32));
        v372 = v108;
        if ( (_DWORD)v105 == v106 )
        {
          if ( v106 )
          {
            v106 = 2 * (_DWORD)v105;
            if ( ((unsigned int)v105 & 0x40000000) != 0 )
              goto LABEL_852;
          }
          else
          {
            v106 = 1;
          }
          if ( v106 > 0x7FFFFFFuLL
            || (v109 = _o__recalloc(v104, v106, 16LL), (v104 = (volatile signed __int32 **)v109) == 0LL) )
          {
LABEL_852:
            v299 = 2147942414LL;
            v300 = 502LL;
            goto LABEL_854;
          }
          HIDWORD(v413) = v106;
          v412 = (volatile signed __int32 **)v109;
          v107 = v359;
          v108 = v372;
        }
        v110 = &v104[2 * (int)v105];
        if ( v110 )
        {
          *v110 = 0LL;
          v110[1] = 0LL;
          v111 = v108[1];
          if ( v111 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v111 + 8));
            v106 = HIDWORD(v413);
            LODWORD(v105) = v413;
            v104 = v412;
          }
          *v110 = (volatile signed __int32 *)*v108;
          v110[1] = (volatile signed __int32 *)v108[1];
        }
        v105 = (volatile signed __int32 *)(unsigned int)((_DWORD)v105 + 1);
        LODWORD(v413) = (_DWORD)v105;
        v359 = ++v107;
        v88 += 2;
        if ( v107 >= *(_DWORD *)(v30 + 40) )
        {
          v88 = 0LL;
          break;
        }
      }
    }
    v112 = (int)v88;
    if ( (int)v105 <= 0 )
    {
LABEL_296:
      if ( v104 )
      {
        if ( (int)v105 > 0 )
        {
          ++v104;
          v30 = (unsigned int)v105;
          do
          {
            v105 = *v104;
            if ( *v104 && _InterlockedExchangeAdd(v105 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_859:
              (**(void (__fastcall ***)(volatile signed __int32 *))v105)(v105);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v105);
            }
            v104 += 2;
            --v30;
          }
          while ( v30 );
          v104 = v412;
        }
        free(v104);
      }
      v32 = v445;
      if ( v445 )
        LeaveCriticalSection(v445);
    }
    else
    {
      v88 = v104;
      while ( 1 )
      {
        if ( v112 < 0 || v112 >= (int)v105 )
        {
          ATL::_AtlRaiseException(0xC000008C, v107);
          goto LABEL_859;
        }
        if ( *((_BYTE *)*v88 + 20) )
        {
          v301 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                   &v412,
                                                   (unsigned int)v112);
          v302 = SystemEffectChainDescriptor::Resolve(*v301, (struct SystemEffectDescriptor *)v30);
          if ( v302 < 0 )
            break;
        }
        ++v112;
        v88 += 2;
        if ( v112 >= (int)v105 )
        {
          v88 = 0LL;
          goto LABEL_296;
        }
      }
      v299 = (unsigned int)v302;
      v300 = 508LL;
LABEL_854:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v300,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v299,
        (int)v352);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v412);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v445);
      v88 = 0LL;
    }
  }
  if ( v90 >= *(_QWORD *)(v28 + 64) )
    goto LABEL_1005;
  if ( !*(_DWORD *)(*(_QWORD *)(v28 + 72) + 4 * v90) )
    goto LABEL_863;
  if ( v90 >= *(_QWORD *)(v28 + 1808) )
  {
LABEL_1005:
    _o_terminate(v32);
LABEL_1006:
    v88 = 0LL;
LABEL_649:
    if ( v481 )
    {
      v223 = v353;
      v353 = (unsigned int *)v88;
      *v481 = v223;
    }
    if ( v30 )
    {
      v224 = v370;
      v370 = v88;
      *(_QWORD *)v30 = v224;
    }
    v225 = (unsigned int)v88;
    goto LABEL_654;
  }
  v113 = 96 * v90;
  v380 = 96 * v90;
  v114 = 96 * v90 + *(_QWORD *)(v28 + 1816);
  if ( !*(_QWORD *)(v28 + 80) )
  {
LABEL_313:
    v121 = *(_BYTE *)(v114 + 52) == 0;
    v486 = v89;
    v487 = v89;
    if ( !v121 )
    {
      v30 = (unsigned int)v88;
      if ( *(int *)(v114 + 40) > 0 )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                       v114 + 32,
                                       (unsigned int)v30)
                        + 20LL) )
          {
            v303 = (__int64 **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                 v114 + 32,
                                 (unsigned int)v30);
            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v303, &v487) != -1 )
              break;
          }
          v30 = (unsigned int)(v30 + 1);
          if ( (int)v30 >= *(_DWORD *)(v114 + 40) )
            goto LABEL_315;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(v114 + 56));
        v457 = (struct _RTL_CRITICAL_SECTION *)(v114 + 56);
        v304 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                 v114 + 32,
                 (unsigned int)v30);
        std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v484, v304, v305);
        if ( (int)SystemEffectChainDescriptor::Resolve(v484, (struct SystemEffectDescriptor *)v114) < 0 )
        {
          if ( v485 )
            std::_Ref_count_base::_Decref(v485);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v457);
          v113 = v380;
          goto LABEL_316;
        }
        if ( v485 )
          std::_Ref_count_base::_Decref(v485);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v457);
        v113 = v380;
      }
    }
LABEL_315:
    v115 = (unsigned int)v88;
    if ( *(int *)(v114 + 40) > 0 )
    {
      while ( 1 )
      {
        v306 = (__int64 **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                             v114 + 32,
                             v115);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v306, &v487) != -1 )
          break;
        if ( (signed int)++v115 >= *(_DWORD *)(v114 + 40) )
          goto LABEL_316;
      }
      if ( v115 != -1 )
      {
        v121 = *(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                            v114 + 32,
                            v115) == 0LL;
        goto LABEL_323;
      }
    }
LABEL_316:
    v116 = *(__int64 **)(v114 + 16);
    if ( !v116 || (v117 = (int)v88, v118 = *((_DWORD *)v116 + 2), v118 <= 0) )
    {
LABEL_863:
      v122 = a5;
      goto LABEL_416;
    }
    v119 = *v116;
    while ( 1 )
    {
      v32 = (void *)(2LL * v117);
      v120 = *(_QWORD *)(v119 + 16LL * v117) - *(_QWORD *)&v486.Data1;
      if ( !v120 )
        v120 = *(_QWORD *)(v119 + 16LL * v117 + 8) - *(_QWORD *)v486.Data4;
      if ( !v120 )
        break;
      if ( ++v117 >= v118 )
        goto LABEL_863;
    }
    v121 = v117 == -1;
LABEL_323:
    if ( v121 )
      goto LABEL_863;
    goto LABEL_324;
  }
  *(_OWORD *)v459 = 0LL;
  v460 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**(_QWORD **)(v28 + 80) + 40LL))(
         *(_QWORD *)(v28 + 80),
         &PKEY_AudioEndpoint_Disable_SysFx,
         v459) < 0
    || LOWORD(v459[0]) != 19
    || !LODWORD(v459[1]) )
  {
    PropVariantClear(v459);
    goto LABEL_313;
  }
  PropVariantClear(v459);
  if ( a5 == eKeywordDetectorConnector )
    goto LABEL_313;
  v498 = v89;
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)v114, &v498) == -1 )
    goto LABEL_863;
LABEL_324:
  v489 = v89;
  v122 = a5;
  if ( a5 == eHostProcessConnector && !*(_BYTE *)(v28 + 9727) && *(_QWORD *)(v28 + 80) )
  {
    *(_OWORD *)v463 = 0LL;
    v464 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**(_QWORD **)(v28 + 80) + 40LL))(
           *(_QWORD *)(v28 + 80),
           &PKEY_AudioEndpoint_Disable_SysFx,
           v463) >= 0
      && LOWORD(v463[0]) == 19
      && LODWORD(v463[1]) )
    {
      PropVariantClear(v463);
      v145 = v28 + 168;
      goto LABEL_407;
    }
    PropVariantClear(v463);
  }
  if ( v90 >= *(_QWORD *)(v28 + 1792) )
    goto LABEL_1005;
  v30 = *(_QWORD *)(v28 + 1800) + 96 * v90;
  if ( *(_BYTE *)(v30 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v30 + 56));
    v446 = (LPCRITICAL_SECTION)(v30 + 56);
    v123 = v88;
    v414 = v88;
    v124 = (volatile signed __int32 *)(unsigned int)v88;
    v415 = 0LL;
    v125 = (unsigned int)v88;
    v126 = (int)v88;
    v360 = (int)v88;
    if ( *(int *)(v30 + 40) > 0 )
    {
      while ( 1 )
      {
        if ( (__int64)v88 < 0 || v126 >= *(_DWORD *)(v30 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, v126);
          __debugbreak();
        }
        v127 = (volatile signed __int32 **)((char *)v88 + *(_QWORD *)(v30 + 32));
        v373 = v127;
        if ( (_DWORD)v124 == v125 )
        {
          if ( v125 )
          {
            v125 = 2 * (_DWORD)v124;
            if ( ((unsigned int)v124 & 0x40000000) != 0 )
              goto LABEL_885;
          }
          else
          {
            v125 = 1;
          }
          if ( v125 > 0x7FFFFFFuLL
            || (v128 = _o__recalloc(v123, v125, 16LL), (v123 = (volatile signed __int32 **)v128) == 0LL) )
          {
LABEL_885:
            v307 = 2147942414LL;
            v308 = 502LL;
            goto LABEL_887;
          }
          HIDWORD(v415) = v125;
          v414 = (volatile signed __int32 **)v128;
          v126 = v360;
          v127 = v373;
        }
        v129 = &v123[2 * (int)v124];
        if ( v129 )
        {
          *v129 = 0LL;
          v129[1] = 0LL;
          v130 = v127[1];
          if ( v130 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v130 + 8));
            v125 = HIDWORD(v415);
            LODWORD(v124) = v415;
            v123 = v414;
          }
          *v129 = (volatile signed __int32 *)*v127;
          v129[1] = (volatile signed __int32 *)v127[1];
        }
        v124 = (volatile signed __int32 *)(unsigned int)((_DWORD)v124 + 1);
        LODWORD(v415) = (_DWORD)v124;
        v360 = ++v126;
        v88 += 2;
        if ( v126 >= *(_DWORD *)(v30 + 40) )
        {
          v88 = 0LL;
          break;
        }
      }
    }
    v131 = (int)v88;
    if ( (int)v124 <= 0 )
    {
LABEL_354:
      if ( v123 )
      {
        if ( (int)v124 > 0 )
        {
          ++v123;
          v30 = (unsigned int)v124;
          do
          {
            v124 = *v123;
            if ( *v123 && _InterlockedExchangeAdd(v124 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_892:
              (**(void (__fastcall ***)(volatile signed __int32 *))v124)(v124);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v124);
            }
            v123 += 2;
            --v30;
          }
          while ( v30 );
          v123 = v414;
        }
        free(v123);
      }
      v32 = v446;
      if ( v446 )
        LeaveCriticalSection(v446);
    }
    else
    {
      v88 = v123;
      while ( 1 )
      {
        if ( v131 < 0 || v131 >= (int)v124 )
        {
          ATL::_AtlRaiseException(0xC000008C, v126);
          goto LABEL_892;
        }
        if ( *((_BYTE *)*v88 + 20) )
        {
          v309 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                   &v414,
                                                   (unsigned int)v131);
          v310 = SystemEffectChainDescriptor::Resolve(*v309, (struct SystemEffectDescriptor *)v30);
          if ( v310 < 0 )
            break;
        }
        ++v131;
        v88 += 2;
        if ( v131 >= (int)v124 )
        {
          v88 = 0LL;
          goto LABEL_354;
        }
      }
      v307 = (unsigned int)v310;
      v308 = 508LL;
LABEL_887:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v308,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v307,
        (int)v352);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v414);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v446);
      v88 = 0LL;
    }
  }
  if ( v90 >= *(_QWORD *)(v28 + 1808) )
    goto LABEL_1005;
  v132 = *(_QWORD *)(v28 + 1816) + 96 * v90;
  if ( !*(_BYTE *)(v132 + 52) )
    goto LABEL_371;
  EnterCriticalSection((LPCRITICAL_SECTION)(v132 + 56));
  v447 = (LPCRITICAL_SECTION)(v132 + 56);
  v133 = v88;
  v429 = v88;
  v30 = (unsigned int)v88;
  v430 = (unsigned int)v88;
  v431 = (int)v88;
  v134 = (unsigned int)v88;
  if ( *(int *)(v132 + 40) > 0 )
  {
    while ( 1 )
    {
      v311 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
               v132 + 32,
               v134);
      if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                            &v429,
                            v311) )
        break;
      if ( (signed int)++v134 >= *(_DWORD *)(v132 + 40) )
      {
        v30 = v430;
        v133 = v429;
        goto LABEL_367;
      }
    }
    v312 = 2147942414LL;
    v313 = 502LL;
    goto LABEL_898;
  }
LABEL_367:
  v135 = (unsigned int)v88;
  if ( (int)v30 > 0 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                   &v429,
                                   v135)
                    + 20LL) )
      {
        v314 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                 &v429,
                                                 v135);
        v315 = SystemEffectChainDescriptor::Resolve(*v314, (struct SystemEffectDescriptor *)v132);
        if ( v315 < 0 )
          break;
      }
      if ( (int)++v135 >= (int)v30 )
        goto LABEL_368;
    }
    v312 = (unsigned int)v315;
    v313 = 508LL;
LABEL_898:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v313,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v312,
      (int)v352);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v429);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v447);
    goto LABEL_371;
  }
LABEL_368:
  if ( v133 )
  {
    if ( (int)v30 > 0 )
    {
      v316 = v133;
      do
      {
        std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v316);
        v316 += 2;
        --v30;
      }
      while ( v30 );
    }
    free(v133);
  }
  v32 = v447;
  if ( v447 )
    LeaveCriticalSection(v447);
LABEL_371:
  if ( v90 >= *(_QWORD *)(v28 + 1824) )
    goto LABEL_1005;
  v30 = *(_QWORD *)(v28 + 1832) + 96 * v90;
  if ( *(_BYTE *)(v30 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v30 + 56));
    v448 = (LPCRITICAL_SECTION)(v30 + 56);
    v136 = v88;
    v394 = v88;
    v137 = (volatile signed __int32 *)(unsigned int)v88;
    v395 = 0LL;
    v138 = (unsigned int)v88;
    v139 = (int)v88;
    v361 = (int)v88;
    if ( *(int *)(v30 + 40) > 0 )
    {
      while ( 1 )
      {
        if ( (__int64)v88 < 0 || v139 >= *(_DWORD *)(v30 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, v139);
          __debugbreak();
        }
        v140 = (volatile signed __int32 **)((char *)v88 + *(_QWORD *)(v30 + 32));
        v374 = v140;
        if ( (_DWORD)v137 == v138 )
        {
          if ( v138 )
          {
            v138 = 2 * (_DWORD)v137;
            if ( ((unsigned int)v137 & 0x40000000) != 0 )
              goto LABEL_908;
          }
          else
          {
            v138 = 1;
          }
          if ( v138 > 0x7FFFFFFuLL
            || (v141 = _o__recalloc(v136, v138, 16LL), (v136 = (volatile signed __int32 **)v141) == 0LL) )
          {
LABEL_908:
            v317 = 2147942414LL;
            v318 = 502LL;
            goto LABEL_910;
          }
          HIDWORD(v395) = v138;
          v394 = (volatile signed __int32 **)v141;
          v139 = v361;
          v140 = v374;
        }
        v142 = &v136[2 * (int)v137];
        if ( v142 )
        {
          *v142 = 0LL;
          v142[1] = 0LL;
          v143 = v140[1];
          if ( v143 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v143 + 8));
            v138 = HIDWORD(v395);
            LODWORD(v137) = v395;
            v136 = v394;
          }
          *v142 = (volatile signed __int32 *)*v140;
          v142[1] = (volatile signed __int32 *)v140[1];
        }
        v137 = (volatile signed __int32 *)(unsigned int)((_DWORD)v137 + 1);
        LODWORD(v395) = (_DWORD)v137;
        v361 = ++v139;
        v88 += 2;
        if ( v139 >= *(_DWORD *)(v30 + 40) )
        {
          v88 = 0LL;
          break;
        }
      }
    }
    v144 = (int)v88;
    if ( (int)v137 <= 0 )
    {
LABEL_395:
      if ( v136 )
      {
        if ( (int)v137 > 0 )
        {
          ++v136;
          v30 = (unsigned int)v137;
          do
          {
            v137 = *v136;
            if ( *v136 && _InterlockedExchangeAdd(v137 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_915:
              (**(void (__fastcall ***)(volatile signed __int32 *))v137)(v137);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v137);
            }
            v136 += 2;
            --v30;
          }
          while ( v30 );
          v136 = v394;
        }
        free(v136);
      }
      v32 = v448;
      if ( v448 )
        LeaveCriticalSection(v448);
    }
    else
    {
      v88 = v136;
      while ( 1 )
      {
        if ( v144 < 0 || v144 >= (int)v137 )
        {
          ATL::_AtlRaiseException(0xC000008C, v139);
          goto LABEL_915;
        }
        if ( *((_BYTE *)*v88 + 20) )
        {
          v319 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                   &v394,
                                                   (unsigned int)v144);
          v320 = SystemEffectChainDescriptor::Resolve(*v319, (struct SystemEffectDescriptor *)v30);
          if ( v320 < 0 )
            break;
        }
        ++v144;
        v88 += 2;
        if ( v144 >= (int)v137 )
        {
          v88 = 0LL;
          goto LABEL_395;
        }
      }
      v317 = (unsigned int)v320;
      v318 = 508LL;
LABEL_910:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v318,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v317,
        (int)v352);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v394);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v448);
      v88 = 0LL;
    }
  }
  if ( v90 >= *(_QWORD *)(v28 + 152) )
    goto LABEL_1005;
  v145 = *(_QWORD *)(v28 + 160) + 16 * v90;
  v113 = v380;
  v122 = a5;
LABEL_407:
  v146 = (int)v88;
  v147 = *(_DWORD *)(v145 + 8);
  if ( v147 <= 0 )
    goto LABEL_413;
  v148 = *(_QWORD *)v145;
  while ( 1 )
  {
    v32 = (void *)(2LL * v146);
    v149 = *(_QWORD *)(v148 + 16LL * v146) - *(_QWORD *)&v489.Data1;
    if ( !v149 )
      v149 = *(_QWORD *)(v148 + 16LL * v146 + 8) - *(_QWORD *)v489.Data4;
    if ( !v149 )
      break;
    if ( ++v146 >= v147 )
      goto LABEL_413;
  }
  v150 = 1;
  if ( v146 == -1 )
LABEL_413:
    v150 = (unsigned int)v88;
  if ( v90 >= *(_QWORD *)(v28 + 1808) )
    goto LABEL_1005;
  v151 = v113 + *(_QWORD *)(v28 + 1816);
  *(struct _GUID *)v496 = v89;
  InitializedSystemEffectInterface = CEndpointCharacteristics::GetInitializedSystemEffectInterface(
                                       (CEndpointCharacteristics *)v28,
                                       v151,
                                       2,
                                       v150,
                                       (__int128 *)v496,
                                       (unsigned int)v88,
                                       (int)v88,
                                       v122,
                                       &v416,
                                       &v392,
                                       v88);
  v153 = InitializedSystemEffectInterface;
  if ( InitializedSystemEffectInterface < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x228,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)InitializedSystemEffectInterface,
      (int)v352);
    v225 = v153;
    goto LABEL_1001;
  }
LABEL_416:
  if ( v416 )
  {
    v154 = *(void (__fastcall **)(__int64, unsigned int *, volatile signed __int32 ***))(*(_QWORD *)v416 + 32LL);
    v472 = &v393;
    v473 = v88;
    v474 = 1;
    v154(v416, &v384, &v473);
    if ( v474 )
    {
      v155 = *v472;
      *v472 = v473;
      if ( v155 )
        CoTaskMemFree(v155);
    }
  }
  if ( (a3 & 0x800000) != 0 )
  {
    if ( a2 )
    {
      v225 = -2147418113;
      v321 = 562LL;
      goto LABEL_1000;
    }
    goto LABEL_642;
  }
  if ( a2 || (v122 & 0xFFFFFFFC) != 0 || v122 == 2 || v383 == 2 )
    goto LABEL_642;
  v156 = a6;
  v157 = (char *)a6->DebugInfo - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  if ( a6->DebugInfo == *(PRTL_CRITICAL_SECTION_DEBUG *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
    v157 = (char *)(*(_QWORD *)&a6->LockCount - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4);
  if ( v157 )
  {
LABEL_642:
    if ( v392 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v392 + 16LL))(v392);
    v222 = v393;
    v393 = v88;
    if ( v222 )
      CoTaskMemFree(v222);
    if ( v416 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v416 + 16LL))(v416);
    v30 = v454;
    goto LABEL_649;
  }
  Block = v88;
  v436 = 0LL;
  v30 = (unsigned int)v88;
  v369 = (unsigned int)v88;
  v490 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( !v122 && !*(_BYTE *)(v28 + 9727) && *(_QWORD *)(v28 + 80) )
  {
    *(_OWORD *)v465 = 0LL;
    v466 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**(_QWORD **)(v28 + 80) + 40LL))(
           *(_QWORD *)(v28 + 80),
           &PKEY_AudioEndpoint_Disable_SysFx,
           v465) >= 0
      && LOWORD(v465[0]) == 19
      && LODWORD(v465[1]) )
    {
      PropVariantClear(v465);
      v180 = v28 + 168;
      goto LABEL_511;
    }
    PropVariantClear(v465);
  }
  if ( v90 >= *(_QWORD *)(v28 + 1792) )
    goto LABEL_1004;
  v30 = *(_QWORD *)(v28 + 1800) + 96 * v90;
  if ( *(_BYTE *)(v30 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v30 + 56));
    v449 = (LPCRITICAL_SECTION)(v30 + 56);
    v158 = v88;
    v396 = v88;
    v159 = (volatile signed __int32 *)(unsigned int)v88;
    v397 = 0LL;
    v160 = (unsigned int)v88;
    v161 = (int)v88;
    v364 = (int)v88;
    if ( *(int *)(v30 + 40) > 0 )
    {
      while ( 1 )
      {
        if ( (__int64)v88 < 0 || v161 >= *(_DWORD *)(v30 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, v161);
          __debugbreak();
        }
        v162 = (volatile signed __int32 **)((char *)v88 + *(_QWORD *)(v30 + 32));
        v375 = v162;
        if ( (_DWORD)v159 == v160 )
        {
          if ( v160 )
          {
            v160 = 2 * (_DWORD)v159;
            if ( ((unsigned int)v159 & 0x40000000) != 0 )
              goto LABEL_924;
          }
          else
          {
            v160 = 1;
          }
          if ( v160 > 0x7FFFFFFuLL
            || (v163 = _o__recalloc(v158, v160, 16LL), (v158 = (volatile signed __int32 **)v163) == 0LL) )
          {
LABEL_924:
            v322 = 2147942414LL;
            v323 = 502LL;
            goto LABEL_926;
          }
          HIDWORD(v397) = v160;
          v396 = (volatile signed __int32 **)v163;
          v161 = v364;
          v162 = v375;
        }
        v164 = &v158[2 * (int)v159];
        if ( v164 )
        {
          *v164 = 0LL;
          v164[1] = 0LL;
          v165 = v162[1];
          if ( v165 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v165 + 8));
            v160 = HIDWORD(v397);
            LODWORD(v159) = v397;
            v158 = v396;
          }
          *v164 = (volatile signed __int32 *)*v162;
          v164[1] = (volatile signed __int32 *)v162[1];
        }
        v159 = (volatile signed __int32 *)(unsigned int)((_DWORD)v159 + 1);
        LODWORD(v397) = (_DWORD)v159;
        v364 = ++v161;
        v88 += 2;
        if ( v161 >= *(_DWORD *)(v30 + 40) )
        {
          v88 = 0LL;
          break;
        }
      }
    }
    v166 = (int)v88;
    if ( (int)v159 <= 0 )
    {
LABEL_458:
      if ( v158 )
      {
        if ( (int)v159 > 0 )
        {
          ++v158;
          v30 = (unsigned int)v159;
          do
          {
            v159 = *v158;
            if ( *v158 && _InterlockedExchangeAdd(v159 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_931:
              (**(void (__fastcall ***)(volatile signed __int32 *))v159)(v159);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v159);
            }
            v158 += 2;
            --v30;
          }
          while ( v30 );
          v158 = v396;
        }
        free(v158);
      }
      v156 = v449;
      if ( v449 )
        LeaveCriticalSection(v449);
    }
    else
    {
      v88 = v158;
      while ( 1 )
      {
        if ( v166 < 0 || v166 >= (int)v159 )
        {
          ATL::_AtlRaiseException(0xC000008C, v161);
          goto LABEL_931;
        }
        if ( *((_BYTE *)*v88 + 20) )
        {
          v324 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                   &v396,
                                                   (unsigned int)v166);
          v325 = SystemEffectChainDescriptor::Resolve(*v324, (struct SystemEffectDescriptor *)v30);
          if ( v325 < 0 )
            break;
        }
        ++v166;
        v88 += 2;
        if ( v166 >= (int)v159 )
        {
          v88 = 0LL;
          goto LABEL_458;
        }
      }
      v322 = (unsigned int)v325;
      v323 = 508LL;
LABEL_926:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v323,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v322,
        (int)v352);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v396);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v449);
      v88 = 0LL;
    }
  }
  if ( v90 >= *(_QWORD *)(v28 + 1808) )
  {
LABEL_1004:
    _o_terminate(v156);
    goto LABEL_1005;
  }
  v167 = *(_QWORD *)(v28 + 1816) + 96 * v90;
  if ( !*(_BYTE *)(v167 + 52) )
    goto LABEL_475;
  EnterCriticalSection((LPCRITICAL_SECTION)(v167 + 56));
  v455 = (LPCRITICAL_SECTION)(v167 + 56);
  v168 = v88;
  v432 = v88;
  v30 = (unsigned int)v88;
  v433 = (unsigned int)v88;
  v434 = (int)v88;
  v169 = (unsigned int)v88;
  if ( *(int *)(v167 + 40) > 0 )
  {
    while ( 1 )
    {
      v326 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
               v167 + 32,
               v169);
      if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                            &v432,
                            v326) )
        break;
      if ( (signed int)++v169 >= *(_DWORD *)(v167 + 40) )
      {
        v30 = v433;
        v168 = v432;
        goto LABEL_471;
      }
    }
    v327 = 2147942414LL;
    v328 = 502LL;
    goto LABEL_937;
  }
LABEL_471:
  v170 = (unsigned int)v88;
  if ( (int)v30 > 0 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                   &v432,
                                   v170)
                    + 20LL) )
      {
        v329 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                 &v432,
                                                 v170);
        v330 = SystemEffectChainDescriptor::Resolve(*v329, (struct SystemEffectDescriptor *)v167);
        if ( v330 < 0 )
          break;
      }
      if ( (int)++v170 >= (int)v30 )
        goto LABEL_472;
    }
    v327 = (unsigned int)v330;
    v328 = 508LL;
LABEL_937:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v328,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v327,
      (int)v352);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v432);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v455);
    goto LABEL_475;
  }
LABEL_472:
  if ( v168 )
  {
    if ( (int)v30 > 0 )
    {
      v331 = v168;
      do
      {
        std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v331);
        v331 += 2;
        --v30;
      }
      while ( v30 );
    }
    free(v168);
  }
  v156 = v455;
  if ( v455 )
    LeaveCriticalSection(v455);
LABEL_475:
  if ( v90 >= *(_QWORD *)(v28 + 1824) )
    goto LABEL_1004;
  v30 = *(_QWORD *)(v28 + 1832) + 96 * v90;
  if ( *(_BYTE *)(v30 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v30 + 56));
    v450 = (LPCRITICAL_SECTION)(v30 + 56);
    v171 = v88;
    v400 = v88;
    v172 = (volatile signed __int32 *)(unsigned int)v88;
    v401 = 0LL;
    v173 = (unsigned int)v88;
    v174 = (int)v88;
    v365 = (int)v88;
    if ( *(int *)(v30 + 40) > 0 )
    {
      while ( 1 )
      {
        if ( (__int64)v88 < 0 || v174 >= *(_DWORD *)(v30 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, v174);
          __debugbreak();
        }
        v175 = (volatile signed __int32 **)((char *)v88 + *(_QWORD *)(v30 + 32));
        v376 = v175;
        if ( (_DWORD)v172 == v173 )
        {
          if ( v173 )
          {
            v173 = 2 * (_DWORD)v172;
            if ( ((unsigned int)v172 & 0x40000000) != 0 )
              goto LABEL_947;
          }
          else
          {
            v173 = 1;
          }
          if ( v173 > 0x7FFFFFFuLL
            || (v176 = _o__recalloc(v171, v173, 16LL), (v171 = (volatile signed __int32 **)v176) == 0LL) )
          {
LABEL_947:
            v332 = 2147942414LL;
            v333 = 502LL;
            goto LABEL_949;
          }
          HIDWORD(v401) = v173;
          v400 = (volatile signed __int32 **)v176;
          v174 = v365;
          v175 = v376;
        }
        v177 = &v171[2 * (int)v172];
        if ( v177 )
        {
          *v177 = 0LL;
          v177[1] = 0LL;
          v178 = v175[1];
          if ( v178 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v178 + 8));
            v173 = HIDWORD(v401);
            LODWORD(v172) = v401;
            v171 = v400;
          }
          *v177 = (volatile signed __int32 *)*v175;
          v177[1] = (volatile signed __int32 *)v175[1];
        }
        v172 = (volatile signed __int32 *)(unsigned int)((_DWORD)v172 + 1);
        LODWORD(v401) = (_DWORD)v172;
        v365 = ++v174;
        v88 += 2;
        if ( v174 >= *(_DWORD *)(v30 + 40) )
        {
          v88 = 0LL;
          break;
        }
      }
    }
    v179 = (int)v88;
    if ( (int)v172 <= 0 )
    {
LABEL_499:
      if ( v171 )
      {
        if ( (int)v172 > 0 )
        {
          ++v171;
          v30 = (unsigned int)v172;
          do
          {
            v172 = *v171;
            if ( *v171 && _InterlockedExchangeAdd(v172 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_954:
              (**(void (__fastcall ***)(volatile signed __int32 *))v172)(v172);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v172);
            }
            v171 += 2;
            --v30;
          }
          while ( v30 );
          v171 = v400;
        }
        free(v171);
      }
      v156 = v450;
      if ( v450 )
        LeaveCriticalSection(v450);
    }
    else
    {
      v88 = v171;
      while ( 1 )
      {
        if ( v179 < 0 || v179 >= (int)v172 )
        {
          ATL::_AtlRaiseException(0xC000008C, v174);
          goto LABEL_954;
        }
        if ( *((_BYTE *)*v88 + 20) )
        {
          v334 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                   &v400,
                                                   (unsigned int)v179);
          v335 = SystemEffectChainDescriptor::Resolve(*v334, (struct SystemEffectDescriptor *)v30);
          if ( v335 < 0 )
            break;
        }
        ++v179;
        v88 += 2;
        if ( v179 >= (int)v172 )
        {
          v88 = 0LL;
          goto LABEL_499;
        }
      }
      v332 = (unsigned int)v335;
      v333 = 508LL;
LABEL_949:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v333,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v332,
        (int)v352);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v400);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v450);
      v88 = 0LL;
    }
  }
  if ( v90 >= *(_QWORD *)(v28 + 152) )
    goto LABEL_1004;
  v180 = *(_QWORD *)(v28 + 160) + 16 * v90;
  v30 = v369;
  v122 = a5;
LABEL_511:
  v181 = (int)v88;
  v182 = *(_DWORD *)(v180 + 8);
  if ( v182 <= 0 )
    goto LABEL_956;
  v183 = *(_QWORD *)v180;
  while ( 1 )
  {
    v156 = (LPCRITICAL_SECTION)(2LL * v181);
    v184 = *(_QWORD *)(v183 + 16LL * v181) - *(_QWORD *)&v490.Data1;
    if ( !v184 )
      v184 = *(_QWORD *)(v183 + 16LL * v181 + 8) - *(_QWORD *)v490.Data4;
    if ( !v184 )
      break;
    if ( ++v181 >= v182 )
      goto LABEL_956;
  }
  if ( v181 == -1 )
  {
LABEL_956:
    LODWORD(v30) = (_DWORD)v88;
    goto LABEL_957;
  }
  if ( v90 >= *(_QWORD *)(v28 + 1808) )
    goto LABEL_1004;
  v185 = *(_QWORD *)(v28 + 1816) + 96 * v90;
  if ( !*(_QWORD *)(v28 + 80) )
  {
LABEL_522:
    v186 = 1;
    v187 = 1;
    goto LABEL_523;
  }
  *(_OWORD *)v467 = 0LL;
  v468 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**(_QWORD **)(v28 + 80) + 40LL))(
         *(_QWORD *)(v28 + 80),
         &PKEY_AudioEndpoint_Disable_SysFx,
         v467) < 0
    || LOWORD(v467[0]) != 19
    || !LODWORD(v467[1]) )
  {
    PropVariantClear(v467);
    goto LABEL_522;
  }
  PropVariantClear(v467);
  if ( v122 == 3 )
    goto LABEL_522;
  v187 = (int)v88;
  v186 = 1;
LABEL_523:
  SystemEffectDescriptor::GetSupportedProcessingModes(v185, (__int64 *)&Block, v187);
  v189 = (int)v88;
  v362 = (int)v88;
  if ( (int)v436 <= 0 )
    goto LABEL_619;
  v190 = (__int64)v88;
  v380 = (__int64)v88;
  while ( 2 )
  {
    if ( v190 < 0 || v189 >= (int)v436 )
      goto LABEL_996;
    v491 = *((_OWORD *)Block + v190);
    if ( a5 == eHostProcessConnector && !*(_BYTE *)(v28 + 9727) && *(_QWORD *)(v28 + 80) )
    {
      *(_OWORD *)v469 = 0LL;
      v470 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**(_QWORD **)(v28 + 80) + 40LL))(
             *(_QWORD *)(v28 + 80),
             &PKEY_AudioEndpoint_Disable_SysFx,
             v469) >= 0
        && LOWORD(v469[0]) == 19
        && LODWORD(v469[1]) )
      {
        PropVariantClear(v469);
        v211 = v28 + 168;
        goto LABEL_612;
      }
      PropVariantClear(v469);
    }
    if ( v90 >= *(_QWORD *)(v28 + 1792) )
      goto LABEL_1004;
    v30 = *(_QWORD *)(v28 + 1800) + 96 * v90;
    if ( *(_BYTE *)(v30 + 52) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v30 + 56));
      v451 = (LPCRITICAL_SECTION)(v30 + 56);
      v191 = v88;
      v389 = v88;
      v192 = (int)v88;
      v390 = 0LL;
      v186 = (unsigned int)v88;
      v193 = (int)v88;
      v366 = (int)v88;
      if ( *(int *)(v30 + 40) > 0 )
      {
        while ( 1 )
        {
          if ( (__int64)v88 < 0 || v193 >= *(_DWORD *)(v30 + 40) )
          {
            ATL::_AtlRaiseException(0xC000008C, v193);
            __debugbreak();
          }
          v194 = (volatile signed __int32 **)((char *)v88 + *(_QWORD *)(v30 + 32));
          v377 = v194;
          if ( v192 == v186 )
          {
            if ( v186 )
            {
              v186 = 2 * v192;
              if ( (v192 & 0x40000000) != 0 )
                goto LABEL_964;
            }
            else
            {
              v186 = 1;
            }
            if ( v186 > 0x7FFFFFFuLL
              || (v195 = _o__recalloc(v191, v186, 16LL), (v191 = (volatile signed __int32 **)v195) == 0LL) )
            {
LABEL_964:
              v336 = 2147942414LL;
              v337 = 502LL;
              goto LABEL_966;
            }
            HIDWORD(v390) = v186;
            v389 = (volatile signed __int32 **)v195;
            v193 = v366;
            v194 = v377;
          }
          v196 = &v191[2 * v192];
          if ( v196 )
          {
            *v196 = 0LL;
            v196[1] = 0LL;
            v197 = v194[1];
            if ( v197 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v197 + 8));
              v186 = HIDWORD(v390);
              v192 = v390;
              v191 = v389;
            }
            *v196 = (volatile signed __int32 *)*v194;
            v196[1] = (volatile signed __int32 *)v194[1];
          }
          LODWORD(v390) = ++v192;
          v366 = ++v193;
          v88 += 2;
          if ( v193 >= *(_DWORD *)(v30 + 40) )
          {
            v88 = 0LL;
            break;
          }
        }
      }
      v186 = (unsigned int)v88;
      if ( v192 <= 0 )
      {
LABEL_557:
        if ( v191 )
        {
          if ( v192 > 0 )
          {
            v199 = v191 + 1;
            v30 = (unsigned int)v192;
            do
            {
              v200 = *v199;
              if ( *v199 && _InterlockedExchangeAdd(v200 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v200)(v200);
                std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v200);
              }
              v199 += 2;
              --v30;
            }
            while ( v30 );
            v191 = v389;
          }
          free(v191);
          v389 = v88;
        }
        v390 = 0LL;
        v156 = v451;
        if ( v451 )
          LeaveCriticalSection(v451);
      }
      else
      {
        v198 = v191;
        while ( 1 )
        {
          if ( (v186 & 0x80000000) != 0 || (int)v186 >= v192 )
          {
            ATL::_AtlRaiseException(0xC000008C, v193);
LABEL_994:
            ATL::_AtlRaiseException(0xC000008C, v204);
            __debugbreak();
          }
          if ( *((_BYTE *)*v198 + 20) )
          {
            v338 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                     &v389,
                                                     v186);
            v339 = SystemEffectChainDescriptor::Resolve(*v338, (struct SystemEffectDescriptor *)v30);
            if ( v339 < 0 )
              break;
          }
          ++v186;
          v198 += 2;
          if ( (int)v186 >= v192 )
          {
            v88 = 0LL;
            goto LABEL_557;
          }
        }
        v336 = (unsigned int)v339;
        v337 = 508LL;
LABEL_966:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v337,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)v336,
          (int)v352);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v389);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v451);
        v88 = 0LL;
      }
    }
    if ( v90 >= *(_QWORD *)(v28 + 1808) )
      goto LABEL_1004;
    v201 = *(_QWORD *)(v28 + 1816) + 96 * v90;
    if ( *(_BYTE *)(v201 + 52) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v201 + 56));
      v452 = (LPCRITICAL_SECTION)(v201 + 56);
      v202 = v88;
      v398 = v88;
      v30 = (unsigned int)v88;
      LODWORD(v399) = (_DWORD)v88;
      HIDWORD(v399) = (_DWORD)v88;
      v186 = (unsigned int)v88;
      if ( *(int *)(v201 + 40) > 0 )
      {
        while ( 1 )
        {
          v340 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                   v201 + 32,
                   v186);
          if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                &v398,
                                v340) )
            break;
          if ( (signed int)++v186 >= *(_DWORD *)(v201 + 40) )
          {
            v30 = (unsigned int)v399;
            v202 = v398;
            goto LABEL_571;
          }
        }
        v341 = 2147942414LL;
        v342 = 502LL;
      }
      else
      {
LABEL_571:
        v186 = (unsigned int)v88;
        if ( (int)v30 <= 0 )
        {
LABEL_572:
          if ( v202 )
          {
            if ( (int)v30 > 0 )
            {
              v345 = v202;
              do
              {
                std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v345);
                v345 += 2;
                --v30;
              }
              while ( v30 );
            }
            free(v202);
            v398 = v88;
          }
          v399 = 0LL;
          v156 = v452;
          if ( v452 )
            LeaveCriticalSection(v452);
          goto LABEL_575;
        }
        while ( 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                       &v398,
                                       v186)
                        + 20LL) )
          {
            v343 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                     &v398,
                                                     v186);
            v344 = SystemEffectChainDescriptor::Resolve(*v343, (struct SystemEffectDescriptor *)v201);
            if ( v344 < 0 )
              break;
          }
          if ( (int)++v186 >= (int)v30 )
            goto LABEL_572;
        }
        v341 = (unsigned int)v344;
        v342 = 508LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v342,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v341,
        (int)v352);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v398);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v452);
    }
LABEL_575:
    if ( v90 >= *(_QWORD *)(v28 + 1824) )
      goto LABEL_1004;
    v30 = *(_QWORD *)(v28 + 1832) + 96 * v90;
    if ( !*(_BYTE *)(v30 + 52) )
      goto LABEL_610;
    EnterCriticalSection((LPCRITICAL_SECTION)(v30 + 56));
    v453 = (LPCRITICAL_SECTION)(v30 + 56);
    v203 = v88;
    v387 = (char *)v88;
    LODWORD(v190) = (_DWORD)v88;
    v388 = 0LL;
    v186 = (unsigned int)v88;
    v204 = (int)v88;
    v367 = (int)v88;
    if ( *(int *)(v30 + 40) > 0 )
    {
      do
      {
        if ( (__int64)v88 < 0 || v204 >= *(_DWORD *)(v30 + 40) )
          goto LABEL_994;
        v205 = (volatile signed __int32 **)((char *)v88 + *(_QWORD *)(v30 + 32));
        v378 = v205;
        if ( (_DWORD)v190 == v186 )
        {
          if ( v186 )
          {
            v186 = 2 * v190;
            if ( (v190 & 0x40000000) != 0 )
              goto LABEL_984;
          }
          else
          {
            v186 = 1;
          }
          if ( v186 > 0x7FFFFFFuLL
            || (v206 = _o__recalloc(v203, v186, 16LL), (v203 = (volatile signed __int32 **)v206) == 0LL) )
          {
LABEL_984:
            v346 = 2147942414LL;
            v347 = 502LL;
            goto LABEL_986;
          }
          HIDWORD(v388) = v186;
          v387 = (char *)v206;
          v204 = v367;
          v205 = v378;
        }
        v207 = (char *)&v203[2 * (int)v190];
        if ( v207 )
        {
          *(_QWORD *)v207 = 0LL;
          *((_QWORD *)v207 + 1) = 0LL;
          v208 = v205[1];
          if ( v208 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v208 + 8));
            v186 = HIDWORD(v388);
            LODWORD(v190) = v388;
            v203 = (volatile signed __int32 **)v387;
          }
          *(_QWORD *)v207 = *v205;
          *((_QWORD *)v207 + 1) = v205[1];
        }
        LODWORD(v190) = v190 + 1;
        LODWORD(v388) = v190;
        v367 = ++v204;
        v88 += 2;
      }
      while ( v204 < *(_DWORD *)(v30 + 40) );
      v88 = 0LL;
    }
    v186 = (unsigned int)v88;
    if ( (int)v190 <= 0 )
      goto LABEL_599;
    v88 = v203;
    while ( 1 )
    {
      if ( (v186 & 0x80000000) != 0 || (int)v186 >= (int)v190 )
      {
        ATL::_AtlRaiseException(0xC000008C, v204);
LABEL_996:
        ATL::_AtlRaiseException(0xC000008C, v188);
        CoTaskMemFree(v350);
        v215 = 0LL;
        goto LABEL_625;
      }
      if ( *((_BYTE *)*v88 + 20) )
      {
        v348 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                 &v387,
                                                 v186);
        v349 = SystemEffectChainDescriptor::Resolve(*v348, (struct SystemEffectDescriptor *)v30);
        if ( v349 < 0 )
          break;
      }
      ++v186;
      v88 += 2;
      if ( (int)v186 >= (int)v190 )
      {
        v88 = 0LL;
LABEL_599:
        if ( v203 )
        {
          if ( (int)v190 > 0 )
          {
            v209 = v203 + 1;
            v30 = (unsigned int)v190;
            do
            {
              v210 = *v209;
              if ( *v209 && _InterlockedExchangeAdd(v210 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v210)(v210);
                std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v210);
              }
              v209 += 2;
              --v30;
            }
            while ( v30 );
            v203 = (volatile signed __int32 **)v387;
          }
          free(v203);
          v387 = (char *)v88;
        }
        v388 = 0LL;
        v156 = v453;
        if ( v453 )
          LeaveCriticalSection(v453);
        goto LABEL_610;
      }
    }
    v346 = (unsigned int)v349;
    v347 = 508LL;
LABEL_986:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v347,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v346,
      (int)v352);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v387);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v453);
    v88 = 0LL;
LABEL_610:
    if ( v90 >= *(_QWORD *)(v28 + 152) )
      goto LABEL_1004;
    v211 = *(_QWORD *)(v28 + 160) + 16 * v90;
    v190 = v380;
    v189 = v362;
LABEL_612:
    v188 = (int)v88;
    v212 = *(_DWORD *)(v211 + 8);
    if ( v212 <= 0 )
      goto LABEL_618;
    v213 = *(_QWORD *)v211;
    while ( 1 )
    {
      v156 = (LPCRITICAL_SECTION)(2LL * v188);
      v214 = *(_QWORD *)(v213 + 16LL * v188) - v491;
      if ( !v214 )
        v214 = *(_QWORD *)(v213 + 16LL * v188 + 8) - *((_QWORD *)&v491 + 1);
      if ( !v214 )
        break;
      if ( ++v188 >= v212 )
        goto LABEL_618;
    }
    if ( v188 == -1 )
    {
LABEL_618:
      v186 = 1;
      LODWORD(v30) = 1;
      goto LABEL_619;
    }
    v362 = ++v189;
    v380 = ++v190;
    if ( v189 < (int)v436 )
      continue;
    break;
  }
  LODWORD(v30) = v369;
LABEL_957:
  v186 = 1;
LABEL_619:
  if ( Block )
    free(Block);
  if ( !(_DWORD)v30 )
    goto LABEL_642;
  LODWORD(v190) = 1;
  if ( v384 > 1 )
    LODWORD(v190) = v384;
  v28 = 16 * ((unsigned int)v190 + 4LL);
  v215 = (char *)CoTaskMemAlloc(v28);
  v370 = (volatile signed __int32 **)v215;
LABEL_625:
  if ( !v215 )
  {
    v225 = -2147024882;
    v321 = 585LL;
    goto LABEL_1000;
  }
  memset_0(v215, 0, v28);
  *(_DWORD *)v370 = v383;
  *((_DWORD *)v370 + 1) = (_DWORD)v88;
  *((_DWORD *)v370 + 15) = (_DWORD)v88;
  v216 = (unsigned int)v88;
  if ( !v384 )
  {
LABEL_629:
    *(struct _GUID *)((char *)v370 + 36) = *v386;
    v218 = (__int64)v88;
    v419 = v88;
    if ( v392 )
    {
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v392)(
        v392,
        &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768,
        (__int64 *)&v419);
      v218 = (__int64)v419;
    }
    v219 = v186;
    if ( !v218 )
      v219 = (unsigned int)v88;
    *((_DWORD *)v370 + 13) = v219;
    v220 = (__int64)v88;
    v418 = v88;
    if ( v392 )
    {
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v392)(
        v392,
        &GUID_25385759_3236_4101_a943_25693dfb5d2d,
        (__int64 *)&v418);
      v220 = (__int64)v418;
    }
    if ( !v220 )
      v186 = (unsigned int)v88;
    *((_DWORD *)v370 + 14) = v186;
    if ( *((_DWORD *)v370 + 15) > (unsigned int)v190 )
    {
      v225 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x260,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x8000FFFFLL,
        (int)v352);
      wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v418);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v419);
      goto LABEL_1001;
    }
    v370[2] = (volatile signed __int32 *)a11;
    v221 = (unsigned int)*(unsigned __int16 *)(a11 + 16) + 18;
    *((_DWORD *)v370 + 2) = v221;
    if ( v418 )
      (*((void (__fastcall **)(volatile signed __int32 **, __int64, __int64))*v418 + 2))(v418, v221, v216);
    if ( v419 )
      (*((void (__fastcall **)(volatile signed __int32 **, __int64, __int64))*v419 + 2))(v419, v221, v216);
    goto LABEL_642;
  }
  while ( 1 )
  {
    v217 = *((_DWORD *)v370 + 15);
    if ( v217 > 0x1F )
      break;
    *((_DWORD *)v370 + 8) |= v186 << v217;
    *(_OWORD *)&v370[2 * (unsigned int)(*((_DWORD *)v370 + 15))++ + 8] = *((_OWORD *)v393 + (unsigned int)v216);
    v216 = (unsigned int)(v216 + 1);
    if ( (unsigned int)v216 >= v384 )
      goto LABEL_629;
  }
  v225 = -2147418113;
  v321 = 593LL;
LABEL_1000:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v321,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)v225,
    (int)v352);
LABEL_1001:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v392);
  v351 = v393;
  v393 = v88;
  if ( v351 )
    CoTaskMemFree(v351);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v416);
LABEL_654:
  if ( v370 )
    CoTaskMemFree(v370);
  if ( v353 )
    CoTaskMemFree(v353);
  if ( v458 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v458 + 16LL))(v458);
  return v225;
}
