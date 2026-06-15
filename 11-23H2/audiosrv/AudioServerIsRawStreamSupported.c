/*
 * XREFs of AudioServerIsRawStreamSupported @ 0x1801246F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AllowRawStreamCreation@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014B190 (-AllowRawStreamCreation@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001.c)
 */

__int64 __fastcall AudioServerIsRawStreamSupported(
        __int64 a1,
        __int64 a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        _DWORD *a4)
{
  __int64 pftDueTime; // rbx
  unsigned int v6; // edi
  __int64 *v9; // rax
  int v10; // ebx
  __int128 v12; // [rsp+30h] [rbp-58h] BYREF
  std::_Ref_count_base *v13; // [rsp+40h] [rbp-48h]
  struct _TP_TIMER *pv[7]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v13 = 0LL;
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  v12 = 0LL;
  v9 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v9[1],
    v6,
    (struct _TP_TIMER *)L"AudioServerIsRawStreamSupported",
    pftDueTime);
  if ( (unsigned int)a3 > eKeywordDetectorConnector )
  {
    v10 = -2147024809;
LABEL_3:
    AudSrvTraceLoggingErrorHelper("AudioServerIsRawStreamSupported", 4345, v10);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10FA,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_4;
  }
  v10 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, __int128 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                              + 40LL))(
          g_pEndpointCharacteristicsCache,
          a2,
          0LL,
          0LL,
          &v12);
  if ( v10 < 0 )
    goto LABEL_3;
  *a4 = EffectPack::AllowRawStreamCreation(*((EffectPack **)&v12 + 1), a3);
LABEL_4:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v12);
  return (unsigned int)v10;
}
