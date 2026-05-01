/*
 * XREFs of ?has_ever_started@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x1804F6CEC
 * Callers:
 *     ?start_and_watch_errors@?$tip_test@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@@tip@@QEAA?AV?$test_watcher@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@@2@XZ @ 0x1800489D0 (-start_and_watch_errors@-$tip_test@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@@tip@@QE.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA?AV?$test_watcher@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@2@XZ @ 0x18010FE94 (-start_and_watch_errors@-$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA-AV-.c)
 *     ?ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18050D570 (-ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_QuickSwitchTest@@@tip@@QEAA?AV?$test_watcher@U_tip_QuickSwitchTest@@@2@XZ @ 0x180551030 (-start_and_watch_errors@-$tip_test@U_tip_QuickSwitchTest@@@tip@@QEAA-AV-$test_watcher@U_tip_Quic.c)
 * Callees:
 *     <none>
 */

char __fastcall tip::details::test_common_data<0>::has_ever_started(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(_QWORD *)(a1 + 152) || (*(_DWORD *)(a1 + 56) & 0x100) != 0 )
    return 1;
  return result;
}
