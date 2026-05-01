/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180223D70
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180223E10 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180223E80 (--1-$test_watcher@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180223EE0 (--1-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1802240D0 (-ensure_data@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@AEBA.c)
 *     ?open@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA_NXZ @ 0x18022BA00 (-open@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA_NXZ.c)
 *     ?open_and_watch_errors@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@2@XZ @ 0x18022BA64 (-open_and_watch_errors@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@.c)
 *     _lambda_017e4516d3db66192a06ba57bc482270_::__lambda_017e4516d3db66192a06ba57bc482270_ @ 0x180687944 (_lambda_017e4516d3db66192a06ba57bc482270_--__lambda_017e4516d3db66192a06ba57bc482270_.c)
 *     ?ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ @ 0x18076EC60 (-ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ.c)
 *     ??1SnapAssistState@@QEAA@XZ @ 0x18078B1EC (--1SnapAssistState@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@AEAAKXZ @ 0x180223FAC (-Release@-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>::Release(v1);
  return result;
}
