/*
 * XREFs of XamlLauncher::LauncherDismissRequested$_InitCoro$2 @ 0x1801FF668
 * Callers:
 *     ?LauncherDismissRequested@XamlLauncher@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801FFF30 (-LauncherDismissRequested@XamlLauncher@@AEAA-AUfire_and_forget@winrt@@UDismissShellViewRequested.c)
 * Callees:
 *     _XamlLauncher::SearchDismissRequested_::_13_::_parameters_::_parameters_ @ 0x180067EFC (_XamlLauncher--SearchDismissRequested_--_13_--_parameters_--_parameters_.c)
 *     XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x1801FF760 (XamlLauncher--LauncherDismissRequested$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncher::LauncherDismissRequested__InitCoro_2(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  XamlLauncher::SearchDismissRequested_::_13_::_parameters_::_parameters_((_DWORD *)((char *)a2 + 225), a5, a4);
  *(_QWORD *)a2 = XamlLauncher::LauncherDismissRequested__ResumeCoro_1;
  a2[2] = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *((_BYTE *)a2 + 224) = 0;
  return XamlLauncher::LauncherDismissRequested__ResumeCoro_1(a2);
}
