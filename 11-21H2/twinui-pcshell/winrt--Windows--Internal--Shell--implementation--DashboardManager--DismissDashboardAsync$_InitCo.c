/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_InitCoro$2 @ 0x1801C6114
 * Callers:
 *     ?DismissDashboardAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@UDismissShellViewRequestedEventArgs@3UI@WindowsUdk@6@@Z @ 0x1801C672C (-DismissDashboardAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire.c)
 * Callees:
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync_::_13_::_parameters_::_parameters_ @ 0x1801C3F40 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboar_ea_1801C3F40.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_ResumeCoro$1 @ 0x1801C6200 (winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync$_Resume.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync__InitCoro_2(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync_::_13_::_parameters_::_parameters_(
    (_DWORD *)((char *)a2 + 849),
    a5,
    a4);
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync__ResumeCoro_1;
  a2[2] = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *((_BYTE *)a2 + 848) = 0;
  return winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync__ResumeCoro_1(a2);
}
