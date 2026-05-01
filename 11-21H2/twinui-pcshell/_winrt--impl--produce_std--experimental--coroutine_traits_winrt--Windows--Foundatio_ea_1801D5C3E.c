/*
 * XREFs of _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction_ApplicationFlyoutView___winrt::Windows::Foundation::Rect_const_&_enum_winrt::WindowsUdk::UI::Shell::TaskbarLocation_const_&___int64_CorrelationVector_const_&_::promise_type_winrt::Windows::Foundation::IAsyncAction_::put_Completed_::_1_::catch$1 @ 0x1801D5C3E
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DA298 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction_ApplicationFlyoutView___winrt::Windows::Foundation::Rect_const___enum_winrt::WindowsUdk::UI::Shell::TaskbarLocation_const_____int64_CorrelationVector_const___::promise_type_winrt::Windows::Foundation::IAsyncAction_::put_Completed_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *(_DWORD *)winrt::to_hresult(a2 + 48);
  return 0LL;
}
