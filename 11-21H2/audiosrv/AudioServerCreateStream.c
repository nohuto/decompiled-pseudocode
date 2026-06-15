/*
 * XREFs of AudioServerCreateStream @ 0x180024380
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z @ 0x180024680 (-GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CAMNotification@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800EF83C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CAMNotification@@@details@wil@@QEAAX_NW4R.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800F097C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioServerCreateStream(__int64 a1, unsigned int a2, __int64 a3, int a4, unsigned int a5)
{
  GUID v9; // xmm0
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rdx
  _FILETIME v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // r10
  RPC_STATUS v19; // edi
  int ThreadLogonSessionStringSid; // eax
  const char *v21; // r9
  void *v22; // rbx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  const char *v26; // r9
  unsigned int v27; // esi
  int v29; // [rsp+20h] [rbp-A9h]
  LPVOID Context; // [rsp+40h] [rbp-89h] BYREF
  int v31; // [rsp+48h] [rbp-81h] BYREF
  __int64 v32; // [rsp+50h] [rbp-79h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp-71h] BYREF
  _QWORD pv[2]; // [rsp+60h] [rbp-69h] BYREF
  DWORD CurrentThreadId; // [rsp+70h] [rbp-59h]
  const wchar_t *v36; // [rsp+78h] [rbp-51h]
  _FILETIME v37; // [rsp+80h] [rbp-49h]
  char v38; // [rsp+88h] [rbp-41h]
  __int64 v39; // [rsp+8Ch] [rbp-3Dh]
  _OWORD v40[2]; // [rsp+98h] [rbp-31h] BYREF
  GUID v41; // [rsp+B8h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+4Fh]

  if ( a1 )
    v9 = *(GUID *)(a1 + 280);
  else
    v9 = GUID_00000000_0000_0000_0000_000000000000;
  v40[0] = v9;
  v40[1] = v9;
  v41 = v9;
  EtwEventActivityIdControl(4LL, &v41);
  v10 = *(_QWORD *)g_PolicyManager;
  v32 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(v10 + 32))(
          g_PolicyManager,
          0LL,
          &v32);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC5,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v11,
      v29);
  }
  else
  {
    v31 = 0;
    v13 = (*(__int64 (__fastcall **)(__int64, bool, _QWORD, int *))(*(_QWORD *)v32 + 152LL))(v32, a2 == 1, a5, &v31);
    v12 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBCE,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v13,
        v29);
    }
    else if ( v31
           || (LOBYTE(v14) = 1,
               wil::details::FeatureImpl<__WilFeatureTraits_Feature_CAMNotification>::ReportUsage(
                 &`wil::Feature<__WilFeatureTraits_Feature_CAMNotification>::GetImpl'::`2'::impl,
                 v14),
               v31) )
    {
      v15 = g_AudioHealthMonitor;
      v16 = g_AudioSrvWatchDogTimerInMs;
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        *(_QWORD *)&v40[0] = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
        Context = &qword_1801C2788;
        qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
        qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        DWORD2(v40[0]) = 0;
        wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(v40);
      }
      v17 = *((_QWORD *)Context + 1);
      pv[0] = 0LL;
      pv[1] = v17;
      CurrentThreadId = GetCurrentThreadId();
      v36 = L"AudioServerCreateStream";
      v37 = v15;
      v38 = 0;
      v39 = 0LL;
      if ( (unsigned int)v16 >= 0x3E8 )
      {
        ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
        pv[0] = ThreadpoolTimer;
        if ( ThreadpoolTimer )
        {
          Context = (LPVOID)(-10000 * v16 / 3);
          SetThreadpoolTimer(ThreadpoolTimer, (PFILETIME)&Context, (unsigned int)v16 / 3, 0);
        }
      }
      v19 = RpcImpersonateClient(0LL);
      if ( v19 )
      {
        v12 = v19 | 0x80010000;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBE9,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)v12,
          v29);
      }
      else
      {
        Context = 0LL;
        ThreadLogonSessionStringSid = GetThreadLogonSessionStringSid((unsigned __int16 **)&Context);
        v12 = ThreadLogonSessionStringSid;
        if ( ThreadLogonSessionStringSid < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xBF1,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)ThreadLogonSessionStringSid,
            v29);
          if ( !RevertToSelf() )
            wil::details::in1diag3::_Log_GetLastError(
              retaddr,
              (void *)0xBEE,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              v26);
          v22 = Context;
        }
        else
        {
          if ( !RevertToSelf() )
            wil::details::in1diag3::_Log_GetLastError(
              retaddr,
              (void *)0xBEE,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              v21);
          v22 = Context;
          v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(a1, v32, a2, a3);
          v27 = v23;
          if ( v23 < 0 )
          {
            v12 = -2005139333;
            if ( v23 != -2005139333 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xBF9,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (const char *)(unsigned int)v23,
                a4);
              v12 = v27;
            }
          }
          else
          {
            v12 = 0;
          }
        }
        if ( v22 )
          LocalFree(v22);
      }
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v24, v25, (int)v26);
    }
    else
    {
      v12 = -2005139338;
    }
  }
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  EtwEventActivityIdControl(4LL, &v41);
  return v12;
}
