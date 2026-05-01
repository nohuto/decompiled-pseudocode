/*
 * XREFs of ??B?$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@tip@@QEBA_NXZ @ 0x180206AC0
 * Callers:
 *     _lambda_de295fbb3a8b8f22692faabe0885dace_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x180204010 (_lambda_de295fbb3a8b8f22692faabe0885dace_--operator()_winrt--WindowsUdk--UI--Shell-_ea_180204010.c)
 *     ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x180516194 (-SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@.c)
 * Callees:
 *     ?is_running@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x1801BEAF4 (-is_running@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 */

char __fastcall tip::tip_test<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>::operator bool(
        __int64 *a1)
{
  __int64 v1; // rcx
  char result; // al

  v1 = *a1;
  result = 0;
  if ( v1 )
    return tip::details::test_common_data<0>::is_running(v1 + 8);
  return result;
}
