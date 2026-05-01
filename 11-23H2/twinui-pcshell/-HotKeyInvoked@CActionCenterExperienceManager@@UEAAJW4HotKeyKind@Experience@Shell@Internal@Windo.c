/*
 * XREFs of ?HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x180418A50
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800177D0 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800178C0 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?StartNotificationCenterShowTest@CActionCenterExperienceManager@@AEAAXW4InvokeMethod@NotificationCenterUITelemetry@@W4InputType@3@@Z @ 0x180040204 (-StartNotificationCenterShowTest@CActionCenterExperienceManager@@AEAAXW4InvokeMethod@Notificatio.c)
 *     ?ensure_data@?$tip_test@U_tip_NotificationCenterShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_NotificationCenterShowTest@@@details@tip@@@std@@XZ @ 0x180040350 (-ensure_data@-$tip_test@U_tip_NotificationCenterShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_mer.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::HotKeyInvoked(__int64 a1, __int64 a2, __int64 a3)
{
  CActionCenterExperienceManager *v4; // rdi
  bool v5; // zf
  CActionCenterExperienceManager *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  _QWORD *v10; // rbx
  int v11; // eax
  int v12[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v13[24]; // [rsp+28h] [rbp-40h] BYREF
  int v14; // [rsp+40h] [rbp-28h]
  __int64 v15; // [rsp+50h] [rbp-18h] BYREF
  std::_Ref_count_base *v16; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !(_DWORD)a2 )
  {
    v4 = (CActionCenterExperienceManager *)(a1 - 32);
    v5 = *(_DWORD *)(a1 + 136) == 2;
    v6 = (CActionCenterExperienceManager *)(a1 - 32);
    if ( v5 )
    {
      v7 = CActionCenterExperienceManager::Hide(v6, a2, a3);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1EC,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v7);
        return v8;
      }
    }
    else
    {
      CActionCenterExperienceManager::StartNotificationCenterShowTest((__int64)v6, 1, 5);
      v10 = tip::tip_test<_tip_NotificationCenterShowTest>::ensure_data((_QWORD *)(a1 + 752));
      *(_QWORD *)v12 = &tip::test_watcher<_tip_MakePhysicalDeviceAccessKeyVolatileTipTest>::`vftable';
      wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
        (wil::details::ThreadFailureCallbackHolder *)v13,
        (struct wil::details::IFailureCallback *)v12,
        0LL,
        *v10 != 0LL);
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v15,
        v10);
      v11 = CActionCenterExperienceManager::Show(v4);
      v8 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F2,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v11);
        if ( v16 )
          std::_Ref_count_base::_Decref(v16);
        if ( v14 )
          wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v13);
        return v8;
      }
      if ( v16 )
        std::_Ref_count_base::_Decref(v16);
      if ( v14 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v13);
    }
  }
  return 0LL;
}
