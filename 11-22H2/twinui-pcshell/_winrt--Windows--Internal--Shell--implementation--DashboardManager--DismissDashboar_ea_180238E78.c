/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_ResumeCoro$1_::_1_::dtor$6 @ 0x180238E78
 * Callers:
 *     <none>
 * Callees:
 *     ??1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ @ 0x180085B0C (--1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync__ResumeCoro_1_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 200) = *(_QWORD *)(a2 + 72) + 128LL;
  *(_QWORD *)(a2 + 208) = **(_QWORD **)(a2 + 200);
  winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection::~IVirtualDesktopCollection(*(winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection **)(a2 + 208));
}
