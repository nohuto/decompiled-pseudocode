/*
 * XREFs of _winrt::impl::invoke_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool__winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent___winrt::Windows::Foundation::IInspectable_const_&_enum_winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_bool__void__enum_winrt::Windows::Foundation::AsyncStatus__::_1_::catch$5 @ 0x18056BDDE
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DA298 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 *     ??$load_runtime_function@P6AHHHPEAX@_EP6AHHH0@_E@impl@winrt@@YAXPEBDAEAP6AHHHPEAX@_EP6AHHH1@_E@Z @ 0x180341354 (--$load_runtime_function@P6AHHHPEAX@_EP6AHHH0@_E@impl@winrt@@YAXPEBDAEAP6AHHHPEAX@_EP6AHHH1@_E@Z.c)
 */

_BOOL8 __fastcall winrt::impl::invoke_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool__winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent___winrt::Windows::Foundation::IInspectable_const___enum_winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_bool__void__enum_winrt::Windows::Foundation::AsyncStatus__::_1_::catch_5(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = *winrt::to_hresult((_DWORD *)(a2 + 56));
  ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBDAEAP6AHHHPEAX__EP6AHHH1__E_Z(
    v3,
    &`winrt::impl::invoke<winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>,winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>,enum winrt::Windows::Foundation::AsyncStatus>'::`4'::handler);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>,winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>,enum winrt::Windows::Foundation::AsyncStatus>'::`4'::handler)(
    v2,
    0LL,
    0LL);
  return v2 == -2147417848 || v2 == -2147023174 || v2 == -1996357631;
}
