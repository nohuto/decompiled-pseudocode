/*
 * XREFs of AudioServerGetAudioEffectsChangedWnfStateName @ 0x1800F11C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x1800ED894 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?GetAudioEffectsChangedWnfStateName@CVADServer@@QEAAJPEA_K@Z @ 0x1800EE664 (-GetAudioEffectsChangedWnfStateName@CVADServer@@QEAAJPEA_K@Z.c)
 */

__int64 __fastcall AudioServerGetAudioEffectsChangedWnfStateName(CVADServer *this, unsigned __int64 *a2)
{
  __int64 pftDueTime; // rbx
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 *v7; // rax
  int AudioEffectsChangedWnfStateName; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // r9d
  unsigned int v12; // ebx
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v15[16]; // [rsp+68h] [rbp-40h] BYREF
  _BYTE v16[16]; // [rsp+78h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v15, (char *)this);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         v6,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v7[1],
    v5,
    (struct _TP_TIMER *)L"AudioServerGetAudioEffectsChangedWnfStateName",
    pftDueTime);
  AudioEffectsChangedWnfStateName = CVADServer::GetAudioEffectsChangedWnfStateName(this, a2);
  v12 = AudioEffectsChangedWnfStateName;
  if ( AudioEffectsChangedWnfStateName >= 0 )
    v12 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x156E,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)AudioEffectsChangedWnfStateName);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v9, v10, v11);
  EtwEventActivityIdControl(4LL, v16);
  return v12;
}
