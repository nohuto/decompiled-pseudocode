/*
 * XREFs of _CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$11 @ 0x1801DD018
 * Callers:
 *     <none>
 * Callees:
 *     ??1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ @ 0x180085B0C (--1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall CActionCenterExperienceManager::ShowRequested__ResumeCoro_1_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 128) = *(_QWORD *)(a2 + 40) + 152LL;
  winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection::~IVirtualDesktopCollection(*(winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection **)(a2 + 128));
}
