/*
 * XREFs of _winrt::impl::produce_winrt::Udwm::Transitions::implementation::TransitionState_winrt::Udwm::Transitions::ITransitionState_::Complete_::_1_::catch$1 @ 0x1801013D4
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1800EEDF8 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Udwm::Transitions::implementation::TransitionState_winrt::Udwm::Transitions::ITransitionState_::Complete_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *winrt::to_hresult((_DWORD *)(a2 + 48));
  return 0LL;
}
