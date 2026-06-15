/*
 * XREFs of AudioSessionManagerGetSessionForStreamSwitch @ 0x1800E21F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18000F4A4 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z @ 0x180010684 (-SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001ACB0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x1800D6154 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800D9B28 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x1800E6208 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioSessionManagerGetSessionForStreamSwitch(__int64 *a1, char *a2, _QWORD *a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v7; // edi
  __int64 *v8; // rax
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **); // rbx
  int v11; // eax
  unsigned int v12; // edi
  const unsigned __int16 *v13; // rcx
  int v14; // eax
  CAudioSessionManager *v15; // rbx
  unsigned int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  CAudioSession *v19; // rbx
  __int64 (__fastcall ***v20)(_QWORD, _QWORD, _QWORD, CAudioSession *, int *); // rsi
  __int64 (__fastcall *v21)(_QWORD, _QWORD, _QWORD, CAudioSession *, int *); // rdi
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // r9d
  bool v27; // [rsp+40h] [rbp-89h] BYREF
  struct IAudioProcess *v28; // [rsp+48h] [rbp-81h] BYREF
  unsigned int v29; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v30; // [rsp+54h] [rbp-75h] BYREF
  CAudioSession *v31; // [rsp+58h] [rbp-71h] BYREF
  int v32[2]; // [rsp+60h] [rbp-69h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+68h] [rbp-61h] BYREF
  _BYTE v34[80]; // [rsp+A0h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  v8 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v8[1],
    v7,
    (struct _TP_TIMER *)L"AudioSessionManagerGetSessionForStreamSwitch",
    pftDueTime);
  *a3 = 0LL;
  v9 = *a1;
  v28 = 0LL;
  v10 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                + 32LL);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)&v28);
  v11 = v10(g_PolicyManager, 0LL, &v28);
  v12 = v11;
  if ( v11 >= 0 )
  {
    CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v34);
    v13 = (const unsigned __int16 *)(*(_QWORD *)v9 + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)v9 + 40LL) >= 8uLL )
      v13 = *(const unsigned __int16 **)v13;
    v14 = CAudioSession::ParseStreamSwitchId(v13, a2, (struct CAudioSessionInstanceId *)v34, &v30, &v29, &v27);
    v12 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x65B,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_17:
      CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v34);
      goto LABEL_18;
    }
    v15 = *(CAudioSessionManager **)(*(_QWORD *)v9 + 96LL);
    v31 = 0LL;
    v16 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v28 + 40LL))(v28);
    v17 = CAudioSessionManager::CreateAudioSession(v15, v28, (struct CAudioSessionInstanceId *)v34, v30, v29, v16, &v31);
    v12 = v17;
    if ( v17 >= 0 )
    {
      v19 = v31;
      if ( (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)v31 + 1) + 56LL))((char *)v31 + 8)
        || (v17 = CAudioSession::SetDuckingOptOutPreference(v19, v27), v12 = v17, v17 >= 0) )
      {
        v20 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, CAudioSession *, int *))(*(_QWORD *)v9 + 96LL);
        v21 = **v20;
        v22 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v28 + 40LL))(v28);
        v17 = v21(v20, v22, 0LL, v19, v32);
        v12 = v17;
        if ( v17 >= 0 )
        {
          *a3 = *(_QWORD *)v32;
          v12 = 0;
          goto LABEL_16;
        }
        v18 = 1648LL;
      }
      else
      {
        v18 = 1641LL;
      }
    }
    else
    {
      v18 = 1633LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v17);
LABEL_16:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x650,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
    (const char *)(unsigned int)v11);
LABEL_18:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v28);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v23, v24, v25);
  return v12;
}
