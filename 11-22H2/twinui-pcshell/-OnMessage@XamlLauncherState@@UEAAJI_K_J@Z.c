/*
 * XREFs of ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x1801AB4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18003BB20 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?IsEnabled@StartWindowTelemetry@@SA_NE_K@Z @ 0x18003CB80 (-IsEnabled@StartWindowTelemetry@@SA_NE_K@Z.c)
 *     ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x1800712F4 (-OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ.c)
 *     ?OnSessionBecameActive@XamlLauncherState@@QEAAJXZ @ 0x180071F68 (-OnSessionBecameActive@XamlLauncherState@@QEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B30E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ @ 0x180506168 (-OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ.c)
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x1805074E8 (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 */

__int64 __fastcall XamlLauncherState::OnMessage(struct _TP_TIMER **this, int a2, XamlLauncherState *a3, int a4)
{
  XamlLauncherState *v4; // rbx
  bool v6; // zf
  int v7; // ebx
  __int64 v8; // rdx
  struct _TP_TIMER **v9; // rcx
  char v10; // cl
  unsigned int v11; // r8d
  unsigned int v12; // edx
  int started; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
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
        v8 = 344LL;
        goto LABEL_21;
      }
    }
    else
    {
      if ( a4 != 6 )
      {
        if ( a4 == 7 )
        {
          v9 = this + 119;
        }
        else
        {
          if ( a4 == 2 )
          {
            wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
              this + 120,
              0LL);
            if ( StartWindowTelemetry::IsEnabled(v10) )
              XamlLauncherState::StopTrackingCpuUsageOfCriticalProcesses(v4);
            return 0LL;
          }
          if ( a4 == 8 )
          {
            v9 = this + 121;
          }
          else if ( a4 == 3 )
          {
            v9 = this + 122;
          }
          else
          {
            if ( a4 != 4 )
            {
              if ( a4 == 5 )
              {
                v6 = *((_BYTE *)this + 1056) == 0;
                *((_BYTE *)this + 1006) = 1;
                if ( !v6 )
                {
                  v11 = *((_DWORD *)this + 263);
                  v12 = *((_DWORD *)this + 262);
                  *((_BYTE *)this + 1056) = 0;
                  started = XamlLauncherState::ShowStartView((__int64)(this - 2), v12, v11);
                  if ( started < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x17E,
                      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                      (const char *)(unsigned int)started);
                }
              }
              return 0LL;
            }
            v9 = this + 124;
          }
        }
        wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
          v9,
          0LL);
        return 0LL;
      }
      v7 = XamlLauncherState::OnSessionBecameActive((XamlLauncherState *)(this - 5));
      if ( v7 < 0 )
      {
        v8 = 348LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v7);
      }
    }
  }
  else
  {
    v7 = XamlLauncherState::OnCortanaCutoffTimerFired((XamlLauncherState *)(this - 5));
    if ( v7 < 0 )
    {
      v8 = 340LL;
      goto LABEL_21;
    }
  }
  return (unsigned int)v7;
}
