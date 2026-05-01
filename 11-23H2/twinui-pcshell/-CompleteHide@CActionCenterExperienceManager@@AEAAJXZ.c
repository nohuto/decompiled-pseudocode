/*
 * XREFs of ?CompleteHide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180018214
 * Callers:
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800177D0 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800195D0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cfac895c1aa223c03d84cf9f53dd90fa___::Run @ 0x180041EA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cfac895c1aa223c03d84cf9f53dd90fa___--Run.c)
 * Callees:
 *     ?ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ @ 0x18001842C (-ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18002C12C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?ensure_data@?$tip_test@U_tip_NotificationCenterShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_NotificationCenterShowTest@@@details@tip@@@std@@XZ @ 0x180040350 (-ensure_data@-$tip_test@U_tip_NotificationCenterShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_mer.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??B?$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ @ 0x180040728 (--B-$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F194 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?complete@?$tip_test@U_tip_NotificationCenterShowTest@@@tip@@QEAAXXZ @ 0x1802D442C (-complete@-$tip_test@U_tip_NotificationCenterShowTest@@@tip@@QEAAXXZ.c)
 */

__int64 __fastcall CActionCenterExperienceManager::CompleteHide(
        CActionCenterExperienceManager *this,
        __int64 a2,
        __int64 a3)
{
  char *v4; // rsi
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v13; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_DWORD *)this + 42) != 2 )
    goto LABEL_6;
  v4 = (char *)this + 784;
  if ( (unsigned __int8)tip::tip_test<_tip_TouchGestureTest>::operator bool((char *)this + 784) )
  {
    v9 = tip::tip_test<_tip_NotificationCenterShowTest>::ensure_data(v4);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v12,
      v9);
    v10 = v12;
    tip::details::test_common_data<1>::begin_update(v12 + 8);
    v11 = v10 + 192;
    if ( !v10 )
      v11 = 16LL;
    *(_BYTE *)v11 = 1;
    if ( v10 )
    {
      tip::details::test_common_data<1>::end_update(v10 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v12);
    }
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    tip::tip_test<_tip_NotificationCenterShowTest>::complete(v4);
  }
  v5 = CActionCenterExperienceManager::ReturnFocus(this);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x408,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5,
      v12);
  v6 = CSingleViewShellExperience::Hide((char *)this + 128, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x409,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v6,
      v12);
    return v7;
  }
  else
  {
LABEL_6:
    LOBYTE(a3) = 3;
    LOBYTE(a2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
      a2,
      a3);
    result = 0LL;
    *((_OWORD *)this + 44) = 0LL;
  }
  return result;
}
