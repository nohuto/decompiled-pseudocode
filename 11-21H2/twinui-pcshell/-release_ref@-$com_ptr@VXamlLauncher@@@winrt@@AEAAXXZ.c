/*
 * XREFs of ?release_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ @ 0x18012FF04
 * Callers:
 *     XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x1801AAE40 (XamlLauncher--LauncherDismissRequested$_ResumeCoro$1.c)
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x1801AB3D0 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 *     XamlLauncher::SearchDismissRequested$_ResumeCoro$1 @ 0x1801ABD40 (XamlLauncher--SearchDismissRequested$_ResumeCoro$1.c)
 *     XamlLauncher::SearchShowRequested$_ResumeCoro$1 @ 0x1801AC440 (XamlLauncher--SearchShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<XamlLauncher>::release_ref(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<XamlLauncher>::unconditional_release_ref(a1);
  return result;
}
