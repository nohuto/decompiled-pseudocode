/*
 * XREFs of ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x180419B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800177D0 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800178C0 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??1DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18001A950 (--1DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ??1LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18001AA20 (--1LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001AAB4 (--0-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?StartActivity@LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXW4InvokeMethod@3@W4InputType@3@W4StateOnInvoke@3@@Z @ 0x18001C2A0 (-StartActivity@LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEA.c)
 *     ?StartActivity@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXW4DismissMethod@3@W4InputType@3@@Z @ 0x18001C3AC (-StartActivity@DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QE.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18001CEA0 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?StartNotificationCenterShowTest@CActionCenterExperienceManager@@AEAAXW4InvokeMethod@NotificationCenterUITelemetry@@W4InputType@3@@Z @ 0x180040204 (-StartNotificationCenterShowTest@CActionCenterExperienceManager@@AEAAXW4InvokeMethod@Notificatio.c)
 *     ?ensure_data@?$tip_test@U_tip_NotificationCenterShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_NotificationCenterShowTest@@@details@tip@@@std@@XZ @ 0x180040350 (-ensure_data@-$tip_test@U_tip_NotificationCenterShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_mer.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CActionCenterExperienceManager::StartSwipe(
        CActionCenterExperienceManager *this,
        __int64 a2,
        struct tagPOINT a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  DWORD v7; // edx
  unsigned int v8; // ebx
  CActionCenterExperienceManager *v10; // rdi
  _QWORD *v11; // rbx
  int v12; // eax
  DWORD v13; // edx
  int v14[2]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v15[24]; // [rsp+28h] [rbp-D8h] BYREF
  int v16; // [rsp+40h] [rbp-C0h]
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  std::_Ref_count_base *v18; // [rsp+58h] [rbp-A8h]
  _QWORD v19[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  if ( *((_DWORD *)this + 30) == 2 )
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v19,
      (__int64)"DismissActionCenter");
    v19[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::`vftable';
    NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::StartActivity((__int64)v19, 5, 2);
    v6 = CActionCenterExperienceManager::Hide((CActionCenterExperienceManager *)((char *)this - 48), v4, v5);
    v8 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x220,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::~DismissActionCenter((NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter *)v19);
      return v8;
    }
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v19,
      v7);
    NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::~DismissActionCenter((NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter *)v19);
  }
  else
  {
    v10 = (CActionCenterExperienceManager *)((char *)this - 48);
    CActionCenterExperienceManager::StartNotificationCenterShowTest((__int64)this - 48, 3, 2);
    v11 = tip::tip_test<_tip_NotificationCenterShowTest>::ensure_data((_QWORD *)this + 92);
    *(_QWORD *)v14 = &tip::test_watcher<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>::`vftable';
    wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
      (wil::details::ThreadFailureCallbackHolder *)v15,
      (struct wil::details::IFailureCallback *)v14,
      0LL,
      *v11 != 0LL);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v17,
      v11);
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v19,
      (__int64)"LaunchActionCenter");
    v19[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::`vftable';
    NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity((__int64)v19, 3, 2, 2);
    v12 = CActionCenterExperienceManager::Show(v10);
    v8 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22C,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
      NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::~LaunchActionCenter((NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter *)v19);
      if ( v18 )
        std::_Ref_count_base::_Decref(v18);
      if ( v16 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v15);
      return v8;
    }
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v19,
      v13);
    NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::~LaunchActionCenter((NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter *)v19);
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
    if ( v16 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v15);
  }
  return 0LL;
}
