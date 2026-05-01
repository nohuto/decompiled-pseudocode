/*
 * XREFs of ?data@?$tip_test@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@2@XZ @ 0x180235D40
 * Callers:
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x18023DCE0 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 *     _LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1_::_1_::catch$63 @ 0x18023E660 (_LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1_--_1_--catch$63.c)
 * Callees:
 *     ??0?$test_data_control@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180234918 (--0-$test_data_control@V-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@IE.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180249C48 (-ensure_data@-$tip_test@V-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@A.c)
 */

__int64 *__fastcall tip2::tip_test<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::data(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // rax

  v3 = (__int64 *)tip2::tip_test<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::ensure_data();
  tip2::test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>::test_data_control<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>>(
    a2,
    v3);
  return a2;
}
