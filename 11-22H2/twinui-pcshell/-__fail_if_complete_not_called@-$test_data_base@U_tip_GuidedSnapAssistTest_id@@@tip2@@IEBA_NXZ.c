/*
 * XREFs of ?__fail_if_complete_not_called@?$test_data_base@U_tip_GuidedSnapAssistTest_id@@@tip2@@IEBA_NXZ @ 0x180201550
 * Callers:
 *     ?evaluate@_tip_StartMenuInvokeTest@@QEAAXXZ @ 0x180053D5C (-evaluate@_tip_StartMenuInvokeTest@@QEAAXXZ.c)
 *     ?evaluate@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXXZ @ 0x18050278C (-evaluate@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXXZ.c)
 *     ?evaluate@_tip_SnapFlyoutShowTest@@QEAAXXZ @ 0x180665F84 (-evaluate@_tip_SnapFlyoutShowTest@@QEAAXXZ.c)
 *     ?evaluate@_tip_GuidedSnapAssistTest@@QEAAXXZ @ 0x18066E4BC (-evaluate@_tip_GuidedSnapAssistTest@@QEAAXXZ.c)
 *     ?evaluate@_tip_TabTearOutEventTest@@QEAAXXZ @ 0x18066E650 (-evaluate@_tip_TabTearOutEventTest@@QEAAXXZ.c)
 *     ?evaluate@_tip_ColumnSmartFillTest@@QEAAXXZ @ 0x1806744A8 (-evaluate@_tip_ColumnSmartFillTest@@QEAAXXZ.c)
 *     ?evaluate@_tip_SmartFillTest@@QEAAXXZ @ 0x1806745D8 (-evaluate@_tip_SmartFillTest@@QEAAXXZ.c)
 *     ?evaluate@_tip_AppPrelaunch@@QEAAXXZ @ 0x180698B70 (-evaluate@_tip_AppPrelaunch@@QEAAXXZ.c)
 *     ?evaluate@_tip_ToggleDashboardUsingSwipe@@QEAAXXZ @ 0x180698C44 (-evaluate@_tip_ToggleDashboardUsingSwipe@@QEAAXXZ.c)
 *     ?evaluate@_tip_AltTabShowTest@SwitcherTip@@QEAAXXZ @ 0x1807672B0 (-evaluate@_tip_AltTabShowTest@SwitcherTip@@QEAAXXZ.c)
 *     ?evaluate@_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@QEAAXXZ @ 0x1807773DC (-evaluate@_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall tip2::test_data_base<_tip_GuidedSnapAssistTest_id>::__fail_if_complete_not_called(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(v1 + 56) & 0x200) != 0 )
    return 0;
  if ( !*(_BYTE *)(v1 + 152) )
  {
    *(_QWORD *)(v1 + 160) = 0LL;
    *(_WORD *)(v1 + 154) = 16385;
    *(_BYTE *)(v1 + 152) = 3;
  }
  return 1;
}
