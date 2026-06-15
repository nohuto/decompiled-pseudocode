/*
 * XREFs of AudioServerGetSharedModeEnginePeriod @ 0x180122990
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18000CB5C (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000E360 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18003E474 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x1800450A8 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080EE0 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800D15A0 (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180114848 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x180120564 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 *     AudioServerIsFormatSupported @ 0x180123830 (AudioServerIsFormatSupported.c)
 */

__int64 __fastcall AudioServerGetSharedModeEnginePeriod(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct tWAVEFORMATEX *a4,
        int a5,
        int *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  IID v9; // xmm0
  __int64 pftDueTime; // rbx
  unsigned int v15; // edi
  __int64 v16; // rcx
  __int64 *v17; // rax
  int v18; // eax
  int IsFormatSupported; // ebx
  void *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v23; // ebx
  int v24; // eax
  struct _GUID v25; // xmm6
  unsigned __int32 v26; // edx
  void *v27; // rcx
  unsigned __int64 v28; // r9
  __int64 v29; // rdx
  int *v30; // r12
  int *v31; // r15
  int *v32; // rdi
  unsigned int v33; // edx
  int SharedModeEnginePeriodicity; // eax
  void *v36; // r9
  int nSamplesPerSec; // r8d
  int v38; // edx
  __int64 v39; // r9
  __int64 v40; // r9
  __int64 v41; // r9
  void *v42; // rcx
  int v43; // [rsp+38h] [rbp-D0h]
  LPVOID v44; // [rsp+88h] [rbp-80h] BYREF
  LPVOID pv; // [rsp+90h] [rbp-78h] BYREF
  struct _GUID v46; // [rsp+98h] [rbp-70h] BYREF
  char v47; // [rsp+A8h] [rbp-60h]
  int v48[4]; // [rsp+B8h] [rbp-50h] BYREF
  std::_Ref_count_base *v49; // [rsp+C8h] [rbp-40h]
  LPVOID *p_pv; // [rsp+D0h] [rbp-38h]
  struct tWAVEFORMATEX *v51; // [rsp+D8h] [rbp-30h] BYREF
  char v52; // [rsp+E0h] [rbp-28h]
  int *v53; // [rsp+E8h] [rbp-20h]
  int *v54; // [rsp+F0h] [rbp-18h]
  int *v55; // [rsp+F8h] [rbp-10h]
  struct _GUID v56; // [rsp+108h] [rbp+0h] BYREF
  struct _GUID v57; // [rsp+118h] [rbp+10h] BYREF
  struct _TP_TIMER *v58[7]; // [rsp+128h] [rbp+20h] BYREF
  IID v59; // [rsp+160h] [rbp+58h] BYREF
  IID v60; // [rsp+170h] [rbp+68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v9 = *(IID *)a3;
  v55 = (int *)a7;
  v54 = (int *)a8;
  v53 = (int *)a9;
  v59 = v9;
  v60 = v9;
  EtwEventActivityIdControl(4LL, &v60);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v15 = g_AudioSrvWatchDogTimerInMs;
  v17 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v16,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    v58,
    (struct _TP_TIMER *)v17[1],
    v15,
    (struct _TP_TIMER *)L"AudioServerGetSharedModeEnginePeriod",
    pftDueTime);
  v18 = ValidateVadServerSettings((IID *)a3);
  IsFormatSupported = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFD4,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v18);
LABEL_23:
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v58);
    TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)&v59);
    return (unsigned int)IsFormatSupported;
  }
  v44 = 0LL;
  *(_QWORD *)&v46.Data1 = &v44;
  *(_QWORD *)v46.Data4 = 0LL;
  v47 = 1;
  IsFormatSupported = AudioServerIsFormatSupported(a1, a2, 0LL, a3, a4, v46.Data4);
  if ( v47 )
  {
    v20 = **(void ***)&v46.Data1;
    **(_QWORD **)&v46.Data1 = *(_QWORD *)v46.Data4;
    if ( v20 )
      CoTaskMemFree(v20);
  }
  if ( IsFormatSupported < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFD8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)IsFormatSupported);
