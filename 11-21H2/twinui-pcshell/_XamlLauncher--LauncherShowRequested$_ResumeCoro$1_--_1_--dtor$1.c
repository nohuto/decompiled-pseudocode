/*
 * XREFs of _XamlLauncher::LauncherShowRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801AB8BD
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VXamlLauncher@@@winrt@@QEAA@XZ @ 0x18044A4D0 (--1-$com_ptr@VXamlLauncher@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall XamlLauncher::LauncherShowRequested__ResumeCoro_1_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a2 + 160) + 24LL;
  return winrt::com_ptr<XamlLauncher>::~com_ptr<XamlLauncher>(*(_QWORD *)(a2 + 48));
}
