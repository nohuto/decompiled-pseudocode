/*
 * XREFs of ??$?0HU?$ratio@$0DM@$00@std@@$0A@@?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@QEAA@AEBV?$duration@HU?$ratio@$0DM@$00@std@@@12@@Z @ 0x1806936E0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_ResumeCoro$1 @ 0x180243DB0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--StartWidgetsOverwatchAsync$_R.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180246660 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::chrono::duration<__int64,std::ratio<1,1000>>::duration<__int64,std::ratio<1,1000>>(
        _QWORD *a1,
        int *a2)
{
  _QWORD *result; // rax

  result = a1;
  *a1 = 60000LL * *a2;
  return result;
}
