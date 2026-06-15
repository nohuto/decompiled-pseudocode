/*
 * XREFs of asm_GetApplicationSubmixes @ 0x1800D41B0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x18003EE80 (MIDL_user_allocate.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall asm_GetApplicationSubmixes(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v6; // edi
  __int64 *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  const char *v10; // r9
  __int64 result; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rax
  __int64 *v14; // rbx
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+30h] [rbp-58h]
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v18; // [rsp+A8h] [rbp+20h]

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v7[1],
    v6,
    (struct _TP_TIMER *)L"asm_GetApplicationSubmixes",
    pftDueTime);
  try
  {
    (*(void (**)(void))(*(_QWORD *)g_ProcessSubmixManager + 48LL))();
    v8 = MIDL_user_allocate(8LL * *(_QWORD *)(v18 + 16));
    v9 = v8;
    if ( v8 )
    {
      v12 = v8;
      v13 = v18;
      v14 = *(__int64 **)(v18 + 8);
      while ( 1 )
      {
        v14 = (__int64 *)*v14;
        if ( v14 == *(__int64 **)(v13 + 8) )
          break;
        *v12++ = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14[2] + 224LL))(v14[2]);
        v13 = v18;
      }
      *a2 = *(_DWORD *)(v13 + 16);
      *a3 = v9;
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF4,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
        (const char *)0x8007000ELL);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x101,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                           v10);
  }
  return result;
}
