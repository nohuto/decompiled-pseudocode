/*
 * XREFs of _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction_CVirtualDesktopManager___IVirtualDesktop___enum_VirtualDesktopSwitchType_::promise_type_winrt::Windows::Foundation::IAsyncAction_::put_Completed_::_1_::catch$1 @ 0x180607BEE
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction_CVirtualDesktopManager___IVirtualDesktop___enum_VirtualDesktopSwitchType_::promise_type_winrt::Windows::Foundation::IAsyncAction_::put_Completed_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *winrt::to_hresult((_DWORD *)(a2 + 48));
  return 0LL;
}
