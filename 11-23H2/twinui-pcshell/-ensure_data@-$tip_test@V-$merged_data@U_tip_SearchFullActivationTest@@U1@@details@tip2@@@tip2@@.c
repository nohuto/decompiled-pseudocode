/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800B8618
 * Callers:
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x180037BE0 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1800381A0 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18003DA50 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 *     ?StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180045AFC (-StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4.c)
 *     ?config_set_identity@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAAXIPEBD@Z @ 0x180046030 (-config_set_identity@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@.c)
 *     _lambda_763cec3dac0cff81e03ecbc4f147f2fe_::operator() @ 0x18004AFF0 (_lambda_763cec3dac0cff81e03ecbc4f147f2fe_--operator().c)
 *     ?Uncloak@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18004D510 (-Uncloak@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1800B7650 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800B7C8C (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ @ 0x1800B9B4C (-OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ.c)
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180112970 (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ?OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180174554 (-OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801747C0 (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@1@XZ @ 0x1804668C8 (--C-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$t.c)
 *     ?OnFullActivationTestTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18046979C (-OnFullActivationTestTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@AEAAKXZ @ 0x1800B724C (-Release@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ??0?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@QEAA@XZ @ 0x1800B72C0 (--0-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1803900AC (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

volatile signed __int32 **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::ensure_data(
        volatile signed __int32 **a1)
{
  LPVOID v3; // rax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rax
  volatile signed __int32 *v6; // rcx

  if ( !*a1 )
  {
    v3 = CoTaskMemAlloc(0x158uLL);
    if ( !v3 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v4);
    v5 = tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>((__int64)v3);
    v6 = *a1;
    *a1 = (volatile signed __int32 *)v5;
    if ( v6 )
      tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>::Release(v6);
  }
  return a1;
}
