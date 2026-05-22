/*
 * XREFs of ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035D10
 * Callers:
 *     ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x180041E60 (-Initialize@MPCInputRouter@@AEAAJXZ.c)
 *     ?Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1801B8650 (-Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@W4InputSinkRequirement@1@@Z @ 0x180017D8C (-RegisterProcessor@ContextualProcessorManager@@QEAAJPEAUIContextualProcessor@@W4InputSinkRequire.c)
 *     ??1?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@QEAA@XZ @ 0x180017E3C (--1-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180024ACC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x180026B3C (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VGameInputProcessor@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180031CC4 (--1-$com_ptr_t@VGameInputProcessor@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@NonBamoInputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIInputDeliveryServer@@@Z @ 0x1800340CC (-Create@NonBamoInputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIIn.c)
 *     ??0GameInputProcessor@@AEAA@PEAUIInputDeviceInfoStore@@@Z @ 0x1800342B8 (--0GameInputProcessor@@AEAA@PEAUIInputDeviceInfoStore@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SupportFnKey@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180034688 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SupportFnKey@@@details@wil@@QEAAX_NW4Repo.c)
 *     ??0TestCommands@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@AEBV?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@@Z @ 0x180034D0C (--0TestCommands@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@AEBV-$ComPtr@UISystemInputRouter@@@.c)
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x180034EC0 (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x180035CD8 (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180037EEC (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?QueryInterface@GameInputProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800386D0 (-QueryInterface@GameInputProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003965C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?Create@LightDismissProcessor@@SAJPEAPEAV1@@Z @ 0x18003B81C (-Create@LightDismissProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@TipToGlassProcessor@@SAJPEAPEAV1@@Z @ 0x18003B9B8 (-Create@TipToGlassProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z @ 0x18003BA20 (-Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z.c)
 *     ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x18003BB24 (-Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z.c)
 *     ?Create@SystemButtonProcessor@@SAJPEAPEAV1@@Z @ 0x18003BBB0 (-Create@SystemButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003BD6C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??$MakeAndInitialize@VShellGesturesProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVShellGesturesProcessor@@@Z @ 0x18003FF80 (--$MakeAndInitialize@VShellGesturesProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVShellGestu.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_POINTER_INPUT_DOWN_MESSAGE@@@Z@std@@@Z @ 0x18004457C (-Initialize@-$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMess.c)
 *     ?InternalRelease@?$ComPtr@VGameInputProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x18005418C (-InternalRelease@-$ComPtr@VGameInputProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEBAXXZ @ 0x180054A8C (-InternalAddRef@-$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEAAKXZ @ 0x180054C34 (-InternalRelease@-$ComPtr@VInputDeliveryServer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     IsPreloadKeyboardLayoutsPresent @ 0x180057E24 (IsPreloadKeyboardLayoutsPresent.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbSh1@@@details@wil@@QEAA_NXZ @ 0x18005ECD4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbSh1@@@details@wil@@QEAA_NX.c)
 *     ?Create@ShellHandwritingProcessor@@SAJPEAPEAUIContextualProcessor@@@Z @ 0x180064068 (-Create@ShellHandwritingProcessor@@SAJPEAPEAUIContextualProcessor@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A0190 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Create@DragNDropProcessor@@SAJAEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@AEAV?$ComPtr@VActivationProcessor@@@34@PEAPEAV1@@Z @ 0x18015D148 (-Create@DragNDropProcessor@@SAJAEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@AEAV-$Co.c)
 *     ?Create@ResizeProcessor@@SAJPEAPEAV1@@Z @ 0x180163C8C (-Create@ResizeProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@EdgyProcessor@@SA?AV?$ComPtr@VEdgyProcessor@@@WRL@Microsoft@@AEBV?$ComPtr@UISystemInputRouterHitTest@@@34@@Z @ 0x1801679A8 (-Create@EdgyProcessor@@SA-AV-$ComPtr@VEdgyProcessor@@@WRL@Microsoft@@AEBV-$ComPtr@UISystemInputR.c)
 *     ??$?0VDWMInputRouter@@@?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@QEAA@PEAVDWMInputRouter@@@Z @ 0x1801B7000 (--$-0VDWMInputRouter@@@-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@QEAA@PEAVDWMInputRou.c)
 *     ??$MakeAndInitialize@VActivationProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAVActivationProcessor@@$$QEAPEAVDWMInputRouter@@@Z @ 0x1801B724C (--$MakeAndInitialize@VActivationProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEA.c)
 *     ??$MakeAndInitialize@VCursorProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAVCursorProcessor@@$$QEAPEAVDWMInputRouter@@@Z @ 0x1801B7304 (--$MakeAndInitialize@VCursorProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     ??$MakeAndInitialize@VCursorSuppressionProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAVCursorSuppressionProcessor@@$$QEAPEAVDWMInputRouter@@@Z @ 0x1801B73E4 (--$MakeAndInitialize@VCursorSuppressionProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@.c)
 *     ??$MakeAndInitialize@VHotkeyContextualProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyContextualProcessor@@@Z @ 0x1801B74C4 (--$MakeAndInitialize@VHotkeyContextualProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyC.c)
 *     ??B?$ComPtrRef@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIContextualProcessor@@XZ @ 0x1801B840C (--B-$ComPtrRef@V-$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAP.c)
 *     ?Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1801C46CC (-Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@InputForwardProcessor@@SAJPEAPEAV1@@Z @ 0x1801C6F30 (-Create@InputForwardProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@EdgyLegacyProcessor@@SAJPEAPEAV1@@Z @ 0x1801C82EC (-Create@EdgyLegacyProcessor@@SAJPEAPEAV1@@Z.c)
 *     ??$MakeAndInitialize@VMagnifierProcessor@@UIContextualProcessor@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIContextualProcessor@@@Z @ 0x1801CD2F0 (--$MakeAndInitialize@VMagnifierProcessor@@UIContextualProcessor@@$$V@Details@WRL@Microsoft@@YAJP.c)
 *     ?Create@TapProcessor@@SAJPEAPEAV1@@Z @ 0x1801D2058 (-Create@TapProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@RawButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1801D29D4 (-Create@RawButtonProcessor@@SAJPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=74
__int64 __fastcall DWMInputRouter::Initialize(DWMInputRouter *this)
{
  char *v2; // rsi
  int v3; // eax
  _QWORD *v4; // rdi
  int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // r15
  __int64 (__fastcall *v9)(__int64, __int64, char *); // r14
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r15
  __int64 (__fastcall *v14)(__int64, __int64, char *); // rbx
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
  int v34; // eax
  struct InputSystemServerConnection *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rbx
  _DWORD *v40; // rax
  int v41; // r14d
  __int64 v42; // r9
  struct IContextualProcessor **v43; // rax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  __int64 (__fastcall ***v47)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v48)(_QWORD, GUID *, __int64 *); // rdi
  int v49; // eax
  int v50; // eax
  int v51; // eax
  __int64 (__fastcall ***v52)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v53)(_QWORD, GUID *, __int64 *); // rdi
  int v54; // eax
  int v55; // eax
  int v56; // eax
  struct TipToGlassProcessor *v57; // rbx
  __int64 (__fastcall *v58)(struct TipToGlassProcessor *, GUID *, __int64 *); // rdi
  int v59; // eax
  int v60; // eax
  int v61; // eax
  struct TapProcessor *v62; // rbx
  __int64 (__fastcall *v63)(struct TapProcessor *, GUID *, __int64 *); // rdi
  int v64; // eax
  int v65; // eax
  int v66; // eax
  struct LightDismissProcessor *v67; // rbx
  __int64 (__fastcall *v68)(struct LightDismissProcessor *, GUID *, __int64 *); // rdi
  int v69; // eax
  int v70; // eax
  int v71; // eax
  __int64 (__fastcall ***v72)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v73)(_QWORD, GUID *, __int64 *); // rdi
  int v74; // eax
  int v75; // eax
  char *v76; // rax
  __int64 (__fastcall ***v77)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v78; // rcx
  __int64 (__fastcall *v79)(_QWORD, GUID *, __int64 *); // rbx
  int v80; // eax
  int v81; // eax
  int v82; // eax
  struct EdgyLegacyProcessor *v83; // rbx
  __int64 (__fastcall *v84)(struct EdgyLegacyProcessor *, GUID *, __int64 *); // rdi
  int v85; // eax
  int v86; // eax
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rax
  int v90; // eax
  int v91; // eax
  int v92; // eax
  struct SystemButtonProcessor *v93; // rbx
  __int64 (__fastcall *v94)(struct SystemButtonProcessor *, GUID *, __int64 *); // rdi
  int v95; // eax
  int v96; // eax
  int v97; // eax
  struct InputRedirectionProcessor *v98; // rbx
  __int64 (__fastcall *v99)(struct InputRedirectionProcessor *, GUID *, __int64 *); // rdi
  int v100; // eax
  int v101; // eax
  int v102; // eax
  __int64 (__fastcall ***v103)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v104)(_QWORD, GUID *, __int64 *); // rdi
  int v105; // eax
  int v106; // eax
  int v107; // eax
  __int64 (__fastcall ***v108)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v109)(_QWORD, GUID *, __int64 *); // rdi
  int v110; // eax
  int v111; // eax
  GameInputProcessor *v112; // rax
  const char *v113; // r9
  GameInputProcessor *v114; // rax
  GameInputProcessor *v115; // rbx
  int v116; // eax
  int v117; // eax
  int v118; // eax
  struct ResizeProcessor *v119; // rbx
  __int64 (__fastcall *v120)(struct ResizeProcessor *, GUID *, __int64 *); // rdi
  int v121; // eax
  int v122; // eax
  int v123; // eax
  __int64 (__fastcall ***v124)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v125)(_QWORD, GUID *, __int64 *); // rdi
  int v126; // eax
  int v127; // eax
  int v128; // eax
  struct InputForwardProcessor *v129; // rbx
  __int64 (__fastcall *v130)(struct InputForwardProcessor *, GUID *, __int64 *); // rdi
  int v131; // eax
  int v132; // eax
  int v133; // eax
  struct ComboButtonProcessor *v134; // rbx
  __int64 (__fastcall *v135)(struct ComboButtonProcessor *, GUID *, __int64 *); // rdi
  int v136; // eax
  int v137; // eax
  int v138; // eax
  struct RawButtonProcessor *v139; // rbx
  __int64 (__fastcall *v140)(struct RawButtonProcessor *, GUID *, __int64 *); // rdi
  int v141; // eax
  int v142; // eax
  _QWORD *v143; // rax
  __int64 (__fastcall ***v144)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v145)(_QWORD, GUID *, __int64 *); // rdi
  int v146; // eax
  int v147; // eax
  __int64 v148; // rbx
  struct InputSystemServerConnection *v149; // rdi
  __int64 v150; // r14
  void (__fastcall *v151)(__int64, _QWORD *); // rsi
  _QWORD *v152; // rbx
  _QWORD *v153; // rax
  int v155; // [rsp+20h] [rbp-E0h]
  DWMInputRouter *v156; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v157)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v158)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-B0h] BYREF
  __int64 v159; // [rsp+58h] [rbp-A8h] BYREF
  __int64 (__fastcall ***v160)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-A0h] BYREF
  __int64 v161; // [rsp+68h] [rbp-98h] BYREF
  struct TipToGlassProcessor *v162; // [rsp+70h] [rbp-90h] BYREF
  __int64 v163; // [rsp+78h] [rbp-88h] BYREF
  struct TapProcessor *v164; // [rsp+80h] [rbp-80h] BYREF
  __int64 v165; // [rsp+88h] [rbp-78h] BYREF
  struct LightDismissProcessor *v166; // [rsp+90h] [rbp-70h] BYREF
  __int64 v167; // [rsp+98h] [rbp-68h] BYREF
  __int64 (__fastcall ***v168)(_QWORD, GUID *, __int64 *); // [rsp+A0h] [rbp-60h] BYREF
  __int64 v169; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v170; // [rsp+B0h] [rbp-50h] BYREF
  struct EdgyLegacyProcessor *v171; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v172; // [rsp+C0h] [rbp-40h] BYREF
  struct SystemButtonProcessor *v173; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v174; // [rsp+D0h] [rbp-30h] BYREF
  struct InputRedirectionProcessor *v175; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v176; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v177; // [rsp+E8h] [rbp-18h] BYREF
  __int64 (__fastcall ***v178)(_QWORD, GUID *, __int64 *); // [rsp+F0h] [rbp-10h] BYREF
  void *v179; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v180; // [rsp+100h] [rbp+0h] BYREF
  struct ResizeProcessor *v181; // [rsp+108h] [rbp+8h] BYREF
  __int64 v182; // [rsp+110h] [rbp+10h] BYREF
  __int64 (__fastcall ***v183)(_QWORD, GUID *, __int64 *); // [rsp+118h] [rbp+18h] BYREF
  __int64 v184; // [rsp+120h] [rbp+20h] BYREF
  struct InputForwardProcessor *v185; // [rsp+128h] [rbp+28h] BYREF
  __int64 v186; // [rsp+130h] [rbp+30h] BYREF
  struct ComboButtonProcessor *v187; // [rsp+138h] [rbp+38h] BYREF
  __int64 v188; // [rsp+140h] [rbp+40h] BYREF
  struct RawButtonProcessor *v189; // [rsp+148h] [rbp+48h] BYREF
  __int64 v190; // [rsp+150h] [rbp+50h] BYREF
  __int64 (__fastcall ***v191)(_QWORD, GUID *, __int64 *); // [rsp+158h] [rbp+58h] BYREF
  __int64 v192; // [rsp+160h] [rbp+60h] BYREF
  __int64 v193; // [rsp+168h] [rbp+68h] BYREF
  __int64 v194; // [rsp+170h] [rbp+70h] BYREF
  __int64 v195; // [rsp+178h] [rbp+78h] BYREF
  __int64 v196; // [rsp+180h] [rbp+80h] BYREF
  __int64 (__fastcall ***v197)(_QWORD, _QWORD, _QWORD); // [rsp+188h] [rbp+88h]
  __int64 v198; // [rsp+190h] [rbp+90h] BYREF
  __int64 v199; // [rsp+198h] [rbp+98h] BYREF
  char v200; // [rsp+1A0h] [rbp+A0h]
  __int64 v201; // [rsp+1A8h] [rbp+A8h] BYREF
  char v202; // [rsp+1B0h] [rbp+B0h]
  __int64 v203; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 *v204; // [rsp+1C0h] [rbp+C0h] BYREF
  DWMInputRouter *v205; // [rsp+1C8h] [rbp+C8h] BYREF
  DWMInputRouter *v206; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 *v207; // [rsp+1D8h] [rbp+D8h] BYREF
  DWMInputRouter *v208; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v209; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v210; // [rsp+1F0h] [rbp+F0h] BYREF
  char v211; // [rsp+1F8h] [rbp+F8h] BYREF
  _QWORD v212[16]; // [rsp+200h] [rbp+100h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]
  unsigned int v214; // [rsp+290h] [rbp+190h] BYREF
  __int64 v215; // [rsp+298h] [rbp+198h] BYREF
  _QWORD *v216; // [rsp+2A0h] [rbp+1A0h] BYREF
  GameInputProcessor *v217; // [rsp+2A8h] [rbp+1A8h] BYREF

  LODWORD(v215) = 0;
  v201 = 0LL;
  v202 = 0;
  v199 = 0LL;
  v200 = 0;
  v214 = 0;
  v210 = 0LL;
  v2 = (char *)this + 152;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 19);
  v3 = CoreUICreate(v2);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xAB,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v3,
      v155);
  v4 = (_QWORD *)((char *)this + 160);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 20);
  v5 = CoreUIFactoryCreate((char *)this + 160);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xB1,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v5,
      v155);
  v7 = InputSecurityDescriptor::QueryDescriptor(&v201, v6, c_wszMessagePortNames);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xB8,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v7,
      v155);
  v8 = *(_QWORD *)v2;
  v9 = *(__int64 (__fastcall **)(__int64, __int64, char *))(**(_QWORD **)v2 + 64LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 21);
  v10 = v9(v8, v201, (char *)this + 168);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xBC,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v10,
      v155);
  v12 = InputSecurityDescriptor::QueryDescriptor(&v199, v11, c_wszMessagePortNames);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC5,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v12,
      v155);
  v13 = *(_QWORD *)v2;
  v14 = *(__int64 (__fastcall **)(__int64, __int64, char *))(**(_QWORD **)v2 + 64LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 22);
  v15 = v14(v13, v199, (char *)this + 176);
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v15,
      v155);
  v16 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v4 + 24LL))(
          *v4,
          &GUID_f61d2579_c998_4734_9f88_0b4bc8bcf062,
          &v214);
  if ( v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD1,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v16,
      v155);
  v17 = *v4;
  v18 = *(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD))(*(_QWORD *)*v4 + 32LL);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 38);
  v19 = v18(v17, (char *)this + 24, 0LL, v214);
  if ( v19 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v19,
      (int)L"IRemoteViewHitTestApi");
  v20 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v4 + 24LL))(
          *v4,
          &GUID_adcbf490_e8c4_4bfa_8754_f40fc58292fc,
          &v214);
  if ( v20 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE1,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v20,
      (int)L"IRemoteViewHitTestApi");
  v21 = *v4;
  v22 = *(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD))(*(_QWORD *)*v4 + 32LL);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 39);
  v23 = v22(v21, (char *)this + 32, 0LL, v214);
  if ( v23 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v23,
      (int)L"IRemoteViewHitTestRequestApi");
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v25 = *((_QWORD *)BamoServerConnection + 31);
  v26 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(v25 + 8) + 272LL);
  v27 = operator new(0x40uLL);
  v216 = v27;
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
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 33);
  v28 = DWMCursorBroker::Create(this, (struct ICursorBroker **)this + 33);
  if ( v28 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xFC,
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
    v212[0] = off_18020CA60;
    v212[1] = this;
    v212[7] = v212;
    KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>::Initialize((char *)this + 488, v2, v29, v212);
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
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(v32);
    v33 = NonBamoInputDeliveryServer::Create(
            (__int64)this + 56,
            (__int64)L"InputDeliveryTest",
            1u,
            (struct IInputDeliveryServer **)this + 41);
    if ( v33 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x117,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v33,
        (int)L"IRemoteViewHitTestRequestApi");
  }
  else
  {
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(v32);
    v34 = NonBamoInputDeliveryServer::Create(
            (__int64)this + 56,
            (__int64)L"System\\InputDelivery",
            0,
            (struct IInputDeliveryServer **)this + 41);
    if ( v34 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x11D,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v34,
        (int)L"IRemoteViewHitTestRequestApi");
  }
  v35 = ISMStatics::GetBamoServerConnection();
  v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v35 + 31) + 8LL) + 120LL))(*((_QWORD *)v35 + 31) + 8LL);
  v37 = v36;
  if ( *((_QWORD *)this + 42) != v36 )
  {
    v156 = (DWMInputRouter *)v36;
    Microsoft::WRL::ComPtr<InputDeliveryServer>::InternalAddRef(&v156);
    v156 = (DWMInputRouter *)*((_QWORD *)this + 42);
    *((_QWORD *)this + 42) = v37;
    Microsoft::WRL::ComPtr<InputDeliveryServer>::InternalRelease(&v156);
  }
  v38 = *((_QWORD *)this + 42);
  v39 = *((_QWORD *)this + 41);
  if ( *(_QWORD *)(v38 + 248) != v39 )
  {
    if ( v39 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
    v203 = *(_QWORD *)(v38 + 248);
    *(_QWORD *)(v38 + 248) = v39;
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(&v203);
  }
  v216 = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v216);
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
    v216 = v40;
    v42 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\manager\\lib\\contextualprocessormanager.cpp",
      (const char *)0x8007000ELL);
    v42 = 2147942414LL;
  }
  if ( (int)v42 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x12D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)v42,
      (int)L"IRemoteViewHitTestRequestApi");
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestAbSh1>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_MTestAbSh1>::GetImpl'::`2'::impl) )
  {
    v193 = 0LL;
    v204 = &v193;
    v43 = (struct IContextualProcessor **)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IContextualProcessor>>::operator IContextualProcessor * *(&v204);
    v44 = ShellHandwritingProcessor::Create(v43);
    if ( v44 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x13A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v44,
        (int)L"IRemoteViewHitTestRequestApi");
    v45 = ContextualProcessorManager::RegisterProcessor((__int64)v216, v193, 1);
    if ( v45 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x13D,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v45,
        (int)L"IRemoteViewHitTestRequestApi");
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v193);
  }
  if ( IsEdition(0x3DDA1uLL) )
  {
    v158 = 0LL;
    v192 = 0LL;
    v205 = this;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v158);
    v46 = Microsoft::WRL::Details::MakeAndInitialize<CursorSuppressionProcessor,CursorSuppressionProcessor,DWMInputRouter *>(
            &v158,
            &v205);
    if ( v46 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x14A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v46,
        (int)L"IRemoteViewHitTestRequestApi");
    v47 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v158;
    v48 = **v158;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v192);
    v49 = v48(v47, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v192);
    if ( v49 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x14B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v49,
        (int)L"IRemoteViewHitTestRequestApi");
    v50 = ContextualProcessorManager::RegisterProcessor((__int64)v216, v192, 0);
    if ( v50 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x14C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v50,
        (int)L"IRemoteViewHitTestRequestApi");
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v192);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v158);
  }
  if ( IsEdition(0x3DDA1uLL) )
  {
    v160 = 0LL;
    v159 = 0LL;
    v206 = this;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v160);
    v51 = Microsoft::WRL::Details::MakeAndInitialize<CursorProcessor,CursorProcessor,DWMInputRouter *>(&v160, &v206);
    if ( v51 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x159,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v51,
        (int)L"IRemoteViewHitTestRequestApi");
    v52 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v160;
    v53 = **v160;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v159);
    v54 = v53(v52, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v159);
    if ( v54 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x15A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v54,
        (int)L"IRemoteViewHitTestRequestApi");
    v55 = ContextualProcessorManager::RegisterProcessor((__int64)v216, v159, 0);
    if ( v55 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x15B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v55,
        (int)L"IRemoteViewHitTestRequestApi");
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v159);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v160);
  }
  if ( IsEdition(0x1C000uLL) || IsEdition(0x224AuLL) )
  {
    v162 = 0LL;
    v161 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v162);
    v56 = TipToGlassProcessor::Create(&v162);
    if ( v56 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x165,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v56,
        (int)L"IRemoteViewHitTestRequestApi");
    v57 = v162;
    v58 = **(__int64 (__fastcall ***)(struct TipToGlassProcessor *, GUID *, __int64 *))v162;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v161);
    v59 = v58(v57, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v161);
    if ( v59 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x166,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v59,
        (int)L"IRemoteViewHitTestRequestApi");
    v60 = ContextualProcessorManager::RegisterProcessor((__int64)v216, v161, 1);
    if ( v60 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x167,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v60,
        (int)L"IRemoteViewHitTestRequestApi");
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v161);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v162);
  }
  if ( IsEdition(0x1C000uLL) || IsEdition(0x400uLL) )
  {
    v164 = 0LL;
    v163 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v164);
    v61 = TapProcessor::Create(&v164);
    if ( v61 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x171,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v61,
        (int)L"IRemoteViewHitTestRequestApi");
    v62 = v164;
    v63 = **(__int64 (__fastcall ***)(struct TapProcessor *, GUID *, __int64 *))v164;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v163);
    v64 = v63(v62, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v163);
    if ( v64 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x172,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v64,
        (int)L"IRemoteViewHitTestRequestApi");
    v65 = ContextualProcessorManager::RegisterProcessor((__int64)v216, v163, 0);
    if ( v65 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x173,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v65,
        (int)L"IRemoteViewHitTestRequestApi");
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v163);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v164);
  }
  if ( IsEdition(0x1C000uLL) || IsEdition(0x224AuLL) )
  {
    v166 = 0LL;
    v165 = 0LL;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v166);
    v66 = LightDismissProcessor::Create(&v166);
    if ( v66 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x17F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v66,
        (int)L"IRemoteViewHitTestRequestApi");
    v67 = v166;
    v68 = **(__int64 (__fastcall ***)(struct LightDismissProcessor *, GUID *, __int64 *))v166;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v165);
    v69 = v68(v67, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v165);
    if ( v69 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x180,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v69,
        (int)L"IRemoteViewHitTestRequestApi");
    v70 = ContextualProcessorManager::RegisterProcessor((__int64)v216, v165, 1);
    if ( v70 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v70,
        (int)L"IRemoteViewHitTestRequestApi");
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v165);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v166);
  }
  if ( IsEdition(0x1C000uLL) || IsEdition(0x224AuLL) )
  {
    v168 = 0LL;
    v167 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v168);
    v71 = Microsoft::WRL::Details::MakeAndInitialize<ShellGesturesProcessor,ShellGesturesProcessor,>(&v168);
    if ( v71 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x18D,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v71,
        (int)L"IRemoteViewHitTestRequestApi");
    v72 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v168;
    v73 = **v168;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v167);
    v74 = v73(v72, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v167);
    if ( v74 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x18E,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v74,
        (int)L"IRemoteViewHitTestRequestApi");
    v75 = ContextualProcessorManager::RegisterProcessor((__int64)v216, v167, 1);
    if ( v75 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x18F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v75,
        (int)L"IRemoteViewHitTestRequestApi");
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v167);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v168);
  }
  if ( IsEdition(0x1C000uLL) )
  {
    v197 = 0LL;
    v169 = 0LL;
    Microsoft::WRL::ComPtr<ISystemInputRouterHitTest>::ComPtr<ISystemInputRouterHitTest>(&v196, this);
    v76 = (char *)EdgyProcessor::Create(&v195, &v196);
    v77 = 0LL;
    if ( &v211 != v76 )
    {
      v77 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v76;
      *(_QWORD *)v76 = 0LL;
    }
    v197 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v77;
    v78 = v195;
    if ( v195 )
    {
      v195 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v196);
    v79 = **v77;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v169);
    v80 = v79(v77, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v169);
    if ( v80 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x19C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v80,
        (int)L"IRemoteViewHitTestRequestApi");
    v81 = ContextualProcessorManager::RegisterProcessor((__int64)v216, v169, 0);
    if ( v81 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x19D,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v81,
        (int)L"IRemoteViewHitTestRequestApi");
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v169);
    v197 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v77)[2])(v77);
  }
  if ( IsEdition(0x1C000uLL) )
  {
    v171 = 0LL;
    v170 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v171);
    v82 = EdgyLegacyProcessor::Create(&v171);
    if ( v82 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1A9,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v82,
        (int)L"IRemoteViewHitTestRequestApi");
    v83 = v171;
    v84 = **(__int64 (__fastcall ***)(struct EdgyLegacyProcessor *, GUID *, __int64 *))v171;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v170);
    v85 = v84(v83, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v170);
    if ( v85 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1AA,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v85,
        (int)L"IRemoteViewHitTestRequestApi");
    v86 = ContextualProcessorManager::RegisterProcessor((__int64)v216, v170, 0);
    if ( v86 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1AB,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v86,
        (int)L"IRemoteViewHitTestRequestApi");
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v170);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v171);
  }
  if ( IsEdition(0x1C000uLL) )
  {
    v194 = 0LL;
    v207 = &v194;
    v89 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IContextualProcessor>>::operator IContextualProcessor * *(&v207);
    v90 = Microsoft::WRL::Details::MakeAndInitialize<MagnifierProcessor,IContextualProcessor,>(v89);
    if ( v90 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1B6,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v90,
        (int)L"IRemoteViewHitTestRequestApi");
    v91 = ContextualProcessorManager::RegisterProcessor((__int64)v216, v194, 0);
    if ( v91 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1B7,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v91,
        (int)L"IRemoteViewHitTestRequestApi");
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v194);
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SupportFnKey>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SupportFnKey>::GetImpl'::`2'::impl,
    1u,
    v87,
    v88);
  v173 = 0LL;
  v172 = 0LL;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v173);
  v92 = SystemButtonProcessor::Create(&v173);
  if ( v92 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1C3,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v92,
      (int)L"IRemoteViewHitTestRequestApi");
  v93 = v173;
  v94 = **(__int64 (__fastcall ***)(struct SystemButtonProcessor *, GUID *, __int64 *))v173;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v172);
  v95 = v94(v93, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v172);
  if ( v95 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1C4,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v95,
      (int)L"IRemoteViewHitTestRequestApi");
  v96 = ContextualProcessorManager::RegisterProcessor((__int64)v216, v172, 0);
  if ( v96 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1C5,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v96,
      (int)L"IRemoteViewHitTestRequestApi");
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v172);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v173);
  v175 = 0LL;
  v174 = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v175);
  v97 = InputRedirectionProcessor::Create((DWMInputRouter *)((char *)this + 48), &v175);
  if ( v97 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1D0,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v97,
      (int)L"IRemoteViewHitTestRequestApi");
  v98 = v175;
  v99 = **(__int64 (__fastcall ***)(struct InputRedirectionProcessor *, GUID *, __int64 *))v175;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v174);
  v100 = v99(v98, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v174);
  if ( v100 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1D1,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v100,
      (int)L"IRemoteViewHitTestRequestApi");
  v101 = ContextualProcessorManager::RegisterProcessor((__int64)v216, v174, 0);
  if ( v101 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1D2,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v101,
      (int)L"IRemoteViewHitTestRequestApi");
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v174);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v175);
  v157 = 0LL;
  if ( IsEdition(0x3DDA1uLL) )
  {
    v176 = 0LL;
    v208 = this;
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)&v157);
    v102 = Microsoft::WRL::Details::MakeAndInitialize<ActivationProcessor,ActivationProcessor,DWMInputRouter *>(
             &v157,
             &v208);
    if ( v102 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1DF,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v102,
        (int)L"IRemoteViewHitTestRequestApi");
    v103 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v157;
    v104 = **v157;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v176);
    v105 = v104(v103, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v176);
    if ( v105 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1E0,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v105,
        (int)L"IRemoteViewHitTestRequestApi");
    v106 = ContextualProcessorManager::RegisterProcessor((__int64)v216, v176, 0);
    if ( v106 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1E1,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v106,
        (int)L"IRemoteViewHitTestRequestApi");
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v176);
  }
  if ( IsEdition(0x3DDA1uLL) )
  {
    v178 = 0LL;
    v177 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v178);
    v107 = Microsoft::WRL::Details::MakeAndInitialize<HotkeyContextualProcessor,HotkeyContextualProcessor,>(&v178);
    if ( v107 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1ED,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v107,
        (int)L"IRemoteViewHitTestRequestApi");
    v108 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v178;
    v109 = **v178;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v177);
    v110 = v109(v108, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v177);
    if ( v110 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1EE,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v110,
        (int)L"IRemoteViewHitTestRequestApi");
    v111 = ContextualProcessorManager::RegisterProcessor((__int64)v216, v177, 0);
    if ( v111 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1EF,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v111,
        (int)L"IRemoteViewHitTestRequestApi");
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v177);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v178);
  }
  v217 = 0LL;
  v179 = 0LL;
  Microsoft::WRL::ComPtr<GameInputProcessor>::InternalRelease(&v217);
  v217 = 0LL;
  v112 = (GameInputProcessor *)RefCountedObject::operator new(0xC8uLL);
  if ( v112 )
    v114 = GameInputProcessor::GameInputProcessor(v112, (DWMInputRouter *)((char *)this + 48));
  else
    v114 = 0LL;
  if ( !v114 )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x6B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\"
                    "gameinputprocessor.cpp",
      v113);
  v209 = 0LL;
  v217 = v114;
  wil::com_ptr_t<GameInputProcessor,wil::err_exception_policy>::~com_ptr_t<GameInputProcessor,wil::err_exception_policy>(&v209);
  v115 = v217;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v179);
  v116 = GameInputProcessor::QueryInterface(v115, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v179);
  if ( v116 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1FB,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v116,
      (int)L"IRemoteViewHitTestRequestApi");
  v117 = ContextualProcessorManager::RegisterProcessor((__int64)v216, (__int64)v179, 1);
  if ( v117 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1FC,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v117,
      (int)L"IRemoteViewHitTestRequestApi");
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>((__int64 *)&v179);
  Microsoft::WRL::ComPtr<GameInputProcessor>::InternalRelease(&v217);
  if ( IsEdition(0x1C000uLL) )
  {
    v181 = 0LL;
    v180 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v181);
    v118 = ResizeProcessor::Create(&v181);
    if ( v118 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x208,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v118,
        (int)L"IRemoteViewHitTestRequestApi");
    v119 = v181;
    v120 = **(__int64 (__fastcall ***)(struct ResizeProcessor *, GUID *, __int64 *))v181;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v180);
    v121 = v120(v119, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v180);
    if ( v121 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x209,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v121,
        (int)L"IRemoteViewHitTestRequestApi");
    v122 = ContextualProcessorManager::RegisterProcessor((__int64)v216, v180, 0);
    if ( v122 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x20A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v122,
        (int)L"IRemoteViewHitTestRequestApi");
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v180);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v181);
  }
  if ( IsEdition(0x1C000uLL) )
  {
    v183 = 0LL;
    v182 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v183);
    Microsoft::WRL::ComPtr<ISystemInputRouterHitTest>::ComPtr<ISystemInputRouterHitTest>(&v198, this);
    v123 = DragNDropProcessor::Create(&v198, &v157, &v183);
    if ( v123 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x216,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v123,
        (int)L"IRemoteViewHitTestRequestApi");
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v198);
    v124 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v183;
    v125 = **v183;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v182);
    v126 = v125(v124, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v182);
    if ( v126 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x217,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v126,
        (int)L"IRemoteViewHitTestRequestApi");
    v127 = ContextualProcessorManager::RegisterProcessor((__int64)v216, v182, 0);
    if ( v127 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x218,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v127,
        (int)L"IRemoteViewHitTestRequestApi");
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v182);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v183);
  }
  if ( IsEdition(0x1C000uLL) )
  {
    v185 = 0LL;
    v184 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v185);
    v128 = InputForwardProcessor::Create(&v185);
    if ( v128 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x224,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v128,
        (int)L"IRemoteViewHitTestRequestApi");
    v129 = v185;
    v130 = **(__int64 (__fastcall ***)(struct InputForwardProcessor *, GUID *, __int64 *))v185;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v184);
    v131 = v130(v129, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v184);
    if ( v131 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x225,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v131,
        (int)L"IRemoteViewHitTestRequestApi");
    v132 = ContextualProcessorManager::RegisterProcessor((__int64)v216, v184, 0);
    if ( v132 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x226,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v132,
        (int)L"IRemoteViewHitTestRequestApi");
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v184);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v185);
  }
  if ( IsEdition(0x1C000uLL) )
  {
    v187 = 0LL;
    v186 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v187);
    v133 = ComboButtonProcessor::Create(&v187);
    if ( v133 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x232,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v133,
        (int)L"IRemoteViewHitTestRequestApi");
    v134 = v187;
    v135 = **(__int64 (__fastcall ***)(struct ComboButtonProcessor *, GUID *, __int64 *))v187;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v186);
    v136 = v135(v134, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v186);
    if ( v136 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x233,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v136,
        (int)L"IRemoteViewHitTestRequestApi");
    v137 = ContextualProcessorManager::RegisterProcessor((__int64)v216, v186, 0);
    if ( v137 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x234,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v137,
        (int)L"IRemoteViewHitTestRequestApi");
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v186);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v187);
  }
  if ( IsEdition(0x3DDA1uLL) )
  {
    v189 = 0LL;
    v188 = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v189);
    v138 = RawButtonProcessor::Create(&v189);
    if ( v138 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x240,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v138,
        (int)L"IRemoteViewHitTestRequestApi");
    v139 = v189;
    v140 = **(__int64 (__fastcall ***)(struct RawButtonProcessor *, GUID *, __int64 *))v189;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v188);
    v141 = v140(v139, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v188);
    if ( v141 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x241,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v141,
        (int)L"IRemoteViewHitTestRequestApi");
    v142 = ContextualProcessorManager::RegisterProcessor((__int64)v216, v188, 0);
    if ( v142 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x242,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v142,
        (int)L"IRemoteViewHitTestRequestApi");
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v188);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v189);
  }
  v191 = 0LL;
  v190 = 0LL;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v191);
  v143 = RefCountedObject::operator new(0x18uLL);
  v144 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v143;
  if ( v143 )
  {
    *v143 = 0LL;
    v143[2] = 0LL;
    v143[1] = &RefCountedObject::`vftable';
    *((_DWORD *)v143 + 4) = 1;
    *v143 = &InputServiceProcessor::`vftable'{for `IContextualProcessor'};
    v143[1] = &InputServiceProcessor::`vftable'{for `RefCountedObject'};
    if ( (unsigned __int8)IsPreloadKeyboardLayoutsPresent() )
      PreloadKeyboardLayouts();
    v191 = v144;
    v41 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputservice\\system\\lib\\in"
               "putserviceprocessor.cpp",
      (const char *)0x8007000ELL);
    v144 = v191;
  }
  if ( v41 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x24D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v41,
      (int)L"IRemoteViewHitTestRequestApi");
  v145 = **v144;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v190);
  v146 = v145(v144, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b, &v190);
  if ( v146 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x24E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v146,
      (int)L"IRemoteViewHitTestRequestApi");
  v147 = ContextualProcessorManager::RegisterProcessor((__int64)v216, v190, 0);
  if ( v147 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x24F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v147,
      (int)L"IRemoteViewHitTestRequestApi");
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v190);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v191);
  v148 = (__int64)v216;
  if ( *((_QWORD **)this + 32) != v216 )
  {
    if ( v216 )
      (*(void (__fastcall **)(_QWORD *))(*v216 + 8LL))(v216);
    v215 = *((_QWORD *)this + 32);
    *((_QWORD *)this + 32) = v148;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v215);
  }
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)&v157);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v216);
  v149 = ISMStatics::GetBamoServerConnection();
  v150 = *((_QWORD *)v149 + 31);
  v151 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(v150 + 8) + 256LL);
  v152 = operator new(0x40uLL);
  v216 = v152;
  v156 = this;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v156);
  LODWORD(v215) = 1;
  v153 = TestCommands::TestCommands(v152, v149, &v156);
  v151(v150 + 8, v153);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v156);
  *((_QWORD *)ISMStatics::GetForegroundManager() + 2) = (char *)this + 16;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v210);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v199);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v201);
  return 0LL;
}
