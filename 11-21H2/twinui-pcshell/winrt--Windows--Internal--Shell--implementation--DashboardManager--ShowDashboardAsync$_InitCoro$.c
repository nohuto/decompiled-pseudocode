/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_InitCoro$2 @ 0x1801CAE34
 * Callers:
 *     ?ShowDashboardAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@UShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@@Z @ 0x1801CB6F8 (-ShowDashboardAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_an.c)
 * Callees:
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync_::_21_::_parameters_::_parameters_ @ 0x1801C3F24 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync_--_21_--_.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x1801CAF20 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync__InitCoro_2(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync_::_21_::_parameters_::_parameters_(
    (_DWORD *)((char *)a2 + 1313),
    a5,
    a4);
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync__ResumeCoro_1;
  a2[2] = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *((_BYTE *)a2 + 1312) = 0;
  return winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync__ResumeCoro_1(a2);
}
