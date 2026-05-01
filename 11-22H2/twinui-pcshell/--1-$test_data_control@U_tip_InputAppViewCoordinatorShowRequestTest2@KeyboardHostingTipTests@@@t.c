/*
 * XREFs of ??1?$test_data_control@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@tip@@QEAA@XZ @ 0x180206A60
 * Callers:
 *     _lambda_de295fbb3a8b8f22692faabe0885dace_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x180204010 (_lambda_de295fbb3a8b8f22692faabe0885dace_--operator()_winrt--WindowsUdk--UI--Shell-_ea_180204010.c)
 *     ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x180516194 (-SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@.c)
 *     _TouchEdgeGestureProcessor::InputGestureOperationStarted_::_1_::dtor$14 @ 0x180654E60 (_TouchEdgeGestureProcessor--InputGestureOperationStarted_--_1_--dtor$14.c)
 *     _TouchEdgeGestureProcessor::InputGestureOperationStarted_::_1_::dtor$15 @ 0x180654E6C (_TouchEdgeGestureProcessor--InputGestureOperationStarted_--_1_--dtor$15.c)
 *     _TouchEdgeGestureProcessor::InputGestureOperationStarted_::_1_::dtor$17 @ 0x180654E84 (_TouchEdgeGestureProcessor--InputGestureOperationStarted_--_1_--dtor$17.c)
 *     _CLauncherTipContextMenu::_EnumerateAndBuildMenu_::_1_::dtor$11 @ 0x1806DF104 (_CLauncherTipContextMenu--_EnumerateAndBuildMenu_--_1_--dtor$11.c)
 * Callees:
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x1800BD3E0 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 */

void __fastcall tip::test_data_control<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>::~test_data_control<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>(
        __int64 *a1)
{
  __int64 v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip::details::test_common_data<0>::end_update(v2 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(a1);
  }
  v3 = (std::_Ref_count_base *)a1[1];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
