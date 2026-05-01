/*
 * XREFs of ??0?$test_data_control@U_tip_WidgetsAppInstallTIP@@@tip@@IEAA@AEBV?$shared_ptr@V?$test_merged_data@U_tip_WidgetsAppInstallTIP@@@details@tip@@@std@@@Z @ 0x1801C4054
 * Callers:
 *     ??C?$tip_test@U_tip_AppPrelaunch@@@tip@@QEAA?AV?$test_data_control@U_tip_AppPrelaunch@@@1@XZ @ 0x1801C48B8 (--C-$tip_test@U_tip_AppPrelaunch@@@tip@@QEAA-AV-$test_data_control@U_tip_AppPrelaunch@@@1@XZ.c)
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 *     __anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1_::_1_::catch$101 @ 0x1801C783C (__anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1_--_1_--catch$101.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 */

_QWORD *__fastcall tip::test_data_control<_tip_WidgetsAppInstallTIP>::test_data_control<_tip_WidgetsAppInstallTIP>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rcx

  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    a1,
    a2);
  tip::details::test_common_data<1>::begin_update(*v3 + 8LL);
  return a1;
}
