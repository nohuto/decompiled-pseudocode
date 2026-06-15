/*
 * XREFs of s_afxOpenAudioEffectsWatcher @ 0x1800D4C30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeriveAudioServerStreamCategory@@YAJW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z @ 0x1800D30DC (-DeriveAudioServerStreamCategory@@YAJW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800D31F8 (-GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatche.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_afxOpenAudioEffectsWatcher(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        _OWORD *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 pftDueTime; // rbx
  unsigned int v11; // edi
  __int64 *v12; // rax
  HRESULT v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // r9d
  int v18; // eax
  int Watcher; // eax
  __int64 v20; // rbx
  unsigned int v22; // [rsp+30h] [rbp-51h] BYREF
  _QWORD *v23; // [rsp+38h] [rbp-49h]
  struct _TP_TIMER *pv[7]; // [rsp+40h] [rbp-41h] BYREF
  int v25[2]; // [rsp+78h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+47h]

  v23 = a7;
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v11 = g_AudioSrvWatchDogTimerInMs;
  v12 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          a1,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v12[1],
    v11,
    (struct _TP_TIMER *)L"s_afxOpenAudioEffectsWatcher",
    pftDueTime);
  v13 = CoInitializeEx(0LL, 0);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v18 = DeriveAudioServerStreamCategory(a3, 0, &v22);
    v14 = v18;
    if ( v18 >= 0 )
    {
      *(_QWORD *)v25 = 0LL;
      Watcher = AudioEffectsWatcherFactory::GetWatcher(a2, v22, a4, 0, (struct IUnknown **)v25);
      v14 = Watcher;
      if ( Watcher >= 0 )
      {
        v20 = *(_QWORD *)v25;
        *a5 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v25 + 32LL))(*(_QWORD *)v25, v25);
        *a6 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 40LL))(v20, v25);
        *(_QWORD *)v25 = 0LL;
        *v23 = v20;
        v14 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1C3,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
          (const char *)(unsigned int)Watcher);
      }
      wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)v25);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BF,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
        (const char *)(unsigned int)v18);
    }
    CoUninitialize();
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BB,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)(unsigned int)v13);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v15, v16, v17);
  return v14;
}
