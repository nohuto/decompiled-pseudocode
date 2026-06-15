/*
 * XREFs of ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x1800D9228
 * Callers:
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800D8CE4 (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV-$ComPtr@UIStreamGr.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18000CB5C (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000D804 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000E360 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x18000E7C0 (-DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMO.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@AEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x180010920 (-DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL.c)
 *     ??1?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180015DEC (--1-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1StreamGroupParams@@QEAA@XZ @ 0x180016C24 (--1StreamGroupParams@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HardwareLoopbackEnabled@EffectPack@@QEAAHXZ @ 0x18003E598 (-HardwareLoopbackEnabled@EffectPack@@QEAAHXZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x1800450A8 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x180045580 (--1-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800455A0 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAVCAudioSessionManager@@55PEAPEAUISaDeviceProxy@@@Z @ 0x180048B18 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@P.c)
 *     ?DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ @ 0x18004ABD4 (-DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     ??1?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ @ 0x18004B140 (--1-$unique_ptr@UMODE_PARAMS@@U-$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004BB14 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     _lambda_1e586d25f746b97e5ba8de4ae130be07_::operator() @ 0x18006B128 (_lambda_1e586d25f746b97e5ba8de4ae130be07_--operator().c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N_N66W4_BridgeStreamProperties@@6PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x18006F1CC (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080EE0 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x180081258 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$_tlgWrapperByR.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@5@Z @ 0x180081330 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$__ea_180081330.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18008148A (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@44@Z @ 0x1800D7D48 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x1800D7FDC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     wil::details::lambda_call__lambda_d4d563787c597eeb854d7a002cd12c12___::_lambda_call__lambda_d4d563787c597eeb854d7a002cd12c12___ @ 0x1800D85A0 (wil--details--lambda_call__lambda_d4d563787c597eeb854d7a002cd12c12___--_lambda_call__lambda_d4d5.c)
 *     ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x1800D8694 (--1-$unique_ptr@UStreamGroupParams@@U-$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=21
__int64 __fastcall CAudioResourceManager::CreateInternalLoopbackStream(
        CAudioResourceManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        struct IStreamGroupProxy *a4,
        struct IBridgeStreamInstanceProxy *a5,
        struct SystemAudioStream *a6)
{
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v11; // r12d
  struct _GUID v12; // xmm6
  struct _GUID v13; // xmm7
  void *v14; // rcx
  void *v15; // rcx
  struct tWAVEFORMATEX *v16; // rcx
  void *v17; // rcx
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  char *v20; // rbx
  _DWORD *v21; // rcx
  unsigned int v22; // eax
  __int64 *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  char *v29; // rbx
  _DWORD *v30; // rcx
  unsigned int v31; // eax
  __int64 *v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 *v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  struct tWAVEFORMATEX *v38; // rbx
  _DWORD *v39; // rcx
  unsigned int wFormatTag; // eax
  __int64 *v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 *v44; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  char *v47; // rbx
  _DWORD *v48; // rcx
  __int64 v49; // rcx
  unsigned int v50; // eax
  __int64 *v51; // rax
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 *v54; // rax
  __int64 v55; // r8
  __int64 v56; // r9
  int SharedModeEnginePeriodicity; // eax
  double v58; // xmm1_8
  int v59; // eax
  int v60; // eax
  CEndpointStoreCache *v61; // rcx
  int v62; // r8d
  int EndpointStore; // eax
  struct CEndpointStore *v64; // rdi
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rdx
  unsigned __int64 v68; // r9
  __int64 v69; // rcx
  _DWORD *v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  const WCHAR *v73; // rbx
  __int64 (__fastcall *v74)(const WCHAR *, struct ISaDeviceProxy **); // rsi
  int v75; // eax
  struct ISaDeviceProxy *v76; // rcx
  __int64 v77; // rcx
  SaDeviceParams *v78; // rcx
  __int64 v79; // rdx
  unsigned __int64 v80; // r9
  unsigned int v81; // edx
  __int64 *v82; // rcx
  __int64 v83; // rax
  int v84; // eax
  int SaDeviceForSharedStream; // eax
  int v86; // ecx
  int v87; // r8d
  int v88; // eax
  int v89; // ecx
  int v90; // r8d
  __int64 v92; // rax
  SaDeviceParams *v93; // rcx
  bool v94; // bl
  _DWORD *v95; // rbx
  __int64 v96; // r8
  __int64 v97; // r9
  StreamGroupParams *v98; // rbx
  __int64 *v99; // rbx
  void *v100; // rcx
  void *v101; // rcx
  struct tWAVEFORMATEX *v102; // rcx
  void *v103; // rcx
  void *v104; // rcx
  __int64 v105; // [rsp+28h] [rbp-150h]
  LPVOID pv; // [rsp+F8h] [rbp-80h] BYREF
  LPVOID v107; // [rsp+100h] [rbp-78h] BYREF
  struct tWAVEFORMATEX *v108; // [rsp+108h] [rbp-70h] BYREF
  LPVOID v109; // [rsp+110h] [rbp-68h] BYREF
  void *v110; // [rsp+118h] [rbp-60h] BYREF
  const WCHAR *v111; // [rsp+120h] [rbp-58h] BYREF
  StreamGroupParams *v112; // [rsp+128h] [rbp-50h] BYREF
  struct ISaDeviceProxy *v113; // [rsp+130h] [rbp-48h] BYREF
  struct CEndpointStore *v114; // [rsp+138h] [rbp-40h] BYREF
  int v115; // [rsp+140h] [rbp-38h] BYREF
  int v116; // [rsp+144h] [rbp-34h] BYREF
  int v117; // [rsp+148h] [rbp-30h] BYREF
  int v118; // [rsp+14Ch] [rbp-2Ch] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+150h] [rbp-28h] BYREF
  SaDeviceParams *v120; // [rsp+158h] [rbp-20h] BYREF
  int v121; // [rsp+160h] [rbp-18h] BYREF
  int v122; // [rsp+164h] [rbp-14h] BYREF
  int v123; // [rsp+168h] [rbp-10h] BYREF
  int v124; // [rsp+16Ch] [rbp-Ch] BYREF
  DWORD nAvgBytesPerSec; // [rsp+170h] [rbp-8h] BYREF
  DWORD nSamplesPerSec; // [rsp+174h] [rbp-4h] BYREF
  int v127; // [rsp+178h] [rbp+0h] BYREF
  int v128; // [rsp+17Ch] [rbp+4h] BYREF
  CEndpointCharacteristics *v129[2]; // [rsp+180h] [rbp+8h] BYREF
  std::_Ref_count_base *v130; // [rsp+190h] [rbp+18h]
  struct IStreamGroupProxy *v131; // [rsp+198h] [rbp+20h] BYREF
  SaDeviceParams **v132; // [rsp+1A0h] [rbp+28h]
  struct SaDeviceParams *v133; // [rsp+1A8h] [rbp+30h] BYREF
  char v134; // [rsp+1B0h] [rbp+38h]
  GUID *v135; // [rsp+1B8h] [rbp+40h] BYREF
  GUID *v136; // [rsp+1C0h] [rbp+48h] BYREF
  GUID *v137; // [rsp+1C8h] [rbp+50h] BYREF
  int v138; // [rsp+1D0h] [rbp+58h] BYREF
  int v139; // [rsp+1D4h] [rbp+5Ch] BYREF
  __int64 v140[2]; // [rsp+1D8h] [rbp+60h] BYREF
  int v141[2]; // [rsp+1E8h] [rbp+70h] BYREF
  __int64 v142; // [rsp+1F8h] [rbp+80h]
  const WCHAR *v143; // [rsp+200h] [rbp+88h] BYREF
  const WCHAR *v144; // [rsp+208h] [rbp+90h] BYREF
  const WCHAR *v145; // [rsp+210h] [rbp+98h] BYREF
  const WCHAR *v146; // [rsp+218h] [rbp+A0h] BYREF
  const WCHAR *v147; // [rsp+220h] [rbp+A8h] BYREF
  __int64 v148; // [rsp+228h] [rbp+B0h] BYREF
  const WCHAR *v149; // [rsp+230h] [rbp+B8h] BYREF
  struct tWAVEFORMATEX *v150[2]; // [rsp+238h] [rbp+C0h] BYREF
  char v151; // [rsp+248h] [rbp+D0h]
  SaDeviceParams *v152; // [rsp+250h] [rbp+D8h] BYREF
  GUID v153; // [rsp+258h] [rbp+E0h] BYREF
  struct tWAVEFORMATEX **v154; // [rsp+268h] [rbp+F0h]
  struct tWAVEFORMATEX *v155; // [rsp+270h] [rbp+F8h] BYREF
  char v156; // [rsp+278h] [rbp+100h]
  LPVOID *v157; // [rsp+280h] [rbp+108h]
  struct tWAVEFORMATEX *v158; // [rsp+288h] [rbp+110h] BYREF
  char v159; // [rsp+290h] [rbp+118h]
  LPVOID *v160; // [rsp+298h] [rbp+120h]
  struct tWAVEFORMATEX *v161; // [rsp+2A0h] [rbp+128h] BYREF
  char v162; // [rsp+2A8h] [rbp+130h]
  struct IStreamGroupProxy *v163; // [rsp+2B0h] [rbp+138h] BYREF
  struct _GUID v164; // [rsp+2B8h] [rbp+140h] BYREF
  GUID v165; // [rsp+2C8h] [rbp+150h] BYREF
  GUID v166; // [rsp+2D8h] [rbp+160h] BYREF
  GUID v167; // [rsp+2E8h] [rbp+170h] BYREF
  GUID v168; // [rsp+2F8h] [rbp+180h] BYREF
  _QWORD *v169[8]; // [rsp+308h] [rbp+190h] BYREF
  struct _GUID v170; // [rsp+348h] [rbp+1D0h] BYREF
  struct _GUID v171; // [rsp+358h] [rbp+1E0h] BYREF
  __int64 v172[2]; // [rsp+368h] [rbp+1F0h] BYREF
  __int64 v173[2]; // [rsp+378h] [rbp+200h] BYREF
  GUID v174; // [rsp+388h] [rbp+210h] BYREF
  struct _GUID v175; // [rsp+398h] [rbp+220h] BYREF
  __int64 v176[2]; // [rsp+3A8h] [rbp+230h] BYREF
  struct _GUID v177; // [rsp+3B8h] [rbp+240h] BYREF
  struct _GUID v178; // [rsp+3C8h] [rbp+250h] BYREF
  _DWORD v179[4]; // [rsp+3D8h] [rbp+260h] BYREF
  __int64 v180; // [rsp+3E8h] [rbp+270h]
  struct _GUID v181; // [rsp+3F0h] [rbp+278h]
  __int64 v182; // [rsp+400h] [rbp+288h]
  const unsigned __int16 *v183; // [rsp+408h] [rbp+290h]
  __int64 v184; // [rsp+410h] [rbp+298h]
  __int64 v185; // [rsp+418h] [rbp+2A0h]
  __int64 v186; // [rsp+428h] [rbp+2B0h] BYREF
  int v187; // [rsp+430h] [rbp+2B8h]
  GUID v188; // [rsp+438h] [rbp+2C0h] BYREF
  GUID v189; // [rsp+448h] [rbp+2D0h] BYREF
  GUID v190; // [rsp+458h] [rbp+2E0h] BYREF
  GUID v191; // [rsp+468h] [rbp+2F0h] BYREF
  int v192[4]; // [rsp+478h] [rbp+300h] BYREF
  int v193[4]; // [rsp+488h] [rbp+310h] BYREF
  _BYTE v194[32]; // [rsp+498h] [rbp+320h] BYREF
  int *v195; // [rsp+4B8h] [rbp+340h]
  __int64 v196; // [rsp+4C0h] [rbp+348h]
  _BYTE v197[32]; // [rsp+4C8h] [rbp+350h] BYREF
  int *v198; // [rsp+4E8h] [rbp+370h]
  __int64 v199; // [rsp+4F0h] [rbp+378h]
  _BYTE v200[32]; // [rsp+4F8h] [rbp+380h] BYREF
  int *v201; // [rsp+518h] [rbp+3A0h]
  __int64 v202; // [rsp+520h] [rbp+3A8h]
  _BYTE v203[32]; // [rsp+528h] [rbp+3B0h] BYREF
  int *v204; // [rsp+548h] [rbp+3D0h]
  __int64 v205; // [rsp+550h] [rbp+3D8h]
  wil::details::in1diag3 *retaddr; // [rsp+5D0h] [rbp+458h]

  v142 = a3;
  v143 = a2;
  v131 = a4;
  *(_QWORD *)v141 = a6;
  *(_OWORD *)v129 = 0LL;
  v130 = 0LL;
  v8 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 40LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         v129);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 2979LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_123:
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v129);
    return (unsigned int)v9;
  }
  v11 = (unsigned int)EffectPack::HardwareLoopbackEnabled(v129[1]) != 0 ? eLoopbackConnector : eHostProcessConnector;
  v165 = GUID_00000000_0000_0000_0000_000000000000;
  v166 = GUID_00000000_0000_0000_0000_000000000000;
  v167 = GUID_00000000_0000_0000_0000_000000000000;
  v153 = GUID_00000000_0000_0000_0000_000000000000;
  v168 = GUID_00000000_0000_0000_0000_000000000000;
  v8 = DeriveAudioProcessingModeConfiguration(
         0,
         0,
         0,
         v129,
         2u,
         0,
         v11,
         0LL,
         0,
         0,
         0LL,
         &v165,
         &v166,
         &v167,
         &v153,
         &v168);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 3001LL;
    goto LABEL_5;
  }
  v107 = 0LL;
  v109 = 0LL;
  v108 = 0LL;
  pv = 0LL;
  v150[0] = (struct tWAVEFORMATEX *)&pv;
  v150[1] = 0LL;
  v151 = 1;
  v154 = &v108;
  v155 = 0LL;
  v156 = 1;
  v160 = &v109;
  v161 = 0LL;
  v162 = 1;
  v157 = &v107;
  v158 = 0LL;
  v159 = 1;
  v12 = v165;
  v177 = v165;
  v13 = v166;
  v178 = v166;
  v170 = v167;
  v9 = DeriveDeviceGraphFormatsForStream(
         v129,
         0,
         (struct _GUID *)(unsigned int)v11,
         AUDCLNT_SHAREMODE_SHARED,
         0,
         (IAudioMediaType *)&v170,
         &v178,
         &v177,
         0LL,
         &v158,
         &v161,
         &v155,
         &v150[1]);
  if ( v159 )
  {
    v14 = *v157;
    *v157 = v158;
    if ( v14 )
      CoTaskMemFree(v14);
  }
  if ( v162 )
  {
    v15 = *v160;
    *v160 = v161;
    if ( v15 )
      CoTaskMemFree(v15);
  }
  if ( v156 )
  {
    v16 = *v154;
    *v154 = v155;
    if ( v16 )
      CoTaskMemFree(v16);
  }
  if ( v151 )
  {
    v17 = *(void **)v150[0];
    *(_QWORD *)v150[0] = v150[1];
    if ( v17 )
      CoTaskMemFree(v17);
  }
  if ( v9 < 0 )
  {
    v18 = (unsigned int)v9;
    v19 = 3017LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v18);
LABEL_122:
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&v108);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v109);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v107);
    goto LABEL_123;
  }
  v20 = (char *)v107;
  if ( v107 )
  {
    v22 = *(unsigned __int16 *)v107;
    if ( (_WORD)v22 == 0xFFFE )
    {
      v26 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              65534LL,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      if ( *(_DWORD *)v26[1] > 4u && tlgKeywordOn(v26[1], 512LL) )
      {
        v122 = *((_DWORD *)v20 + 5);
        v144 = (const WCHAR *)(v20 + 24);
        v121 = *((_DWORD *)v107 + 2);
        LODWORD(v135) = *((_DWORD *)v107 + 1);
        LOWORD(v118) = *((_WORD *)v107 + 1);
        *(_QWORD *)&v191.Data1 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v28,
          byte_180190738,
          v27,
          v28,
          (const WCHAR **)&v191,
          (__int64)&v118,
          (__int64)&v135,
          (__int64)&v121,
          (__int64 *)&v144,
          (__int64)&v122);
      }
    }
    else
    {
      v191 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v191.Data1 = v22;
      v23 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              65534LL,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      if ( *(_DWORD *)v23[1] > 4u && tlgKeywordOn(v23[1], 512LL) )
      {
        v135 = &v191;
        v121 = *((_DWORD *)v107 + 2);
        v122 = *((_DWORD *)v107 + 1);
        LOWORD(v118) = *((_WORD *)v107 + 1);
        v144 = L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v25,
          byte_1801907DC,
          v24,
          v25,
          &v144,
          (__int64)&v118,
          (__int64)&v122,
          (__int64)&v121,
          (__int64 *)&v135);
      }
    }
  }
  else
  {
    v21 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                      65534LL,
                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *v21 > 4u && tlgKeywordOn((__int64)v21, 512LL) )
    {
      v118 = 0;
      v195 = &v118;
      v196 = 4LL;
      tlgWriteTransfer_EtwEventWriteTransfer((__int64)v21, byte_180190873, 0LL, 0LL, 3, (__int64)v194);
    }
  }
  v29 = (char *)v109;
  if ( v109 )
  {
    v31 = *(unsigned __int16 *)v109;
    if ( (_WORD)v31 == 0xFFFE )
    {
      v35 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              65534LL,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      if ( *(_DWORD *)v35[1] > 4u && tlgKeywordOn(v35[1], 512LL) )
      {
        v124 = *((_DWORD *)v29 + 5);
        v145 = (const WCHAR *)(v29 + 24);
        v123 = *((_DWORD *)v109 + 2);
        LODWORD(v140[0]) = *((_DWORD *)v109 + 1);
        LOWORD(v115) = *((_WORD *)v109 + 1);
        *(_QWORD *)&v188.Data1 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v37,
          byte_180190596,
          v36,
          v37,
          (const WCHAR **)&v188,
          (__int64)&v115,
          (__int64)v140,
          (__int64)&v123,
          (__int64 *)&v145,
          (__int64)&v124);
      }
    }
    else
    {
      v188 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v188.Data1 = v31;
      v32 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              65534LL,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      if ( *(_DWORD *)v32[1] > 4u && tlgKeywordOn(v32[1], 512LL) )
      {
        v140[0] = (__int64)&v188;
        v123 = *((_DWORD *)v109 + 2);
        v124 = *((_DWORD *)v109 + 1);
        LOWORD(v115) = *((_WORD *)v109 + 1);
        v145 = L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v34,
          byte_18019063D,
          v33,
          v34,
          &v145,
          (__int64)&v115,
          (__int64)&v124,
          (__int64)&v123,
          v140);
      }
    }
  }
  else
  {
    v30 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                      (__int64)v21,
                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *v30 > 4u && tlgKeywordOn((__int64)v30, 512LL) )
    {
      v115 = 0;
      v198 = &v115;
      v199 = 4LL;
      tlgWriteTransfer_EtwEventWriteTransfer((__int64)v30, byte_1801906D7, 0LL, 0LL, 3, (__int64)v197);
    }
  }
  v38 = v108;
  if ( v108 )
  {
    wFormatTag = v108->wFormatTag;
    if ( (_WORD)wFormatTag == 0xFFFE )
    {
      v44 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              65534LL,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      if ( *(_DWORD *)v44[1] > 4u && tlgKeywordOn(v44[1], 512LL) )
      {
        nSamplesPerSec = *(_DWORD *)&v38[1].nChannels;
        v146 = (const WCHAR *)&v38[1].nSamplesPerSec + 1;
        nAvgBytesPerSec = v108->nAvgBytesPerSec;
        LODWORD(v136) = v108->nSamplesPerSec;
        LOWORD(v116) = v108->nChannels;
        *(_QWORD *)&v190.Data1 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v46,
          byte_1801903F7,
          v45,
          v46,
          (const WCHAR **)&v190,
          (__int64)&v116,
          (__int64)&v136,
          (__int64)&nAvgBytesPerSec,
          (__int64 *)&v146,
          (__int64)&nSamplesPerSec);
      }
    }
    else
    {
      v190 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v190.Data1 = wFormatTag;
      v41 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              65534LL,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      if ( *(_DWORD *)v41[1] > 4u && tlgKeywordOn(v41[1], 512LL) )
      {
        v136 = &v190;
        nAvgBytesPerSec = v108->nAvgBytesPerSec;
        nSamplesPerSec = v108->nSamplesPerSec;
        LOWORD(v116) = v108->nChannels;
        v146 = L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v43,
          byte_18019049D,
          v42,
          v43,
          &v146,
          (__int64)&v116,
          (__int64)&nSamplesPerSec,
          (__int64)&nAvgBytesPerSec,
          (__int64 *)&v136);
      }
    }
  }
  else
  {
    v39 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                      (__int64)v30,
                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *v39 > 4u && tlgKeywordOn((__int64)v39, 512LL) )
    {
      v116 = 0;
      v201 = &v116;
      v202 = 4LL;
      tlgWriteTransfer_EtwEventWriteTransfer((__int64)v39, byte_180190536, 0LL, 0LL, 3, (__int64)v200);
    }
  }
  v47 = (char *)pv;
  if ( pv )
  {
    v50 = *(unsigned __int16 *)pv;
    if ( (_WORD)v50 == 0xFFFE )
    {
      v54 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              65534LL,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      if ( *(_DWORD *)v54[1] > 4u && tlgKeywordOn(v54[1], 512LL) )
      {
        v128 = *((_DWORD *)v47 + 5);
        v147 = (const WCHAR *)(v47 + 24);
        v127 = *((_DWORD *)pv + 2);
        LODWORD(v137) = *((_DWORD *)pv + 1);
        LOWORD(v117) = *((_WORD *)pv + 1);
        *(_QWORD *)&v189.Data1 = L"WAVEFORMATEXTENSIBLE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v56,
          byte_18019025B,
          v55,
          v56,
          (const WCHAR **)&v189,
          (__int64)&v117,
          (__int64)&v137,
          (__int64)&v127,
          (__int64 *)&v147,
          (__int64)&v128);
      }
    }
    else
    {
      v189 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v189.Data1 = v50;
      v51 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              65534LL,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      if ( *(_DWORD *)v51[1] > 4u && tlgKeywordOn(v51[1], 512LL) )
      {
        v137 = &v189;
        v127 = *((_DWORD *)pv + 2);
        v128 = *((_DWORD *)pv + 1);
        LOWORD(v117) = *((_WORD *)pv + 1);
        v147 = L"WAVEFORMATEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v53,
          byte_180190300,
          v52,
          v53,
          &v147,
          (__int64)&v117,
          (__int64)&v128,
          (__int64)&v127,
          (__int64 *)&v137);
      }
    }
  }
  else
  {
    v48 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                      (__int64)v39,
                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *v48 > 4u && tlgKeywordOn((__int64)v48, 512LL) )
    {
      v117 = 0;
      v204 = &v117;
      v205 = 4LL;
      tlgWriteTransfer_EtwEventWriteTransfer(v49, byte_180190398, 0LL, 0LL, 3, (__int64)v203);
    }
  }
  v171 = v12;
  SharedModeEnginePeriodicity = EffectPack::GetSharedModeEnginePeriodicity(
                                  (__int64)v129[1],
                                  v11,
                                  (__int64)pv,
                                  (__int128 *)&v171,
                                  0,
                                  (__int64)&v138,
                                  0LL,
                                  0LL,
                                  0LL);
  v9 = SharedModeEnginePeriodicity;
  if ( SharedModeEnginePeriodicity < 0 )
  {
    v18 = (unsigned int)SharedModeEnginePeriodicity;
    v19 = 3027LL;
    goto LABEL_20;
  }
  v58 = (double)v138 * 10000000.0 / (double)*((int *)pv + 1) + 0.5;
  v110 = 0LL;
  *(GUID *)v172 = v168;
  *(struct _GUID *)v176 = v13;
  *(struct _GUID *)v173 = v12;
  v59 = InitializeStreamAndModeDescriptors(
          (struct IAudioProcessingObject *)v129,
          0,
          0x20002u,
          2u,
          v11,
          v173,
          (__int64)v176,
          v172,
          0,
          0LL,
          (__int64)v107,
          0LL,
          (unsigned int)(int)v58,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL,
          0,
          0,
          0,
          0,
          0LL,
          0LL,
          0,
          0LL,
          0LL,
          (_QWORD **)&v110);
  v9 = v59;
  if ( v59 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBDC,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v59);
LABEL_121:
    std::unique_ptr<MODE_PARAMS>::~unique_ptr<MODE_PARAMS>((__int64 **)&v110);
    goto LABEL_122;
  }
  v184 = 0LL;
  v185 = 0LL;
  v182 = (unsigned int)(int)v58;
  v179[0] = 2;
  v181 = v13;
  v179[2] = v11;
  v183 = a2;
  v179[1] = 1;
  v179[3] = GetCurrentProcessId();
  v180 = v142;
  if ( v110 )
  {
    *(_DWORD *)(*((_QWORD *)v110 + 1) + 8LL) = *((unsigned __int16 *)v107 + 8) + 18;
    *(_QWORD *)(*((_QWORD *)v110 + 1) + 16LL) = v107;
  }
  v112 = 0LL;
  v174 = v153;
  v60 = DeriveStreamGroupParametersForStream(
          (__int64 *)v129,
          v11,
          2,
          v182,
          v105,
          &v174,
          0,
          0,
          (struct tWAVEFORMATEX *)v109,
          0LL,
          &v112);
  v9 = v60;
  if ( v60 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBF2,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v60);
LABEL_120:
    std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>(&v112);
    goto LABEL_121;
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (_DWORD)v61,
      (unsigned int)&AudioResourceManager_StreamSettings_Derived,
      v62,
      1,
      (__int64)v192);
  v114 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v61, a2, &v114);
  v9 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBF7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)EndpointStore);
LABEL_119:
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v114);
    goto LABEL_120;
  }
  v64 = v114;
  (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)v114 + 13) + 120LL))(
    *((_QWORD *)v114 + 13),
    &lpCriticalSection);
  v111 = 0LL;
  v65 = *(_QWORD *)g_DeviceGraphManager;
  v111 = 0LL;
  v66 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, CEndpointCharacteristics **, _QWORD, StreamGroupParams *, _DWORD, void *, const WCHAR **))(v65 + 48))(
          g_DeviceGraphManager,
          v129,
          *((_QWORD *)v64 + 13),
          v112,
          0,
          v110,
          &v111);
  v9 = v66;
  if ( v66 < 0 )
  {
    v67 = 3071LL;
LABEL_79:
    v68 = (unsigned int)v66;
LABEL_80:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v67,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v68);
    goto LABEL_117;
  }
  if ( g_UseNewStreamManagementCodePath )
  {
    v169[0] = &v111;
    v169[1] = v179;
    v169[2] = &v110;
    v169[3] = &v112;
    v169[4] = &a5;
    v169[5] = &v131;
    v169[6] = v141;
    v9 = lambda_1e586d25f746b97e5ba8de4ae130be07_::operator()(v169);
    v70 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                      v69,
                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *v70 > 4u )
    {
      v163 = v131;
      v148 = v142;
      v149 = v111;
      v139 = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)v70,
        byte_1801901FD,
        v71,
        v72,
        (__int64)&v139,
        (__int64)&v149,
        (__int64)&v148,
        (__int64)&v163);
    }
    if ( v9 < 0 )
    {
      v68 = (unsigned int)v9;
      v67 = 3107LL;
      goto LABEL_80;
    }
  }
  else
  {
    v66 = (*(__int64 (__fastcall **)(const WCHAR *, _DWORD *, struct IStreamGroupProxy *, _QWORD))(*(_QWORD *)v111
                                                                                                 + 280LL))(
            v111,
            v179,
            v131,
            *(_QWORD *)v141);
    v9 = v66;
    if ( v66 < 0 )
    {
      v67 = 3111LL;
      goto LABEL_79;
    }
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (_DWORD)v70,
      (unsigned int)&AudioResourceManager_Stream_Created,
      v71,
      1,
      (__int64)v193);
  v113 = 0LL;
  v73 = v111;
  v74 = *(__int64 (__fastcall **)(const WCHAR *, struct ISaDeviceProxy **))(*(_QWORD *)v111 + 232LL);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)&v113);
  v75 = v74(v73, &v113);
  v9 = v75;
  if ( v75 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC2E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v75);
LABEL_116:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v113);
LABEL_117:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v111);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_119;
  }
  v76 = v113;
  if ( !v113 )
  {
    v120 = 0LL;
    v132 = &v120;
    v133 = 0LL;
    v134 = 1;
    v77 = *((_QWORD *)v112 + 3);
    v175 = v13;
    v164 = v12;
    v9 = DeriveSaDeviceParametersForStream(
           v129,
           AUDCLNT_SHAREMODE_SHARED,
           v11,
           &v164,
           &v175,
           (struct tWAVEFORMATEX *)pv,
           v108,
           v77,
           &v133);
    if ( v134 )
    {
      v78 = *v132;
      *v132 = v133;
      if ( v78 )
        SaDeviceParams::`scalar deleting destructor'(v78);
    }
    if ( v9 < 0 )
    {
      v79 = 3126LL;
LABEL_98:
      v80 = (unsigned int)v9;
LABEL_99:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v79,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v80);
LABEL_100:
      std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v120, v81);
      goto LABEL_116;
    }
    if ( CEndpointCharacteristics::DoesExclusiveModeOverrideShared(v129[0]) )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)v64 + 12) + 276LL), 0, 0) )
      {
        v9 = -2005139364;
        v79 = 3135LL;
        goto LABEL_98;
      }
      v12 = v165;
      v64 = v114;
    }
    v187 = 0;
    v186 = 0LL;
    v82 = (__int64 *)*((_QWORD *)this + 6);
    v83 = *v82;
    v164 = v12;
    v84 = (*(__int64 (__fastcall **)(__int64 *, CEndpointCharacteristics *, struct _GUID *, _QWORD, _DWORD, __int64 *))(v83 + 56))(
            v82,
            v129[0],
            &v164,
            (unsigned int)v11,
            0,
            &v186);
    v9 = v84;
    if ( v84 < 0 )
    {
      v80 = (unsigned int)v84;
      v79 = 3142LL;
      goto LABEL_99;
    }
    *(_QWORD *)&v153.Data1 = &v186;
    *(_QWORD *)v153.Data4 = this;
    *(GUID *)v150 = v153;
    v151 = 1;
    wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)&v113);
    SaDeviceForSharedStream = CAudioResourceManager::GetSaDeviceForSharedStream(
                                this,
                                v129,
                                0LL,
                                v120,
                                0x20002u,
                                AUDCLNT_SHAREMODE_SHARED,
                                (struct SaDeviceResourceParams *)&v186,
                                0,
                                *((struct CAudioSessionManager **)v64 + 12),
                                0,
                                0,
                                &v113);
    v9 = SaDeviceForSharedStream;
    if ( SaDeviceForSharedStream < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC5B,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)SaDeviceForSharedStream);
      wil::details::lambda_call__lambda_d4d563787c597eeb854d7a002cd12c12___::_lambda_call__lambda_d4d563787c597eeb854d7a002cd12c12___((__int64)v150);
      goto LABEL_100;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        v86,
        (unsigned int)&AudioResourceManager_SaDevice_Created,
        v87,
        1,
        (__int64)v193);
    v88 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, const WCHAR *, struct ISaDeviceProxy *, __int64, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
            g_DeviceGraphManager,
            v111,
            v113,
            1LL,
            *(_QWORD *)v141);
    v9 = v88;
    if ( v88 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC67,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v88);
      if ( v186 )
      {
        (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 6) + 80LL))(*((_QWORD *)this + 6), &v186);
        v186 = 0LL;
      }
      if ( v120 )
        SaDeviceParams::`scalar deleting destructor'(v120);
      goto LABEL_116;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        v89,
        (unsigned int)&AudioResourceManager_SaDevice_Connected,
        v90,
        1,
        (__int64)v192);
    if ( v186 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 6) + 80LL))(*((_QWORD *)this + 6), &v186);
      v186 = 0LL;
    }
    if ( v120 )
      SaDeviceParams::`scalar deleting destructor'(v120);
    v76 = v113;
  }
  v152 = 0LL;
  v92 = *(_QWORD *)v76;
  v132 = &v152;
  v133 = 0LL;
  v134 = 1;
  v94 = (*(int (__fastcall **)(struct ISaDeviceProxy *, struct SaDeviceParams **))(v92 + 104))(v76, &v133) >= 0;
  if ( v134 )
  {
    v93 = *v132;
    *v132 = v133;
    if ( v93 )
      SaDeviceParams::`scalar deleting destructor'(v93);
  }
  if ( v94 )
  {
    v95 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                      (__int64)v93,
                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *v95 > 4u )
    {
      v149 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v131 + 168LL))(v131);
      v148 = v142;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        (__int64)v95,
        byte_1801901A7,
        v96,
        v97,
        (__int64)&v148,
        &v143,
        &v149);
    }
  }
  if ( v152 )
    SaDeviceParams::`scalar deleting destructor'(v152);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v113);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v111);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v64);
  v98 = v112;
  if ( v112 )
  {
    StreamGroupParams::~StreamGroupParams(v112);
    operator delete(v98);
  }
  v99 = (__int64 *)v110;
  if ( v110 )
  {
    v100 = (void *)*((_QWORD *)v110 + 1);
    if ( v100 )
      operator delete(v100);
    wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>(v99);
    operator delete(v99);
  }
  v101 = pv;
  pv = 0LL;
  if ( v101 )
    CoTaskMemFree(v101);
  v102 = v108;
  v108 = 0LL;
  if ( v102 )
    CoTaskMemFree(v102);
  v103 = v109;
  v109 = 0LL;
  if ( v103 )
    CoTaskMemFree(v103);
  v104 = v107;
  v107 = 0LL;
  if ( v104 )
    CoTaskMemFree(v104);
  if ( v130 )
    std::_Ref_count_base::_Decref(v130);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v129);
  return 0LL;
}
