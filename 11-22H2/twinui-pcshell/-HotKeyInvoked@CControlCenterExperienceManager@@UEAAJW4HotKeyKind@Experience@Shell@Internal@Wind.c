/*
 * XREFs of ?HotKeyInvoked@CControlCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x18041F830
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z @ 0x180071C60 (-Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z @ 0x180423140 (-Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z.c)
 *     ?StartControlCenterShowTest@CControlCenterExperienceManager@@AEAAXW4InvokeMethod@ControlCenterUITelemetry@@W4InputType@3@@Z @ 0x180424000 (-StartControlCenterShowTest@CControlCenterExperienceManager@@AEAAXW4InvokeMethod@ControlCenterUI.c)
 *     ?ensure_data@?$tip_test@U_tip_ControlCenterShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ControlCenterShowTest@@@details@tip@@@std@@XZ @ 0x180426B14 (-ensure_data@-$tip_test@U_tip_ControlCenterShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::HotKeyInvoked(__int64 a1, int a2)
{
  _QWORD *v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // eax
  _QWORD *v8; // rbx
  int v9; // eax
  void **v10; // [rsp+58h] [rbp+17h] BYREF
  _BYTE v11[24]; // [rsp+60h] [rbp+1Fh] BYREF
  int v12; // [rsp+78h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+47h] BYREF
  std::_Ref_count_base *v14; // [rsp+90h] [rbp+4Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  if ( !a2 )
  {
    if ( *(_DWORD *)(a1 + 128) != 2 )
    {
      CControlCenterExperienceManager::StartControlCenterShowTest(a1 - 32, 1LL, 5LL);
      v8 = (_QWORD *)tip::tip_test<_tip_ControlCenterShowTest>::ensure_data(a1 + 736);
      v10 = &tip::test_watcher<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>::`vftable';
      wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
        (wil::details::ThreadFailureCallbackHolder *)v11,
        (struct wil::details::IFailureCallback *)&v10,
        0LL,
        *v8 != 0LL);
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v13,
        v8);
      v9 = CControlCenterExperienceManager::Show(
             (CControlCenterExperienceManager *)a1,
             0LL,
             0,
             1u,
             1u,
             1u,
             0LL,
             0LL,
             0LL);
      v5 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x20F,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v9);
        goto LABEL_6;
      }
      goto LABEL_16;
    }
    if ( *(_BYTE *)(a1 + 730) )
    {
      CControlCenterExperienceManager::StartControlCenterShowTest(a1 - 32, 1LL, 5LL);
      v3 = (_QWORD *)tip::tip_test<_tip_ControlCenterShowTest>::ensure_data(a1 + 736);
      v10 = &tip::test_watcher<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>::`vftable';
      wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
        (wil::details::ThreadFailureCallbackHolder *)v11,
        (struct wil::details::IFailureCallback *)&v10,
        0LL,
        *v3 != 0LL);
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v13,
        v3);
      v4 = CControlCenterExperienceManager::Show(
             (CControlCenterExperienceManager *)a1,
             0LL,
             0,
             1u,
             1u,
             1u,
             0LL,
             0LL,
             0LL);
      v5 = v4;
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x204,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v4);
LABEL_6:
        if ( v14 )
          std::_Ref_count_base::_Decref(v14);
        if ( v12 )
          wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v11);
        return v5;
      }
LABEL_16:
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
      if ( v12 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v11);
      return 0LL;
    }
    v7 = CControlCenterExperienceManager::Hide((CControlCenterExperienceManager *)a1, 0LL, 0);
    v5 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x208,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
      return v5;
    }
  }
  return 0LL;
}
