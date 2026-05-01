/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180235088
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180235720 (--1-$test_data_control@V-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QE.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802359C0 (--1-$tip_test@V-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x18023DCE0 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180249C48 (-ensure_data@-$tip_test@V-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@A.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@AEAAKXZ @ 0x180241040 (-Release@-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>::Release(v1);
  return result;
}
