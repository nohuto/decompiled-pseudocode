/*
 * XREFs of ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x18034FB90
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x18000AC38 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??1DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18002F640 (--1DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXW4DismissMethod@3@W4InputType@3@@Z @ 0x18002F754 (-StartActivity@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QE.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002F958 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18002FA90 (--0-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18004D9FC (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??1LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18034D300 (--1LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?StartActivity@LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXW4InvokeMethod@3@W4InputType@3@W4StateOnInvoke@3@@Z @ 0x18034F8F0 (-StartActivity@LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CActionCenterExperienceManager::StartSwipe(
        CActionCenterExperienceManager *this,
        __int64 a2,
        struct tagPOINT a3)
{
  __int64 v4; // rdx
  int v5; // eax
  DWORD v6; // edx
  unsigned int v7; // ebx
  int v9; // eax
  DWORD v10; // edx
  int v11[2]; // [rsp+20h] [rbp-E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  if ( *((_DWORD *)this + 30) == 2 )
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v11,
      (__int64)"DismissActionCenter");
    *(_QWORD *)v11 = &NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::`vftable';
    NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::StartActivity((__int64)v11, 5, 2);
    v5 = CActionCenterExperienceManager::Hide((CActionCenterExperienceManager *)((char *)this - 48), v4);
    v7 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20A,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
      NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::~DismissActionCenter((NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter *)v11);
      return v7;
    }
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v11,
      v6);
    NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::~DismissActionCenter((NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter *)v11);
  }
  else
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v11,
      (__int64)"LaunchActionCenter");
    *(_QWORD *)v11 = &NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::`vftable';
    NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity((__int64)v11, 3, 2, 2);
    v9 = CActionCenterExperienceManager::Show((char *)this - 48);
    v7 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x213,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::~LaunchActionCenter((NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter *)v11);
      return v7;
    }
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v11,
      v10);
    NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::~LaunchActionCenter((NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter *)v11);
  }
  return 0LL;
}
