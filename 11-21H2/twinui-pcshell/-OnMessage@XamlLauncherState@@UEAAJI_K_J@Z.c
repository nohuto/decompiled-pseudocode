/*
 * XREFs of ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x180173D00
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x180042054 (-OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ.c)
 *     ?OnSessionBecameActive@XamlLauncherState@@QEAAJXZ @ 0x180042B58 (-OnSessionBecameActive@XamlLauncherState@@QEAAJXZ.c)
 *     ?IsEnabled@StartWindowTelemetry@@SA_NE_K@Z @ 0x180045A98 (-IsEnabled@StartWindowTelemetry@@SA_NE_K@Z.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180047F50 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ @ 0x180450C88 (-OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ.c)
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x18045216C (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 */

__int64 __fastcall XamlLauncherState::OnMessage(struct _TP_TIMER **this, __int64 a2, XamlLauncherState *a3, int a4)
{
  XamlLauncherState *v4; // rbx
  bool v6; // zf
  int v7; // ebx
  __int64 v8; // rdx
  struct _TP_TIMER **v9; // rcx
  char v10; // cl
  int v11; // r8d
  unsigned int v12; // edx
  int started; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (_DWORD)a2 )
    return 0LL;
  v4 = (XamlLauncherState *)(this - 5);
  if ( a3 != (XamlLauncherState *)(this - 5) )
    return 0LL;
  if ( a4 )
  {
    if ( a4 == 1 )
    {
      v7 = XamlLauncherState::OnSessionBecameIdle((XamlLauncherState *)(this - 5));
      if ( v7 < 0 )
      {
        v8 = 327LL;
        goto LABEL_21;
      }
    }
    else
    {
      if ( a4 != 6 )
      {
        if ( a4 == 7 )
        {
          v9 = this + 120;
        }
        else
        {
          if ( a4 == 2 )
          {
            wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
              this + 121,
              0LL);
            if ( StartWindowTelemetry::IsEnabled(v10) )
              XamlLauncherState::StopTrackingCpuUsageOfCriticalProcesses(v4);
            return 0LL;
          }
          if ( a4 == 8 )
          {
            v9 = this + 122;
          }
          else if ( a4 == 3 )
          {
            v9 = this + 123;
          }
          else
          {
            if ( a4 != 4 )
            {
              if ( a4 == 5 )
              {
                v6 = *((_BYTE *)this + 1064) == 0;
                *((_BYTE *)this + 1014) = 1;
                if ( !v6 )
                {
                  v11 = *((_DWORD *)this + 265);
                  v12 = *((_DWORD *)this + 264);
                  *((_BYTE *)this + 1064) = 0;
                  started = XamlLauncherState::ShowStartView((__int64)(this - 2), v12, v11);
                  if ( started < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x16D,
                      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                      (const char *)(unsigned int)started);
                }
              }
              return 0LL;
            }
            v9 = this + 125;
          }
        }
        wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
          v9,
          0LL);
        return 0LL;
      }
      v7 = XamlLauncherState::OnSessionBecameActive((XamlLauncherState *)(this - 5), a2, (__int64)a3);
      if ( v7 < 0 )
      {
        v8 = 331LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v7);
      }
    }
  }
  else
  {
    v7 = XamlLauncherState::OnCortanaCutoffTimerFired((XamlLauncherState *)(this - 5));
    if ( v7 < 0 )
    {
      v8 = 323LL;
      goto LABEL_21;
    }
  }
  return (unsigned int)v7;
}
