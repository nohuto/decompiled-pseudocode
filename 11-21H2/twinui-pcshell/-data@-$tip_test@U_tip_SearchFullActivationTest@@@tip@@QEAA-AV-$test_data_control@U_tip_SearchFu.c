/*
 * XREFs of ?data@?$tip_test@U_tip_SearchFullActivationTest@@@tip@@QEAA?AV?$test_data_control@U_tip_SearchFullActivationTest@@@2@XZ @ 0x18019C174
 * Callers:
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18001FB30 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180045B90 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180046E60 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180138C4C (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180144C6C (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ?OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18016A0F0 (-OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     _lambda_cad582326f08631f2948fcf147cbafec_::operator() @ 0x18019C860 (_lambda_cad582326f08631f2948fcf147cbafec_--operator().c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActivationMode@Shell@UI@WindowsUdk@3@PEBG@Z @ 0x18019D9F4 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActiv.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18019EF60 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnFullActivationTestTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019F980 (-OnFullActivationTestTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ @ 0x18019FB20 (-OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ.c)
 *     ?StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1801A168C (-StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4.c)
 * Callees:
 *     ??0?$test_data_control@U_tip_SearchFullActivationTest@@@tip@@IEAA@AEBV?$shared_ptr@V?$test_merged_data@U_tip_SearchFullActivationTest@@@details@tip@@@std@@@Z @ 0x18019B784 (--0-$test_data_control@U_tip_SearchFullActivationTest@@@tip@@IEAA@AEBV-$shared_ptr@V-$test_merge.c)
 *     ?ensure_data@?$tip_test@U_tip_SearchFullActivationTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SearchFullActivationTest@@@details@tip@@@std@@XZ @ 0x1801A2634 (-ensure_data@-$tip_test@U_tip_SearchFullActivationTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merge.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_SearchFullActivationTest>::data(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax

  v3 = (_QWORD *)tip::tip_test<_tip_SearchFullActivationTest>::ensure_data();
  tip::test_data_control<_tip_SearchFullActivationTest>::test_data_control<_tip_SearchFullActivationTest>(a2, v3);
  return a2;
}
