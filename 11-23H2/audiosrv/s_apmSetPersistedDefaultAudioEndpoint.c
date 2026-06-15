/*
 * XREFs of s_apmSetPersistedDefaultAudioEndpoint @ 0x18010EA50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080EE0 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800CF09C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_apmSetPersistedDefaultAudioEndpoint(
        RPC_BINDING_HANDLE Binding,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v9; // rbx
  unsigned int v10; // edi
  __int64 *v11; // rax
  unsigned int v12; // eax
  int v13; // ebx
  bool v14; // dl
  char v15; // al
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  int v21; // edi
  int MMDeviceFromInterfaceId; // eax
  __int64 v23; // rax
  void *v24; // rcx
  HRESULT v25; // eax
  void *v26; // rcx
  unsigned __int64 i; // rbx
  int v28; // eax
  void *v29; // rcx
  __int64 v31; // rdx
  __int64 *v32; // [rsp+38h] [rbp-51h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-49h] BYREF
  __int64 v34; // [rsp+48h] [rbp-41h] BYREF
  unsigned int Pid; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v36; // [rsp+58h] [rbp-31h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-29h] BYREF
  LPVOID *p_pv; // [rsp+68h] [rbp-21h]
  void *v39; // [rsp+70h] [rbp-19h] BYREF
  char v40; // [rsp+78h] [rbp-11h]
  struct _TP_TIMER *v41[7]; // [rsp+80h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+57h]

  v9 = (__int64)g_AudioHealthMonitor;
  v10 = g_AudioSrvWatchDogTimerInMs;
  v11 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          (__int64)Binding,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    v41,
    (struct _TP_TIMER *)v11[1],
    v10,
    (struct _TP_TIMER *)L"s_apmSetPersistedDefaultAudioEndpoint",
    v9);
  Pid = 0;
  v12 = I_RpcBindingInqLocalClientPID(Binding, &Pid);
  if ( !v12 )
  {
    v14 = Pid == GetCurrentProcessId();
    if ( !g_ADGProcess || (v15 = 1, Pid != LODWORD(g_ADGProcess[2].OwningThread)) )
      v15 = 0;
    if ( v14 || v15 )
    {
      v31 = 90LL;
    }
    else
    {
      if ( a4 <= 2 )
      {
        v16 = *(_QWORD *)g_PolicyManager;
        v32 = 0LL;
        v17 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 **))(v16 + 40))(
                g_PolicyManager,
                a2,
                &v32);
        v13 = v17;
        if ( v17 < 0 )
        {
          v18 = (unsigned int)v17;
          v19 = 100LL;
LABEL_11:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
            (const char *)v18);
LABEL_12:
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v32);
          goto LABEL_41;
        }
        if ( !v32 )
        {
          v13 = -2147024809;
          v18 = 2147942487LL;
          v19 = 101LL;
          goto LABEL_11;
        }
        v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64))(*v32 + 24))(v32, a3, a4, a5);
        v21 = v20;
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x67,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
            (const char *)(unsigned int)v20);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v32);
          v13 = v21;
          goto LABEL_41;
        }
        v34 = 0LL;
        if ( a5 )
        {
          MMDeviceFromInterfaceId = mmdDevGetMMDeviceFromInterfaceId(a5, &v34);
          v13 = MMDeviceFromInterfaceId;
          if ( MMDeviceFromInterfaceId < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x6E,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
              (const char *)(unsigned int)MMDeviceFromInterfaceId);
LABEL_20:
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v34);
            goto LABEL_12;
          }
          v36 = 0LL;
          pv = 0LL;
          v23 = *v32;
          p_pv = &pv;
          v39 = 0LL;
          v40 = 1;
          v13 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64 *, void **))(v23 + 56))(v32, &v36, &v39);
          if ( v40 )
          {
            v24 = *p_pv;
            *p_pv = v39;
            if ( v24 )
              CoTaskMemFree(v24);
          }
          if ( v13 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x74,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
              (const char *)(unsigned int)v13);
            wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
            goto LABEL_20;
          }
          if ( v36 )
          {
            ppv = 0LL;
            v25 = CoCreateInstance(
                    &GUID_06cca63e_9941_441b_b004_39f999ada412,
                    0LL,
                    0x17u,
                    &GUID_6ca19947_8747_46ab_879e_349c4dbb88fb,
                    &ppv);
            v13 = v25;
            if ( v25 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x7A,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
                (const char *)(unsigned int)v25);
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&ppv);
              v26 = pv;
              pv = 0LL;
              if ( v26 )
                CoTaskMemFree(v26);
              goto LABEL_20;
            }
            for ( i = 0LL; i < v36; ++i )
            {
              v28 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD, _QWORD))(*(_QWORD *)ppv + 88LL))(
                      ppv,
                      v34,
                      a4,
                      *((unsigned int *)pv + i));
              if ( v28 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x7E,
                  (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
                  (const char *)(unsigned int)v28);
            }
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&ppv);
          }
          v29 = pv;
          pv = 0LL;
          if ( v29 )
            CoTaskMemFree(v29);
        }
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v34);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v32);
        CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v41);
        return 0LL;
      }
      v31 = 95LL;
    }
    v13 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
      (const char *)0x80070057LL);
    goto LABEL_41;
  }
  v13 = wil::details::in1diag3::Return_Win32(
          retaddr,
          86LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
          (const char *)v12);
LABEL_41:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v41);
  return (unsigned int)v13;
}
