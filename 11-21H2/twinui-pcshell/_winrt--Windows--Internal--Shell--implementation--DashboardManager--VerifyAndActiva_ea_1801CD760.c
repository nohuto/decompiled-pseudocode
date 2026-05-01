/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x1801CD760
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$test_watcher@U_tip_SwipeDashboard@@@tip@@QEAA@XZ @ 0x18004319C (--1-$test_watcher@U_tip_SwipeDashboard@@@tip@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync__ResumeCoro_1_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 104) = *(_QWORD *)(a2 + 40) + 80LL;
  tip::test_watcher<_tip_SwipeDashboard>::~test_watcher<_tip_SwipeDashboard>(*(_QWORD *)(a2 + 104));
}
