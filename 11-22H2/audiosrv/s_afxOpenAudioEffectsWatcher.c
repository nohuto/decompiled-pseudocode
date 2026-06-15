/*
 * XREFs of s_afxOpenAudioEffectsWatcher @ 0x1800D73A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?DeriveAudioServerStreamCategory@@YAJW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z @ 0x180051F50 (-DeriveAudioServerStreamCategory@@YAJW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_call@P6AXXZ$1?CoUninitialize@@YAXXZ$00@wil@@QEAA@XZ @ 0x1800D5774 (--1-$unique_call@P6AXXZ$1-CoUninitialize@@YAXXZ$00@wil@@QEAA@XZ.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800D5D28 (-GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatche.c)
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
  int v15; // eax
  int Watcher; // eax
  __int64 v17; // rbx
  char v19[4]; // [rsp+30h] [rbp-51h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-4Dh] BYREF
  _QWORD *v21; // [rsp+38h] [rbp-49h]
  struct _TP_TIMER *pv[7]; // [rsp+40h] [rbp-41h] BYREF
  int v23[2]; // [rsp+78h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+47h]

  v21 = a7;
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
    v19[0] = 1;
    v15 = DeriveAudioServerStreamCategory(a3, 0, &v20);
    v14 = v15;
    if ( v15 >= 0 )
    {
      *(_QWORD *)v23 = 0LL;
      Watcher = AudioEffectsWatcherFactory::GetWatcher(a2, v20, a4, 7, (struct IUnknown **)v23);
      v14 = Watcher;
      if ( Watcher >= 0 )
      {
        v17 = *(_QWORD *)v23;
        *a5 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v23 + 32LL))(*(_QWORD *)v23, v23);
        *a6 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 40LL))(v17, v23);
        *(_QWORD *)v23 = 0LL;
        *v21 = v17;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v23);
        CoUninitialize();
        v14 = 0;
        goto LABEL_9;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C9,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
        (const char *)(unsigned int)Watcher);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v23);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C5,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
        (const char *)(unsigned int)v15);
    }
    wil::unique_call<void (*)(void),&void CoUninitialize(void),1>::~unique_call<void (*)(void),&void CoUninitialize(void),1>(v19);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C1,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)(unsigned int)v13);
  }
LABEL_9:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v14;
}
