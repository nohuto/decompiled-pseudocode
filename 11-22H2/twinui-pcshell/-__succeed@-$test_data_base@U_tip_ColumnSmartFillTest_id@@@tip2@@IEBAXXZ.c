/*
 * XREFs of ?__succeed@?$test_data_base@U_tip_ColumnSmartFillTest_id@@@tip2@@IEBAXXZ @ 0x180201660
 * Callers:
 *     ?evaluate@_tip_StartMenuInvokeTest@@QEAAXXZ @ 0x180053D5C (-evaluate@_tip_StartMenuInvokeTest@@QEAAXXZ.c)
 *     ?evaluate@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXXZ @ 0x18050278C (-evaluate@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXXZ.c)
 *     ?evaluate@_tip_SnapFlyoutShowTest@@QEAAXXZ @ 0x180665F84 (-evaluate@_tip_SnapFlyoutShowTest@@QEAAXXZ.c)
 *     ?evaluate@_tip_TabTearOutEventTest@@QEAAXXZ @ 0x18066E650 (-evaluate@_tip_TabTearOutEventTest@@QEAAXXZ.c)
 *     ?evaluate@_tip_ColumnSmartFillTest@@QEAAXXZ @ 0x1806744A8 (-evaluate@_tip_ColumnSmartFillTest@@QEAAXXZ.c)
 *     ?evaluate@_tip_SmartFillTest@@QEAAXXZ @ 0x1806745D8 (-evaluate@_tip_SmartFillTest@@QEAAXXZ.c)
 *     ?evaluate@_tip_AppPrelaunch@@QEAAXXZ @ 0x180698B70 (-evaluate@_tip_AppPrelaunch@@QEAAXXZ.c)
 *     ?evaluate@_tip_ToggleDashboardUsingSwipe@@QEAAXXZ @ 0x180698C44 (-evaluate@_tip_ToggleDashboardUsingSwipe@@QEAAXXZ.c)
 *     ?evaluate@_tip_WidgetsAppInstallTIP@@QEAAXXZ @ 0x180698D20 (-evaluate@_tip_WidgetsAppInstallTIP@@QEAAXXZ.c)
 *     ?evaluate@_tip_AltTabShowTest@SwitcherTip@@QEAAXXZ @ 0x1807672B0 (-evaluate@_tip_AltTabShowTest@SwitcherTip@@QEAAXXZ.c)
 *     ?evaluate@_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@QEAAXXZ @ 0x1807773DC (-evaluate@_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@QEAAXXZ.c)
 *     ?evaluate@_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180785898 (-evaluate@_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@wi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip2::test_data_base<_tip_ColumnSmartFillTest_id>::__succeed(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(result + 152) )
  {
    *(_QWORD *)(result + 160) = 0LL;
    *(_WORD *)(result + 154) = 0x8000;
    *(_BYTE *)(result + 152) = 1;
  }
  return result;
}
