/*
 * XREFs of PolicyConfigGetMixFormat @ 0x180117D90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800179D0 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x18003EE80 (MIDL_user_allocate.c)
 *     memcpy_0 @ 0x18006A809 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigGetMixFormat(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v5; // edi
  __int64 *v7; // rax
  int v8; // ebx
  int MixFormat; // eax
  unsigned __int16 *v10; // rdi
  void *v11; // rax
  struct _GUID v13; // [rsp+30h] [rbp-19h] BYREF
  EffectPack *v14[2]; // [rsp+40h] [rbp-9h] BYREF
  std::_Ref_count_base *v15; // [rsp+50h] [rbp+7h]
  struct _TP_TIMER *pv[7]; // [rsp+58h] [rbp+Fh] BYREF
  void *Src; // [rsp+C0h] [rbp+77h] BYREF

  Src = 0LL;
  v15 = 0LL;
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  *(_OWORD *)v14 = 0LL;
  v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v7[1],
    v5,
    (struct _TP_TIMER *)L"PolicyConfigGetMixFormat",
    pftDueTime);
  *a3 = 0LL;
  v8 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, EffectPack **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                + 40LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         v14);
  if ( v8 < 0 )
    goto LABEL_9;
  v13 = GUID_00000000_0000_0000_0000_000000000000;
  MixFormat = EffectPack::GetMixFormat(v14[1], eHostProcessConnector, &v13, (struct tWAVEFORMATEX **)&Src);
  v10 = (unsigned __int16 *)Src;
  v8 = MixFormat;
  if ( MixFormat >= 0 )
  {
    v11 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
    *a3 = v11;
    if ( v11 )
      memcpy_0(v11, v10, v10[8] + 18LL);
    else
      v8 = -2147024882;
  }
  if ( v10 )
    CoTaskMemFree(v10);
  if ( v8 < 0 )
LABEL_9:
    AudSrvTraceLoggingErrorHelper("PolicyConfigGetMixFormat", 2246, v8);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v14);
  return (unsigned int)v8;
}
