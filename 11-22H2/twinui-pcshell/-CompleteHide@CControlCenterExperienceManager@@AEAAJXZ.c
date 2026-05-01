/*
 * XREFs of ?CompleteHide@CControlCenterExperienceManager@@AEAAJXZ @ 0x18041E478
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e28d7d1a5cb321cb0de231b4cced5c98___::Run @ 0x1801DFB80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e28d7d1a5cb321cb0de231b4cced5c98___--Run.c)
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180420650 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18002C12C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??B?$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ @ 0x180040728 (--B-$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?complete@?$tip_test@U_tip_NotificationCenterShowTest@@@tip@@QEAAXXZ @ 0x1802D442C (-complete@-$tip_test@U_tip_NotificationCenterShowTest@@@tip@@QEAAXXZ.c)
 *     ??$?0$$V@EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18041B580 (--$-0$$V@EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U-$integral_const.c)
 *     ??1EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041DE88 (--1EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ?ReturnFocus@CControlCenterExperienceManager@@AEAAJXZ @ 0x180422DC0 (-ReturnFocus@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1804242B0 (-Stop@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?WasVisible@EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x1804268EC (-WasVisible@EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_ControlCenterShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ControlCenterShowTest@@@details@tip@@@std@@XZ @ 0x180426B14 (-ensure_data@-$tip_test@U_tip_ControlCenterShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::CompleteHide(CControlCenterExperienceManager *this, char a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // [rsp+20h] [rbp-168h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-160h]
  _BYTE v12[320]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  ControlCenterUITelemetry::ControlCenterTelemetry::EM_CompleteHide::EM_CompleteHide((__int64)v12, a2);
  if ( *((_DWORD *)this + 40) != 2 )
    goto LABEL_14;
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_CompleteHide::WasVisible((ControlCenterUITelemetry::ControlCenterTelemetry::EM_CompleteHide *)v12);
  if ( tip::tip_test<_tip_TouchGestureTest>::operator bool((__int64 *)this + 96) )
  {
    v3 = (_QWORD *)tip::tip_test<_tip_ControlCenterShowTest>::ensure_data((char *)this + 768);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v10,
      v3);
    v4 = v10;
    tip::details::test_common_data<1>::begin_update(v10 + 8);
    v5 = v4 + 192;
    if ( !v4 )
      v5 = 16LL;
    *(_BYTE *)v5 = 1;
    if ( v4 )
    {
      tip::details::test_common_data<1>::end_update(v4 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v10);
    }
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    tip::tip_test<_tip_NotificationCenterShowTest>::complete((__int64 *)this + 96);
  }
  v6 = CControlCenterExperienceManager::ReturnFocus(this);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4DD,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  v7 = CSingleViewShellExperience::Hide((__int64)this + 120, 0LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4DE,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  }
  else
  {
LABEL_14:
    *(_OWORD *)((char *)this + 664) = 0LL;
    wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v12, 0LL);
    v8 = 0;
  }
  ControlCenterUITelemetry::ControlCenterTelemetry::EM_CompleteHide::~EM_CompleteHide((ControlCenterUITelemetry::ControlCenterTelemetry::EM_CompleteHide *)v12);
  return v8;
}
