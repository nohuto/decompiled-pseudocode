/*
 * XREFs of ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18003C784
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18003BB20 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     ?StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x18003C954 (-StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 *     ?IsEnabled@StartWindowTelemetry@@SA_NE_K@Z @ 0x18003CB80 (-IsEnabled@StartWindowTelemetry@@SA_NE_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B30E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9808 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall XamlLauncherState::BeginStartTelemetryTimeout(struct _TP_TIMER **pv)
{
  struct _TP_TIMER **v1; // rdi
  PTP_TIMER ThreadpoolTimer; // rax
  const char *v4; // r9
  struct _TP_TIMER *v5; // rcx
  struct _TP_TIMER **v6; // rdi
  PTP_TIMER v7; // rax
  const char *v8; // r9
  struct _TP_TIMER *v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int8 v11; // cl
  struct _TP_TIMER **v12; // rdi
  PTP_TIMER v13; // rax
  const char *v14; // r9
  struct _TP_TIMER *v15; // rcx
  struct _TP_TIMER **v16; // rdi
  PTP_TIMER v17; // rax
  const char *v18; // r9
  struct _TP_TIMER *v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  v1 = pv + 124;
  if ( !pv[124] )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(lambda_f7729cf07ac1cf5d574dc5881a9cd216_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v1,
      ThreadpoolTimer);
    if ( !*v1 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x602,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        v4);
    v5 = *v1;
    if ( *v1 )
    {
      pftDueTime = (struct _FILETIME)-20000000LL;
      SetThreadpoolTimer(v5, &pftDueTime, 0, 0x3E8u);
    }
  }
  v6 = pv + 125;
  if ( !pv[125] )
  {
    v7 = CreateThreadpoolTimer(lambda_f6905a9ca7d137af961aa077b7ca39b8_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      pv + 125,
      v7);
    if ( !*v6 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x620,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        v8);
    v9 = *v6;
    if ( *v6 )
    {
      pftDueTime = (struct _FILETIME)(-10000000LL * *((unsigned int *)pv + 17));
      SetThreadpoolTimer(v9, &pftDueTime, 0, 0x3E8u);
      if ( StartWindowTelemetry::IsEnabled(v11, v10) )
        XamlLauncherState::StartTrackingCpuUsageOfCriticalProcesses((XamlLauncherState *)pv);
    }
  }
  v12 = pv + 126;
  if ( !pv[126] )
  {
    v13 = CreateThreadpoolTimer(lambda_366d32c7985cad6be2686e905051f209_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      pv + 126,
      v13);
    if ( !*v12 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x63B,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        v14);
    v15 = *v12;
    if ( *v12 )
    {
      pftDueTime = (struct _FILETIME)-100000000LL;
      SetThreadpoolTimer(v15, &pftDueTime, 0, 0x3E8u);
    }
  }
  v16 = pv + 127;
  if ( !pv[127] )
  {
    v17 = CreateThreadpoolTimer(lambda_5384bb77a032ee15e026d6375920cb0d_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      pv + 127,
      v17);
    if ( !*v16 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x662,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        v18);
    v19 = *v16;
    if ( *v16 )
    {
      pftDueTime = (struct _FILETIME)-300000000LL;
      SetThreadpoolTimer(v19, &pftDueTime, 0, 0x3E8u);
    }
  }
}
