/*
 * XREFs of __anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1_::_1_::catch$101 @ 0x1801C783C
 * Callers:
 *     <none>
 * Callees:
 *     ?complete@?$test_watcher@U_tip_ToggleDashboardExtension@@@tip@@QEAAXXZ @ 0x18004455C (-complete@-$test_watcher@U_tip_ToggleDashboardExtension@@@tip@@QEAAXXZ.c)
 *     ??0?$test_data_control@U_tip_WidgetsAppInstallTIP@@@tip@@IEAA@AEBV?$shared_ptr@V?$test_merged_data@U_tip_WidgetsAppInstallTIP@@@details@tip@@@std@@@Z @ 0x1801C4054 (--0-$test_data_control@U_tip_WidgetsAppInstallTIP@@@tip@@IEAA@AEBV-$shared_ptr@V-$test_merged_da.c)
 *     ??1?$test_data_control@U_tip_SnapFlyoutShowTest@@@tip@@QEAA@XZ @ 0x1801C4700 (--1-$test_data_control@U_tip_SnapFlyoutShowTest@@@tip@@QEAA@XZ.c)
 *     ??C?$test_data_control@U_tip_WidgetsAppInstallTIP@@@tip@@QEBAPEAU_tip_WidgetsAppInstallTIP@@XZ @ 0x1801C489C (--C-$test_data_control@U_tip_WidgetsAppInstallTIP@@@tip@@QEBAPEAU_tip_WidgetsAppInstallTIP@@XZ.c)
 *     ?WebExperienceInstallerFailedAndRetrying@DashboardManagerTelemetry@@SAXXZ @ 0x1801CE240 (-WebExperienceInstallerFailedAndRetrying@DashboardManagerTelemetry@@SAXXZ.c)
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1803198D0 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall _anonymous_namespace_::EnsureWebExperiencePackageInstalled__ResumeCoro_1_::_1_::catch_101(
        wil *a1,
        __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdi
  _DWORD *v5; // rax
  const char *v6; // r9

  v3 = wil::ResultFromCaughtException(a1);
  v4 = *(_QWORD *)(a2 + 104);
  *(_DWORD *)(v4 + 952) = v3;
  tip::test_data_control<_tip_WidgetsAppInstallTIP>::test_data_control<_tip_WidgetsAppInstallTIP>(
    (_QWORD *)(v4 + 960),
    (_QWORD *)(v4 + 112));
  v5 = (_DWORD *)tip::test_data_control<_tip_WidgetsAppInstallTIP>::operator->((_QWORD *)(v4 + 960));
  *(_QWORD *)(v4 + 1792) = v5;
  v5 += 21;
  *(_QWORD *)(v4 + 1808) = v5;
  *v5 = v3;
  tip::test_data_control<_tip_SnapFlyoutShowTest>::~test_data_control<_tip_SnapFlyoutShowTest>((__int64 *)(v4 + 960));
  tip::test_watcher<_tip_ToggleDashboardExtension>::complete(v4 + 64);
  DashboardManagerTelemetry::WebExperienceInstallerFailedAndRetrying();
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 472),
    (void *)0x1B7,
    (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
    v6);
  return 0LL;
}
