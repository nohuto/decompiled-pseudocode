/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180235148
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1802334E4 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18023585C (--1-$test_data_control@V-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180235984 (--1-$test_watcher@V-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18024C034 (-start@-$tip_test@V-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@@tip2@@QEAA-AU_GU.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@AEAAKXZ @ 0x1802411F0 (-Release@-$merged_data@U_tip_WidgetsAppInstallTIP@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_WidgetsAppInstallTIP,_tip_WidgetsAppInstallTIP>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_WidgetsAppInstallTIP,_tip_WidgetsAppInstallTIP>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_WidgetsAppInstallTIP,_tip_WidgetsAppInstallTIP>::Release(v1);
  return result;
}
