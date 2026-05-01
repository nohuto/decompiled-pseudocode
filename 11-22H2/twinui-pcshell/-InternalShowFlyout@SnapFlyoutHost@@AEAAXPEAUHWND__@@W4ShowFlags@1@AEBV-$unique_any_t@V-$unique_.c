/*
 * XREFs of ?InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18067B110
 * Callers:
 *     SnapFlyoutHost::ShowFlyoutAsync$_ResumeCoro$1 @ 0x180227DC0 (SnapFlyoutHost--ShowFlyoutAsync$_ResumeCoro$1.c)
 *     _lambda_1e80c37ddcde987ca8d07444e2bbbfce_::operator() @ 0x18067A258 (_lambda_1e80c37ddcde987ca8d07444e2bbbfce_--operator().c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?is_valid@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEBA_NXZ @ 0x180181DD0 (-is_valid@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@detai.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1801F0838 (-complete@-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802219A8 (--1-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??0?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z @ 0x1802258A0 (--0-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802259C8 (--1-$test_data_control@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180225A00 (--1-$test_watcher@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@1@XZ @ 0x180225A6C (--C-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_da.c)
 *     ?CreateSnapFlyoutInstanceAsync@SnapFlyoutHost@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@W4SnapControlType@SnapComponent@Shell@Internal@45@IW4InputDeviceKind@9UI@WindowsUdk@5@PEAUHMONITOR__@@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@W4ShowFlags@1@@Z @ 0x180226D5C (-CreateSnapFlyoutInstanceAsync@SnapFlyoutHost@@AEAA-AUIAsyncAction@Foundation@Windows@winrt@@PEA.c)
 *     ?StartXamlExplorerHostThread@SnapFlyoutHost@@AEAAXV?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180228AD0 (-StartXamlExplorerHostThread@SnapFlyoutHost@@AEAAXV-$tip_test@V-$merged_data@U_tip_SnapFlyoutSho.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@2@XZ @ 0x180229394 (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@t.c)
 *     ?CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1802E98D6 (-CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ?TryGetMaximizeButtonRectFromDwm@SnapLayoutHelpers@@YA_NPEAUHWND__@@PEAUCRect@Geometry@@@Z @ 0x18067424C (-TryGetMaximizeButtonRectFromDwm@SnapLayoutHelpers@@YA_NPEAUHWND__@@PEAUCRect@Geometry@@@Z.c)
 *     ??$SnapFlyoutInvoke@AEBW4InvocationSource@SnapFlyoutTelemetry@@@SnapFlyoutTelemetry@@SAXAEBW4InvocationSource@0@@Z @ 0x1806784E0 (--$SnapFlyoutInvoke@AEBW4InvocationSource@SnapFlyoutTelemetry@@@SnapFlyoutTelemetry@@SAXAEBW4Inv.c)
 *     ??$TryGetVisibleFlyoutInstance@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180678714 (--$TryGetVisibleFlyoutInstance@V-$unique_any_t@V-$unique_storage@U-$resource_policy_ea_180678714.c)
 *     ?SnapFlyout_RejectShowFlyout@SnapFlyoutTelemetry@@SAXXZ @ 0x18067C86C (-SnapFlyout_RejectShowFlyout@SnapFlyoutTelemetry@@SAXXZ.c)
 *     ?SnapFlyout_ReuseFlyout@SnapFlyoutTelemetry@@SAXXZ @ 0x18067C8D4 (-SnapFlyout_ReuseFlyout@SnapFlyoutTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SnapFlyoutHost::InternalShowFlyout(void **pData, HWND hwnd, int a3)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rdx
  const char *v8; // r9
  __int64 *v9; // rax
  void **v10; // r8
  struct Geometry::CRect *v11; // r8
  int v12; // edi
  __int64 *v13; // rbx
  HMONITOR v14; // rax
  struct tagPOINT Point; // [rsp+50h] [rbp-49h] BYREF
  void *v17; // [rsp+58h] [rbp-41h] BYREF
  _QWORD *v18; // [rsp+60h] [rbp-39h] BYREF
  std::_Ref_count_base *v19; // [rsp+68h] [rbp-31h]
  _BYTE v20[56]; // [rsp+70h] [rbp-29h] BYREF
  RECT rc; // [rsp+A8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v17 = 0LL;
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                 (__int64)&v17,
                 (__int64 *)&Point)
            + 276) = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>((void **)&Point);
  tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::start_and_watch_errors(
    (volatile signed __int32 **)&v17,
    (struct wil::details::IFailureCallback *)v20);
  Point.x = !(a3 & 1);
  SnapFlyoutTelemetry::SnapFlyoutInvoke<enum SnapFlyoutTelemetry::InvocationSource const &>((unsigned int *)&Point, v6);
  SnapFlyoutHost::CancelDismissTimer((__int64)pData, v7);
  if ( !*((_DWORD *)pData + 42) )
  {
    if ( wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::is_valid(pData + 11) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1C3,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
        v8);
    if ( pData[12] )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1C4,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
        v8);
    v9 = tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(
           (__int64 *)&Point,
           (__int64)&v17);
    SnapFlyoutHost::StartXamlExplorerHostThread(pData, v9, v10);
LABEL_11:
    if ( (a3 & 1) != 0
      && (rc = 0LL, SnapLayoutHelpers::TryGetMaximizeButtonRectFromDwm(hwnd, &rc, v11))
      && (Point = 0LL, GetPhysicalCursorPos(&Point), !PtInRect(&rc, Point)) )
    {
      SnapFlyoutTelemetry::SnapFlyout_RejectShowFlyout();
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                    (__int64)&v17,
                    (__int64 *)&v18)
               + 268) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>((void **)&v18);
      tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::complete((__int64 *)&v17);
    }
    else
    {
      v12 = ++*((_DWORD *)pData + 12);
      v13 = tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(
              (__int64 *)&v18,
              (__int64)&v17);
      v14 = MonitorFromWindow(hwnd, 2u);
      SnapFlyoutHost::CreateSnapFlyoutInstanceAsync(
        (__int64)pData,
        (__int64)&Point,
        (__int64)hwnd,
        1,
        v12,
        !(a3 & 1) + 2,
        v14,
        v13,
        a3);
      if ( Point )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&Point);
    }
    goto LABEL_17;
  }
  SnapFlyoutHost::TryGetVisibleFlyoutInstance<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>>(
    (__int64)pData,
    &v18);
  if ( !v18 || *(HWND *)(v18[1] + 328LL) != hwnd )
  {
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
    goto LABEL_11;
  }
  SnapFlyoutTelemetry::SnapFlyout_ReuseFlyout();
  *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                (__int64)&v17,
                (__int64 *)&Point)
           + 272) = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>((void **)&Point);
  tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::complete((__int64 *)&v17);
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
LABEL_17:
  tip2::test_watcher<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_watcher<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>((__int64)v20);
  return tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(&v17);
}
