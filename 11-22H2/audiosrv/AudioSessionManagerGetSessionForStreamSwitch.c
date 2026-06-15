/*
 * XREFs of AudioSessionManagerGetSessionForStreamSwitch @ 0x1800E99D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x18001C748 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001CDF4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002219C (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800E1C3C (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z @ 0x1800E5364 (-SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioSessionManagerGetSessionForStreamSwitch(__int64 *a1, const unsigned __int16 *a2, _QWORD *a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v7; // edi
  __int64 *v8; // rax
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  const unsigned __int16 *v13; // rcx
  int v14; // eax
  union _RTL_RUN_ONCE *v15; // rbx
  unsigned int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  CAudioSession *v19; // rbx
  int v20; // eax
  int v21; // edi
  __int64 (__fastcall ***v22)(_QWORD, _QWORD, _QWORD, CAudioSession *, __int64 *); // rsi
  __int64 (__fastcall *v23)(_QWORD, _QWORD, _QWORD, CAudioSession *, __int64 *); // rdi
  unsigned int v24; // eax
  bool v26; // [rsp+40h] [rbp-89h] BYREF
  CAudioSession *v27; // [rsp+48h] [rbp-81h] BYREF
  struct IAudioProcess *v28; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v29; // [rsp+58h] [rbp-71h] BYREF
  unsigned int v30; // [rsp+5Ch] [rbp-6Dh] BYREF
  __int64 v31; // [rsp+60h] [rbp-69h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+68h] [rbp-61h] BYREF
  _BYTE v33[80]; // [rsp+A0h] [rbp-29h] BYREF
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
    CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v33);
    v13 = (const unsigned __int16 *)(*(_QWORD *)v9 + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)v9 + 40LL) >= 8uLL )
      v13 = *(const unsigned __int16 **)v13;
    v14 = CAudioSession::ParseStreamSwitchId(v13, a2, (struct CAudioSessionInstanceId *)v33, &v30, &v29, &v26);
    v12 = v14;
    if ( v14 >= 0 )
    {
      v15 = *(union _RTL_RUN_ONCE **)(*(_QWORD *)v9 + 96LL);
      v27 = 0LL;
      v16 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v28 + 40LL))(v28);
      v17 = CAudioSessionManager::CreateAudioSession(
              v15,
              v28,
              (struct CAudioSessionInstanceId *)v33,
              v30,
              v29,
              v16,
              &v27);
      v12 = v17;
      if ( v17 >= 0 )
      {
        v19 = v27;
        if ( !(*(unsigned int (__fastcall **)(char *))(*((_QWORD *)v27 + 1) + 56LL))((char *)v27 + 8) )
        {
          v20 = CAudioSession::SetDuckingOptOutPreference(v19, v26);
          v21 = v20;
          if ( v20 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x65F,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
              (const char *)(unsigned int)v20);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v27);
            CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v33);
            v12 = v21;
            goto LABEL_17;
          }
        }
        v22 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, CAudioSession *, __int64 *))(*(_QWORD *)v9 + 96LL);
        v23 = **v22;
        v24 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v28 + 40LL))(v28);
        v17 = v23(v22, v24, 0LL, v19, &v31);
        v12 = v17;
        if ( v17 >= 0 )
        {
          *a3 = v31;
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v27);
          CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v33);
          v12 = 0;
          goto LABEL_17;
        }
        v18 = 1638LL;
      }
      else
      {
        v18 = 1623LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v17);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v27);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x651,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v14);
    }
    CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v33);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x646,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v11);
  }
LABEL_17:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v28);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v12;
}
