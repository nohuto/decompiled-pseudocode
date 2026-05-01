/*
 * XREFs of ?OnMessage@CControlCenterExperienceManager@@UEAAJI_K_J@Z @ 0x1800A6890
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z @ 0x18004F0C0 (-Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?OnShellReady@CControlCenterExperienceManager@@AEAAJXZ @ 0x1800A68D4 (-OnShellReady@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActionCenterDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXAEBK@Z @ 0x180345CBC (--$ActionCenterDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUIT.c)
 */

__int64 __fastcall CControlCenterExperienceManager::OnMessage(
        CControlCenterExperienceManager *this,
        int a2,
        CControlCenterExperienceManager *a3,
        __int16 a4)
{
  struct _TP_TIMER **v4; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v4 = (struct _TP_TIMER **)((char *)this - 48);
    if ( a3 == (CControlCenterExperienceManager *)((char *)this - 48) )
    {
      if ( a4 )
      {
        if ( a4 == 1 )
        {
          NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterDidntLaunchInSpecifiedTime<unsigned long const &>(&unk_1806DA278);
          wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
            v4 + 73,
            0LL);
          v8 = CControlCenterExperienceManager::Hide((CControlCenterExperienceManager *)(v4 + 4), 0LL, 0);
          v7 = v8;
          if ( v8 >= 0 )
            return 0LL;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2A2,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
            (const char *)(unsigned int)v8);
          v9 = v7;
          v10 = 617LL;
        }
        else
        {
          v7 = -2147418113;
          v10 = 622LL;
          v9 = 2147549183LL;
        }
      }
      else
      {
        v6 = CControlCenterExperienceManager::OnShellReady((CControlCenterExperienceManager *)v4);
        v7 = v6;
        if ( v6 >= 0 )
          return 0LL;
        v9 = (unsigned int)v6;
        v10 = 613LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)v9);
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x258,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)v7,
        v11);
    }
  }
  return 0LL;
}
