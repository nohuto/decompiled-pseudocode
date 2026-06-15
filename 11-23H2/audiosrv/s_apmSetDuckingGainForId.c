/*
 * XREFs of s_apmSetDuckingGainForId @ 0x1801122C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall s_apmSetDuckingGainForId(__int64 a1, __int64 a2)
{
  __int64 pftDueTime; // rbx
  unsigned int v4; // edi
  unsigned int v6; // esi
  __int64 *v7; // rax
  void (__fastcall *v8)(struct IAudioPolicyManager *, _QWORD, __int64); // rbx
  unsigned int v9; // eax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+B8h] [rbp+20h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
  v6 = 0;
  v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v7[1],
    v4,
    (struct _TP_TIMER *)L"s_apmSetDuckingGainForId",
    pftDueTime);
  if ( (unsigned int)IsApmDuckingGainForIdSupported() )
  {
    v12 = 0LL;
    if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
           g_PolicyManager,
           a1,
           &v12) >= 0 )
    {
      v8 = *(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64))(*(_QWORD *)g_PolicyManager + 136LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12);
      v8(g_PolicyManager, v9, a2);
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v12);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64))(*(_QWORD *)g_PolicyManager + 136LL))(
           g_PolicyManager,
           0LL,
           a2);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v6;
}
