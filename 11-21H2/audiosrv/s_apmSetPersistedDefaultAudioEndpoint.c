/*
 * XREFs of s_apmSetPersistedDefaultAudioEndpoint @ 0x180102B80
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800DA73C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
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
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // r8
  int v16; // r9d
  bool v17; // dl
  char v18; // al
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r9
  int MMDeviceFromInterfaceId; // eax
  __int64 v24; // rax
  void *v25; // rcx
  HRESULT v26; // eax
  void *v27; // rcx
  unsigned __int64 i; // rbx
  int v29; // eax
  void *v30; // rcx
  __int64 v31; // rdx
  LPVOID pv; // [rsp+38h] [rbp-51h] BYREF
  unsigned int Pid; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v35; // [rsp+48h] [rbp-41h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v37; // [rsp+58h] [rbp-31h] BYREF
  __int64 v38; // [rsp+60h] [rbp-29h] BYREF
  LPVOID *p_pv; // [rsp+68h] [rbp-21h]
  void *v40; // [rsp+70h] [rbp-19h] BYREF
  char v41; // [rsp+78h] [rbp-11h]
  struct _TP_TIMER *v42[7]; // [rsp+80h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+57h]

  v9 = (__int64)g_AudioHealthMonitor;
  v10 = g_AudioSrvWatchDogTimerInMs;
  v11 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          (__int64)Binding,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    v42,
    (struct _TP_TIMER *)v11[1],
    v10,
    (struct _TP_TIMER *)L"s_apmSetPersistedDefaultAudioEndpoint",
    v9);
  Pid = 0;
  v12 = I_RpcBindingInqLocalClientPID(Binding, &Pid);
  if ( !v12 )
  {
    v17 = Pid == GetCurrentProcessId();
    if ( !g_ADGProcess || (v18 = 1, Pid != LODWORD(g_ADGProcess[2].OwningThread)) )
      v18 = 0;
    if ( v17 || v18 )
    {
      v31 = 90LL;
    }
    else
    {
      if ( a4 <= 2 )
      {
        v19 = *(_QWORD *)g_PolicyManager;
        v37 = 0LL;
        v20 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 **))(v19 + 40))(
                g_PolicyManager,
                a2,
                &v37);
        v14 = v20;
        if ( v20 < 0 )
        {
          v21 = 100LL;
LABEL_15:
          v22 = (unsigned int)v20;
          goto LABEL_16;
        }
        if ( !v37 )
        {
          v14 = -2147024809;
          v22 = 2147942487LL;
          v21 = 101LL;
LABEL_16:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
            (const char *)v22);
LABEL_39:
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v37);
          goto LABEL_43;
        }
        v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64))(*v37 + 24))(v37, a3, a4, a5);
        v14 = v20;
        if ( v20 < 0 )
        {
          v21 = 103LL;
          goto LABEL_15;
        }
        v38 = 0LL;
        if ( a5 )
        {
          MMDeviceFromInterfaceId = mmdDevGetMMDeviceFromInterfaceId(a5, &v38);
          v14 = MMDeviceFromInterfaceId;
          if ( MMDeviceFromInterfaceId < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x6E,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
              (const char *)(unsigned int)MMDeviceFromInterfaceId);
LABEL_38:
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
            goto LABEL_39;
          }
          v35 = 0LL;
          pv = 0LL;
          v24 = *v37;
          p_pv = &pv;
          v40 = 0LL;
          v41 = 1;
          v14 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64 *, void **))(v24 + 56))(v37, &v35, &v40);
          if ( v41 )
          {
            v25 = *p_pv;
            *p_pv = v40;
            if ( v25 )
              CoTaskMemFree(v25);
          }
          if ( v14 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x74,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
              (const char *)(unsigned int)v14);
            goto LABEL_28;
          }
          if ( v35 )
          {
            ppv = 0LL;
            v26 = CoCreateInstance(
                    &GUID_06cca63e_9941_441b_b004_39f999ada412,
                    0LL,
                    0x17u,
                    &GUID_6ca19947_8747_46ab_879e_349c4dbb88fb,
                    &ppv);
            v14 = v26;
            if ( v26 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x7A,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
                (const char *)(unsigned int)v26);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
LABEL_28:
              v27 = pv;
              pv = 0LL;
              if ( v27 )
                CoTaskMemFree(v27);
              goto LABEL_38;
            }
            for ( i = 0LL; i < v35; ++i )
            {
              v29 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD, _QWORD))(*(_QWORD *)ppv + 88LL))(
                      ppv,
                      v38,
                      a4,
                      *((unsigned int *)pv + i));
              if ( v29 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x7E,
                  (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
                  (const char *)(unsigned int)v29);
            }
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
          }
          v30 = pv;
          pv = 0LL;
          if ( v30 )
            CoTaskMemFree(v30);
        }
        v14 = 0;
        goto LABEL_38;
      }
      v31 = 95LL;
    }
    v14 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
      (const char *)0x80070057LL);
    goto LABEL_43;
  }
  v14 = wil::details::in1diag3::Return_Win32(
          retaddr,
          86LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
          (const char *)v12);
LABEL_43:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v42, v13, v15, v16);
  return (unsigned int)v14;
}
