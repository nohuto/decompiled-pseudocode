/*
 * XREFs of XamlLauncher::LauncherShowRequested$_InitCoro$2 @ 0x1801AB2D8
 * Callers:
 *     ?LauncherShowRequested@XamlLauncher@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x1801AB9E8 (-LauncherShowRequested@XamlLauncher@@AEAA-AUfire_and_forget@winrt@@UShowShellViewRequestedEventA.c)
 * Callees:
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x1801AB3D0 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 *     _XamlLauncher::SearchShowRequested_::_14_::_parameters_::_parameters_ @ 0x18044A490 (_XamlLauncher--SearchShowRequested_--_14_--_parameters_--_parameters_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncher::LauncherShowRequested__InitCoro_2(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  XamlLauncher::SearchShowRequested_::_14_::_parameters_::_parameters_((char *)a2 + 1025, a5, a4);
  *(_QWORD *)a2 = XamlLauncher::LauncherShowRequested__ResumeCoro_1;
  a2[2] = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *((_BYTE *)a2 + 1024) = 0;
  return XamlLauncher::LauncherShowRequested__ResumeCoro_1(a2);
}
