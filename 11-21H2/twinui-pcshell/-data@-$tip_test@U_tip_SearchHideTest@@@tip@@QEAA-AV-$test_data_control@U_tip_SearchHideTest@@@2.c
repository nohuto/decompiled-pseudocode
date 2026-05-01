/*
 * XREFs of ?data@?$tip_test@U_tip_SearchHideTest@@@tip@@QEAA?AV?$test_data_control@U_tip_SearchHideTest@@@2@XZ @ 0x18019C1A0
 * Callers:
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18001FB30 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?HideView@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1800465EC (-HideView@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180144C6C (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ?OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18016A0F0 (-OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActivationMode@Shell@UI@WindowsUdk@3@PEBG@Z @ 0x18019D9F4 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActiv.c)
 *     ?OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019FA08 (-OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ @ 0x18019FB20 (-OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ.c)
 *     ?StartHideTest@UndockedSearchAppExperienceManager@@AEAAX_N@Z @ 0x1801A1900 (-StartHideTest@UndockedSearchAppExperienceManager@@AEAAX_N@Z.c)
 *     ?SuspendAppInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801A1FF4 (-SuspendAppInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?OnSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18038F478 (-OnSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??0?$test_data_control@U_tip_SearchFullActivationTest@@@tip@@IEAA@AEBV?$shared_ptr@V?$test_merged_data@U_tip_SearchFullActivationTest@@@details@tip@@@std@@@Z @ 0x18019B784 (--0-$test_data_control@U_tip_SearchFullActivationTest@@@tip@@IEAA@AEBV-$shared_ptr@V-$test_merge.c)
 *     ?ensure_data@?$tip_test@U_tip_SearchHideTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SearchHideTest@@@details@tip@@@std@@XZ @ 0x1801A2680 (-ensure_data@-$tip_test@U_tip_SearchHideTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@U_t.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_SearchHideTest>::data(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax

  v3 = (_QWORD *)tip::tip_test<_tip_SearchHideTest>::ensure_data();
  tip::test_data_control<_tip_SearchFullActivationTest>::test_data_control<_tip_SearchFullActivationTest>(a2, v3);
  return a2;
}
