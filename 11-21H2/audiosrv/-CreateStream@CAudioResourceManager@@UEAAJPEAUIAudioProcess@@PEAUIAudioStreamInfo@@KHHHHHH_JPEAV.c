/*
 * XREFs of ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180028DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C58 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18000EA9C (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180011468 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180025560 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x180027630 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAVCAudioSessionManager@@55PEAPEAUISaDeviceProxy@@@Z @ 0x18002786C (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDev.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18002B384 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x18002B3B8 (--1-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18002B3D8 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B484 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x18002B4F0 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J9@Z @ 0x18002BC80 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002C050 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180030430 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x180033030 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180046328 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x18005D5D8 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     wil::details::lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___::_lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___ @ 0x180065540 (wil--details--lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___--_lambda_call__lambda_bebb.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800CB9A0 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800DA73C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1800DB54C (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 *     ?move_from_blob@SystemAudioStream@@SAJPEAUCP_EVENT_METADATA_BLOB@@PEAPEAUICrossProcessEvent@@0@Z @ 0x1800F0A24 (-move_from_blob@SystemAudioStream@@SAJPEAUCP_EVENT_METADATA_BLOB@@PEAPEAUICrossProcessEvent@@0@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1800FDC44 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$_tlgWrapperByR.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@5@Z @ 0x1800FDD1C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$__ea_1800FDD1C.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800FDED0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlg.c)
 *     wil::details::ScopeExitFn__lambda_13a9eb63737d7059b7b8f7db40fd0c9f___::_ScopeExitFn__lambda_13a9eb63737d7059b7b8f7db40fd0c9f___ @ 0x1800FE40C (wil--details--ScopeExitFn__lambda_13a9eb63737d7059b7b8f7db40fd0c9f___--_ScopeExitFn__lambda_13a9.c)
 *     wil::details::ScopeExitFn__lambda_f3a1120583904601fd46f817f7254e2a___::_ScopeExitFn__lambda_f3a1120583904601fd46f817f7254e2a___ @ 0x1800FE438 (wil--details--ScopeExitFn__lambda_f3a1120583904601fd46f817f7254e2a___--_ScopeExitFn__lambda_f3a1.c)
 *     ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x1800FE750 (--_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z.c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800FE824 (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV-$ComPtr@UIStreamGr.c)
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180100778 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISa.c)
 *     ?GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAUIAudioProcess@@PEAVCAudioSessionManager@@PEBU_GUID@@7PEAPEAUISaDeviceProxy@@@Z @ 0x180100930 (-GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISa.c)
 *     ?GetBtAudioResourceManager@CBtAudioResourceManagerCache@@QEAAJPEBVCEndpointCharacteristics@@U_GUID@@PEAPEAUISaDeviceResourceManager@@@Z @ 0x18011597C (-GetBtAudioResourceManager@CBtAudioResourceManagerCache@@QEAAJPEBVCEndpointCharacteristics@@U_GU.c)
 *     ?IsFormatSupportedByHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18014A8D4 (-IsFormatSupportedByHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioResourceManager::CreateStream(
        CAudioResourceManager *this,
        struct IAudioProcess *a2,
        struct IAudioStreamInfo *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        struct CEndpointCharacteristics *a12,
        unsigned int a13,
        enum _AUDCLNT_SHAREMODE a14,
        struct IAudioGraphCallback *a15,
        struct tWAVEFORMATEX *a16,
        __int64 a17,
        __int64 a18,
        struct _GUID *a19,
        struct _GUID *a20,
        const struct _GUID *a21,
        unsigned int a22,
        const unsigned __int16 *a23,
        unsigned int a24,
        const struct SPATIAL_STREAM_PROPERTIES *a25,
        struct IProcessSubmixProxy *a26,
        struct SystemAudioStream *a27)
{
  struct SystemAudioStream *v27; // r13
  unsigned int v28; // ebx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v29; // r12d
  int v30; // edi
  enum _AUDCLNT_SHAREMODE v31; // r14d
  int v32; // eax
  int v33; // ebx
  struct _GUID v34; // xmm7
  struct _GUID v35; // xmm8
  struct _GUID v36; // xmm6
  int v37; // edi
  void *v38; // rcx
  void *v39; // rcx
  struct tWAVEFORMATEX *v40; // rcx
  struct tWAVEFORMATEX *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // r10
  int wFormatTag; // eax
  int v45; // r9d
  __int64 v46; // r8
  __int64 v47; // r8
  int v48; // r9d
  unsigned __int16 *v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // r10
  unsigned int v52; // eax
  __int64 v53; // r8
  int v54; // r9d
  int v55; // r9d
  __int64 v56; // r8
  unsigned __int16 *v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // r10
  unsigned int v60; // eax
  __int64 v61; // r8
  int v62; // r9d
  int v63; // r9d
  __int64 v64; // r8
  struct tWAVEFORMATEX *v65; // rbx
  __int64 v66; // rcx
  __int64 v67; // r10
  unsigned int v68; // eax
  __int64 v69; // r8
  int v70; // r9d
  int v71; // r9d
  __int64 v72; // r8
  struct tWAVEFORMATEX *v73; // rbx
  __int64 v74; // r10
  unsigned int v75; // eax
  __int64 v76; // r8
  int v77; // r9d
  int v78; // r9d
  __int64 v79; // r8
  int v80; // eax
  unsigned int v81; // esi
  RTL_SRWLOCK *v82; // rcx
  int EndpointStore; // eax
  __int128 v84; // xmm0
  int BtAudioResourceManager; // eax
  __int64 v86; // r9
  __int64 v87; // rdx
  const unsigned __int16 **v88; // rbx
  __int64 v89; // r9
  int v90; // edi
  int v91; // eax
  __int64 v92; // rax
  int v93; // eax
  __int64 v94; // rax
  int v95; // eax
  struct IAudioStreamInfo *v96; // rbx
  __int64 v97; // rax
  unsigned int v98; // edx
  SaDeviceParams *v99; // rcx
  unsigned __int64 v100; // r9
  __int64 v101; // rdx
  const struct tWAVEFORMATEX *v102; // rax
  int v103; // eax
  __int64 v104; // rcx
  unsigned int v105; // edx
  SaDeviceParams *v106; // rcx
  __int64 v107; // r14
  __int64 *v108; // rcx
  __int64 v109; // rax
  int v110; // eax
  CAudioResourceManager *v111; // r14
  bool v112; // di
  __int64 v113; // rcx
  __int64 v114; // r9
  __int64 v115; // rdx
  int SaDeviceForExclusiveStream; // eax
  unsigned int v117; // edi
  struct ISaDeviceProxy *v118; // rcx
  struct IAudioStreamInfo *v119; // rbx
  char v120; // si
  char v121; // di
  struct CAudioSessionManager *v122; // rbx
  int v123; // eax
  __int64 v124; // rcx
  __int64 v125; // r8
  AuxiliaryInputDescriptor *v126; // rdi
  int v127; // eax
  void *v128; // rcx
  __int64 (__fastcall *v129)(struct IDeviceGraphManager *, struct IProcessSubmixProxy *, struct ISaDeviceProxy *, bool); // rbx
  char v130; // al
  int v131; // eax
  __int64 v132; // rcx
  __int64 v133; // r8
  int v134; // eax
  unsigned int v135; // edx
  __int64 v136; // rax
  bool v137; // bl
  unsigned int v138; // edx
  SaDeviceParams *v139; // rcx
  __int64 v140; // rbx
  int v141; // r8d
  int v142; // r9d
  struct IProcessSubmixProxy *v143; // rbx
  __int64 (__fastcall *v144)(struct IProcessSubmixProxy *, struct IAudioProcess **); // rdi
  int v145; // eax
  __int64 v146; // rax
  int v147; // eax
  __int64 v148; // rdx
  unsigned int v149; // eax
  int v150; // eax
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // rcx
  int v155; // [rsp+28h] [rbp-130h]
  int v156; // [rsp+28h] [rbp-130h]
  unsigned int v157; // [rsp+28h] [rbp-130h]
  int v158; // [rsp+28h] [rbp-130h]
  int v159; // [rsp+28h] [rbp-130h]
  int v160; // [rsp+28h] [rbp-130h]
  bool v161; // [rsp+D8h] [rbp-80h] BYREF
  int v162; // [rsp+DCh] [rbp-7Ch] BYREF
  unsigned int v163; // [rsp+E0h] [rbp-78h]
  struct ISaDeviceProxy *v164; // [rsp+E8h] [rbp-70h] BYREF
  struct IAudioStreamInfo *v165; // [rsp+F0h] [rbp-68h] BYREF
  int v166; // [rsp+F8h] [rbp-60h] BYREF
  int v167; // [rsp+FCh] [rbp-5Ch] BYREF
  int v168; // [rsp+100h] [rbp-58h] BYREF
  int v169; // [rsp+104h] [rbp-54h] BYREF
  struct IProcessSubmixProxy *v170; // [rsp+108h] [rbp-50h] BYREF
  struct IAudioProcess *v171; // [rsp+110h] [rbp-48h] BYREF
  struct CEndpointStore *v172; // [rsp+118h] [rbp-40h] BYREF
  struct SaDeviceParams *v173; // [rsp+120h] [rbp-38h] BYREF
  LPVOID v174; // [rsp+128h] [rbp-30h] BYREF
  LPVOID v175; // [rsp+130h] [rbp-28h] BYREF
  __int64 v176; // [rsp+138h] [rbp-20h] BYREF
  WINBOOL fPending; // [rsp+140h] [rbp-18h] BYREF
  DWORD nAvgBytesPerSec; // [rsp+144h] [rbp-14h] BYREF
  DWORD nSamplesPerSec; // [rsp+148h] [rbp-10h] BYREF
  int v180; // [rsp+14Ch] [rbp-Ch] BYREF
  WINBOOL v181; // [rsp+150h] [rbp-8h] BYREF
  WINBOOL v182; // [rsp+154h] [rbp-4h] BYREF
  DWORD v183; // [rsp+158h] [rbp+0h] BYREF
  int v184; // [rsp+15Ch] [rbp+4h] BYREF
  WINBOOL v185; // [rsp+160h] [rbp+8h] BYREF
  struct ISaDeviceResourceManager *v186; // [rsp+168h] [rbp+10h] BYREF
  struct tWAVEFORMATEX *v187; // [rsp+170h] [rbp+18h] BYREF
  DWORD v188; // [rsp+178h] [rbp+20h] BYREF
  WINBOOL v189; // [rsp+17Ch] [rbp+24h] BYREF
  const unsigned __int16 *v190; // [rsp+180h] [rbp+28h] BYREF
  DWORD v191; // [rsp+188h] [rbp+30h] BYREF
  struct tWAVEFORMATEX *Src; // [rsp+190h] [rbp+38h] BYREF
  unsigned __int16 *v193; // [rsp+198h] [rbp+40h] BYREF
  struct IProcessSubmixProxy *v194[2]; // [rsp+1A0h] [rbp+48h] BYREF
  unsigned __int16 *v195; // [rsp+1B0h] [rbp+58h] BYREF
  LPVOID v196; // [rsp+1B8h] [rbp+60h] BYREF
  LPVOID v197; // [rsp+1C0h] [rbp+68h] BYREF
  WINBOOL v198[2]; // [rsp+1C8h] [rbp+70h] BYREF
  __int64 v199; // [rsp+1D0h] [rbp+78h] BYREF
  const struct SPATIAL_STREAM_PROPERTIES *v200; // [rsp+1D8h] [rbp+80h] BYREF
  unsigned int v201[2]; // [rsp+1E0h] [rbp+88h]
  struct SaDeviceParams *v202; // [rsp+1E8h] [rbp+90h] BYREF
  char v203; // [rsp+1F0h] [rbp+98h]
  int v204; // [rsp+1F8h] [rbp+A0h] BYREF
  const wchar_t *v205; // [rsp+200h] [rbp+A8h] BYREF
  int v206; // [rsp+208h] [rbp+B0h] BYREF
  const wchar_t *v207; // [rsp+210h] [rbp+B8h] BYREF
  DWORD v208; // [rsp+218h] [rbp+C0h] BYREF
  unsigned int v209; // [rsp+21Ch] [rbp+C4h]
  LPVOID Context; // [rsp+220h] [rbp+C8h] BYREF
  const wchar_t *v211; // [rsp+228h] [rbp+D0h] BYREF
  __int64 v212; // [rsp+230h] [rbp+D8h] BYREF
  const wchar_t *v213; // [rsp+238h] [rbp+E0h] BYREF
  const wchar_t *v214; // [rsp+240h] [rbp+E8h] BYREF
  char *v215; // [rsp+248h] [rbp+F0h] BYREF
  __int128 v216; // [rsp+250h] [rbp+F8h] BYREF
  __int64 v217; // [rsp+260h] [rbp+108h] BYREF
  const struct _GUID *v218; // [rsp+268h] [rbp+110h]
  struct IAudioGraphCallback *v219; // [rsp+270h] [rbp+118h]
  struct _GUID *v220; // [rsp+278h] [rbp+120h]
  struct _GUID *v221; // [rsp+280h] [rbp+128h]
  GUID v222; // [rsp+288h] [rbp+130h] BYREF
  void **v223; // [rsp+298h] [rbp+140h]
  struct tWAVEFORMATEX *v224; // [rsp+2A0h] [rbp+148h] BYREF
  char v225; // [rsp+2A8h] [rbp+150h]
  void **v226; // [rsp+2B0h] [rbp+158h]
  struct tWAVEFORMATEX *v227; // [rsp+2B8h] [rbp+160h] BYREF
  char v228; // [rsp+2C0h] [rbp+168h]
  struct tWAVEFORMATEX **p_Src; // [rsp+2C8h] [rbp+170h]
  struct tWAVEFORMATEX *v230; // [rsp+2D0h] [rbp+178h] BYREF
  char v231; // [rsp+2D8h] [rbp+180h]
  struct tWAVEFORMATEX **v232; // [rsp+2E0h] [rbp+188h]
  struct tWAVEFORMATEX *v233; // [rsp+2E8h] [rbp+190h] BYREF
  char v234; // [rsp+2F0h] [rbp+198h]
  RTL_SRWLOCK **v235; // [rsp+2F8h] [rbp+1A0h]
  RTL_SRWLOCK *v236; // [rsp+300h] [rbp+1A8h]
  char v237; // [rsp+308h] [rbp+1B0h]
  unsigned int v238[2]; // [rsp+310h] [rbp+1B8h]
  __int64 v239; // [rsp+318h] [rbp+1C0h] BYREF
  char v240; // [rsp+320h] [rbp+1C8h]
  RTL_SRWLOCK **v241; // [rsp+328h] [rbp+1D0h]
  RTL_SRWLOCK *v242; // [rsp+330h] [rbp+1D8h]
  char v243; // [rsp+338h] [rbp+1E0h]
  char *v244; // [rsp+340h] [rbp+1E8h] BYREF
  unsigned __int16 *v245; // [rsp+348h] [rbp+1F0h] BYREF
  unsigned __int16 *v246; // [rsp+350h] [rbp+1F8h] BYREF
  char *v247; // [rsp+358h] [rbp+200h] BYREF
  PROPVARIANT pvar[2]; // [rsp+360h] [rbp+208h] BYREF
  __int64 v249; // [rsp+370h] [rbp+218h]
  PROPVARIANT v250[2]; // [rsp+378h] [rbp+220h] BYREF
  __int64 v251; // [rsp+388h] [rbp+230h]
  union _RTL_RUN_ONCE *v252; // [rsp+390h] [rbp+238h] BYREF
  int v253; // [rsp+398h] [rbp+240h]
  union _RTL_RUN_ONCE *v254; // [rsp+3A0h] [rbp+248h] BYREF
  int v255; // [rsp+3A8h] [rbp+250h]
  union _RTL_RUN_ONCE *v256; // [rsp+3B0h] [rbp+258h] BYREF
  int v257; // [rsp+3B8h] [rbp+260h]
  GUID v258; // [rsp+3C8h] [rbp+270h]
  GUID v259; // [rsp+3D8h] [rbp+280h]
  GUID v260; // [rsp+3E8h] [rbp+290h]
  GUID v261; // [rsp+3F8h] [rbp+2A0h]
  union _RTL_RUN_ONCE *v262; // [rsp+408h] [rbp+2B0h] BYREF
  int v263; // [rsp+410h] [rbp+2B8h]
  union _RTL_RUN_ONCE *v264; // [rsp+418h] [rbp+2C0h] BYREF
  int v265; // [rsp+420h] [rbp+2C8h]
  __int128 v266; // [rsp+428h] [rbp+2D0h] BYREF
  char v267; // [rsp+438h] [rbp+2E0h]
  __int128 v268; // [rsp+440h] [rbp+2E8h] BYREF
  char v269; // [rsp+450h] [rbp+2F8h]
  struct _GUID v270; // [rsp+458h] [rbp+300h] BYREF
  struct _GUID v271; // [rsp+468h] [rbp+310h] BYREF
  struct _GUID v272; // [rsp+478h] [rbp+320h] BYREF
  struct _GUID v273; // [rsp+488h] [rbp+330h] BYREF
  struct _GUID v274; // [rsp+498h] [rbp+340h] BYREF
  GUID v275; // [rsp+4A8h] [rbp+350h]
  struct _GUID v276; // [rsp+4B8h] [rbp+360h]
  struct _GUID v277; // [rsp+4C8h] [rbp+370h]
  struct _GUID v278; // [rsp+4D8h] [rbp+380h] BYREF
  struct _GUID v279; // [rsp+4E8h] [rbp+390h] BYREF
  GUID v280; // [rsp+4F8h] [rbp+3A0h]
  struct _GUID v281; // [rsp+508h] [rbp+3B0h] BYREF
  _BYTE v282[304]; // [rsp+518h] [rbp+3C0h] BYREF
  _BYTE v283[304]; // [rsp+648h] [rbp+4F0h] BYREF
  unsigned int v284[4]; // [rsp+778h] [rbp+620h] BYREF
  __int64 v285; // [rsp+788h] [rbp+630h] BYREF
  int v286; // [rsp+790h] [rbp+638h]
  GUID v287; // [rsp+798h] [rbp+640h] BYREF
  GUID v288; // [rsp+7A8h] [rbp+650h] BYREF
  GUID v289; // [rsp+7B8h] [rbp+660h] BYREF
  _OWORD v290[2]; // [rsp+7C8h] [rbp+670h] BYREF
  struct _GUID v291; // [rsp+7E8h] [rbp+690h] BYREF
  int v292[4]; // [rsp+7F8h] [rbp+6A0h] BYREF
  char v293[32]; // [rsp+808h] [rbp+6B0h] BYREF
  int *v294; // [rsp+828h] [rbp+6D0h]
  __int64 v295; // [rsp+830h] [rbp+6D8h]
  char v296[32]; // [rsp+838h] [rbp+6E0h] BYREF
  int *v297; // [rsp+858h] [rbp+700h]
  __int64 v298; // [rsp+860h] [rbp+708h]
  char v299[32]; // [rsp+868h] [rbp+710h] BYREF
  int *v300; // [rsp+888h] [rbp+730h]
  __int64 v301; // [rsp+890h] [rbp+738h]
  char v302[32]; // [rsp+898h] [rbp+740h] BYREF
  int *v303; // [rsp+8B8h] [rbp+760h]
  __int64 v304; // [rsp+8C0h] [rbp+768h]
  char v305[32]; // [rsp+8C8h] [rbp+770h] BYREF
  int *v306; // [rsp+8E8h] [rbp+790h]
  __int64 v307; // [rsp+8F0h] [rbp+798h]
  wil::details::in1diag3 *retaddr; // [rsp+980h] [rbp+828h]

  LODWORD(v173) = a4;
  v165 = a3;
  v171 = a2;
  *(_QWORD *)&v216 = this;
  v219 = a15;
  v221 = a19;
  v220 = a20;
  v218 = a21;
  v190 = a23;
  v200 = a25;
  v194[0] = a26;
  v27 = a27;
  v163 = a13;
  v28 = a13 & 0x20000;
  v29 = eLoopbackConnector;
  if ( (*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a12 + 56LL))(a12) )
  {
    v30 = 1;
  }
  else
  {
    v30 = 2;
    if ( !v28 )
      v30 = 0;
  }
  LODWORD(v176) = v30;
  v209 = a13 & 0x400000;
  if ( (a13 & 0x400000) != 0 )
  {
    v29 = eKeywordDetectorConnector;
    v31 = a14;
    goto LABEL_22;
  }
  if ( v194[0] && v28 )
  {
    v29 = eHostProcessConnector;
    v31 = a14;
    goto LABEL_22;
  }
  *(_OWORD *)pvar = 0LL;
  v249 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)a12 + 5) + 40LL))(
         *((_QWORD *)a12 + 5),
         &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
         pvar) >= 0
    && LOWORD(pvar[0]) == 19 )
  {
    PropVariantClear(pvar);
    if ( v28 )
    {
      v31 = a14;
      goto LABEL_22;
    }
  }
  else
  {
    PropVariantClear(pvar);
  }
  v31 = a14;
  if ( a14 == AUDCLNT_SHAREMODE_EXCLUSIVE
    && (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(a12)
    && a16
    && !CEndpointCharacteristics::IsFormatSupportedByHwAudioEngine(a12, a16) )
  {
    v29 = a14;
  }
  else
  {
    v29 = ((unsigned __int8)~(_BYTE)v163 >> 1) & 1;
  }
LABEL_22:
  v261 = GUID_00000000_0000_0000_0000_000000000000;
  v260 = GUID_00000000_0000_0000_0000_000000000000;
  v259 = GUID_00000000_0000_0000_0000_000000000000;
  v222 = GUID_00000000_0000_0000_0000_000000000000;
  v258 = GUID_00000000_0000_0000_0000_000000000000;
  v32 = DeriveAudioProcessingModeConfiguration((unsigned int)v173, a5, a6, a12);
  v33 = v32;
  if ( v32 >= 0 )
  {
    v193 = 0LL;
    Src = 0LL;
    v195 = 0LL;
    v187 = 0LL;
    v232 = &v187;
    v233 = 0LL;
    v234 = 1;
    p_Src = &Src;
    v230 = 0LL;
    v231 = 1;
    v226 = (void **)&v195;
    v227 = 0LL;
    v228 = 1;
    v223 = (void **)&v193;
    v224 = 0LL;
    v225 = 1;
    v34 = v261;
    v270 = v261;
    v35 = v260;
    v271 = v260;
    v36 = v259;
    v272 = v259;
    v161 = a8 != 0;
    v37 = DeriveDeviceGraphFormatsForStream(
            a12,
            a8 != 0,
            v29,
            v31,
            (unsigned int)v173,
            &v272,
            &v271,
            &v270,
            a16,
            &v224,
            &v227,
            &v230,
            &v233);
    if ( v225 )
    {
      v38 = *v223;
      *v223 = v224;
      if ( v38 )
        CoTaskMemFree(v38);
    }
    if ( v228 )
    {
      v39 = *v226;
      *v226 = v227;
      if ( v39 )
        CoTaskMemFree(v39);
    }
    if ( v231 )
    {
      v40 = *p_Src;
      *p_Src = v230;
      if ( v40 )
        CoTaskMemFree(v40);
    }
    if ( v234 )
    {
      v41 = *v232;
      *v232 = v233;
      if ( v41 )
        CoTaskMemFree(v41);
    }
    if ( v37 < 0 )
    {
      v33 = -2005139333;
      if ( v37 != -2005139333 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x568,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v37,
          v155);
        v33 = v37;
      }
      goto LABEL_274;
    }
    if ( a16 )
    {
      wFormatTag = a16->wFormatTag;
      if ( (_WORD)wFormatTag == 0xFFFE )
      {
        v47 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                65534LL,
                _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v47 > 4u
          && (*(_DWORD *)(v47 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v47 + 24) & 0x200LL) == *(_QWORD *)(v47 + 24) )
        {
          nSamplesPerSec = *(_DWORD *)&a16[1].nChannels;
          v214 = (const wchar_t *)&a16[1].nSamplesPerSec + 1;
          nAvgBytesPerSec = a16->nAvgBytesPerSec;
          fPending = a16->nSamplesPerSec;
          LOWORD(v162) = a16->nChannels;
          v213 = L"WAVEFORMATEXTENSIBLE";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
            v47,
            (unsigned int)&unk_18018AC1C,
            v47,
            v48,
            (__int64)&v213,
            (__int64)&v162,
            (__int64)&fPending,
            (__int64)&nAvgBytesPerSec,
            (__int64)&v214,
            (__int64)&nSamplesPerSec);
        }
      }
      else
      {
        v290[0] = GUID_00000000_0000_0010_8000_00aa00389b71;
        LODWORD(v290[0]) = wFormatTag;
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
          && fPending )
        {
          v262 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
          Context = &qword_1801C2788;
          qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
          qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          v263 = 0;
          wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v262);
        }
        v46 = *((_QWORD *)Context + 1);
        if ( *(_DWORD *)v46 > 4u
          && (*(_DWORD *)(v46 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v46 + 24) & 0x200LL) == *(_QWORD *)(v46 + 24) )
        {
          v213 = (const wchar_t *)v290;
          nAvgBytesPerSec = a16->nAvgBytesPerSec;
          nSamplesPerSec = a16->nSamplesPerSec;
          LOWORD(v162) = a16->nChannels;
          v214 = L"WAVEFORMATEX";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v46,
            (unsigned int)&unk_18018ACAE,
            v46,
            v45,
            (__int64)&v214,
            (__int64)&v162,
            (__int64)&nSamplesPerSec,
            (__int64)&nAvgBytesPerSec,
            (__int64)&v213);
        }
      }
    }
    else
    {
      v43 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              65534LL,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v43 > 4u
        && (*(_DWORD *)(v43 + 16) & 0x200LL) != 0
        && (*(_QWORD *)(v43 + 24) & 0x200LL) == *(_QWORD *)(v43 + 24) )
      {
        v162 = 0;
        v294 = &v162;
        v295 = 4LL;
        tlgWriteTransfer_EtwEventWriteTransfer(v43, (unsigned int)&unk_18018AD33, 0, 0, 3, (__int64)v293);
      }
    }
    v49 = v193;
    if ( v193 )
    {
      v52 = *v193;
      if ( (_WORD)v52 == 0xFFFE )
      {
        v196 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v181, &v196) && v181 )
        {
          v264 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
          v196 = &qword_1801C2788;
          qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
          qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          v265 = 0;
          wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v264);
        }
        v56 = *((_QWORD *)v196 + 1);
        if ( *(_DWORD *)v56 > 4u
          && (*(_DWORD *)(v56 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v56 + 24) & 0x200LL) == *(_QWORD *)(v56 + 24) )
        {
          v180 = *((_DWORD *)v49 + 5);
          v245 = v49 + 12;
          v204 = *((_DWORD *)v193 + 2);
          LODWORD(v205) = *((_DWORD *)v193 + 1);
          LOWORD(v166) = v193[1];
          *(_QWORD *)&v288.Data1 = L"WAVEFORMATEXTENSIBLE";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
            v56,
            (unsigned int)&unk_18018AAB3,
            v56,
            v55,
            (__int64)&v288,
            (__int64)&v166,
            (__int64)&v205,
            (__int64)&v204,
            (__int64)&v245,
            (__int64)&v180);
        }
      }
      else
      {
        v288 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v288.Data1 = v52;
        v53 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                65534LL,
                _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v53 > 4u
          && (*(_DWORD *)(v53 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v53 + 24) & 0x200LL) == *(_QWORD *)(v53 + 24) )
        {
          v196 = &v288;
          v180 = *((_DWORD *)v193 + 2);
          v181 = *((_DWORD *)v193 + 1);
          LOWORD(v166) = v193[1];
          v205 = L"WAVEFORMATEX";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v53,
            (unsigned int)&unk_18018AB47,
            v53,
            v54,
            (__int64)&v205,
            (__int64)&v166,
            (__int64)&v181,
            (__int64)&v180,
            (__int64)&v196);
        }
      }
    }
    else
    {
      v51 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v42,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v51 > 4u
        && (*(_DWORD *)(v51 + 16) & 0x200LL) != 0
        && (*(_QWORD *)(v51 + 24) & 0x200LL) == *(_QWORD *)(v51 + 24) )
      {
        v166 = 0;
        v297 = &v166;
        v298 = 4LL;
        tlgWriteTransfer_EtwEventWriteTransfer(v51, (unsigned int)&unk_18018ABCE, 0, 0, 3, (__int64)v296);
      }
    }
    v57 = v195;
    if ( v195 )
    {
      v60 = *v195;
      if ( (_WORD)v60 == 0xFFFE )
      {
        v197 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v185, &v197) && v185 )
        {
          v252 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
          v197 = &qword_1801C2788;
          qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
          qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          v253 = 0;
          wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v252);
        }
        v64 = *((_QWORD *)v197 + 1);
        if ( *(_DWORD *)v64 > 4u
          && (*(_DWORD *)(v64 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v64 + 24) & 0x200LL) == *(_QWORD *)(v64 + 24) )
        {
          v184 = *((_DWORD *)v57 + 5);
          v246 = v57 + 12;
          v206 = *((_DWORD *)v195 + 2);
          LODWORD(v207) = *((_DWORD *)v195 + 1);
          LOWORD(v167) = v195[1];
          *(_QWORD *)&v287.Data1 = L"WAVEFORMATEXTENSIBLE";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
            v64,
            (unsigned int)&unk_18018A941,
            v64,
            v63,
            (__int64)&v287,
            (__int64)&v167,
            (__int64)&v207,
            (__int64)&v206,
            (__int64)&v246,
            (__int64)&v184);
        }
      }
      else
      {
        v287 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v287.Data1 = v60;
        v61 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                65534LL,
                _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v61 > 4u
          && (*(_DWORD *)(v61 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v61 + 24) & 0x200LL) == *(_QWORD *)(v61 + 24) )
        {
          v197 = &v287;
          v184 = *((_DWORD *)v195 + 2);
          v185 = *((_DWORD *)v195 + 1);
          LOWORD(v167) = v195[1];
          v207 = L"WAVEFORMATEX";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v61,
            (unsigned int)&unk_18018A9D8,
            v61,
            v62,
            (__int64)&v207,
            (__int64)&v167,
            (__int64)&v185,
            (__int64)&v184,
            (__int64)&v197);
        }
      }
    }
    else
    {
      v59 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v50,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v59 > 4u
        && (*(_DWORD *)(v59 + 16) & 0x200LL) != 0
        && (*(_QWORD *)(v59 + 24) & 0x200LL) == *(_QWORD *)(v59 + 24) )
      {
        v167 = 0;
        v300 = &v167;
        v301 = 4LL;
        tlgWriteTransfer_EtwEventWriteTransfer(v59, (unsigned int)&unk_18018AA62, 0, 0, 3, (__int64)v299);
      }
    }
    v65 = Src;
    if ( Src )
    {
      v68 = Src->wFormatTag;
      if ( (_WORD)v68 == 0xFFFE )
      {
        v175 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v189, &v175) && v189 )
        {
          v254 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
          v175 = &qword_1801C2788;
          qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
          qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          v255 = 0;
          wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v254);
        }
        v72 = *((_QWORD *)v175 + 1);
        if ( *(_DWORD *)v72 > 4u
          && (*(_DWORD *)(v72 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v72 + 24) & 0x200LL) == *(_QWORD *)(v72 + 24) )
        {
          v188 = *(_DWORD *)&v65[1].nChannels;
          v247 = (char *)&v65[1].nSamplesPerSec + 2;
          v208 = Src->nAvgBytesPerSec;
          LODWORD(v211) = Src->nSamplesPerSec;
          LOWORD(v168) = Src->nChannels;
          *(_QWORD *)&v289.Data1 = L"WAVEFORMATEXTENSIBLE";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
            v72,
            (unsigned int)&unk_18018A7D2,
            v72,
            v71,
            (__int64)&v289,
            (__int64)&v168,
            (__int64)&v211,
            (__int64)&v208,
            (__int64)&v247,
            (__int64)&v188);
        }
      }
      else
      {
        v289 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v289.Data1 = v68;
        v69 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                65534LL,
                _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v69 > 4u
          && (*(_DWORD *)(v69 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v69 + 24) & 0x200LL) == *(_QWORD *)(v69 + 24) )
        {
          v175 = &v289;
          v188 = Src->nAvgBytesPerSec;
          v189 = Src->nSamplesPerSec;
          LOWORD(v168) = Src->nChannels;
          v211 = L"WAVEFORMATEX";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v69,
            (unsigned int)&unk_18018A868,
            v69,
            v70,
            (__int64)&v211,
            (__int64)&v168,
            (__int64)&v189,
            (__int64)&v188,
            (__int64)&v175);
        }
      }
    }
    else
    {
      v67 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v58,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v67 > 4u
        && (*(_DWORD *)(v67 + 16) & 0x200LL) != 0
        && (*(_QWORD *)(v67 + 24) & 0x200LL) == *(_QWORD *)(v67 + 24) )
      {
        v168 = 0;
        v303 = &v168;
        v304 = 4LL;
        tlgWriteTransfer_EtwEventWriteTransfer(v67, (unsigned int)&unk_18018A8F1, 0, 0, 3, (__int64)v302);
      }
    }
    v73 = v187;
    if ( v187 )
    {
      v75 = v187->wFormatTag;
      if ( (_WORD)v75 == 0xFFFE )
      {
        v174 = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v182, &v174) && v182 )
        {
          v256 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
          v174 = &qword_1801C2788;
          qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
          qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          v257 = 0;
          wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v256);
        }
        v79 = *((_QWORD *)v174 + 1);
        if ( *(_DWORD *)v79 > 4u
          && (*(_DWORD *)(v79 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v79 + 24) & 0x200LL) == *(_QWORD *)(v79 + 24) )
        {
          v191 = *(_DWORD *)&v73[1].nChannels;
          v244 = (char *)&v73[1].nSamplesPerSec + 2;
          v183 = v187->nAvgBytesPerSec;
          v198[0] = v187->nSamplesPerSec;
          LOWORD(v169) = v187->nChannels;
          *(_QWORD *)v284 = L"WAVEFORMATEXTENSIBLE";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
            v79,
            (unsigned int)&unk_18018A666,
            v79,
            v78,
            (__int64)v284,
            (__int64)&v169,
            (__int64)v198,
            (__int64)&v183,
            (__int64)&v244,
            (__int64)&v191);
        }
      }
      else
      {
        *(GUID *)v284 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v284[0] = v75;
        v76 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                65534LL,
                _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v76 > 4u
          && (*(_DWORD *)(v76 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v76 + 24) & 0x200LL) == *(_QWORD *)(v76 + 24) )
        {
          v174 = v284;
          v191 = v187->nAvgBytesPerSec;
          v182 = v187->nSamplesPerSec;
          LOWORD(v169) = v187->nChannels;
          *(_QWORD *)v198 = L"WAVEFORMATEX";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v76,
            (unsigned int)&unk_18018A6FB,
            v76,
            v77,
            (__int64)v198,
            (__int64)&v169,
            (__int64)&v182,
            (__int64)&v191,
            (__int64)&v174);
        }
      }
    }
    else
    {
      v74 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v66,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v74 > 4u
        && (*(_DWORD *)(v74 + 16) & 0x200LL) != 0
        && (*(_QWORD *)(v74 + 24) & 0x200LL) == *(_QWORD *)(v74 + 24) )
      {
        v169 = 0;
        v306 = &v169;
        v307 = 4LL;
        tlgWriteTransfer_EtwEventWriteTransfer(v74, (unsigned int)&unk_18018A783, 0, 0, 3, (__int64)v305);
      }
    }
    v217 = 0LL;
    v273 = v35;
    v274 = v36;
    v278 = v34;
    v80 = DerivePeriodicityForStream(
            a12,
            a16,
            v165,
            v163,
            v31,
            v29,
            v187,
            &v278,
            &v274,
            &v273,
            a7 != 0,
            v161,
            a17,
            a18,
            v194[0],
            &a18,
            &v217);
    v33 = v80;
    if ( v80 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x574,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v80,
        v156);
LABEL_274:
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v187);
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v195);
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&Src);
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v193);
      return (unsigned int)v33;
    }
    (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v171 + 368LL))(v171);
    v199 = 0LL;
    v212 = 0LL;
    v235 = (RTL_SRWLOCK **)&v212;
    v236 = 0LL;
    v237 = 1;
    v241 = (RTL_SRWLOCK **)&v199;
    v242 = 0LL;
    v243 = 1;
    (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v165 + 80LL))(v165);
    v275 = v258;
    v276 = v35;
    v277 = v34;
    v81 = a22;
    v33 = InitializeStreamAndModeDescriptors(a12, (unsigned int)v31, v163, (unsigned int)v176);
    if ( v243 )
    {
      v82 = *v241;
      *v241 = v242;
      if ( v82 )
        CoTaskMemFree(v82);
    }
    if ( v237 )
    {
      v82 = *v235;
      *v235 = v236;
      if ( v82 )
        CoTaskMemFree(v82);
    }
    if ( v33 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x57E,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v33,
        v29);
LABEL_273:
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v212);
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v199);
      goto LABEL_274;
    }
    v172 = 0LL;
    EndpointStore = CEndpointStoreCache::GetEndpointStore(v82, *((const unsigned __int16 **)a12 + 3), &v172);
    v33 = EndpointStore;
    if ( EndpointStore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x584,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)EndpointStore,
        v29);
LABEL_272:
      wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(&v172);
      goto LABEL_273;
    }
    v186 = 0LL;
    v84 = *(_OWORD *)((char *)a12 + 9748);
    v290[1] = v84;
    if ( v84 == *(_OWORD *)&GUID_00000000_0000_0000_0000_000000000000 )
    {
      v190 = 0LL;
LABEL_145:
      (*(void (__fastcall **)(_QWORD, const struct SPATIAL_STREAM_PROPERTIES **))(**((_QWORD **)v172 + 13) + 120LL))(
        *((_QWORD *)v172 + 13),
        &v200);
      v89 = *((_QWORD *)v172 + 13);
      v280 = v222;
      v90 = a24;
      v157 = (unsigned int)v173;
      v91 = BuildDeviceGraphForStream(a12, v165, v171, v89);
      v33 = v91;
      if ( v91 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x598,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v91,
          v157);
LABEL_265:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v200);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v190);
LABEL_271:
        wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v186);
        goto LABEL_272;
      }
      v92 = *(_QWORD *)v165;
      v170 = 0LL;
      v93 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, struct IProcessSubmixProxy **))(v92 + 112))(
              v165,
              &v170);
      v33 = v93;
      if ( v93 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59C,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v93,
          v157);
LABEL_264:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v170);
        goto LABEL_265;
      }
      v94 = *(_QWORD *)v170;
      v164 = 0LL;
      v95 = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *, struct ISaDeviceProxy **))(v94 + 192))(v170, &v164);
      v33 = v95;
      if ( v95 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5A0,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v95,
          v157);
LABEL_263:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v164);
        goto LABEL_264;
      }
      if ( v164 )
      {
        v96 = v165;
        if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v165 + 136LL))(v165) )
        {
          v176 = 0LL;
          v97 = *(_QWORD *)v164;
          *(_QWORD *)v238 = &v176;
          v239 = 0LL;
          v240 = 1;
          v33 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, __int64 *))(v97 + 104))(v164, &v239);
          if ( v240 )
          {
            v98 = v238[0];
            v99 = **(SaDeviceParams ***)v238;
            **(_QWORD **)v238 = v239;
            if ( v99 )
              SaDeviceParams::`scalar deleting destructor'(v99, v98);
          }
          if ( v33 < 0 )
          {
            v100 = (unsigned int)v33;
            v101 = 1454LL;
LABEL_161:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v101,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)v100,
              v157);
            std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v176);
            goto LABEL_263;
          }
          v102 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v170 + 120LL))(v170);
          if ( !(unsigned int)CompareWaveFormat(*(const struct tWAVEFORMATEX **)(v176 + 24), v102) )
          {
            v103 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct IProcessSubmixProxy *, struct ISaDeviceProxy *))(*(_QWORD *)g_DeviceGraphManager + 40LL))(
                     g_DeviceGraphManager,
                     v170,
                     v164);
            v33 = v103;
            if ( v103 < 0 )
            {
              v100 = (unsigned int)v103;
              v101 = 1462LL;
              goto LABEL_161;
            }
            wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v164);
          }
          std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v176);
          v96 = v165;
        }
        if ( v164 )
        {
          (*(void (__fastcall **)(__int64))(*((_QWORD *)v96 - 1) + 56LL))((__int64)v96 - 8);
LABEL_220:
          if ( v164 )
          {
            v175 = 0LL;
            v136 = *(_QWORD *)v164;
            *(_QWORD *)v201 = &v175;
            v202 = 0LL;
            v203 = 1;
            v137 = (*(int (__fastcall **)(struct ISaDeviceProxy *, struct SaDeviceParams **))(v136 + 104))(v164, &v202) >= 0;
            if ( v203 )
            {
              v138 = v201[0];
              v139 = **(SaDeviceParams ***)v201;
              **(_QWORD **)v201 = v202;
              if ( v139 )
                SaDeviceParams::`scalar deleting destructor'(v139, v138);
            }
            if ( v137 )
            {
              v174 = 0LL;
              if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, v198, &v174)
                && v198[0] )
              {
                *(_QWORD *)&v222.Data1 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
                v174 = &qword_1801C2788;
                qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
                qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                *(_DWORD *)v222.Data4 = 0;
                wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v222);
              }
              v140 = *((_QWORD *)v174 + 1);
              if ( *(_DWORD *)v140 > 4u
                && (*(_QWORD *)(v140 + 16) & 0x400000000000LL) != 0
                && (*(_QWORD *)(v140 + 24) & 0x400000000000LL) == *(_QWORD *)(v140 + 24) )
              {
                *(_QWORD *)&v216 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v165 + 80LL))(v165);
                v183 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a12 + 56LL))(a12);
                v215 = (char *)v175 + 80;
                *(_QWORD *)v284 = v218;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                  v140,
                  (unsigned int)&unk_18018A61D,
                  v141,
                  v142,
                  (__int64)v284,
                  (__int64)&v215,
                  (__int64)&v183,
                  (__int64)&v216);
              }
            }
            std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v175);
          }
LABEL_233:
          if ( v209 || v27 && !*((_DWORD *)v27 + 240) && (v163 & 1) != 0 )
          {
            v171 = 0LL;
            v143 = v170;
            v144 = *(__int64 (__fastcall **)(struct IProcessSubmixProxy *, struct IAudioProcess **))(*(_QWORD *)v170 + 192LL);
            wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v171);
            v145 = v144(v143, &v171);
            v33 = v145;
            if ( v145 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x649,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)v145,
                v157);
LABEL_262:
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v171);
              goto LABEL_263;
            }
            if ( v171 )
            {
              v146 = *(_QWORD *)v171;
              v165 = 0LL;
              v147 = (*(__int64 (__fastcall **)(struct IAudioProcess *, struct IAudioStreamInfo **))(v146 + 56))(
                       v171,
                       &v165);
              v33 = v147;
              if ( v147 < 0 )
              {
                v148 = 1613LL;
LABEL_260:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v148,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                  (const char *)(unsigned int)v147,
                  v157);
                goto LABEL_261;
              }
              v149 = RpcImpersonateClient(0LL);
              if ( v149 )
              {
                v33 = wil::details::in1diag3::Return_Win32(
                        retaddr,
                        (void *)0x652,
                        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                        (const char *)v149,
                        v157);
LABEL_261:
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v165);
                goto LABEL_262;
              }
              BYTE1(v162) = 1;
              v150 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, _QWORD, _BYTE *, _BYTE *))(*(_QWORD *)v165 + 32LL))(
                       v165,
                       v81,
                       v283,
                       v282);
              v33 = v150;
              if ( v150 < 0 )
              {
                v151 = 1622LL;
LABEL_254:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v151,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                  (const char *)(unsigned int)v150,
                  v157);
                wil::details::ScopeExitFn__lambda_f3a1120583904601fd46f817f7254e2a___::_ScopeExitFn__lambda_f3a1120583904601fd46f817f7254e2a___(&v162);
                goto LABEL_261;
              }
              v152 = *((_QWORD *)v27 + 6);
              *((_QWORD *)v27 + 6) = 0LL;
              if ( v152 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v152 + 16LL))(v152);
              v150 = SystemAudioStream::move_from_blob(
                       (struct CP_EVENT_METADATA_BLOB *)v283,
                       (struct ICrossProcessEvent **)v27 + 6,
                       (struct SystemAudioStream *)((char *)v27 + 56));
              v33 = v150;
              if ( v150 < 0 )
              {
                v151 = 1624LL;
                goto LABEL_254;
              }
              v153 = *((_QWORD *)v27 + 44);
              *((_QWORD *)v27 + 44) = 0LL;
              if ( v153 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v153 + 16LL))(v153);
              v150 = SystemAudioStream::move_from_blob(
                       (struct CP_EVENT_METADATA_BLOB *)v282,
                       (struct ICrossProcessEvent **)v27 + 44,
                       (struct SystemAudioStream *)((char *)v27 + 360));
              v33 = v150;
              if ( v150 < 0 )
              {
                v151 = 1625LL;
                goto LABEL_254;
              }
              wil::details::ScopeExitFn__lambda_f3a1120583904601fd46f817f7254e2a___::_ScopeExitFn__lambda_f3a1120583904601fd46f817f7254e2a___(&v162);
              if ( v29 == eOffloadConnector )
              {
                v147 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64, __int64))(*(_QWORD *)v165 + 40LL))(
                         v165,
                         (__int64)v27 + 1276,
                         (__int64)v27 + 1280);
                v33 = v147;
                if ( v147 < 0 )
                {
                  v148 = 1633LL;
                  goto LABEL_260;
                }
                *((_DWORD *)v27 + 318) = 1;
                v147 = (*(__int64 (__fastcall **)(struct IAudioGraphCallback *, struct IAudioStreamInfo *))(*(_QWORD *)v219 + 32LL))(
                         v219,
                         v165);
                v33 = v147;
                if ( v147 < 0 )
                {
                  v148 = 1635LL;
                  goto LABEL_260;
                }
              }
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v165);
            }
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v171);
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v164);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v170);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v200);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v190);
          wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v186);
          v33 = 0;
          goto LABEL_272;
        }
      }
      if ( v194[0] )
        goto LABEL_233;
      v173 = 0LL;
      *(_QWORD *)v201 = &v173;
      v202 = 0LL;
      v203 = 1;
      v104 = *(_QWORD *)(v199 + 32);
      v281 = v35;
      v291 = v34;
      v33 = DeriveSaDeviceParametersForStream(a12, v31, v29, &v291, &v281, v187, Src, v104, &v202);
      if ( v203 )
      {
        v105 = v201[0];
        v106 = **(SaDeviceParams ***)v201;
        **(_QWORD **)v201 = v202;
        if ( v106 )
          SaDeviceParams::`scalar deleting destructor'(v106, v105);
      }
      if ( v33 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5C7,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v33,
          v158);
        std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v173);
        goto LABEL_263;
      }
      v286 = v90;
      v285 = 0LL;
      v107 = v216;
      v108 = *(__int64 **)(v216 + 40);
      v109 = *v108;
      *(struct _GUID *)v292 = v34;
      v159 = v90;
      v110 = (*(__int64 (__fastcall **)(__int64 *, struct CEndpointCharacteristics *, int *, _QWORD))(v109 + 56))(
               v108,
               a12,
               v292,
               (unsigned int)v29);
      v33 = v110;
      if ( v110 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5CD,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v110,
          v90);
        std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v173);
        goto LABEL_263;
      }
      *(_QWORD *)&v216 = &v285;
      v111 = (CAudioResourceManager *)(v107 - 8);
      *((_QWORD *)&v216 + 1) = v111;
      v268 = v216;
      v269 = 1;
      v112 = 1;
      v113 = *((_QWORD *)a12 + 5);
      if ( v113 )
      {
        *(_OWORD *)v250 = 0LL;
        v251 = 0LL;
        if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v113 + 40LL))(
               v113,
               &PKEY_Endpoint_AllowPreemption,
               v250) >= 0
          && ((LOWORD(v250[0]) - 11) & 0xFFF7) == 0 )
        {
          v112 = LOWORD(v250[1]) != 0;
        }
        PropVariantClear(v250);
      }
      v161 = 0;
      v194[0] = (struct IProcessSubmixProxy *)&v161;
      v194[1] = (struct IProcessSubmixProxy *)&v172;
      v266 = *(_OWORD *)v194;
      v267 = 1;
      if ( v112 )
      {
        if ( a14 == AUDCLNT_SHAREMODE_EXCLUSIVE )
        {
          if ( _InterlockedCompareExchange(
                 (volatile signed __int32 *)(*((_QWORD *)v172 + 12) + 276LL),
                 GetCurrentThreadId(),
                 0) )
          {
            v33 = -2005139364;
            v114 = 2289827932LL;
            v115 = 1520LL;
LABEL_197:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v115,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)v114,
              v159);
            wil::details::ScopeExitFn__lambda_13a9eb63737d7059b7b8f7db40fd0c9f___::_ScopeExitFn__lambda_13a9eb63737d7059b7b8f7db40fd0c9f___(&v266);
            goto LABEL_212;
          }
          v161 = 1;
LABEL_187:
          wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v164);
          SaDeviceForExclusiveStream = CAudioResourceManager::GetSaDeviceForExclusiveStream(
                                         *((CAudioResourceManager **)v172 + 12),
                                         a12,
                                         v186,
                                         v173,
                                         v163,
                                         AUDCLNT_SHAREMODE_EXCLUSIVE,
                                         (struct SaDeviceResourceParams *)&v285,
                                         v112,
                                         v171,
                                         *((struct CAudioSessionManager **)v172 + 12),
                                         &v164);
          v33 = SaDeviceForExclusiveStream;
          if ( SaDeviceForExclusiveStream < 0 )
          {
            v115 = 1534LL;
LABEL_196:
            v114 = (unsigned int)SaDeviceForExclusiveStream;
            goto LABEL_197;
          }
          goto LABEL_199;
        }
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)v172 + 12) + 276LL), 0, 0) )
        {
          v33 = -2005139364;
          v114 = 2289827932LL;
          v115 = 1526LL;
          goto LABEL_197;
        }
      }
      else if ( a14 == AUDCLNT_SHAREMODE_EXCLUSIVE )
      {
        goto LABEL_187;
      }
      v117 = v163;
      if ( (v163 & 1) != 0 )
      {
        wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v164);
        SaDeviceForExclusiveStream = CAudioResourceManager::GetSaDeviceForOffloadedStream(
                                       *((CAudioResourceManager **)v172 + 12),
                                       a12,
                                       v186,
                                       v173,
                                       v117,
                                       a14,
                                       (struct SaDeviceResourceParams *)&v285,
                                       v171,
                                       *((struct CAudioSessionManager **)v172 + 12),
                                       v221,
                                       v220,
                                       &v164);
        v33 = SaDeviceForExclusiveStream;
        if ( SaDeviceForExclusiveStream < 0 )
        {
          v115 = 1540LL;
          goto LABEL_196;
        }
      }
      else
      {
        v118 = v164;
        v164 = 0LL;
        if ( v118 )
          (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v118 + 16LL))(v118);
        v119 = v165;
        v120 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v165 + 136LL))(v165);
        v121 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v119 + 128LL))(v119);
        v122 = (struct CAudioSessionManager *)*((_QWORD *)v172 + 12);
        v123 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v171 + 96LL))(v171);
        SaDeviceForExclusiveStream = CAudioResourceManager::GetSaDeviceForSharedStream(
                                       v111,
                                       (const unsigned __int16 **)a12,
                                       v186,
                                       v173,
                                       v163,
                                       a14,
                                       (struct SaDeviceResourceParams *)&v285,
                                       v123 != 0,
                                       v122,
                                       v121,
                                       v120,
                                       &v164);
        v33 = SaDeviceForExclusiveStream;
        if ( SaDeviceForExclusiveStream < 0 )
        {
          v115 = 1547LL;
          goto LABEL_196;
        }
        v81 = a22;
      }
LABEL_199:
      wil::details::ScopeExitFn__lambda_13a9eb63737d7059b7b8f7db40fd0c9f___::_ScopeExitFn__lambda_13a9eb63737d7059b7b8f7db40fd0c9f___(&v266);
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          v124,
          (__int64)&AudioResourceManager_SaDevice_Created,
          v125,
          1,
          (__int64)v292);
      v126 = (AuxiliaryInputDescriptor *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v126 )
      {
        *(_QWORD *)v126 = 0LL;
        *((_QWORD *)v126 + 1) = 0LL;
      }
      else
      {
        v126 = 0LL;
      }
      v127 = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *, AuxiliaryInputDescriptor *))(*(_QWORD *)v170
                                                                                                 + 264LL))(
               v170,
               v126);
      if ( v127 >= 0 )
      {
        if ( *(_DWORD *)v126 == 1 )
        {
          v194[0] = v170;
          Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v194);
          v134 = CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup(v111);
          v33 = v134;
          if ( v134 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x618,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)(unsigned int)v134,
              v159);
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)v194);
            AuxiliaryInputDescriptor::`scalar deleting destructor'(v126, v135);
            goto LABEL_212;
          }
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)v194);
          goto LABEL_207;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x614,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v127,
          v159);
      }
      if ( !v126 )
      {
LABEL_210:
        v129 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct IProcessSubmixProxy *, struct ISaDeviceProxy *, bool))(*(_QWORD *)g_DeviceGraphManager + 32LL);
        v130 = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v170 + 208LL))(v170);
        v157 = (unsigned int)v27;
        v131 = v129(g_DeviceGraphManager, v170, v164, v130 == 0);
        v33 = v131;
        if ( v131 >= 0 )
        {
          if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
            McGenEventWrite_EtwEventWriteTransfer(
              v132,
              (__int64)&AudioResourceManager_SaDevice_Connected,
              v133,
              1,
              (__int64)&v291);
          wil::details::lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___::_lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___(&v268);
          std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v173);
          goto LABEL_220;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x624,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v131,
          (int)v27);
LABEL_212:
        wil::details::lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___::_lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___(&v268);
        std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v173);
        goto LABEL_263;
      }
LABEL_207:
      v128 = (void *)*((_QWORD *)v126 + 1);
      if ( v128 )
        CoTaskMemFree(v128);
      operator delete(v126, 0x10uLL);
      goto LABEL_210;
    }
    if ( v84 == __PAIR128__(0xED3D76C82C5CFE8AuLL, BLUETOOTH_AUDIO_RESOURCE_MANAGER) )
    {
      v279 = *(struct _GUID *)((char *)a12 + 9764);
      BtAudioResourceManager = CBtAudioResourceManagerCache::GetBtAudioResourceManager(
                                 (CBtAudioResourceManagerCache *)v84,
                                 a12,
                                 &v279,
                                 &v186);
      v33 = BtAudioResourceManager;
      if ( BtAudioResourceManager >= 0 )
      {
        v190 = 0LL;
        if ( v186 )
        {
          v88 = (const unsigned __int16 **)(*(__int64 (__fastcall **)(struct ISaDeviceResourceManager *, char **))(*(_QWORD *)v186 + 96LL))(
                                             v186,
                                             &v215);
          if ( &v190 != v88 )
          {
            wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
              &v190,
              *v88);
            *v88 = 0LL;
          }
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v215);
        }
        goto LABEL_145;
      }
      v86 = (unsigned int)BtAudioResourceManager;
      v87 = 196LL;
    }
    else
    {
      v33 = -2147418113;
      v86 = 2147549183LL;
      v87 = 194LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v87,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v86,
      v29);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58A,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v33,
      v160);
    goto LABEL_271;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x563,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v32,
    v30);
  return (unsigned int)v33;
}
