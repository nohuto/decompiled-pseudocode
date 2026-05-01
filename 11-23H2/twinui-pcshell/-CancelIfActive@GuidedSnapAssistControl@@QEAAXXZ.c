/*
 * XREFs of ?CancelIfActive@GuidedSnapAssistControl@@QEAAXXZ @ 0x1806880E8
 * Callers:
 *     ?OnWindowMigrationEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIWindowMigrationEventArgs@3456@@Z @ 0x18066B4C0 (-OnWindowMigrationEvent@CSnapAssistControllerBase@@IEAAJPEAUIWindowManagementEvents2@WindowManag.c)
 *     ?QueueSnapAssistDismissal@CSnapAssistControllerBase@@IEAAJXZ @ 0x18066B61C (-QueueSnapAssistDismissal@CSnapAssistControllerBase@@IEAAJXZ.c)
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18066CA10 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?shared_from_this@?$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA?AV?$shared_ptr@VConnectedStandbyHelper@@@2@XZ @ 0x1801F51B0 (-shared_from_this@-$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA-AV-$shared_ptr@V.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     GuidedSnapAssistControl::RunMultitaskingViewTask__lambda_83256061826219130c74760726d0f103___ @ 0x180687648 (GuidedSnapAssistControl--RunMultitaskingViewTask__lambda_83256061826219130c74760726d0f103___.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall GuidedSnapAssistControl::CancelIfActive(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rsi
  int v3; // eax
  char v4; // di
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v10; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+58h] [rbp+10h]

  v2 = this + 5;
  AcquireSRWLockExclusive(this + 5);
  v11 = v2;
  v3 = (*(__int64 (__fastcall **)(PVOID, __int64, char *))(*(_QWORD *)this[3].Ptr + 24LL))(this[3].Ptr, 4LL, &v10);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x27,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\guidedsnapassistcontrol.cpp",
      (const char *)(unsigned int)v3,
      v5);
  if ( (v10 & 4) == 0 || LOBYTE(this[6].Ptr) )
  {
    v4 = 0;
  }
  else
  {
    v4 = 1;
    LOBYTE(this[6].Ptr) = 1;
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( v4 )
  {
    std::enable_shared_from_this<ConnectedStandbyHelper>::shared_from_this((__int64)this, &v7);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v5,
      &v7);
    GuidedSnapAssistControl::RunMultitaskingViewTask__lambda_83256061826219130c74760726d0f103___((__int64)this, &v5);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
  }
}
