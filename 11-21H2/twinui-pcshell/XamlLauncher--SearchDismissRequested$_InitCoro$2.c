/*
 * XREFs of XamlLauncher::SearchDismissRequested$_InitCoro$2 @ 0x1801ABC4C
 * Callers:
 *     ?SearchDismissRequested@XamlLauncher@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801AC2D0 (-SearchDismissRequested@XamlLauncher@@AEAA-AUfire_and_forget@winrt@@UDismissShellViewRequestedEv.c)
 * Callees:
 *     _XamlLauncher::SearchDismissRequested_::_13_::_parameters_::_parameters_ @ 0x1801AA124 (_XamlLauncher--SearchDismissRequested_--_13_--_parameters_--_parameters_.c)
 *     XamlLauncher::SearchDismissRequested$_ResumeCoro$1 @ 0x1801ABD40 (XamlLauncher--SearchDismissRequested$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncher::SearchDismissRequested__InitCoro_2(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  XamlLauncher::SearchDismissRequested_::_13_::_parameters_::_parameters_((_DWORD *)((char *)a2 + 817), a5, a4);
  *(_QWORD *)a2 = XamlLauncher::SearchDismissRequested__ResumeCoro_1;
  a2[2] = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *((_BYTE *)a2 + 816) = 0;
  return XamlLauncher::SearchDismissRequested__ResumeCoro_1(a2);
}
