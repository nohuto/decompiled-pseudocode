/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync$_InitCoro$2 @ 0x1801CF54C
 * Callers:
 *     ?InitializeAsync@FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1801CF800 (-InitializeAsync@FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync$_ResumeCoro$1 @ 0x1801CF600 (winrt--Windows--Internal--Shell--implementation--FocusSessionComponent--InitializeAsync$_ResumeC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 66) = a4;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 65) = 0;
  return winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::InitializeAsync__ResumeCoro_1(a2);
}
