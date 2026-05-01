/*
 * XREFs of ??$start@V?$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@tip@@@tip@@YA?AV?$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@0@XZ @ 0x180206268
 * Callers:
 *     _lambda_de295fbb3a8b8f22692faabe0885dace_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x180204010 (_lambda_de295fbb3a8b8f22692faabe0885dace_--operator()_winrt--WindowsUdk--UI--Shell-_ea_180204010.c)
 * Callees:
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098DD0 (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?ensure_data@?$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@details@tip@@@std@@XZ @ 0x18020C4D8 (-ensure_data@-$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@.c)
 */

_QWORD *__fastcall tip::start<tip::tip_test<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>(
        _QWORD *a1)
{
  _QWORD *v2; // rax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = (_QWORD *)tip::tip_test<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>::ensure_data();
  tip::details::test_common_data<0>::start(*v2 + 8LL, &v4);
  return a1;
}
