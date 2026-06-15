/*
 * XREFs of AudioServerGetDevicePeriod @ 0x180001D70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180002044 (-GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audio.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x1800021E0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180002318 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180011308 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x180033030 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioServerGetDevicePeriod(
        __int64 a1,
        __int64 a2,
        struct VadServerSettings *a3,
        __int64 a4,
        _QWORD *a5,
        __int64 *a6)
{
  _FILETIME v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  int ConnectorFormatForProcessingMode; // ebx
  int MinProcessingPeriodForExclusiveMode; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v13; // edx
  struct _GUID v14; // xmm6
  void *v15; // rdx
  int SharedModeEnginePeriodicity; // eax
  void *v17; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  void *v22; // rcx
  int pftDueTime; // [rsp+28h] [rbp-E0h]
  CEndpointCharacteristics **pftDueTimea; // [rsp+28h] [rbp-E0h]
  CEndpointCharacteristics *v25; // [rsp+88h] [rbp-80h] BYREF
  LPVOID pv; // [rsp+90h] [rbp-78h] BYREF
  int v27; // [rsp+98h] [rbp-70h]
  struct _GUID v28; // [rsp+A8h] [rbp-60h] BYREF
  LPVOID *p_pv; // [rsp+B8h] [rbp-50h]
  struct tWAVEFORMATEX *v30; // [rsp+C0h] [rbp-48h] BYREF
  char v31; // [rsp+C8h] [rbp-40h]
  _BYTE v32[56]; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v33; // [rsp+108h] [rbp+0h]
  __int128 v34; // [rsp+118h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v33 = *(_OWORD *)a3;
  v34 = v33;
  EtwEventActivityIdControl(4LL, &v34);
  v8 = g_AudioHealthMonitor;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    v9,
    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(v32, v8);
  v10 = ValidateVadServerSettings(a3);
  ConnectorFormatForProcessingMode = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFE2,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v10,
      pftDueTime);
    goto LABEL_16;
  }
  v25 = 0LL;
  pftDueTimea = &v25;
  MinProcessingPeriodForExclusiveMode = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                                  + 24LL))(
                                          g_pEndpointCharacteristicsCache,
                                          a2,
                                          0LL,
                                          0LL);
  ConnectorFormatForProcessingMode = MinProcessingPeriodForExclusiveMode;
  if ( MinProcessingPeriodForExclusiveMode < 0 )
  {
    v19 = 4069LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)MinProcessingPeriodForExclusiveMode,
      (int)pftDueTimea);
    goto LABEL_15;
  }
  if ( !a5 )
    goto LABEL_12;
  LODWORD(pftDueTimea) = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v25 + 56LL))(v25) == 1;
  MinProcessingPeriodForExclusiveMode = DeriveAudioProcessingModeConfiguration(
                                          *((unsigned int *)a3 + 12),
                                          *((unsigned int *)a3 + 14),
                                          *((unsigned int *)a3 + 32),
                                          v25);
  ConnectorFormatForProcessingMode = MinProcessingPeriodForExclusiveMode;
  if ( MinProcessingPeriodForExclusiveMode < 0 )
  {
    v19 = 4093LL;
    goto LABEL_25;
  }
  pv = 0LL;
  p_pv = &pv;
  v30 = 0LL;
  v31 = 1;
  v14 = v28;
  ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetConnectorFormatForProcessingMode(
                                       v25,
                                       eHostProcessConnector,
                                       &v28,
                                       &v30);
  if ( v31 )
  {
    v15 = *p_pv;
    *p_pv = v30;
    if ( v15 )
      CoTaskMemFree(v15);
  }
  if ( ConnectorFormatForProcessingMode < 0 )
  {
    v20 = (unsigned int)ConnectorFormatForProcessingMode;
    v21 = 4097LL;
    goto LABEL_22;
  }
  v28 = v14;
  LODWORD(pftDueTimea) = 0;
  SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(v25, 0LL, pv, &v28);
  ConnectorFormatForProcessingMode = SharedModeEnginePeriodicity;
  if ( SharedModeEnginePeriodicity < 0 )
  {
    v20 = (unsigned int)SharedModeEnginePeriodicity;
    v21 = 4101LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v20,
      (int)pftDueTimea);
    v22 = pv;
    pv = 0LL;
    if ( v22 )
      CoTaskMemFree(v22);
    goto LABEL_15;
  }
  v17 = pv;
  *a5 = (unsigned int)(int)((double)v27 * 10000000.0 / (double)*((int *)pv + 1) + 0.5);
  pv = 0LL;
  if ( v17 )
    CoTaskMemFree(v17);
LABEL_12:
  if ( a6 )
  {
    MinProcessingPeriodForExclusiveMode = CEndpointCharacteristics::GetMinProcessingPeriodForExclusiveMode(v25, v13, a6);
    ConnectorFormatForProcessingMode = MinProcessingPeriodForExclusiveMode;
    if ( MinProcessingPeriodForExclusiveMode < 0 )
    {
      v19 = 4109LL;
      goto LABEL_25;
    }
  }
  ConnectorFormatForProcessingMode = 0;
LABEL_15:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
LABEL_16:
  CWatchdogTimer<1>::~CWatchdogTimer<1>(v32);
  EtwEventActivityIdControl(4LL, &v34);
  return (unsigned int)ConnectorFormatForProcessingMode;
}
