/*
 * XREFs of AudioServerSetAudioEffect @ 0x1800F3F40
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x1800ED894 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?SetAudioEffect@CVADServer@@QEAAJU_GUID@@H@Z @ 0x1800EFC70 (-SetAudioEffect@CVADServer@@QEAAJU_GUID@@H@Z.c)
 */

__int64 __fastcall AudioServerSetAudioEffect(CVADServer *this, struct _GUID *a2, unsigned int a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 *v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r9d
  unsigned int v14; // ebx
  struct _GUID v16; // [rsp+30h] [rbp-98h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v18[16]; // [rsp+78h] [rbp-50h] BYREF
  _BYTE v19[16]; // [rsp+88h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v18, (char *)this);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  v9 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         v8,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v9[1],
    v7,
    (struct _TP_TIMER *)L"AudioServerSetAudioEffect",
    pftDueTime);
  v16 = *a2;
  v10 = CVADServer::SetAudioEffect(this, &v16, a3);
  v14 = v10;
  if ( v10 >= 0 )
    v14 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1563,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v10);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v11, v12, v13);
  EtwEventActivityIdControl(4LL, v19);
  return v14;
}
