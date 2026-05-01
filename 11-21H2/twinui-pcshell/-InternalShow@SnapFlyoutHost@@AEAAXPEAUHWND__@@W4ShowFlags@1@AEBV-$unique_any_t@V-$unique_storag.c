/*
 * XREFs of ?InternalShow@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805AF4BC
 * Callers:
 *     SnapFlyoutHost::ShowAsync$_ResumeCoro$1 @ 0x1801C0B90 (SnapFlyoutHost--ShowAsync$_ResumeCoro$1.c)
 *     _lambda_9c7f48dca1dc7726f0d5a31e6a2a9389_::operator() @ 0x1805AEEDC (_lambda_9c7f48dca1dc7726f0d5a31e6a2a9389_--operator().c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?TryGetVisibleFlyoutInstance@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180035E88 (-TryGetVisibleFlyoutInstance@SnapFlyoutHost@@AEAA-AV-$shared_ptr@UFlyoutInstanceRecord@SnapFlyou.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x18011FB18 (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180121CB4 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateSnapFlyoutInstanceAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@IPEAUHWND__@@W4ShowFlags@1@V?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@@Z @ 0x1801BFFC4 (-CreateSnapFlyoutInstanceAsync@SnapFlyoutHost@@AEAA-AUfire_and_forget@winrt@@IPEAUHWND__@@W4Show.c)
 *     ?TryGetMaximizeButtonRectFromDwm@SnapLayoutHelpers@@YA_NPEAUHWND__@@PEAUCRect@Geometry@@@Z @ 0x1805A7518 (-TryGetMaximizeButtonRectFromDwm@SnapLayoutHelpers@@YA_NPEAUHWND__@@PEAUCRect@Geometry@@@Z.c)
 *     ??$SnapFlyoutInvoke@AEBW4InvocationSource@SnapFlyoutTelemetry@@@SnapFlyoutTelemetry@@SAXAEBW4InvocationSource@0@@Z @ 0x1805AD734 (--$SnapFlyoutInvoke@AEBW4InvocationSource@SnapFlyoutTelemetry@@@SnapFlyoutTelemetry@@SAXAEBW4Inv.c)
 *     ??0?$test_watcher@U_tip_SnapFlyoutShowTest@@@tip@@IEAA@AEAV?$shared_ptr@V?$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@@std@@@Z @ 0x1805AE504 (--0-$test_watcher@U_tip_SnapFlyoutShowTest@@@tip@@IEAA@AEAV-$shared_ptr@V-$test_merged_data@U_ti.c)
 *     ?CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805AF08C (-CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ?SnapFlyout_RejectShowFlyout@SnapFlyoutTelemetry@@SAXXZ @ 0x1805B075C (-SnapFlyout_RejectShowFlyout@SnapFlyoutTelemetry@@SAXXZ.c)
 *     ?SnapFlyout_ReuseFlyout@SnapFlyoutTelemetry@@SAXXZ @ 0x1805B07C4 (-SnapFlyout_ReuseFlyout@SnapFlyoutTelemetry@@SAXXZ.c)
 *     ?StartXamlExplorerHostThread@SnapFlyoutHost@@AEAAXV?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805B0DF0 (-StartXamlExplorerHostThread@SnapFlyoutHost@@AEAAXV-$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@AE.c)
 *     ?ensure_data@?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@@std@@XZ @ 0x1805B1964 (-ensure_data@-$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SnapFlyoutHost::InternalShow(__int64 a1, HWND a2, int a3)
{
  _QWORD *v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  const char *v9; // r9
  struct Geometry::CRect *v10; // r8
  std::_Ref_count_base *v11; // rbx
  __int64 v12; // rax
  std::_Ref_count_base *v13; // rbx
  __int64 v14; // rax
  int v15; // r8d
  _BYTE v16[8]; // [rsp+30h] [rbp-59h] BYREF
  struct tagPOINT Point; // [rsp+38h] [rbp-51h] BYREF
  std::_Ref_count_base *v18; // [rsp+40h] [rbp-49h]
  std::_Ref_count_base *v19[2]; // [rsp+48h] [rbp-41h] BYREF
  _BYTE v20[8]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v21[24]; // [rsp+68h] [rbp-21h] BYREF
  int v22; // [rsp+80h] [rbp-9h]
  __int64 v23; // [rsp+90h] [rbp+7h] BYREF
  std::_Ref_count_base *v24; // [rsp+98h] [rbp+Fh]
  RECT rc; // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  *(_OWORD *)v19 = 0LL;
  v6 = (_QWORD *)tip::tip_test<_tip_SnapFlyoutShowTest>::ensure_data(v19);
  tip::details::test_common_data<1>::start(*v6 + 8LL, &rc);
  tip::test_watcher<_tip_SnapFlyoutShowTest>::test_watcher<_tip_SnapFlyoutShowTest>(
    (struct wil::details::IFailureCallback *)v20,
    v19);
  if ( v19[1] )
    std::_Ref_count_base::_Decref(v19[1]);
  Point.x = !(a3 & 1);
  SnapFlyoutTelemetry::SnapFlyoutInvoke<enum SnapFlyoutTelemetry::InvocationSource const &>((unsigned int *)&Point, v7);
  SnapFlyoutHost::CancelDismissTimer(a1, v8);
  if ( !*(_DWORD *)(a1 + 136) )
  {
    if ( (unsigned __int64)(*(_QWORD *)(a1 + 88) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x128,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
        v9);
    if ( *(_QWORD *)(a1 + 104) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x129,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
        v9);
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &Point,
      &v23);
    SnapFlyoutHost::StartXamlExplorerHostThread(a1, &Point);
LABEL_21:
    if ( (a3 & 1) != 0
      && (rc = 0LL, SnapLayoutHelpers::TryGetMaximizeButtonRectFromDwm(a2, &rc, v10))
      && (Point = 0LL, GetPhysicalCursorPos(&Point), !PtInRect(&rc, Point)) )
    {
      SnapFlyoutTelemetry::SnapFlyout_RejectShowFlyout();
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        v19,
        &v23);
      v13 = v19[0];
      tip::details::test_common_data<1>::begin_update((__int64)v19[0] + 8);
      v14 = (__int64)v13 + 154;
      if ( !v13 )
        v14 = 10LL;
      *(_BYTE *)v14 = 1;
      if ( v13 )
      {
        tip::details::test_common_data<1>::end_update((__int64)v13 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(v19);
      }
      if ( v19[1] )
        std::_Ref_count_base::_Decref(v19[1]);
      tip::details::test_common_data<1>::complete(v23 + 8);
    }
    else
    {
      ++*(_DWORD *)(a1 + 48);
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        &rc,
        &v23);
      SnapFlyoutHost::CreateSnapFlyoutInstanceAsync(a1, v16, v15, (int)a2, a3, (__int64)&rc);
    }
    goto LABEL_32;
  }
  SnapFlyoutHost::TryGetVisibleFlyoutInstance(a1, &Point);
  if ( !*(_QWORD *)&Point || *(HWND *)(*(_QWORD *)(*(_QWORD *)&Point + 16LL) + 288LL) != a2 )
  {
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
    goto LABEL_21;
  }
  SnapFlyoutTelemetry::SnapFlyout_ReuseFlyout();
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    v19,
    &v23);
  v11 = v19[0];
  tip::details::test_common_data<1>::begin_update((__int64)v19[0] + 8);
  v12 = (__int64)v11 + 158;
  if ( !v11 )
    v12 = 14LL;
  *(_BYTE *)v12 = 1;
  if ( v11 )
  {
    tip::details::test_common_data<1>::end_update((__int64)v11 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(v19);
  }
  if ( v19[1] )
    std::_Ref_count_base::_Decref(v19[1]);
  tip::details::test_common_data<1>::complete(v23 + 8);
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
LABEL_32:
  if ( v24 )
    std::_Ref_count_base::_Decref(v24);
  if ( v22 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v21);
}
