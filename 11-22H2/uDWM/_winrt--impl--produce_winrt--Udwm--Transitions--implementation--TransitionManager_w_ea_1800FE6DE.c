/*
 * XREFs of _winrt::impl::produce_winrt::Udwm::Transitions::implementation::TransitionManager_winrt::Udwm::Transitions::ITransitionManager_::PostTransition_::_1_::catch$4 @ 0x1800FE6DE
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1800EEDF8 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Udwm::Transitions::implementation::TransitionManager_winrt::Udwm::Transitions::ITransitionManager_::PostTransition_::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 56) = *winrt::to_hresult((_DWORD *)(a2 + 56));
  return 0LL;
}
