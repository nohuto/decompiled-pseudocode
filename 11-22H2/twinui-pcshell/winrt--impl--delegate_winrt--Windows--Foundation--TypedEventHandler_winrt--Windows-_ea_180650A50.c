/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::PhysicalGestureRecognizer_winrt::Windows::UI::Input::ManipulationCompletedEventArgs___lambda_b6ea5fa9d7f8330af75e8a61a2f4c6ef___::Invoke @ 0x180650A50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?FinishSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x1806501E0 (-FinishSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::PhysicalGestureRecognizer_winrt::Windows::UI::Input::ManipulationCompletedEventArgs___lambda_b6ea5fa9d7f8330af75e8a61a2f4c6ef___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  TouchGestureProcessor *v3; // rbx
  signed int v4; // eax
  __int128 v6; // [rsp+28h] [rbp-20h] BYREF

  v3 = *(TouchGestureProcessor **)(a1 + 8);
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 72LL))(a3, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  TouchGestureProcessor::FinishSwipe(v3, (const struct winrt::Windows::Foundation::Point *)&v6);
  return 0LL;
}
