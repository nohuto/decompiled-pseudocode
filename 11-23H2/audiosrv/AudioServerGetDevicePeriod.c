/*
 * XREFs of AudioServerGetDevicePeriod @ 0x180121A80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18000CB5C (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18000E010 (-GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000E360 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180017DDC (-GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_00.c)
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
 */

__int64 __fastcall AudioServerGetDevicePeriod(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, __int64 *a6)
{
  __int64 pftDueTime; // rbx
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 *v11; // rax
  int v12; // eax
  int ConnectorFormatForProcessingMode; // ebx
  int MinProcessingPeriodForExclusiveMode; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v15; // edx
  __int64 v16; // rdx
  int v17; // eax
  struct _GUID v18; // xmm6
  void *v19; // rcx
  int SharedModeEnginePeriodicity; // eax
  void *v21; // rcx
  void *v22; // rcx
  int v23; // eax
  LPVOID pv; // [rsp+88h] [rbp-80h] BYREF
  EffectPack *v26[2]; // [rsp+90h] [rbp-78h] BYREF
  std::_Ref_count_base *v27; // [rsp+A0h] [rbp-68h]
  int v28[4]; // [rsp+A8h] [rbp-60h] BYREF
  struct _GUID v29; // [rsp+B8h] [rbp-50h] BYREF
  LPVOID *p_pv; // [rsp+C8h] [rbp-40h]
  struct tWAVEFORMATEX *v31; // [rsp+D0h] [rbp-38h] BYREF
  char v32; // [rsp+D8h] [rbp-30h]
  struct _TP_TIMER *v33[7]; // [rsp+E0h] [rbp-28h] BYREF
  IID v34; // [rsp+118h] [rbp+10h] BYREF
  IID v35; // [rsp+128h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v34 = *(IID *)a3;
  v35 = v34;
  EtwEventActivityIdControl(4LL, &v35);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  v11 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v10,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    v33,
    (struct _TP_TIMER *)v11[1],
    v9,
    (struct _TP_TIMER *)L"AudioServerGetDevicePeriod",
    pftDueTime);
  v12 = ValidateVadServerSettings((IID *)a3);
  ConnectorFormatForProcessingMode = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF8B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v12);
LABEL_23:
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v33);
    TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)&v34);
    return (unsigned int)ConnectorFormatForProcessingMode;
  }
  *(_OWORD *)v26 = 0LL;
  v27 = 0LL;
  MinProcessingPeriodForExclusiveMode = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, EffectPack **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 40LL))(
                                          g_pEndpointCharacteristicsCache,
                                          a2,
                                          0LL,
                                          0LL,
                                          v26);
  ConnectorFormatForProcessingMode = MinProcessingPeriodForExclusiveMode;
  if ( MinProcessingPeriodForExclusiveMode < 0 )
  {
    v16 = 3982LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)MinProcessingPeriodForExclusiveMode);
    goto LABEL_22;
  }
  if ( a5 )
  {
    v17 = (*(__int64 (__fastcall **)(EffectPack *))(*(_QWORD *)v26[0] + 56LL))(v26[0]);
    MinProcessingPeriodForExclusiveMode = DeriveAudioProcessingModeConfiguration(
                                            *(_DWORD *)(a3 + 48),
                                            *(_DWORD *)(a3 + 56),
                                            *(_DWORD *)(a3 + 128),
                                            v26,
                                            v17 == 1,
                                            0,
                                            eHostProcessConnector,
                                            0LL,
                                            0,
                                            0,
                                            0LL,
                                            &v29,
                                            0LL,
                                            0LL,
                                            0LL,
                                            0LL);
    ConnectorFormatForProcessingMode = MinProcessingPeriodForExclusiveMode;
    if ( MinProcessingPeriodForExclusiveMode < 0 )
    {
      v16 = 4006LL;
      goto LABEL_21;
    }
    v18 = v29;
    p_pv = &pv;
    pv = 0LL;
    v31 = 0LL;
    v32 = 1;
    ConnectorFormatForProcessingMode = EffectPack::GetConnectorFormatForProcessingMode(
                                         (CEndpointCharacteristics **)v26[1],
                                         eHostProcessConnector,
                                         &v29,
                                         &v31);
    if ( v32 )
    {
      v19 = *p_pv;
      *p_pv = v31;
      if ( v19 )
        CoTaskMemFree(v19);
    }
    if ( ConnectorFormatForProcessingMode < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFAA,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)ConnectorFormatForProcessingMode);
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
LABEL_22:
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v26);
      goto LABEL_23;
    }
    v29 = v18;
    SharedModeEnginePeriodicity = EffectPack::GetSharedModeEnginePeriodicity(
                                    (__int64)v26[1],
                                    0,
                                    (__int64)pv,
                                    (__int128 *)&v29,
                                    0,
                                    (__int64)v28,
                                    0LL,
                                    0LL,
                                    0LL);
    ConnectorFormatForProcessingMode = SharedModeEnginePeriodicity;
    if ( SharedModeEnginePeriodicity < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFAE,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)SharedModeEnginePeriodicity);
      v21 = pv;
      pv = 0LL;
      if ( v21 )
        CoTaskMemFree(v21);
      goto LABEL_22;
    }
    v22 = pv;
    v23 = *((_DWORD *)pv + 1);
    pv = 0LL;
    *a5 = (unsigned int)(int)((double)v28[0] * 10000000.0 / (double)v23 + 0.5);
    if ( v22 )
      CoTaskMemFree(v22);
  }
  if ( a6 )
  {
    MinProcessingPeriodForExclusiveMode = EffectPack::GetMinProcessingPeriodForExclusiveMode(v26[1], v15, a6);
    ConnectorFormatForProcessingMode = MinProcessingPeriodForExclusiveMode;
    if ( MinProcessingPeriodForExclusiveMode < 0 )
    {
      v16 = 4022LL;
      goto LABEL_21;
    }
  }
  if ( v27 )
    std::_Ref_count_base::_Decref(v27);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v26);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v33);
  EtwEventActivityIdControl(4LL, &v35);
  return 0LL;
}
