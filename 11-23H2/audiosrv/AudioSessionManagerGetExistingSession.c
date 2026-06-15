/*
 * XREFs of AudioSessionManagerGetExistingSession @ 0x18004F9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x18001C748 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001CDF4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180041530 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18004FB64 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioSessionManagerGetExistingSession(__int64 **a1, const unsigned __int16 *a2, _QWORD *a3)
{
  __int64 *v5; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v7; // edi
  __int64 *v8; // rax
  RPC_STATUS v9; // ebx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rax
  int AudioSession; // eax
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD, struct CAudioSession *, int *); // rcx
  __int64 (__fastcall **v15)(_QWORD, _QWORD, _QWORD, struct CAudioSession *, int *); // rax
  int v16; // eax
  __int64 v17; // rax
  int v19[2]; // [rsp+30h] [rbp-79h] BYREF
  struct CAudioSession *v20; // [rsp+38h] [rbp-71h] BYREF
  unsigned int Pid; // [rsp+40h] [rbp-69h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v23[80]; // [rsp+80h] [rbp-29h] BYREF
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
    v11 = v9 | 0x80010000;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x627,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)v11);
    goto LABEL_6;
  }
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v23);
  v10 = CAudioSessionInstanceId::Initialize((CAudioSessionInstanceId *)v23, a2);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v10);
LABEL_11:
    CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v23);
    goto LABEL_6;
  }
  v12 = *v5;
  v20 = 0LL;
  AudioSession = CAudioSessionManager::FindAudioSession(
                   *(CAudioSessionManager **)(v12 + 96),
                   (struct CAudioSessionInstanceId *)v23,
                   &v20);
  v11 = AudioSession;
  if ( AudioSession < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)AudioSession);
LABEL_10:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v20);
    goto LABEL_11;
  }
  v14 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, struct CAudioSession *, int *))(*v5 + 96);
  v15 = *v14;
  *(_QWORD *)v19 = 0LL;
  v16 = (*v15)(v14, Pid, 0LL, v20, v19);
  v11 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x633,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v16);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v19);
    goto LABEL_10;
  }
  v17 = *(_QWORD *)v19;
  *(_QWORD *)v19 = 0LL;
  *a3 = v17;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v19);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v20);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v23);
  v11 = 0;
LABEL_6:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v11;
}
