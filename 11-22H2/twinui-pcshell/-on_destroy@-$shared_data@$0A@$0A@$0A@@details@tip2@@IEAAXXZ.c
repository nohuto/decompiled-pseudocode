/*
 * XREFs of ?on_destroy@?$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ @ 0x1801F0FBC
 * Callers:
 *     ?Release@?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@AEAAKXZ @ 0x180038794 (-Release@-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ?Release@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@AEAAKXZ @ 0x1800868B8 (-Release@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@AEAAKXZ.c)
 *     ??1?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@QEAA@XZ @ 0x1801E89B0 (--1-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@QEAA@XZ @ 0x180221930 (--1-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@QEAA@XZ @ 0x180224D04 (--1-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@QEAA@XZ @ 0x180224D34 (--1-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@QEAA@XZ @ 0x1802296AC (--1-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@QEAA@XZ @ 0x18022A31C (--1-$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@QEAA@XZ @ 0x18022BC44 (--1-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@QEAA@XZ @ 0x180235348 (--1-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@QEAA@XZ @ 0x180260FC8 (--1-$merged_data@U_tip_CopilotHotkeyInvokedTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@QEAA@XZ @ 0x1802897AC (--1-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@QEAA@XZ.c)
 *     ??1?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@QEAA@XZ @ 0x18028A130 (--1-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@QEAA@XZ.c)
 *     ??1?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@QEAA@XZ @ 0x18028B1D0 (--1-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@QEAA@XZ.c)
 *     ??1?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@QEAA@XZ @ 0x18028B6E8 (--1-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@.c)
 *     ??_G?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@QEAAPEAXI@Z @ 0x180466C3C (--_G-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x180086434 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 */

void __fastcall tip2::details::shared_data<0,0,0>::on_destroy(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 232) )
  {
    if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
      tip2::details::shared_data<0,0,0>::complete_helper(a1, 4LL);
  }
}
