/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028B1B0
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18028B07C (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028B200 (--1-$test_data_control@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028B238 (--1-$test_watcher@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028B390 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@.c)
 *     ??1XamlSnapAssistViewHost@@UEAA@XZ @ 0x18076A52C (--1XamlSnapAssistViewHost@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@AEAAKXZ @ 0x18028B268 (-Release@-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>::Release(v1);
  return result;
}
