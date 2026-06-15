/*
 * XREFs of ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSystemAudioStream@@@Z @ 0x1800FEAD8
 * Callers:
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800FE824 (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV-$ComPtr@UIStreamGr.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x1800021E0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
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
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HHAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x18002BA30 (-DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002C050 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180030430 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x180033030 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     wil::details::lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___::_lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___ @ 0x180065540 (wil--details--lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___--_lambda_call__lambda_bebb.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800CB9A0 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1800FDC44 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$_tlgWrapperByR.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@5@Z @ 0x1800FDD1C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$__ea_1800FDD1C.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x1800FDF70 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x1800FE500 (--1-$unique_ptr@UStreamGroupParams@@U-$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ.c)
 *     ?DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ @ 0x18014783C (-DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     ?HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180149FA8 (-HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=23
__int64 __fastcall CAudioResourceManager::CreateInternalLoopbackStream(
        CAudioResourceManager *this,
        const unsigned __int16 *a2,
        CAudioResourceManager *a3,
        struct IStreamGroupProxy *a4,
        struct SystemAudioStream *a5)
{
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v10; // r13d
  struct _GUID v11; // xmm6
  struct _GUID v12; // xmm7
  void *v13; // rdx
  void *v14; // rdx
  struct tWAVEFORMATEX *v15; // rdx
  struct tWAVEFORMATEX *v16; // rdx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  unsigned __int16 *v19; // rbx
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  char *v26; // rbx
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // r9
  struct tWAVEFORMATEX *v33; // rbx
  __int64 v34; // rcx
  unsigned int wFormatTag; // eax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // r9
  struct tWAVEFORMATEX *v40; // rbx
  __int64 v41; // rcx
  unsigned int v42; // eax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r8
  __int64 v46; // r9
  int SharedModeEnginePeriodicity; // eax
  double v48; // xmm1_8
  __int64 v49; // rdi
  void *v50; // rdx
  int v51; // eax
  RTL_SRWLOCK *v52; // rcx
  __int64 v53; // r8
  int EndpointStore; // eax
  struct CEndpointStore *v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rsi
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rbx
  __int64 (__fastcall *v63)(__int64, struct ISaDeviceProxy **); // r14
  int v64; // eax
  struct ISaDeviceProxy *v65; // rcx
  __int64 v66; // rax
  SaDeviceParams *v67; // rdx
  __int64 v68; // r9
  __int64 v69; // rdx
  CAudioResourceManager *v70; // rsi
  __int64 *v71; // rcx
  __int64 v72; // rax
  int v73; // eax
  unsigned int v74; // edx
  int SaDeviceForSharedStream; // eax
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  unsigned int v81; // edx
  __int64 v82; // rax
  unsigned int v83; // edx
  SaDeviceParams *v84; // rcx
  bool v85; // bl
  _DWORD *v86; // rbx
  __int64 v87; // r8
  __int64 v88; // r9
  struct _GUID *v90; // [rsp+28h] [rbp-130h]
  CEndpointCharacteristics *v91; // [rsp+D8h] [rbp-80h] BYREF
  int v92; // [rsp+E0h] [rbp-78h] BYREF
  int v93; // [rsp+E4h] [rbp-74h] BYREF
  int v94; // [rsp+E8h] [rbp-70h] BYREF
  int v95; // [rsp+ECh] [rbp-6Ch] BYREF
  struct ISaDeviceProxy *v96; // [rsp+F0h] [rbp-68h] BYREF
  unsigned __int16 *v97; // [rsp+F8h] [rbp-60h] BYREF
  struct tWAVEFORMATEX *v98; // [rsp+100h] [rbp-58h] BYREF
  int v99; // [rsp+108h] [rbp-50h] BYREF
  int v100; // [rsp+10Ch] [rbp-4Ch] BYREF
  int v101; // [rsp+110h] [rbp-48h] BYREF
  int v102; // [rsp+114h] [rbp-44h] BYREF
  DWORD nAvgBytesPerSec; // [rsp+118h] [rbp-40h] BYREF
  DWORD nSamplesPerSec; // [rsp+11Ch] [rbp-3Ch] BYREF
  __int64 v105; // [rsp+120h] [rbp-38h] BYREF
  DWORD v106; // [rsp+128h] [rbp-30h] BYREF
  DWORD v107; // [rsp+12Ch] [rbp-2Ch] BYREF
  struct tWAVEFORMATEX *v108; // [rsp+130h] [rbp-28h] BYREF
  void *Src; // [rsp+138h] [rbp-20h] BYREF
  int v110[2]; // [rsp+140h] [rbp-18h] BYREF
  struct SaDeviceParams *v111; // [rsp+148h] [rbp-10h] BYREF
  struct CEndpointStore *v112; // [rsp+150h] [rbp-8h] BYREF
  struct SaDeviceParams **v113; // [rsp+158h] [rbp+0h]
  struct SaDeviceParams *v114; // [rsp+160h] [rbp+8h] BYREF
  char v115; // [rsp+168h] [rbp+10h]
  int v116; // [rsp+170h] [rbp+18h] BYREF
  GUID *v117; // [rsp+178h] [rbp+20h] BYREF
  GUID *v118; // [rsp+180h] [rbp+28h] BYREF
  GUID *v119; // [rsp+188h] [rbp+30h] BYREF
  __int64 v120; // [rsp+190h] [rbp+38h] BYREF
  const wchar_t *v121; // [rsp+198h] [rbp+40h] BYREF
  CAudioResourceManager *v122; // [rsp+1A0h] [rbp+48h] BYREF
  const wchar_t *v123; // [rsp+1A8h] [rbp+50h] BYREF
  const wchar_t *v124; // [rsp+1B0h] [rbp+58h] BYREF
  GUID *v125; // [rsp+1B8h] [rbp+60h] BYREF
  __int64 v126; // [rsp+1C0h] [rbp+68h] BYREF
  void *v127; // [rsp+1C8h] [rbp+70h] BYREF
  const wchar_t *v128; // [rsp+1D0h] [rbp+78h] BYREF
  struct _GUID v129; // [rsp+1D8h] [rbp+80h] BYREF
  char v130; // [rsp+1E8h] [rbp+90h]
  _BYTE v131[8]; // [rsp+1F0h] [rbp+98h] BYREF
  int v132[2]; // [rsp+1F8h] [rbp+A0h]
  GUID v133; // [rsp+208h] [rbp+B0h] BYREF
  SaDeviceParams *v134; // [rsp+218h] [rbp+C0h] BYREF
  void **v135; // [rsp+220h] [rbp+C8h]
  struct tWAVEFORMATEX *v136; // [rsp+228h] [rbp+D0h] BYREF
  char v137; // [rsp+230h] [rbp+D8h]
  struct tWAVEFORMATEX **v138; // [rsp+238h] [rbp+E0h]
  struct tWAVEFORMATEX *v139; // [rsp+240h] [rbp+E8h] BYREF
  char v140; // [rsp+248h] [rbp+F0h]
  struct tWAVEFORMATEX **v141; // [rsp+250h] [rbp+F8h]
  struct tWAVEFORMATEX *v142; // [rsp+258h] [rbp+100h] BYREF
  char v143; // [rsp+260h] [rbp+108h]
  void **p_Src; // [rsp+268h] [rbp+110h]
  struct tWAVEFORMATEX *v145; // [rsp+270h] [rbp+118h] BYREF
  char v146; // [rsp+278h] [rbp+120h]
  CAudioResourceManager *v147; // [rsp+280h] [rbp+128h]
  GUID v148; // [rsp+288h] [rbp+130h] BYREF
  struct _GUID v149; // [rsp+298h] [rbp+140h] BYREF
  GUID v150; // [rsp+2A8h] [rbp+150h] BYREF
  GUID v151; // [rsp+2B8h] [rbp+160h] BYREF
  GUID v152; // [rsp+2C8h] [rbp+170h] BYREF
  struct _GUID v153; // [rsp+2D8h] [rbp+180h] BYREF
  struct _GUID v154; // [rsp+2E8h] [rbp+190h] BYREF
  struct _GUID v155; // [rsp+2F8h] [rbp+1A0h] BYREF
  struct _GUID v156; // [rsp+308h] [rbp+1B0h] BYREF
  __int64 v157[2]; // [rsp+318h] [rbp+1C0h] BYREF
  struct _GUID v158; // [rsp+328h] [rbp+1D0h] BYREF
  GUID v159; // [rsp+338h] [rbp+1E0h] BYREF
  struct _GUID v160; // [rsp+348h] [rbp+1F0h] BYREF
  struct _GUID v161; // [rsp+358h] [rbp+200h] BYREF
  _DWORD v162[3]; // [rsp+368h] [rbp+210h] BYREF
  struct _GUID v163; // [rsp+374h] [rbp+21Ch]
  int v164; // [rsp+384h] [rbp+22Ch]
  __int64 v165; // [rsp+388h] [rbp+230h]
  const unsigned __int16 *v166; // [rsp+390h] [rbp+238h]
  GUID v167; // [rsp+398h] [rbp+240h] BYREF
  GUID v168; // [rsp+3A8h] [rbp+250h] BYREF
  GUID v169; // [rsp+3B8h] [rbp+260h] BYREF
  GUID v170; // [rsp+3C8h] [rbp+270h] BYREF
  __int64 v171; // [rsp+3D8h] [rbp+280h] BYREF
  int v172; // [rsp+3E0h] [rbp+288h]
  int v173[4]; // [rsp+3E8h] [rbp+290h] BYREF
  int v174[4]; // [rsp+3F8h] [rbp+2A0h] BYREF
  _BYTE v175[32]; // [rsp+408h] [rbp+2B0h] BYREF
  int *v176; // [rsp+428h] [rbp+2D0h]
  __int64 v177; // [rsp+430h] [rbp+2D8h]
  _BYTE v178[32]; // [rsp+438h] [rbp+2E0h] BYREF
  int *v179; // [rsp+458h] [rbp+300h]
  __int64 v180; // [rsp+460h] [rbp+308h]
  _BYTE v181[32]; // [rsp+468h] [rbp+310h] BYREF
  int *v182; // [rsp+488h] [rbp+330h]
  __int64 v183; // [rsp+490h] [rbp+338h]
  _BYTE v184[32]; // [rsp+498h] [rbp+340h] BYREF
  int *v185; // [rsp+4B8h] [rbp+360h]
  __int64 v186; // [rsp+4C0h] [rbp+368h]
  wil::details::in1diag3 *retaddr; // [rsp+530h] [rbp+3D8h]

  v126 = (__int64)a4;
  v147 = a3;
  v127 = (void *)a2;
  v122 = this;
  *(_QWORD *)v132 = a5;
  v91 = 0LL;
  v7 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         &v91);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = (unsigned int)CEndpointCharacteristics::HardwareLoopbackEnabled(v91) != 0
        ? eLoopbackConnector
        : eHostProcessConnector;
    v148 = GUID_00000000_0000_0000_0000_000000000000;
    v151 = GUID_00000000_0000_0000_0000_000000000000;
    v152 = GUID_00000000_0000_0000_0000_000000000000;
    v133 = GUID_00000000_0000_0000_0000_000000000000;
    v150 = GUID_00000000_0000_0000_0000_000000000000;
    v7 = DeriveAudioProcessingModeConfiguration(
           0,
           0,
           0,
           (__int64)v91,
           2,
           0,
           v10,
           0LL,
           0,
           0,
           0LL,
           &v148,
           &v151,
           &v152,
           &v133,
           (struct ISaDeviceResourceManager *)&v150);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 2881LL;
      goto LABEL_5;
    }
    v97 = 0LL;
    Src = 0LL;
    v108 = 0LL;
    v98 = 0LL;
    v141 = &v98;
    v142 = 0LL;
    v143 = 1;
    v138 = &v108;
    v139 = 0LL;
    v140 = 1;
    p_Src = &Src;
    v145 = 0LL;
    v146 = 1;
    v135 = (void **)&v97;
    v136 = 0LL;
    v137 = 1;
    v11 = v148;
    v160 = v148;
    v12 = v151;
    v161 = v151;
    v153 = v152;
    v8 = DeriveDeviceGraphFormatsForStream(
           (struct _RTL_CRITICAL_SECTION *)v91,
           0,
           v10,
           AUDCLNT_SHAREMODE_SHARED,
           0,
           &v153,
           &v161,
           &v160,
           0LL,
           &v136,
           &v145,
           &v139,
           &v142);
    if ( v137 )
    {
      v13 = *v135;
      *v135 = v136;
      if ( v13 )
        CoTaskMemFree(v13);
    }
    if ( v146 )
    {
      v14 = *p_Src;
      *p_Src = v145;
      if ( v14 )
        CoTaskMemFree(v14);
    }
    if ( v140 )
    {
      v15 = *v138;
      *v138 = v139;
      if ( v15 )
        CoTaskMemFree(v15);
    }
    if ( v143 )
    {
      v16 = *v141;
      *v141 = v142;
      if ( v16 )
        CoTaskMemFree(v16);
    }
    if ( v8 < 0 )
    {
      v17 = (unsigned int)v8;
      v18 = 2897LL;
LABEL_78:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v17);
LABEL_137:
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&v98);
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&v108);
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&Src);
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&v97);
      goto LABEL_138;
    }
    v19 = v97;
    if ( v97 )
    {
      v21 = *v97;
      if ( (_WORD)v21 == 0xFFFE )
      {
        v24 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                65534LL,
                _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v24 > 4u
          && (*(_DWORD *)(v24 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v24 + 24) & 0x200LL) == *(_QWORD *)(v24 + 24) )
        {
          v100 = *((_DWORD *)v19 + 5);
          v121 = v19 + 12;
          v99 = *((_DWORD *)v97 + 2);
          LODWORD(v118) = *((_DWORD *)v97 + 1);
          LOWORD(v92) = v97[1];
          *(_QWORD *)&v170.Data1 = L"WAVEFORMATEXTENSIBLE";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
            v24,
            byte_18018A38A,
            v24,
            v25,
            (void **)&v170,
            (__int64)&v92,
            (__int64)&v118,
            (__int64)&v99,
            (__int64 *)&v121,
            (__int64)&v100);
        }
      }
      else
      {
        v170 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v170.Data1 = v21;
        v22 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                65534LL,
                _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v22 > 4u
          && (*(_DWORD *)(v22 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v22 + 24) & 0x200LL) == *(_QWORD *)(v22 + 24) )
        {
          v118 = &v170;
          v99 = *((_DWORD *)v97 + 2);
          v100 = *((_DWORD *)v97 + 1);
          LOWORD(v92) = v97[1];
          v121 = L"WAVEFORMATEX";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v22,
            byte_18018A42E,
            v22,
            v23,
            (void **)&v121,
            (__int64)&v92,
            (__int64)&v100,
            (__int64)&v99,
            (__int64 *)&v118);
        }
      }
    }
    else
    {
      v20 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              65534LL,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v20 > 4u
        && (*(_DWORD *)(v20 + 16) & 0x200LL) != 0
        && (*(_QWORD *)(v20 + 24) & 0x200LL) == *(_QWORD *)(v20 + 24) )
      {
        v92 = 0;
        v176 = &v92;
        v177 = 4LL;
        tlgWriteTransfer_EtwEventWriteTransfer(v20, byte_18018A4C5, 0LL, 0LL, 3, (__int64)v175);
      }
    }
    v26 = (char *)Src;
    if ( Src )
    {
      v28 = *(unsigned __int16 *)Src;
      if ( (_WORD)v28 == 0xFFFE )
      {
        v31 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                65534LL,
                _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v31 > 4u
          && (*(_DWORD *)(v31 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v31 + 24) & 0x200LL) == *(_QWORD *)(v31 + 24) )
        {
          v102 = *((_DWORD *)v26 + 5);
          v123 = (const wchar_t *)(v26 + 24);
          v101 = *((_DWORD *)Src + 2);
          LODWORD(v117) = *((_DWORD *)Src + 1);
          LOWORD(v93) = *((_WORD *)Src + 1);
          *(_QWORD *)&v167.Data1 = L"WAVEFORMATEXTENSIBLE";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
            v31,
            byte_18018A1E8,
            v31,
            v32,
            (void **)&v167,
            (__int64)&v93,
            (__int64)&v117,
            (__int64)&v101,
            (__int64 *)&v123,
            (__int64)&v102);
        }
      }
      else
      {
        v167 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v167.Data1 = v28;
        v29 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                65534LL,
                _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v29 > 4u
          && (*(_DWORD *)(v29 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v29 + 24) & 0x200LL) == *(_QWORD *)(v29 + 24) )
        {
          v117 = &v167;
          v101 = *((_DWORD *)Src + 2);
          v102 = *((_DWORD *)Src + 1);
          LOWORD(v93) = *((_WORD *)Src + 1);
          v123 = L"WAVEFORMATEX";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v29,
            byte_18018A28F,
            v29,
            v30,
            (void **)&v123,
            (__int64)&v93,
            (__int64)&v102,
            (__int64)&v101,
            (__int64 *)&v117);
        }
      }
    }
    else
    {
      v27 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v20,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v27 > 4u
        && (*(_DWORD *)(v27 + 16) & 0x200LL) != 0
        && (*(_QWORD *)(v27 + 24) & 0x200LL) == *(_QWORD *)(v27 + 24) )
      {
        v93 = 0;
        v179 = &v93;
        v180 = 4LL;
        tlgWriteTransfer_EtwEventWriteTransfer(v27, byte_18018A329, 0LL, 0LL, 3, (__int64)v178);
      }
    }
    v33 = v108;
    if ( v108 )
    {
      wFormatTag = v108->wFormatTag;
      if ( (_WORD)wFormatTag == 0xFFFE )
      {
        v38 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                65534LL,
                _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v38 > 4u
          && (*(_DWORD *)(v38 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v38 + 24) & 0x200LL) == *(_QWORD *)(v38 + 24) )
        {
          nSamplesPerSec = *(_DWORD *)&v33[1].nChannels;
          v128 = (const wchar_t *)&v33[1].nSamplesPerSec + 1;
          nAvgBytesPerSec = v108->nAvgBytesPerSec;
          LODWORD(v119) = v108->nSamplesPerSec;
          LOWORD(v94) = v108->nChannels;
          *(_QWORD *)&v168.Data1 = L"WAVEFORMATEXTENSIBLE";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
            v38,
            byte_18018A049,
            v38,
            v39,
            (void **)&v168,
            (__int64)&v94,
            (__int64)&v119,
            (__int64)&nAvgBytesPerSec,
            (__int64 *)&v128,
            (__int64)&nSamplesPerSec);
        }
      }
      else
      {
        v168 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v168.Data1 = wFormatTag;
        v36 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                65534LL,
                _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v36 > 4u
          && (*(_DWORD *)(v36 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v36 + 24) & 0x200LL) == *(_QWORD *)(v36 + 24) )
        {
          v119 = &v168;
          nAvgBytesPerSec = v108->nAvgBytesPerSec;
          nSamplesPerSec = v108->nSamplesPerSec;
          LOWORD(v94) = v108->nChannels;
          v128 = L"WAVEFORMATEX";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v36,
            byte_18018A0EF,
            v36,
            v37,
            (void **)&v128,
            (__int64)&v94,
            (__int64)&nSamplesPerSec,
            (__int64)&nAvgBytesPerSec,
            (__int64 *)&v119);
        }
      }
    }
    else
    {
      v34 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v27,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v34 > 4u
        && (*(_DWORD *)(v34 + 16) & 0x200LL) != 0
        && (*(_QWORD *)(v34 + 24) & 0x200LL) == *(_QWORD *)(v34 + 24) )
      {
        v94 = 0;
        v182 = &v94;
        v183 = 4LL;
        tlgWriteTransfer_EtwEventWriteTransfer(v34, byte_18018A188, 0LL, 0LL, 3, (__int64)v181);
      }
    }
    v40 = v98;
    if ( v98 )
    {
      v42 = v98->wFormatTag;
      if ( (_WORD)v42 == 0xFFFE )
      {
        v45 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                65534LL,
                _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v45 > 4u
          && (*(_DWORD *)(v45 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v45 + 24) & 0x200LL) == *(_QWORD *)(v45 + 24) )
        {
          v107 = *(_DWORD *)&v40[1].nChannels;
          v124 = (const wchar_t *)&v40[1].nSamplesPerSec + 1;
          v106 = v98->nAvgBytesPerSec;
          LODWORD(v125) = v98->nSamplesPerSec;
          LOWORD(v95) = v98->nChannels;
          *(_QWORD *)&v169.Data1 = L"WAVEFORMATEXTENSIBLE";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
            v45,
            byte_180189EAD,
            v45,
            v46,
            (void **)&v169,
            (__int64)&v95,
            (__int64)&v125,
            (__int64)&v106,
            (__int64 *)&v124,
            (__int64)&v107);
        }
      }
      else
      {
        v169 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v169.Data1 = v42;
        v43 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                65534LL,
                _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v43 > 4u
          && (*(_DWORD *)(v43 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v43 + 24) & 0x200LL) == *(_QWORD *)(v43 + 24) )
        {
          v125 = &v169;
          v106 = v98->nAvgBytesPerSec;
          v107 = v98->nSamplesPerSec;
          LOWORD(v95) = v98->nChannels;
          v124 = L"WAVEFORMATEX";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v43,
            byte_180189F52,
            v43,
            v44,
            (void **)&v124,
            (__int64)&v95,
            (__int64)&v107,
            (__int64)&v106,
            (__int64 *)&v125);
        }
      }
    }
    else
    {
      v41 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v34,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v41 > 4u
        && (*(_DWORD *)(v41 + 16) & 0x200LL) != 0
        && (*(_QWORD *)(v41 + 24) & 0x200LL) == *(_QWORD *)(v41 + 24) )
      {
        v95 = 0;
        v185 = &v95;
        v186 = 4LL;
        tlgWriteTransfer_EtwEventWriteTransfer(v41, byte_180189FEA, 0LL, 0LL, 3, (__int64)v184);
      }
    }
    v154 = v11;
    SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                    (__int64)v91,
                                    v10,
                                    v98,
                                    (__int128 *)&v154,
                                    0,
                                    &v116,
                                    0LL,
                                    0LL,
                                    0LL);
    v8 = SharedModeEnginePeriodicity;
    if ( SharedModeEnginePeriodicity < 0 )
    {
      v17 = (unsigned int)SharedModeEnginePeriodicity;
      v18 = 2907LL;
      goto LABEL_78;
    }
    v48 = (double)v116 * 10000000.0 / (double)(int)v98->nSamplesPerSec + 0.5;
    v49 = (unsigned int)(int)v48;
    *(_QWORD *)v110 = 0LL;
    v129 = (struct _GUID)(unsigned __int64)v110;
    v130 = 1;
    v159 = v150;
    v155 = v12;
    v156 = v11;
    v8 = InitializeStreamAndModeDescriptors(
           (SIZE_T)v91,
           0,
           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)131074,
           2u,
           v10,
           (struct _RTL_CRITICAL_SECTION *)&v156,
           &v155,
           &v159,
           0,
           0LL,
           (__int64)v97,
           0LL,
           v49,
           0LL,
           0LL,
           0LL,
           0LL,
           0LL,
           0LL,
           0,
           0,
           0,
           0LL,
           0LL,
           0LL,
           (__int64)v129.Data4);
    if ( v130 )
    {
      v50 = **(void ***)&v129.Data1;
      **(_QWORD **)&v129.Data1 = *(_QWORD *)v129.Data4;
      if ( v50 )
        CoTaskMemFree(v50);
    }
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB64,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_136:
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)v110);
      goto LABEL_137;
    }
    v164 = 0;
    v165 = (unsigned int)(int)v48;
    v162[0] = 2;
    v163 = v12;
    v162[2] = v10;
    v166 = a2;
    v162[1] = 1;
    if ( *(_QWORD *)v110 )
    {
      *(_DWORD *)(*(_QWORD *)v110 + 8LL) = v97[8] + 18;
      *(_QWORD *)(*(_QWORD *)v110 + 16LL) = v97;
      v49 = v165;
    }
    v120 = 0LL;
    *(GUID *)v157 = v133;
    v51 = DeriveStreamGroupParametersForStream(
            (__int64)v91,
            v10,
            2,
            v49,
            v90,
            (__int128 *)v157,
            0,
            0,
            (unsigned __int16 *)Src,
            0,
            0,
            (StreamGroupParams **)&v120);
    v8 = v51;
    if ( v51 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB78,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v51);
LABEL_135:
      std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>((StreamGroupParams **)&v120);
      goto LABEL_136;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        (__int64)v52,
        (__int64)&AudioResourceManager_StreamSettings_Derived,
        v53,
        1,
        (__int64)v173);
    v112 = 0LL;
    EndpointStore = CEndpointStoreCache::GetEndpointStore(v52, a2, &v112);
    v8 = EndpointStore;
    if ( EndpointStore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB7D,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)EndpointStore);
LABEL_134:
      wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((__int64 *)&v112);
      goto LABEL_135;
    }
    v55 = v112;
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)v112 + 13) + 120LL))(*((_QWORD *)v112 + 13), v131);
    v105 = 0LL;
    v56 = *(_QWORD *)g_DeviceGraphManager;
    v105 = 0LL;
    v57 = v120;
    v58 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, __int64, _QWORD, _QWORD, __int64 *))(v56 + 48))(
            g_DeviceGraphManager,
            *((_QWORD *)v55 + 13),
            v120,
            0LL,
            *(_QWORD *)v110,
            &v105);
    v8 = v58;
    if ( v58 < 0 )
    {
      v59 = 2949LL;
LABEL_96:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v59,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v58);
LABEL_123:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v105);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((__int64)v131);
      goto LABEL_134;
    }
    v58 = (*(__int64 (__fastcall **)(__int64, _DWORD *, struct IStreamGroupProxy *, _QWORD))(*(_QWORD *)v105 + 240LL))(
            v105,
            v162,
            a4,
            *(_QWORD *)v132);
    v8 = v58;
    if ( v58 < 0 )
    {
      v59 = 2952LL;
      goto LABEL_96;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(v60, (__int64)&AudioResourceManager_Stream_Created, v61, 1, (__int64)v174);
    v96 = 0LL;
    v62 = v105;
    v63 = *(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v105 + 192LL);
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v96);
    v64 = v63(v62, &v96);
    v8 = v64;
    if ( v64 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB8E,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v64);
LABEL_122:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v96);
      goto LABEL_123;
    }
    v65 = v96;
    if ( !v96 )
    {
      v111 = 0LL;
      v113 = &v111;
      v114 = 0LL;
      v115 = 1;
      v66 = *(_QWORD *)(v57 + 24);
      v158 = v12;
      v149 = v11;
      v8 = DeriveSaDeviceParametersForStream(v91, AUDCLNT_SHAREMODE_SHARED, v10, &v149, &v158, v98, v108, v66, &v114);
      if ( v115 )
      {
        v67 = *v113;
        *v113 = v114;
        if ( v67 )
          SaDeviceParams::`scalar deleting destructor'(v67);
      }
      if ( v8 < 0 )
      {
        v68 = (unsigned int)v8;
        v69 = 2966LL;
LABEL_113:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v69,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)v68);
LABEL_121:
        std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v111, v74);
        goto LABEL_122;
      }
      if ( CEndpointCharacteristics::DoesExclusiveModeOverrideShared(v91) )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)v55 + 12) + 276LL), 0, 0) )
        {
          v8 = -2005139364;
          v68 = 2289827932LL;
          v69 = 2975LL;
          goto LABEL_113;
        }
        v11 = v148;
        v55 = v112;
      }
      v172 = 0;
      v171 = 0LL;
      v70 = v122;
      v71 = (__int64 *)*((_QWORD *)v122 + 6);
      v72 = *v71;
      v149 = v11;
      v73 = (*(__int64 (__fastcall **)(__int64 *, CEndpointCharacteristics *, struct _GUID *, _QWORD, _DWORD, __int64 *))(v72 + 56))(
              v71,
              v91,
              &v149,
              (unsigned int)v10,
              0,
              &v171);
      v8 = v73;
      if ( v73 < 0 )
      {
        v68 = (unsigned int)v73;
        v69 = 2982LL;
        goto LABEL_113;
      }
      *(_QWORD *)&v133.Data1 = &v171;
      *(_QWORD *)v133.Data4 = v70;
      v129 = v133;
      v130 = 1;
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v96);
      SaDeviceForSharedStream = CAudioResourceManager::GetSaDeviceForSharedStream(
                                  v70,
                                  (const unsigned __int16 **)v91,
                                  0LL,
                                  v111,
                                  0x20002u,
                                  AUDCLNT_SHAREMODE_SHARED,
                                  (struct SaDeviceResourceParams *)&v171,
                                  0,
                                  *((struct CAudioSessionManager **)v55 + 12),
                                  0,
                                  0,
                                  &v96);
      v8 = SaDeviceForSharedStream;
      if ( SaDeviceForSharedStream < 0 )
      {
        v78 = 3003LL;
LABEL_120:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v78,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)SaDeviceForSharedStream);
        wil::details::lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___::_lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___((__int64)&v129);
        goto LABEL_121;
      }
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          v76,
          (__int64)&AudioResourceManager_SaDevice_Created,
          v77,
          1,
          (__int64)v174);
      SaDeviceForSharedStream = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, struct ISaDeviceProxy *, __int64, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
                                  g_DeviceGraphManager,
                                  v105,
                                  v96,
                                  1LL,
                                  *(_QWORD *)v132);
      v8 = SaDeviceForSharedStream;
      if ( SaDeviceForSharedStream < 0 )
      {
        v78 = 3015LL;
        goto LABEL_120;
      }
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          v79,
          (__int64)&AudioResourceManager_SaDevice_Connected,
          v80,
          1,
          (__int64)v173);
      wil::details::lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___::_lambda_call__lambda_bebb7edd520906af257d1d4dfd3425b0___((__int64)&v129);
      std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v111, v81);
      v65 = v96;
    }
    v134 = 0LL;
    v82 = *(_QWORD *)v65;
    v113 = &v134;
    v114 = 0LL;
    v115 = 1;
    v85 = (*(int (__fastcall **)(struct ISaDeviceProxy *, struct SaDeviceParams **))(v82 + 104))(v65, &v114) >= 0;
    if ( v115 )
    {
      v84 = *v113;
      *v113 = v114;
      if ( v84 )
        SaDeviceParams::`scalar deleting destructor'(v84);
    }
    if ( v85 )
    {
      v86 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                        (__int64)v84,
                        _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *v86 > 4u )
      {
        v126 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v126 + 128LL))(v126);
        v122 = v147;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
          (__int64)v86,
          byte_180189E57,
          v87,
          v88,
          (__int64)&v122,
          &v127,
          (void **)&v126);
      }
    }
    std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v134, v83);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v96);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v105);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((__int64)v131);
    v8 = 0;
    goto LABEL_134;
  }
  v9 = 2859LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_138:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v91);
  return (unsigned int)v8;
}
