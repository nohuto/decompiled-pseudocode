/*
 * XREFs of _CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$9 @ 0x1801DC7F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ @ 0x180085B0C (--1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall CActionCenterExperienceManager::DismissRequested__ResumeCoro_1_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 112) = *(_QWORD *)(a2 + 40) + 104LL;
  winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection::~IVirtualDesktopCollection(*(winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection **)(a2 + 112));
}
