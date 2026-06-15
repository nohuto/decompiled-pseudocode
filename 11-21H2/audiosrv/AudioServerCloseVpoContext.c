/*
 * XREFs of AudioServerCloseVpoContext @ 0x1800F0F00
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CVpoContextProxy@@QEAA@XZ @ 0x1800ED9C8 (--1CVpoContextProxy@@QEAA@XZ.c)
 */

__int64 __fastcall AudioServerCloseVpoContext(CVpoContextProxy **a1)
{
  __int64 pftDueTime; // rbx
  unsigned int v2; // edi
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // r9d
  CVpoContextProxy *v8; // rbx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v2 = g_AudioSrvWatchDogTimerInMs;
  v4 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v4[1],
    v2,
    (struct _TP_TIMER *)L"AudioServerCloseVpoContext",
    pftDueTime);
  v8 = *a1;
  *a1 = 0LL;
  if ( v8 )
  {
    CVpoContextProxy::~CVpoContextProxy(v8);
    operator delete(v8);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v5, v6, v7);
  return 0LL;
}
