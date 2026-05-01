/*
 * XREFs of ?OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z @ 0x1801A1F50
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800568DC (-Hide@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B30E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800E562C (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ToastDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXAEBK@Z @ 0x180434DA8 (--$ToastDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 *     ?OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x1804376F0 (-OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ @ 0x1804377D8 (-OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x180438040 (-OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CToastCenterExperienceManager::OnMessage(
        CToastCenterExperienceManager *this,
        int a2,
        CToastCenterExperienceManager *a3,
        __int16 a4)
{
  struct _TP_TIMER **v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
    return 0LL;
  v5 = (struct _TP_TIMER **)((char *)this - 32);
  if ( a3 != (CToastCenterExperienceManager *)((char *)this - 32) )
    return 0LL;
  switch ( a4 )
  {
    case 0:
      v6 = CToastCenterExperienceManager::OnShellReady((CToastCenterExperienceManager *)v5);
      v7 = v6;
      if ( v6 < 0 )
      {
        v10 = 591LL;
LABEL_21:
        v8 = (unsigned int)v6;
        goto LABEL_22;
      }
      return 0LL;
    case 1:
      goto LABEL_19;
    case 2:
      v6 = CToastCenterExperienceManager::OnCriticalNotification(v5);
      v7 = v6;
      if ( v6 < 0 )
      {
        v10 = 600LL;
        goto LABEL_21;
      }
      return 0LL;
    case 3:
      NotificationCenterUITelemetry::NotificationCenterTelemetry::ToastDidntLaunchInSpecifiedTime<unsigned long const &>();
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        v5 + 88,
        0LL);
      v9 = CToastCenterExperienceManager::Hide((CToastCenterExperienceManager *)v5);
      v7 = v9;
      if ( v9 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F6,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      v8 = v7;
      v10 = 604LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)v8);
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x241,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)v7);
      return 0LL;
  }
  if ( a4 != 4 )
  {
    if ( a4 != 5 )
    {
      v7 = -2147418113;
      v10 = 612LL;
      v8 = 2147549183LL;
      goto LABEL_22;
    }
LABEL_19:
    v6 = CToastCenterExperienceManager::OnNewNotification(v5);
    v7 = v6;
    if ( v6 < 0 )
    {
      v10 = 596LL;
      goto LABEL_21;
    }
    return 0LL;
  }
  v6 = CToastCenterExperienceManager::OnDisplayContextChanged((CToastCenterExperienceManager *)v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    v10 = 608LL;
    goto LABEL_21;
  }
  return 0LL;
}
