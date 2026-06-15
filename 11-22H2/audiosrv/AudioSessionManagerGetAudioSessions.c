/*
 * XREFs of AudioSessionManagerGetAudioSessions @ 0x180054D20
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionManagerGetAudioSessions(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 pftDueTime; // rbx
  unsigned int v6; // edi
  __int64 *v10; // rax
  _QWORD *v11; // rbx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v15; // rdx
  __int64 v16; // r9
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  v10 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          a1,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v10[1],
    v6,
    (struct _TP_TIMER *)L"AudioSessionManagerGetAudioSessions",
    pftDueTime);
  v11 = *(_QWORD **)a1;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 8LL) + 112LL))(*(_QWORD *)(*(_QWORD *)a1 + 8LL)) )
  {
    v13 = -2147024891;
    v15 = 1435LL;
    v16 = 2147942405LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)v16);
    goto LABEL_4;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64))(**(_QWORD **)(*v11 + 96LL) + 32LL))(
          *(_QWORD *)(*v11 + 96LL),
          v11[1],
          a2,
          a3,
          a4);
  v13 = v12;
  if ( v12 < 0 )
  {
    v16 = (unsigned int)v12;
    v15 = 1437LL;
    goto LABEL_7;
  }
  v13 = 0;
LABEL_4:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v13;
}
