/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync$_ResumeCoro$1_::_1_::catch$11 @ 0x1801CF776
 * Callers:
 *     <none>
 * Callees:
 *     ??1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ @ 0x180085B0C (--1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4FocusSessionThemeManager@Shell@Internal@Windows@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1801BF420 (--4FocusSessionThemeManager@Shell@Internal@Windows@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180392010 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18074BBF4 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync__ResumeCoro_1_::_1_::catch_11(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  const char *v4; // r9
  wil *v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rcx

  v3 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(v3 + 56) = 0LL;
  winrt::Windows::Internal::Shell::FocusSessionThemeManager::operator=(
    (winrt::Windows::Foundation::IUnknown *)(*(_QWORD *)(v3 + 66) + 96LL),
    (winrt::Windows::Foundation::IUnknown *)(v3 + 56));
  winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection::~IVirtualDesktopCollection((winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *)(v3 + 56));
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x38,
    (unsigned int)"pcshell\\twinui\\focussessioncomponent\\lib\\focussessioncomponent.cpp",
    v4);
  v6 = wil::ResultFromCaughtException(v5);
  MicrosoftTelemetryAssertTriggeredArgs(v7, v6);
  return 0LL;
}
