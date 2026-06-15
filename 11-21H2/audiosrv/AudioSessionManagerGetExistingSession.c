/*
 * XREFs of AudioSessionManagerGetExistingSession @ 0x1800E2020
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x1800D6154 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x1800E069C (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x1800E6208 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800E73A4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioSessionManagerGetExistingSession(__int64 **a1, const unsigned __int16 *a2, _QWORD *a3)
{
  __int64 *v5; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v7; // edi
  __int64 *v8; // rax
  RPC_STATUS v9; // ebx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r9d
  int v14; // eax
  __int64 v15; // rax
  int AudioSession; // eax
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, _QWORD, struct CAudioSession *, int *); // rcx
  __int64 (__fastcall **v18)(_QWORD, _QWORD, _QWORD, struct CAudioSession *, int *); // rax
  int v19; // eax
  __int64 v20; // rax
  int v22[2]; // [rsp+30h] [rbp-79h] BYREF
  unsigned int Pid; // [rsp+38h] [rbp-71h] BYREF
  struct CAudioSession *v24; // [rsp+40h] [rbp-69h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v26[80]; // [rsp+80h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v5 = *a1;
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  v8 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v8[1],
    v7,
    (struct _TP_TIMER *)L"AudioSessionManagerGetExistingSession",
    pftDueTime);
  *a3 = 0LL;
  v9 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( v9 )
  {
    v10 = v9 | 0x80010000;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x631,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)v10);
  }
  else
  {
    CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v26);
    v14 = CAudioSessionInstanceId::Initialize((CAudioSessionInstanceId *)v26, a2);
    v10 = v14;
    if ( v14 >= 0 )
    {
      v15 = *v5;
      v24 = 0LL;
      AudioSession = CAudioSessionManager::FindAudioSession(
                       *(CAudioSessionManager **)(v15 + 96),
                       (struct CAudioSessionInstanceId *)v26,
                       &v24);
      v10 = AudioSession;
      if ( AudioSession >= 0 )
      {
        v17 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, struct CAudioSession *, int *))(*v5 + 96);
        v18 = *v17;
        *(_QWORD *)v22 = 0LL;
        v19 = (*v18)(v17, Pid, 0LL, v24, v22);
        v10 = v19;
        if ( v19 >= 0 )
        {
          v20 = *(_QWORD *)v22;
          *(_QWORD *)v22 = 0LL;
          *a3 = v20;
          v10 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x63D,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
            (const char *)(unsigned int)v19);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v22);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x639,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)AudioSession);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x635,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v14);
    }
    CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v26);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v11, v12, v13);
  return v10;
}
