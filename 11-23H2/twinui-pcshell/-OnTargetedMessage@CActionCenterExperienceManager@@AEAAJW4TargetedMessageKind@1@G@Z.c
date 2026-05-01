/*
 * XREFs of ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180183EB0
 * Callers:
 *     ?OnMessage@CActionCenterExperienceManager@@UEAAJI_K_J@Z @ 0x180183E70 (-OnMessage@CActionCenterExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800177D0 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B30E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnShellReady@CActionCenterExperienceManager@@AEAAJXZ @ 0x180183EE0 (-OnShellReady@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x18019C9EC (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??$ActionCenterDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXAEBK@Z @ 0x18041395C (--$ActionCenterDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUIT.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnTargetedMessage(struct _TP_TIMER **a1, int a2)
{
  int v3; // ebx
  int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        v3 = CActionCenterExperienceManager::OnDpiOrHighContrastChanged((CActionCenterExperienceManager *)a1);
        if ( v3 >= 0 )
          return 0LL;
        v6 = 605LL;
      }
      else
      {
        v3 = -2147418113;
        v6 = 609LL;
      }
    }
    else
    {
      NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterDidntLaunchInSpecifiedTime<unsigned long const &>();
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        a1 + 85,
        0LL);
      v9 = CActionCenterExperienceManager::Hide((CActionCenterExperienceManager *)a1, v7, v8);
      v3 = v9;
      if ( v9 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27B,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      v6 = 601LL;
    }
  }
  else
  {
    v3 = CActionCenterExperienceManager::OnShellReady((CActionCenterExperienceManager *)a1);
    if ( v3 >= 0 )
      return 0LL;
    v6 = 597LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
