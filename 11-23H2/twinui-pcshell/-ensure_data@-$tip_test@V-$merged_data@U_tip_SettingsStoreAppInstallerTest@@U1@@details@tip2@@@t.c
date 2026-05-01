/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180249D0C
 * Callers:
 *     ??$start@V?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@0@XZ @ 0x1802332FC (--$start@V-$tip_test@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2.c)
 *     ??0?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z @ 0x180234AD8 (--0-$tip_test@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@1@XZ @ 0x180235D98 (--C-$tip_test@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA-.c)
 *     ??R_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@AEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@AEBUIInspectable@Foundation@67@@Z @ 0x1802375D4 (--R_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@AEBUAppInstallItem@InstallControl@Preview@Sto.c)
 * Callees:
 *     ??0?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@QEAA@XZ @ 0x180234228 (--0-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802350C8 (--1-$com_ptr_t@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@Uerr_return.c)
 *     ?Release@?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@AEAAKXZ @ 0x1802410D0 (-Release@-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1803900AC (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

volatile signed __int32 **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::ensure_data(
        volatile signed __int32 **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rax
  volatile signed __int32 *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x188uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v4 = tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>((__int64)v2);
    v5 = *a1;
    v7 = 0LL;
    *a1 = (volatile signed __int32 *)v4;
    if ( v5 )
      tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>::Release(v5);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>,wil::err_returncode_policy>(&v7);
  }
  return a1;
}