LABEL_22:
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v44);
    goto LABEL_23;
  }
  *(_OWORD *)v48 = 0LL;
  v49 = 0LL;
  v21 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                         + 40LL))(
          g_pEndpointCharacteristicsCache,
          a2,
          0LL,
          0LL,
          v48);
  IsFormatSupported = v21;
  if ( v21 < 0 )
  {
    v22 = 4059LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v21);
LABEL_21:
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v48);
    goto LABEL_22;
  }
  v23 = *(_DWORD *)(a3 + 52);
  v24 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v48 + 56LL))(*(_QWORD *)v48);
  v21 = DeriveAudioProcessingModeConfiguration(
          *(_DWORD *)(a3 + 48),
          *(_DWORD *)(a3 + 56),
          *(_DWORD *)(a3 + 128),
          (CEndpointCharacteristics **)v48,
          v24 == 1,
          0,
          v23,
          0LL,
          0,
          0,
          0LL,
          &v56,
          &v57,
          &v46,
          0LL,
          0LL);
  IsFormatSupported = v21;
  if ( v21 < 0 )
  {
    v22 = 4081LL;
    goto LABEL_10;
  }
  v25 = v56;
  v26 = *(_DWORD *)(a3 + 52);
  p_pv = &pv;
  v43 = *(_DWORD *)(a3 + 68);
  pv = 0LL;
  v51 = 0LL;
  v52 = 1;
  IsFormatSupported = DeriveConnectorFormatFromStreamFormat((EffectPack **)v48, v26, a4, &v46, &v57, &v56, v43, &v51);
  if ( v52 )
  {
    v27 = *p_pv;
    *p_pv = v51;
    if ( v27 )
      CoTaskMemFree(v27);
  }
  if ( IsFormatSupported < 0 )
  {
    v28 = (unsigned int)IsFormatSupported;
    v29 = 4091LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v28);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
    goto LABEL_21;
  }
  v30 = v53;
  v31 = v54;
  v32 = v55;
  v33 = *(_DWORD *)(a3 + 52);
  v46 = v25;
  SharedModeEnginePeriodicity = EffectPack::GetSharedModeEnginePeriodicity(
                                  *(__int64 *)&v48[2],
                                  v33,
                                  (__int64)pv,
                                  (__int128 *)&v46,
                                  a5 != 0,
                                  (__int64)a6,
                                  (__int64)v55,
                                  (__int64)v54,
                                  (__int64)v53);
  IsFormatSupported = SharedModeEnginePeriodicity;
  if ( SharedModeEnginePeriodicity < 0 )
  {
    v28 = (unsigned int)SharedModeEnginePeriodicity;
    v29 = 4093LL;
    goto LABEL_20;
  }
  v36 = pv;
  nSamplesPerSec = a4->nSamplesPerSec;
  v38 = *((_DWORD *)pv + 1);
  if ( nSamplesPerSec != v38 )
  {
    *a6 = TranslateFrameCountBetweenSamplingRates(*a6, v38, nSamplesPerSec);
    *v32 = TranslateFrameCountBetweenSamplingRates(*v32, *(_DWORD *)(v39 + 4), a4->nSamplesPerSec);
    *v31 = TranslateFrameCountBetweenSamplingRates(*v31, *(_DWORD *)(v40 + 4), a4->nSamplesPerSec);
    *v30 = TranslateFrameCountBetweenSamplingRates(*v30, *(_DWORD *)(v41 + 4), a4->nSamplesPerSec);
  }
  pv = 0LL;
  if ( v36 )
    CoTaskMemFree(v36);
  if ( v49 )
    std::_Ref_count_base::_Decref(v49);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v48);
  v42 = v44;
  v44 = 0LL;
  if ( v42 )
    CoTaskMemFree(v42);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v58);
  EtwEventActivityIdControl(4LL, &v60);
  return 0LL;
}
