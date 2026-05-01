/*
 * XREFs of ??C?$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@tip@@QEAA?AV?$test_data_control@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@1@XZ @ 0x180206B1C
 * Callers:
 *     _lambda_de295fbb3a8b8f22692faabe0885dace_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x180204010 (_lambda_de295fbb3a8b8f22692faabe0885dace_--operator()_winrt--WindowsUdk--UI--Shell-_ea_180204010.c)
 *     ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x180516194 (-SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@.c)
 * Callees:
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x180098A8C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@details@tip@@@std@@XZ @ 0x18020C4D8 (-ensure_data@-$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@.c)
 */

__int64 *__fastcall tip::tip_test<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>::operator->(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v3 = (__int64 *)tip::tip_test<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>::ensure_data();
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = v3[1];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  v5 = *v3;
  *a2 = *v3;
  a2[1] = v3[1];
  tip::details::test_common_data<0>::begin_update(v5 + 8);
  return a2;
}
