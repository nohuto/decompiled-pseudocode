/*
 * XREFs of ??1?$com_ptr@VXamlLauncher@@@winrt@@QEAA@XZ @ 0x18006DF94
 * Callers:
 *     _XamlLauncher::LauncherDismissRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801FFBE2 (_XamlLauncher--LauncherDismissRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _XamlLauncher::LauncherShowRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1802004D6 (_XamlLauncher--LauncherShowRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _XamlLauncher::SearchDismissRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x180200C9A (_XamlLauncher--SearchDismissRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _XamlLauncher::SearchShowRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1802012D2 (_XamlLauncher--SearchShowRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _XamlLauncher::InitializeHolographicContextIdentifier_::_1_::dtor$0 @ 0x1802BB91D (_XamlLauncher--InitializeHolographicContextIdentifier_--_1_--dtor$0.c)
 *     _XamlLauncher::PublishServices_::_1_::dtor$0 @ 0x1802BCC09 (_XamlLauncher--PublishServices_--_1_--dtor$0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ @ 0x1801060D8 (-unconditional_release_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<XamlLauncher>::~com_ptr<XamlLauncher>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<XamlLauncher>::unconditional_release_ref();
  return result;
}
