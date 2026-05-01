/*
 * XREFs of ??$emplace@V?$test_watcher@U_tip_SearchHideTest@@@tip@@@?$optional@V?$test_watcher@U_tip_SearchHideTest@@@tip@@@std@@QEAAAEAV?$test_watcher@U_tip_SearchHideTest@@@tip@@$$QEAV23@@Z @ 0x18019A2F0
 * Callers:
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18019EF60 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019FA08 (-OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ @ 0x18019FB20 (-OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ.c)
 *     ?RequestSearchAppToHideInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801A0710 (-RequestSearchAppToHideInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?OnSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18038F478 (-OnSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??1?$test_watcher@U_tip_WinXMenuEnumerationTest@@@tip@@QEAA@XZ @ 0x18019BD4C (--1-$test_watcher@U_tip_WinXMenuEnumerationTest@@@tip@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::optional<tip::test_watcher<_tip_SearchHideTest>>::emplace<tip::test_watcher<_tip_SearchHideTest>>(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 64) )
    tip::test_watcher<_tip_WinXMenuEnumerationTest>::~test_watcher<_tip_WinXMenuEnumerationTest>(a1);
  *(_QWORD *)a1 = &tip::test_watcher<_tip_WinXMenuEnumerationTest>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_BYTE *)(a1 + 64) = 1;
  return a1;
}
