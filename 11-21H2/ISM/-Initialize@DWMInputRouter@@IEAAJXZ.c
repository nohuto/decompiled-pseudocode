/*
 * XREFs of ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035B8C
 * Callers:
 *     ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x18002BDC0 (-Initialize@MPCInputRouter@@AEAAJXZ.c)
 *     ?Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x18019A2F0 (-Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18000BFFC (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180014574 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PenTipToGlassEvents@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002E410 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PenTipToGlassEvents@@@details@wil@@QEAAX_.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SupportFnKey@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002E494 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SupportFnKey@@@details@wil@@QEAAX_NW4Repo.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_POINTER_INPUT_DOWN_MESSAGE@@@Z@std@@@Z @ 0x180032260 (-Initialize@-$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMess.c)
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18003443C (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z @ 0x180034714 (-Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x180034E8C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?QueryInterface@GameInputProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180035A40 (-QueryInterface@GameInputProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     ?RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@W4InputSinkRequirement@1@@Z @ 0x180036894 (-RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@W4InputSinkRequire.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180037BD8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?Create@TipToGlassProcessor@@SAJPEAPEAV1@@Z @ 0x180039BFC (-Create@TipToGlassProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@SystemButtonProcessor@@SAJPEAPEAV1@@Z @ 0x180039C68 (-Create@SystemButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x180040B94 (-Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z.c)
 *     ??1?$com_ptr_t@VGameInputProcessor@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180043C5C (--1-$com_ptr_t@VGameInputProcessor@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0GameInputProcessor@@AEAA@PEAUIInputDeviceInfoStore@@@Z @ 0x180043C78 (--0GameInputProcessor@@AEAA@PEAUIInputDeviceInfoStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VShellGesturesProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVShellGesturesProcessor@@@Z @ 0x180047020 (--$MakeAndInitialize@VShellGesturesProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVShellGestu.c)
 *     ?Create@NonBamoInputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIInputDeliveryServer@@@Z @ 0x180047C84 (-Create@NonBamoInputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIIn.c)
 *     ?InternalRelease@?$ComPtr@VGameInputProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180048B48 (-InternalRelease@-$ComPtr@VGameInputProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEAAKXZ @ 0x180049100 (-InternalRelease@-$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     IsPreloadKeyboardLayoutsPresent @ 0x18004BF08 (IsPreloadKeyboardLayoutsPresent.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180088EA0 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Create@DragNDropProcessor@@SAJAEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@AEAV?$ComPtr@VActivationProcessor@@@34@PEAPEAV1@@Z @ 0x18013DF5C (-Create@DragNDropProcessor@@SAJAEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@AEAV-$Co.c)
 *     ?Create@ResizeProcessor@@SAJPEAPEAV1@@Z @ 0x180144FDC (-Create@ResizeProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@EdgyProcessor@@SA?AV?$ComPtr@VEdgyProcessor@@@WRL@Microsoft@@AEBV?$ComPtr@UISystemInputRouterHitTest@@@34@@Z @ 0x180148DAC (-Create@EdgyProcessor@@SA-AV-$ComPtr@VEdgyProcessor@@@WRL@Microsoft@@AEBV-$ComPtr@UISystemInputR.c)
 *     ??$?0VDWMInputRouter@@@?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@QEAA@PEAVDWMInputRouter@@@Z @ 0x180198F5C (--$-0VDWMInputRouter@@@-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@QEAA@PEAVDWMInputRou.c)
 *     ??$MakeAndInitialize@VActivationProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAVActivationProcessor@@$$QEAPEAVDWMInputRouter@@@Z @ 0x180199194 (--$MakeAndInitialize@VActivationProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEA.c)
 *     ??$MakeAndInitialize@VCursorProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAVCursorProcessor@@$$QEAPEAVDWMInputRouter@@@Z @ 0x180199248 (--$MakeAndInitialize@VCursorProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     ??$MakeAndInitialize@VCursorSuppressionProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAVCursorSuppressionProcessor@@$$QEAPEAVDWMInputRouter@@@Z @ 0x18019932C (--$MakeAndInitialize@VCursorSuppressionProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@.c)
 *     ??$MakeAndInitialize@VHotkeyContextualProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyContextualProcessor@@@Z @ 0x180199410 (--$MakeAndInitialize@VHotkeyContextualProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyC.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HotkeyContextualProcessor@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18019B774 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HotkeyContextualProcessor@@@details@wil@@.c)
 *     ?Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1801A632C (-Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@InputForwardProcessor@@SAJPEAPEAV1@@Z @ 0x1801A8BB0 (-Create@InputForwardProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@EdgyLegacyProcessor@@SAJPEAPEAV1@@Z @ 0x1801A9F0C (-Create@EdgyLegacyProcessor@@SAJPEAPEAV1@@Z.c)
 *     ??$MakeAndInitialize@VMagnifierProcessor@@UIContextualProcessor@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIContextualProcessor@@@Z @ 0x1801AEEF0 (--$MakeAndInitialize@VMagnifierProcessor@@UIContextualProcessor@@$$V@Details@WRL@Microsoft@@YAJP.c)
 *     ?Create@TapProcessor@@SAJPEAPEAV1@@Z @ 0x1801B3B68 (-Create@TapProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@RawButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1801B4524 (-Create@RawButtonProcessor@@SAJPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=73
__int64 __fastcall DWMInputRouter::Initialize(DWMInputRouter *this)
{
  _QWORD *v2; // rsi
  int v3; // eax
  _QWORD *v4; // rdi
  int v5; // eax
  __int64 v6; // rdx
  int Descriptor; // eax
  __int64 v8; // r15
  __int64 (__fastcall *v9)(__int64, HLOCAL, char *); // r14
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r15
  __int64 (__fastcall *v14)(__int64, HLOCAL, char *); // rbx
  int v15; // eax
  int v16; // eax
  __int64 v17; // r12
  __int64 (__fastcall *v18)(__int64, char *, _QWORD, _QWORD); // r15
  int v19; // eax
  int v20; // eax
  __int64 v21; // r15
  __int64 (__fastcall *v22)(__int64, char *, _QWORD, _QWORD); // rdi
  int v23; // eax
  struct InputSystemServerConnection *BamoServerConnection; // rdi
  __int64 v25; // r12
  void (__fastcall *v26)(__int64, _QWORD *); // r15
  _QWORD *v27; // r14
  int v28; // eax
  __int64 v29; // r8
  const char *v30; // r9
  struct ISMTestMode *v31; // rax
  __int64 *v32; // rcx
  int v33; // eax
  struct InputSystemServerConnection *v34; // rax
  void (__fastcall ***v35)(_QWORD); // rdi
  void (__fastcall ***v36)(_QWORD); // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rbx
  _DWORD *v40; // rax
  int v41; // esi
  __int64 v42; // r9
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // eax
  struct TipToGlassProcessor *v46; // rbx
  __int64 (__fastcall *v47)(struct TipToGlassProcessor *, GUID *, __int64 *); // rdi
  int v48; // eax
  int v49; // eax
  int v50; // eax
  __int64 (__fastcall ***v51)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v52)(_QWORD, GUID *, __int64 *); // rdi
  int v53; // eax
  int v54; // eax
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // eax
  struct SystemButtonProcessor *v58; // rbx
  __int64 (__fastcall *v59)(struct SystemButtonProcessor *, GUID *, __int64 *); // rdi
  int v60; // eax
  int v61; // eax
  int v62; // eax
  struct InputRedirectionProcessor *v63; // rbx
  __int64 (__fastcall *v64)(struct InputRedirectionProcessor *, GUID *, __int64 *); // rdi
  int v65; // eax
  int v66; // eax
  __int64 v67; // rdx
  GameInputProcessor *v68; // rax
  const char *v69; // r9
  GameInputProcessor *v70; // rax
  GameInputProcessor *v71; // rbx
  int Interface; // eax
  int v73; // eax
  _QWORD *v74; // rax
  __int64 (__fastcall ***v75)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v76)(_QWORD, GUID *, __int64 *); // rdi
  int v77; // eax
  int v78; // eax
  __int64 v79; // rax
  __int64 v80; // rbx
  struct InputSystemServerConnection *v81; // rdi
  __int64 v82; // r15
  void (__fastcall *v83)(__int64, _QWORD *); // r14
  _QWORD *v84; // rsi
  int v86; // eax
  int v87; // eax
  __int64 (__fastcall ***v88)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v89)(_QWORD, GUID *, __int64 *); // rdi
  int v90; // eax
  int v91; // eax
  int v92; // eax
  __int64 (__fastcall ***v93)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v94)(_QWORD, GUID *, __int64 *); // rdi
  int v95; // eax
  int v96; // eax
  int v97; // eax
  struct TapProcessor *v98; // rbx
  __int64 (__fastcall *v99)(struct TapProcessor *, GUID *, __int64 *); // rdi
  int v100; // eax
  int v101; // eax
  char *v102; // rax
  __int64 (__fastcall ***v103)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v104; // rcx
  __int64 (__fastcall *v105)(_QWORD, GUID *, __int64 *); // rbx
  int v106; // eax
  int v107; // eax
  int v108; // eax
  struct EdgyLegacyProcessor *v109; // rbx
  __int64 (__fastcall *v110)(struct EdgyLegacyProcessor *, GUID *, __int64 *); // rdi
  int v111; // eax
  int v112; // eax
  int v113; // eax
  int v114; // eax
  int v115; // eax
  __int64 (__fastcall ***v116)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v117)(_QWORD, GUID *, __int64 *); // rdi
  int v118; // eax
  int v119; // eax
  int v120; // eax
  __int64 (__fastcall ***v121)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v122)(_QWORD, GUID *, __int64 *); // rdi
  int v123; // eax
  int v124; // eax
  int v125; // eax
  struct ResizeProcessor *v126; // rbx
  __int64 (__fastcall *v127)(struct ResizeProcessor *, GUID *, __int64 *); // rdi
  int v128; // eax
  int v129; // eax
  int v130; // eax
  __int64 (__fastcall ***v131)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v132)(_QWORD, GUID *, __int64 *); // rdi
  int v133; // eax
  int v134; // eax
  int v135; // eax
  struct InputForwardProcessor *v136; // rbx
  __int64 (__fastcall *v137)(struct InputForwardProcessor *, GUID *, __int64 *); // rdi
  int v138; // eax
  int v139; // eax
  int v140; // eax
  struct ComboButtonProcessor *v141; // rbx
  __int64 (__fastcall *v142)(struct ComboButtonProcessor *, GUID *, __int64 *); // rdi
  int v143; // eax
  int v144; // eax
  int v145; // eax
  struct RawButtonProcessor *v146; // rbx
  __int64 (__fastcall *v147)(struct RawButtonProcessor *, GUID *, __int64 *); // rdi
  int v148; // eax
  int v149; // eax
  int v150; // [rsp+20h] [rbp-E0h]
  const char *v151; // [rsp+20h] [rbp-E0h]
  __int64 (__fastcall ***v152)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-C0h] BYREF
  __int64 v153; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v154)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-B0h] BYREF
  __int64 v155; // [rsp+58h] [rbp-A8h] BYREF
  __int64 (__fastcall ***v156)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-A0h] BYREF
  __int64 v157; // [rsp+68h] [rbp-98h] BYREF
  struct TipToGlassProcessor *v158; // [rsp+70h] [rbp-90h] BYREF
  __int64 v159; // [rsp+78h] [rbp-88h] BYREF
  struct TapProcessor *v160; // [rsp+80h] [rbp-80h] BYREF
  __int64 v161; // [rsp+88h] [rbp-78h] BYREF
  __int64 (__fastcall ***v162)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp-70h] BYREF
  __int64 v163; // [rsp+98h] [rbp-68h] BYREF
  __int64 v164; // [rsp+A0h] [rbp-60h] BYREF
  struct EdgyLegacyProcessor *v165; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v166; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v167; // [rsp+B8h] [rbp-48h] BYREF
  struct SystemButtonProcessor *v168; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v169; // [rsp+C8h] [rbp-38h] BYREF
  struct InputRedirectionProcessor *v170; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v171; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v172; // [rsp+E0h] [rbp-20h] BYREF
  __int64 (__fastcall ***v173)(_QWORD, GUID *, __int64 *); // [rsp+E8h] [rbp-18h] BYREF
  void *v174; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v175; // [rsp+F8h] [rbp-8h] BYREF
  struct ResizeProcessor *v176; // [rsp+100h] [rbp+0h] BYREF
  __int64 v177; // [rsp+108h] [rbp+8h] BYREF
  __int64 (__fastcall ***v178)(_QWORD, GUID *, __int64 *); // [rsp+110h] [rbp+10h] BYREF
  __int64 v179; // [rsp+118h] [rbp+18h] BYREF
  struct InputForwardProcessor *v180; // [rsp+120h] [rbp+20h] BYREF
  __int64 v181; // [rsp+128h] [rbp+28h] BYREF
  struct ComboButtonProcessor *v182; // [rsp+130h] [rbp+30h] BYREF
  __int64 v183; // [rsp+138h] [rbp+38h] BYREF
  struct RawButtonProcessor *v184; // [rsp+140h] [rbp+40h] BYREF
  __int64 v185; // [rsp+148h] [rbp+48h] BYREF
  __int64 (__fastcall ***v186)(_QWORD, GUID *, __int64 *); // [rsp+150h] [rbp+50h] BYREF
  DWMInputRouter *v187; // [rsp+158h] [rbp+58h] BYREF
  HLOCAL hMem; // [rsp+160h] [rbp+60h] BYREF
  char v189; // [rsp+168h] [rbp+68h]
  __int64 v190; // [rsp+170h] [rbp+70h] BYREF
  __int64 v191; // [rsp+178h] [rbp+78h] BYREF
  __int64 (__fastcall ***v192)(_QWORD, _QWORD, _QWORD); // [rsp+180h] [rbp+80h]
  __int64 v193; // [rsp+188h] [rbp+88h] BYREF
  HLOCAL v194; // [rsp+190h] [rbp+90h] BYREF
  char v195; // [rsp+198h] [rbp+98h]
  void (__fastcall ***v196)(_QWORD); // [rsp+1A0h] [rbp+A0h] BYREF
  DWMInputRouter *v197; // [rsp+1A8h] [rbp+A8h] BYREF
  DWMInputRouter *v198; // [rsp+1B0h] [rbp+B0h] BYREF
  DWMInputRouter *v199; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v200; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v201; // [rsp+1C8h] [rbp+C8h] BYREF
  char v202; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v203[17]; // [rsp+1D8h] [rbp+D8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]
  unsigned int v205; // [rsp+270h] [rbp+170h] BYREF
  __int64 v206; // [rsp+278h] [rbp+178h] BYREF
  _QWORD *v207; // [rsp+280h] [rbp+180h] BYREF
  GameInputProcessor *v208; // [rsp+288h] [rbp+188h] BYREF

  LODWORD(v206) = 0;
  v194 = 0LL;
  v195 = 0;
  hMem = 0LL;
  v189 = 0;
  v205 = 0;
  v201 = 0LL;
  v2 = (_QWORD *)((char *)this + 152);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 19);
  v3 = CoreUICreate(v2);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA7,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v3,
      v150);
  v4 = (_QWORD *)((char *)this + 160);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 20);
  v5 = CoreUIFactoryCreate((char *)this + 160);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xAD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v5,
      v150);
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v194, v6, (__int64)c_wszMessagePortNames);
  if ( Descriptor < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xB4,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)Descriptor,
      v150);
  v8 = *v2;
  v9 = *(__int64 (__fastcall **)(__int64, HLOCAL, char *))(*(_QWORD *)*v2 + 64LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 21);
  v10 = v9(v8, v194, (char *)this + 168);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xB8,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v10,
      v150);
  v12 = InputSecurityDescriptor::QueryDescriptor((__int64)&hMem, v11, (__int64)c_wszMessagePortNames);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC1,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v12,
      v150);
  v13 = *v2;
  v14 = *(__int64 (__fastcall **)(__int64, HLOCAL, char *))(*(_QWORD *)*v2 + 64LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 22);
  v15 = v14(v13, hMem, (char *)this + 176);
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC5,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v15,
      v150);
  v16 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v4 + 24LL))(
          *v4,
          &GUID_f61d2579_c998_4734_9f88_0b4bc8bcf062,
          &v205);
  if ( v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xCD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v16,
      v150);
  v17 = *v4;
  v18 = *(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD))(*(_QWORD *)*v4 + 32LL);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 38);
  v19 = v18(v17, (char *)this + 24, 0LL, v205);
  if ( v19 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD5,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v19,
      (int)L"IRemoteViewHitTestApi");
  v20 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v4 + 24LL))(
          *v4,
          &GUID_adcbf490_e8c4_4bfa_8754_f40fc58292fc,
          &v205);
  if ( v20 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v20,
      (int)L"IRemoteViewHitTestApi");
  v21 = *v4;
  v22 = *(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD))(*(_QWORD *)*v4 + 32LL);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 39);
  v151 = L"IRemoteViewHitTestRequestApi";
  v23 = v22(v21, (char *)this + 32, 0LL, v205);
  if ( v23 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE5,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v23,
      (int)L"IRemoteViewHitTestRequestApi");
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v25 = *((_QWORD *)BamoServerConnection + 29);
  v26 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(v25 + 8) + 256LL);
  v27 = operator new(0x40uLL);
  v207 = v27;
  *v27 = &BamoUIAHitTestPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v27[1] = &BamoUIAHitTestPrincipal::`vftable'{for `IUIAHitTestPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl(
    (Microsoft::BamoImpl::BamoPrincipalImpl *)(v27 + 2),
    BamoServerConnection);
  v27[2] = &BamoImpl::BamoUIAHitTestPrincipalImpl::`vftable';
  *v27 = &UIAHitTestServer::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v27[1] = &BamoUIAHitTestPrincipal::`vftable'{for `IUIAHitTestPrincipal'};
  v27[7] = this;
  v26(v25 + 8, v27);
  ISMStatics::GetAnimationDataProvider();
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 33);
  v28 = DWMCursorBroker::Create(this, (struct ICursorBroker **)this + 33);
  if ( v28 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF8,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v28,
      (int)L"IRemoteViewHitTestRequestApi");
  v31 = ISMTestMode::s_instance;
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v30);
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v203[0] = off_1801E42C0;
    v203[1] = this;
    v203[7] = v203;
    KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>::Initialize((_QWORD *)this + 61, v2, v29, (__int64)v203);
    v31 = ISMTestMode::s_instance;
  }
  if ( !v31 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v30);
  v32 = (__int64 *)((char *)this + 328);
  if ( *(_BYTE *)v31 )
  {
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(v32);
    v86 = NonBamoInputDeliveryServer::Create((char *)this + 56, L"InputDeliveryTest", 1LL, (char *)this + 328);
    if ( v86 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x113,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v86,
        (int)L"IRemoteViewHitTestRequestApi");
  }
  else
  {
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(v32);
    v33 = NonBamoInputDeliveryServer::Create((char *)this + 56, L"System\\InputDelivery", 0LL, (char *)this + 328);
    if ( v33 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x119,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v33,
        (int)L"IRemoteViewHitTestRequestApi");
  }
  v34 = ISMStatics::GetBamoServerConnection();
  v35 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v34 + 29) + 8LL)
                                                                          + 120LL))(*((_QWORD *)v34 + 29) + 8LL);
  v36 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 42);
  if ( v36 != v35 )
  {
    if ( v35 )
    {
      (**v35)(v35);
      v36 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 42);
    }
    v196 = v36;
    *((_QWORD *)this + 42) = v35;
    Microsoft::WRL::ComPtr<InputDeliveryServer>::InternalRelease(&v196);
  }
  v37 = *((_QWORD *)this + 42);
  v38 = *(_QWORD *)(v37 + 248);
  v39 = *((_QWORD *)this + 41);
  if ( v38 != v39 )
  {
    if ( v39 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
      v38 = *(_QWORD *)(v37 + 248);
    }
    v187 = (DWMInputRouter *)v38;
    *(_QWORD *)(v37 + 248) = v39;
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)&v187);
  }
  v207 = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v207);
  v40 = RefCountedObject::operator new(0x30uLL);
  v41 = -2147024882;
  if ( v40 )
  {
    *(_QWORD *)v40 = &RefCountedObject::`vftable';
    v40[2] = 1;
    *(_QWORD *)v40 = &ContextualProcessorManager::`vftable';
    *((_QWORD *)v40 + 2) = 0LL;
    *((_QWORD *)v40 + 3) = 0LL;
    *((_QWORD *)v40 + 4) = 0LL;
    v40[10] = 0;
    v207 = v40;
    v42 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
      (const char *)0x8007000ELL,
      (int)L"IRemoteViewHitTestRequestApi");
    v42 = 2147942414LL;
  }
  if ( (int)v42 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x129,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)v42,
      (int)v151);
  if ( IsEdition(0x3DDA1uLL) )
  {
    v154 = 0LL;
    v153 = 0LL;
    v197 = this;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v154);
    v87 = Microsoft::WRL::Details::MakeAndInitialize<CursorSuppressionProcessor,CursorSuppressionProcessor,DWMInputRouter *>(
            &v154,
            &v197);
    if ( v87 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x137,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v87,
        (int)v151);
    v88 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v154;
    v89 = **v154;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v153);
    v90 = v89(v88, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v153);
    if ( v90 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x138,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v90,
        (int)v151);
    v91 = ContextualProcessorManager::RegisterProcessor(v207, v153, 0LL);
    if ( v91 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x139,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v91,
        (int)v151);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v153);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v154);
  }
  if ( IsEdition(0x3DDA1uLL) )
  {
    v156 = 0LL;
    v155 = 0LL;
    v198 = this;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v156);
    v92 = Microsoft::WRL::Details::MakeAndInitialize<CursorProcessor,CursorProcessor,DWMInputRouter *>(&v156, &v198);
    if ( v92 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x146,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v92,
        (int)v151);
    v93 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v156;
    v94 = **v156;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v155);
    v95 = v94(v93, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v155);
    if ( v95 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x147,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v95,
        (int)v151);
    v96 = ContextualProcessorManager::RegisterProcessor(v207, v155, 0LL);
    if ( v96 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x148,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v96,
        (int)v151);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v155);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v156);
  }
  if ( IsEdition(0x1C000uLL) || IsEdition(0x224AuLL) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_PenTipToGlassEvents>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_PenTipToGlassEvents>::GetImpl'::`2'::impl,
      1u,
      v43,
      v44);
    v158 = 0LL;
    v157 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v158);
    v45 = TipToGlassProcessor::Create(&v158);
    if ( v45 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x153,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v45,
        (int)v151);
    v46 = v158;
    v47 = **(__int64 (__fastcall ***)(struct TipToGlassProcessor *, GUID *, __int64 *))v158;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v157);
    v48 = v47(v46, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v157);
    if ( v48 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x154,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v48,
        (int)v151);
    v49 = ContextualProcessorManager::RegisterProcessor(v207, v157, 1LL);
    if ( v49 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x155,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v49,
        (int)v151);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v157);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v158);
  }
  if ( IsEdition(0x1C000uLL) || IsEdition(0x400uLL) )
  {
    v160 = 0LL;
    v159 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v160);
    v97 = TapProcessor::Create(&v160);
    if ( v97 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x15F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v97,
        (int)v151);
    v98 = v160;
    v99 = **(__int64 (__fastcall ***)(struct TapProcessor *, GUID *, __int64 *))v160;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v159);
    v100 = v99(v98, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v159);
    if ( v100 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x160,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v100,
        (int)v151);
    v101 = ContextualProcessorManager::RegisterProcessor(v207, v159, 0LL);
    if ( v101 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x161,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v101,
        (int)v151);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v159);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v160);
  }
  if ( IsEdition(0x1C000uLL) || IsEdition(0x224AuLL) )
  {
    v162 = 0LL;
    v161 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v162);
    v50 = Microsoft::WRL::Details::MakeAndInitialize<ShellGesturesProcessor,ShellGesturesProcessor,>(&v162);
    if ( v50 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x16D,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v50,
        (int)v151);
    v51 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v162;
    v52 = **v162;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v161);
    v53 = v52(v51, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v161);
    if ( v53 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x16E,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v53,
        (int)v151);
    v54 = ContextualProcessorManager::RegisterProcessor(v207, v161, 1LL);
    if ( v54 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x16F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v54,
        (int)v151);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v161);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v162);
  }
  if ( IsEdition(0x1C000uLL) )
  {
    v192 = 0LL;
    v163 = 0LL;
    Microsoft::WRL::ComPtr<ISystemInputRouterHitTest>::ComPtr<ISystemInputRouterHitTest>(&v191, this);
    v102 = (char *)EdgyProcessor::Create(&v190, &v191);
    v103 = 0LL;
    if ( &v202 != v102 )
    {
      v103 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v102;
      *(_QWORD *)v102 = 0LL;
    }
    v192 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v103;
    v104 = v190;
    if ( v190 )
    {
      v190 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v104 + 16LL))(v104);
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v191);
    v105 = **v103;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v163);
    v106 = v105(v103, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v163);
    if ( v106 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x17C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v106,
        (int)v151);
    v107 = ContextualProcessorManager::RegisterProcessor(v207, v163, 0LL);
    if ( v107 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x17D,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v107,
        (int)v151);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v163);
    v192 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v103)[2])(v103);
  }
  if ( IsEdition(0x1C000uLL) )
  {
    v165 = 0LL;
    v164 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v165);
    v108 = EdgyLegacyProcessor::Create(&v165);
    if ( v108 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x189,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v108,
        (int)v151);
    v109 = v165;
    v110 = **(__int64 (__fastcall ***)(struct EdgyLegacyProcessor *, GUID *, __int64 *))v165;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v164);
    v111 = v110(v109, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v164);
    if ( v111 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x18A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v111,
        (int)v151);
    v112 = ContextualProcessorManager::RegisterProcessor(v207, v164, 0LL);
    if ( v112 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x18B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v112,
        (int)v151);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v164);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v165);
  }
  if ( IsEdition(0x1C000uLL) )
  {
    v166 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v166);
    v113 = Microsoft::WRL::Details::MakeAndInitialize<MagnifierProcessor,IContextualProcessor,>(&v166);
    if ( v113 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x196,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v113,
        (int)v151);
    v114 = ContextualProcessorManager::RegisterProcessor(v207, v166, 0LL);
    if ( v114 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x197,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v114,
        (int)v151);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v166);
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SupportFnKey>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SupportFnKey>::GetImpl'::`2'::impl,
    1u,
    v55,
    v56);
  v168 = 0LL;
  v167 = 0LL;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v168);
  v57 = SystemButtonProcessor::Create(&v168);
  if ( v57 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1A3,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v57,
      (int)v151);
  v58 = v168;
  v59 = **(__int64 (__fastcall ***)(struct SystemButtonProcessor *, GUID *, __int64 *))v168;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v167);
  v60 = v59(v58, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v167);
  if ( v60 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1A4,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v60,
      (int)v151);
  v61 = ContextualProcessorManager::RegisterProcessor(v207, v167, 0LL);
  if ( v61 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1A5,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v61,
      (int)v151);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v167);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v168);
  v170 = 0LL;
  v169 = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v170);
  v62 = InputRedirectionProcessor::Create((DWMInputRouter *)((char *)this + 48), &v170);
  if ( v62 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1B0,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v62,
      (int)v151);
  v63 = v170;
  v64 = **(__int64 (__fastcall ***)(struct InputRedirectionProcessor *, GUID *, __int64 *))v170;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v169);
  v65 = v64(v63, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v169);
  if ( v65 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1B1,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v65,
      (int)v151);
  v66 = ContextualProcessorManager::RegisterProcessor(v207, v169, 0LL);
  if ( v66 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1B2,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v66,
      (int)v151);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v169);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v170);
  v152 = 0LL;
  if ( IsEdition(0x3DDA1uLL) )
  {
    v171 = 0LL;
    v199 = this;
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)&v152);
    v115 = Microsoft::WRL::Details::MakeAndInitialize<ActivationProcessor,ActivationProcessor,DWMInputRouter *>(
             &v152,
             &v199);
    if ( v115 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1BF,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v115,
        (int)v151);
    v116 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v152;
    v117 = **v152;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v171);
    v118 = v117(v116, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v171);
    if ( v118 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1C0,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v118,
        (int)v151);
    v119 = ContextualProcessorManager::RegisterProcessor(v207, v171, 0LL);
    if ( v119 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1C1,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v119,
        (int)v151);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v171);
  }
  if ( IsEdition(0x3DDA1uLL) )
  {
    LOBYTE(v67) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_HotkeyContextualProcessor>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_HotkeyContextualProcessor>::GetImpl'::`2'::impl,
      v67);
    v173 = 0LL;
    v172 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v173);
    v120 = Microsoft::WRL::Details::MakeAndInitialize<HotkeyContextualProcessor,HotkeyContextualProcessor,>(&v173);
    if ( v120 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1CD,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v120,
        (int)v151);
    v121 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v173;
    v122 = **v173;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v172);
    v123 = v122(v121, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v172);
    if ( v123 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1CE,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v123,
        (int)v151);
    v124 = ContextualProcessorManager::RegisterProcessor(v207, v172, 0LL);
    if ( v124 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1CF,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v124,
        (int)v151);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v172);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v173);
  }
  v208 = 0LL;
  v174 = 0LL;
  Microsoft::WRL::ComPtr<GameInputProcessor>::InternalRelease(&v208);
  v208 = 0LL;
  v68 = (GameInputProcessor *)RefCountedObject::operator new(0xC8uLL);
  if ( v68 )
    v70 = GameInputProcessor::GameInputProcessor(v68, (DWMInputRouter *)((char *)this + 48));
  else
    v70 = 0LL;
  if ( !v70 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x6B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\"
                    "gameinputprocessor.cpp",
      v69);
  v200 = 0LL;
  v208 = v70;
  wil::com_ptr_t<GameInputProcessor,wil::err_exception_policy>::~com_ptr_t<GameInputProcessor,wil::err_exception_policy>(&v200);
  v71 = v208;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v174);
  Interface = GameInputProcessor::QueryInterface(
                v71,
                &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b,
                (GameInputProcessor **)&v174);
  if ( Interface < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1DB,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)Interface,
      (int)v151);
  v73 = ContextualProcessorManager::RegisterProcessor(v207, v174, 1LL);
  if ( v73 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1DC,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v73,
      (int)v151);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v174);
  Microsoft::WRL::ComPtr<GameInputProcessor>::InternalRelease(&v208);
  if ( IsEdition(0x1C000uLL) )
  {
    v176 = 0LL;
    v175 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v176);
    v125 = ResizeProcessor::Create(&v176);
    if ( v125 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1E8,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v125,
        (int)v151);
    v126 = v176;
    v127 = **(__int64 (__fastcall ***)(struct ResizeProcessor *, GUID *, __int64 *))v176;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v175);
    v128 = v127(v126, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v175);
    if ( v128 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1E9,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v128,
        (int)v151);
    v129 = ContextualProcessorManager::RegisterProcessor(v207, v175, 0LL);
    if ( v129 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1EA,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v129,
        (int)v151);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v175);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v176);
  }
  if ( IsEdition(0x1C000uLL) )
  {
    v178 = 0LL;
    v177 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v178);
    Microsoft::WRL::ComPtr<ISystemInputRouterHitTest>::ComPtr<ISystemInputRouterHitTest>(&v193, this);
    v130 = DragNDropProcessor::Create(&v193, &v152, &v178);
    if ( v130 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1F6,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v130,
        (int)v151);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v193);
    v131 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v178;
    v132 = **v178;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v177);
    v133 = v132(v131, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v177);
    if ( v133 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1F7,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v133,
        (int)v151);
    v134 = ContextualProcessorManager::RegisterProcessor(v207, v177, 0LL);
    if ( v134 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1F8,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v134,
        (int)v151);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v177);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v178);
  }
  if ( IsEdition(0x1C000uLL) )
  {
    v180 = 0LL;
    v179 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v180);
    v135 = InputForwardProcessor::Create(&v180);
    if ( v135 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x204,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v135,
        (int)v151);
    v136 = v180;
    v137 = **(__int64 (__fastcall ***)(struct InputForwardProcessor *, GUID *, __int64 *))v180;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v179);
    v138 = v137(v136, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v179);
    if ( v138 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x205,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v138,
        (int)v151);
    v139 = ContextualProcessorManager::RegisterProcessor(v207, v179, 0LL);
    if ( v139 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x206,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v139,
        (int)v151);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v179);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v180);
  }
  if ( IsEdition(0x1C000uLL) )
  {
    v182 = 0LL;
    v181 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v182);
    v140 = ComboButtonProcessor::Create(&v182);
    if ( v140 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x212,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v140,
        (int)v151);
    v141 = v182;
    v142 = **(__int64 (__fastcall ***)(struct ComboButtonProcessor *, GUID *, __int64 *))v182;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v181);
    v143 = v142(v141, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v181);
    if ( v143 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x213,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v143,
        (int)v151);
    v144 = ContextualProcessorManager::RegisterProcessor(v207, v181, 0LL);
    if ( v144 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x214,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v144,
        (int)v151);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v181);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v182);
  }
  if ( IsEdition(0x3DDA1uLL) )
  {
    v184 = 0LL;
    v183 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v184);
    v145 = RawButtonProcessor::Create(&v184);
    if ( v145 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x220,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v145,
        (int)v151);
    v146 = v184;
    v147 = **(__int64 (__fastcall ***)(struct RawButtonProcessor *, GUID *, __int64 *))v184;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v183);
    v148 = v147(v146, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v183);
    if ( v148 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x221,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v148,
        (int)v151);
    v149 = ContextualProcessorManager::RegisterProcessor(v207, v183, 0LL);
    if ( v149 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x222,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v149,
        (int)v151);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v183);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v184);
  }
  v186 = 0LL;
  v185 = 0LL;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v186);
  v74 = RefCountedObject::operator new(0x18uLL);
  v75 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v74;
  if ( v74 )
  {
    *v74 = 0LL;
    v74[2] = 0LL;
    v74[1] = &RefCountedObject::`vftable';
    *((_DWORD *)v74 + 4) = 1;
    *v74 = &InputServiceProcessor::`vftable'{for `IContextualProcessor'};
    v74[1] = &InputServiceProcessor::`vftable'{for `RefCountedObject'};
    if ( (unsigned __int8)IsPreloadKeyboardLayoutsPresent() )
      PreloadKeyboardLayouts();
    v186 = v75;
    v41 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputservice\\system\\li"
                    "b\\inputserviceprocessor.cpp",
      (const char *)0x8007000ELL,
      (int)v151);
    v75 = v186;
  }
  if ( v41 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x22D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v41,
      (int)v151);
  v76 = **v75;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v185);
  v77 = v76(v75, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v185);
  if ( v77 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x22E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v77,
      (int)v151);
  v78 = ContextualProcessorManager::RegisterProcessor(v207, v185, 0LL);
  if ( v78 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x22F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v78,
      (int)v151);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v185);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v186);
  v79 = *((_QWORD *)this + 32);
  v80 = (__int64)v207;
  if ( (_QWORD *)v79 != v207 )
  {
    if ( v207 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v207 + 8LL))(v207);
      v79 = *((_QWORD *)this + 32);
    }
    v206 = v79;
    *((_QWORD *)this + 32) = v80;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v206);
  }
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)&v152);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v207);
  v81 = ISMStatics::GetBamoServerConnection();
  v82 = *((_QWORD *)v81 + 29);
  v83 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(v82 + 8) + 240LL);
  v84 = operator new(0x40uLL);
  v207 = v84;
  v187 = this;
  (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
  LODWORD(v206) = 1;
  *v84 = &BamoTestCommandsPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v84[1] = &BamoTestCommandsPrincipal::`vftable'{for `ITestCommandsPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(v84 + 2), v81);
  v84[2] = &BamoImpl::BamoTestCommandsPrincipalImpl::`vftable';
  *v84 = &TestCommands::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v84[1] = &BamoTestCommandsPrincipal::`vftable'{for `ITestCommandsPrincipal'};
  v84[7] = this;
  (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
  v83(v82 + 8, v84);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v187);
  *((_QWORD *)ISMStatics::GetForegroundManager() + 2) = (char *)this + 16;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v201);
  if ( hMem )
  {
    if ( v189 )
      FreeTransientObjectSecurityDescriptor();
    else
      LocalFree(hMem);
    hMem = 0LL;
  }
  if ( v194 )
  {
    if ( v195 )
      FreeTransientObjectSecurityDescriptor();
    else
      LocalFree(v194);
  }
  return 0LL;
}
