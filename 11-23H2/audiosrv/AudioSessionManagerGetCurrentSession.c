/*
 * XREFs of AudioSessionManagerGetCurrentSession @ 0x1800E96A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioSessionManagerGetCurrentSession(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 pftDueTime; // rbx
  unsigned int v10; // edi
  __int64 *v11; // rax
  _QWORD *v12; // r12
  _QWORD **v13; // rsi
  __int64 (__fastcall *v14)(struct IAudioPolicyManager *, _QWORD, __int64 *); // rbx
  int v15; // eax
  unsigned int v16; // ebx
  struct IMMDeviceEnumeratorVtbl *lpVtbl; // rax
  _QWORD *v18; // rdx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  int v22; // ebx
  int v23; // edi
  int v24; // r14d
  unsigned int v25; // ebx
  __int64 v27; // [rsp+50h] [rbp-31h] BYREF
  __int64 v28; // [rsp+58h] [rbp-29h] BYREF
  struct _TP_TIMER *pv[14]; // [rsp+60h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]
  int v31; // [rsp+E0h] [rbp+5Fh] BYREF
  __int64 (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // [rsp+F8h] [rbp+77h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v10 = g_AudioSrvWatchDogTimerInMs;
  v11 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          (__int64)a1,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v11[1],
    v10,
    (struct _TP_TIMER *)L"AudioSessionManagerGetCurrentSession",
    pftDueTime);
  v12 = a5;
  *a5 = 0LL;
  *a4 = 0LL;
  v13 = (_QWORD **)*a1;
  v28 = 0LL;
  v14 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v28);
  v15 = v14(g_PolicyManager, 0LL, &v28);
  v16 = v15;
  if ( v15 >= 0 )
  {
    lpVtbl = g_DeviceEnumerator->lpVtbl;
    v32 = 0LL;
    v18 = *v13 + 2;
    if ( (*v13)[5] >= 8uLL )
      v18 = (_QWORD *)*v18;
    v19 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD *, _QWORD))lpVtbl->GetDevice)(
            g_DeviceEnumerator,
            v18,
            &v32);
    v16 = v19;
    if ( v19 >= 0 )
    {
      v27 = 0LL;
      v20 = (**v32)(v32, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v27);
      v16 = v20;
      if ( v20 >= 0 )
      {
        v20 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 24LL))(v27, &v31);
        v16 = v20;
        if ( v20 >= 0 )
        {
          v22 = (a3 >> 28) & 1 | ~(unsigned __int8)(a3 >> 18) & 2;
          v23 = a3 & 0x60000000;
          if ( g_ADGProcess
            && LODWORD(g_ADGProcess[2].OwningThread) == (*(unsigned int (__fastcall **)(_QWORD *))(*v13[1] + 40LL))(v13[1]) )
          {
            v23 = a3 & 0x40000000 | 0x20000000;
          }
          if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v13[1] + 88LL))(v13[1]) )
          {
            v23 |= 0x200000u;
            v22 |= 0x40000000u;
          }
          v24 = a3 & 0x10000;
          if ( v31 == 1 )
            v25 = v22 & 0xFFFFFFFD;
          else
            v25 = v22 | 8;
          v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, bool, _QWORD *, _QWORD *))(*(_QWORD *)(*v13)[12] + 8LL))(
                  (*v13)[12],
                  v28,
                  a2,
                  v25,
                  v23,
                  v24 != 0,
                  a4,
                  v12);
          v16 = v20;
          if ( v20 >= 0 )
          {
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v27);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v32);
            v16 = 0;
            goto LABEL_24;
          }
          v21 = 1505LL;
        }
        else
        {
          v21 = 1466LL;
        }
      }
      else
      {
        v21 = 1463LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v20);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v27);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5B4,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v19);
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v32);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5B1,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v15);
  }
LABEL_24:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v28);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v16;
}
