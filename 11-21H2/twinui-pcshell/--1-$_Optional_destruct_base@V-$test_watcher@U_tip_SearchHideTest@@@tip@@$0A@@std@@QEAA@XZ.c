/*
 * XREFs of ??1?$_Optional_destruct_base@V?$test_watcher@U_tip_SearchHideTest@@@tip@@$0A@@std@@QEAA@XZ @ 0x18019BBB4
 * Callers:
 *     ??1?$optional@V?$test_watcher@U_tip_SearchHideTest@@@tip@@@std@@QEAA@XZ @ 0x18019BCB4 (--1-$optional@V-$test_watcher@U_tip_SearchHideTest@@@tip@@@std@@QEAA@XZ.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18019EF60 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019FA08 (-OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ @ 0x18019FB20 (-OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ.c)
 *     ?RequestSearchAppToHideInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801A0710 (-RequestSearchAppToHideInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??1?$test_watcher@U_tip_WinXMenuEnumerationTest@@@tip@@QEAA@XZ @ 0x18019BD4C (--1-$test_watcher@U_tip_WinXMenuEnumerationTest@@@tip@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Optional_destruct_base<tip::test_watcher<_tip_SearchHideTest>,0>::~_Optional_destruct_base<tip::test_watcher<_tip_SearchHideTest>,0>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 64) )
    return tip::test_watcher<_tip_WinXMenuEnumerationTest>::~test_watcher<_tip_WinXMenuEnumerationTest>(a1);
  return result;
}
