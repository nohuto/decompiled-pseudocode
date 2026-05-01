/*
 * XREFs of ?watch_errors@?$tip_test@U_tip_SearchFullActivationTest@@@tip@@QEAA?AV?$test_watcher@U_tip_SearchFullActivationTest@@@2@XZ @ 0x1801A3430
 * Callers:
 *     ?Uncloak@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x180045F00 (-Uncloak@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180046E60 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180138C4C (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180144C6C (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActivationMode@Shell@UI@WindowsUdk@3@PEBG@Z @ 0x18019D9F4 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActiv.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18007BE14 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?ensure_data@?$tip_test@U_tip_SearchFullActivationTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SearchFullActivationTest@@@details@tip@@@std@@XZ @ 0x1801A2634 (-ensure_data@-$tip_test@U_tip_SearchFullActivationTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merge.c)
 */

__int64 __fastcall tip::tip_test<_tip_SearchFullActivationTest>::watch_errors(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rbx

  v3 = tip::tip_test<_tip_SearchFullActivationTest>::ensure_data(a1);
  *(_QWORD *)a2 = &tip::test_watcher<_tip_WinXMenuEnumerationTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)(a2 + 8),
    (struct wil::details::IFailureCallback *)a2,
    0LL,
    *v3 != 0LL);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    (_QWORD *)(a2 + 48),
    v3);
  return a2;
}
