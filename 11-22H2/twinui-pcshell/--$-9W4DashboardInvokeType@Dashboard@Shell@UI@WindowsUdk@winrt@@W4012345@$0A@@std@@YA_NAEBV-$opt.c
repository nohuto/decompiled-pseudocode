/*
 * XREFs of ??$?9W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@W4012345@$0A@@std@@YA_NAEBV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@0@AEBW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180693714
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180242E90 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::operator!=<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType,enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType,0>(
        __int64 a1,
        _DWORD *a2)
{
  return !*(_BYTE *)(a1 + 4) || *(_DWORD *)a1 != *a2;
}
