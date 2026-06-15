/*
 * XREFs of s_mmeNotifyDeviceStateChanged @ 0x180110810
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x1801100E0 (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?MmeOnDeviceStateChanged@@YAJPEBGK@Z @ 0x18011047C (-MmeOnDeviceStateChanged@@YAJPEBGK@Z.c)
 *     ?OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z @ 0x180132484 (-OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z.c)
 */

__int64 __fastcall s_mmeNotifyDeviceStateChanged(__int64 a1, const unsigned __int16 *a2, unsigned int a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v5; // edi
  __int64 *v7; // rax
  void *v8; // rdx
  void *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r9d
  DWORD LastError; // ebx
  DynamicAudioEndpointManager *v14; // rcx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  int v17; // [rsp+98h] [rbp+20h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v7[1],
    v5,
    (struct _TP_TIMER *)L"s_mmeNotifyDeviceStateChanged",
    pftDueTime);
  LastError = 0;
  if ( (unsigned int)CheckRpcClientTokenMembershipsDisjunctive(v9, v8, &v17) )
  {
    if ( !v17 || (MmeOnDeviceStateChanged(a2), DynamicAudioEndpointManager::OnDeviceStateChanged(v14, a2, a3), !v17) )
      LastError = 5;
  }
  else
  {
    LastError = GetLastError();
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v10, v11, v12);
  return LastError;
}
