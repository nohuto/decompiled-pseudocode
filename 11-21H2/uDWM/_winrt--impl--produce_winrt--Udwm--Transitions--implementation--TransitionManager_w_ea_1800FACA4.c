/*
 * XREFs of _winrt::impl::produce_winrt::Udwm::Transitions::implementation::TransitionManager_winrt::Udwm::Transitions::ITransitionManager_::PreTransition_::_1_::catch$1 @ 0x1800FACA4
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1800F1978 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Udwm::Transitions::implementation::TransitionManager_winrt::Udwm::Transitions::ITransitionManager_::PreTransition_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 56) = *winrt::to_hresult((_DWORD *)(a2 + 56));
  return 0LL;
}
