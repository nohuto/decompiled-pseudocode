/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1_::_1_::dtor$3 @ 0x1801CD786
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$test_data_control@U_tip_AppPrelaunch@@@tip@@QEAA@XZ @ 0x180039960 (--1-$test_data_control@U_tip_AppPrelaunch@@@tip@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync__ResumeCoro_1_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 112) = *(_QWORD *)(a2 + 40) + 144LL;
  tip::test_data_control<_tip_AppPrelaunch>::~test_data_control<_tip_AppPrelaunch>(*(__int64 **)(a2 + 112));
}
