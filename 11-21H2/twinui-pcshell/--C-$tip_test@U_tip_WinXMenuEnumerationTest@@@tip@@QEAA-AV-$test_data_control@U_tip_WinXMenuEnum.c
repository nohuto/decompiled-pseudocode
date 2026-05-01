/*
 * XREFs of ??C?$tip_test@U_tip_WinXMenuEnumerationTest@@@tip@@QEAA?AV?$test_data_control@U_tip_WinXMenuEnumerationTest@@@1@XZ @ 0x1801D78C4
 * Callers:
 *     ?AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ @ 0x1801D8390 (-AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1801DA63C (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DB10C (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18011EA1C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_WinXMenuEnumerationTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_WinXMenuEnumerationTest@@@details@tip@@@std@@XZ @ 0x1801E7EB8 (-ensure_data@-$tip_test@U_tip_WinXMenuEnumerationTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_WinXMenuEnumerationTest>::operator->(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax

  v3 = (_QWORD *)tip::tip_test<_tip_WinXMenuEnumerationTest>::ensure_data(a1);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    a2,
    v3);
  tip::details::test_common_data<0>::begin_update(*a2 + 8LL);
  return a2;
}
