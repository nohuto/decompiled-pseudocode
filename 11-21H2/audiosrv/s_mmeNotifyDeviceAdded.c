/*
 * XREFs of s_mmeNotifyDeviceAdded @ 0x180110690
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x1801100E0 (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?MmeOnDeviceAdded@@YAJPEBG@Z @ 0x1801103A8 (-MmeOnDeviceAdded@@YAJPEBG@Z.c)
 */

__int64 __fastcall s_mmeNotifyDeviceAdded(__int64 a1, const unsigned __int16 *a2)
{
  __int64 pftDueTime; // rbx
  unsigned int v4; // edi
  __int64 *v5; // rax
  void *v6; // rdx
  void *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r9d
  DWORD LastError; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  int v14; // [rsp+90h] [rbp+18h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
  v5 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v5[1],
    v4,
    (struct _TP_TIMER *)L"s_mmeNotifyDeviceAdded",
    pftDueTime);
  LastError = 0;
  if ( (unsigned int)CheckRpcClientTokenMembershipsDisjunctive(v7, v6, &v14) )
  {
    if ( !v14 || (MmeOnDeviceAdded(a2), !v14) )
      LastError = 5;
  }
  else
  {
    LastError = GetLastError();
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v8, v9, v10);
  return LastError;
}
