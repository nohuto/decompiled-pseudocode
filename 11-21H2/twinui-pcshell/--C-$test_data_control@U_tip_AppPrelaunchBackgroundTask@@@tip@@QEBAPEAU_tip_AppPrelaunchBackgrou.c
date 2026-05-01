/*
 * XREFs of ??C?$test_data_control@U_tip_AppPrelaunchBackgroundTask@@@tip@@QEBAPEAU_tip_AppPrelaunchBackgroundTask@@XZ @ 0x1805BCC68
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::SetStartUpEvent$_ResumeCoro$1 @ 0x1801CAA10 (winrt--Windows--Internal--Shell--implementation--DashboardManager--SetStartUpEvent$_ResumeCoro$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::SetStartUpEvent$_ResumeCoro$1_::_1_::catch$10 @ 0x1801CAD00 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--SetStartUpEvent_ea_1801CAD00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip::test_data_control<_tip_AppPrelaunchBackgroundTask>::operator->(_QWORD *a1)
{
  return (*a1 + 144LL) & -(__int64)(*a1 != 0LL);
}
