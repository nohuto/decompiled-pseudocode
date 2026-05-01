/*
 * XREFs of ??1?$test_watcher@U_tip_WinXMenuEnumerationTest@@@tip@@QEAA@XZ @ 0x18019BD4C
 * Callers:
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18001FB30 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?Uncloak@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x180045F00 (-Uncloak@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180046E60 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180138C4C (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180144C6C (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ??$emplace@V?$test_watcher@U_tip_SearchHideTest@@@tip@@@?$optional@V?$test_watcher@U_tip_SearchHideTest@@@tip@@@std@@QEAAAEAV?$test_watcher@U_tip_SearchHideTest@@@tip@@$$QEAV23@@Z @ 0x18019A2F0 (--$emplace@V-$test_watcher@U_tip_SearchHideTest@@@tip@@@-$optional@V-$test_watcher@U_tip_SearchH.c)
 *     ??1?$_Optional_destruct_base@V?$test_watcher@U_tip_SearchHideTest@@@tip@@$0A@@std@@QEAA@XZ @ 0x18019BBB4 (--1-$_Optional_destruct_base@V-$test_watcher@U_tip_SearchHideTest@@@tip@@$0A@@std@@QEAA@XZ.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActivationMode@Shell@UI@WindowsUdk@3@PEBG@Z @ 0x18019D9F4 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActiv.c)
 *     _UndockedSearchAppExperienceManager::ActivateAppAsync_::_1_::dtor$4 @ 0x18019E418 (_UndockedSearchAppExperienceManager--ActivateAppAsync_--_1_--dtor$4.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18019EF60 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019FA08 (-OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ @ 0x18019FB20 (-OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ.c)
 *     ?RequestSearchAppToHideInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801A0710 (-RequestSearchAppToHideInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 *     __anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801C7550 (__anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _UndockedSearchAppExperienceManager::Hide_::_1_::dtor$2 @ 0x1802149EB (_UndockedSearchAppExperienceManager--Hide_--_1_--dtor$2.c)
 *     _UndockedSearchAppExperienceManager::PositionSearchAppWindow_::_1_::dtor$0 @ 0x180217852 (_UndockedSearchAppExperienceManager--PositionSearchAppWindow_--_1_--dtor$0.c)
 *     ?OnSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18038F478 (-OnSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DB10C (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall tip::test_watcher<_tip_WinXMenuEnumerationTest>::~test_watcher<_tip_WinXMenuEnumerationTest>(
        __int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 56);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
