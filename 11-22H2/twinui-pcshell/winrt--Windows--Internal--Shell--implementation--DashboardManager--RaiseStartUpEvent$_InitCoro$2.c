/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent$_InitCoro$2 @ 0x180240A58
 * Callers:
 *     ?RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4StartUpEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x180240D10 (-RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent$_ResumeCoro$1 @ 0x180240B20 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RaiseStartUpEvent$_ResumeCoro.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        int *a4,
        __int64 a5)
{
  int v5; // r9d

  v5 = *a4;
  *(_QWORD *)(a2 + 114) = a5;
  *(_DWORD *)(a2 + 122) = v5;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 113) = 0;
  return winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent__ResumeCoro_1(a2);
}
