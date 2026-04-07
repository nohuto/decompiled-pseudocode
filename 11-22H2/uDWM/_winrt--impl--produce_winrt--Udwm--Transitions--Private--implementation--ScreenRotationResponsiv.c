/*
 * XREFs of _winrt::impl::produce_winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler_winrt::Udwm::Transitions::ITransitionHandler_::Cancel_::_1_::catch$1 @ 0x180067218
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1800EEDF8 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler_winrt::Udwm::Transitions::ITransitionHandler_::Cancel_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *(_DWORD *)winrt::to_hresult(a2 + 48);
  return 0LL;
}
