/*
 * XREFs of _XamlLauncher::LauncherDismissRequested$_ResumeCoro$1_::_1_::dtor$22 @ 0x1801FFD9E
 * Callers:
 *     <none>
 * Callees:
 *     ??1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ @ 0x180085B0C (--1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall XamlLauncher::LauncherDismissRequested__ResumeCoro_1_::_1_::dtor_22(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 216) = *(_QWORD *)(a2 + 64) + 96LL;
  winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection::~IVirtualDesktopCollection(*(winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection **)(a2 + 216));
}
