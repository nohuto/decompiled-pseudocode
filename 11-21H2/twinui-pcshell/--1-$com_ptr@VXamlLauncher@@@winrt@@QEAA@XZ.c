/*
 * XREFs of ??1?$com_ptr@VXamlLauncher@@@winrt@@QEAA@XZ @ 0x18044A4D0
 * Callers:
 *     _XamlLauncher::LauncherDismissRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801AB181 (_XamlLauncher--LauncherDismissRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _XamlLauncher::LauncherShowRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801AB8BD (_XamlLauncher--LauncherShowRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _XamlLauncher::SearchDismissRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801AC18E (_XamlLauncher--SearchDismissRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _XamlLauncher::SearchShowRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801AC8C6 (_XamlLauncher--SearchShowRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _XamlLauncher::PublishServices_::_1_::dtor$0 @ 0x180220EC5 (_XamlLauncher--PublishServices_--_1_--dtor$0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ @ 0x18012FF18 (-unconditional_release_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<XamlLauncher>::~com_ptr<XamlLauncher>(__int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<XamlLauncher>::unconditional_release_ref(a1);
  return result;
}
