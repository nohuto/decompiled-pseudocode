/*
 * XREFs of _XamlLauncher::LauncherDismissRequested$_ResumeCoro$1_::_1_::dtor$2 @ 0x1801FFC08
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180234F54 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall XamlLauncher::LauncherDismissRequested__ResumeCoro_1_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 112) = *(_QWORD *)(a2 + 64) + 40LL;
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(*(_QWORD *)(a2 + 112));
}
