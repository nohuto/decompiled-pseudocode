/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_InitCoro$2 @ 0x1801BA220
 * Callers:
 *     ?DelayedUpdateActivationTimestamp@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@_K@Z @ 0x1801BA85C (-DelayedUpdateActivationTimestamp@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1 @ 0x1801BA2E0 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_1801BA2E0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5)
{
  *(_QWORD *)(a2 + 1169) = a5;
  *(_QWORD *)(a2 + 1177) = a4;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[1168] = 0;
  return winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp__ResumeCoro_1(a2);
}
