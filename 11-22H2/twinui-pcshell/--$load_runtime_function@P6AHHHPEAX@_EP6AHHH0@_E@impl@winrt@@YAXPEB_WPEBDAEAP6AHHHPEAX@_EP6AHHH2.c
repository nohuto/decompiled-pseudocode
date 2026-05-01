/*
 * XREFs of ??$load_runtime_function@P6AHHHPEAX@_EP6AHHH0@_E@impl@winrt@@YAXPEB_WPEBDAEAP6AHHHPEAX@_EP6AHHH2@_E@Z @ 0x1807862E0
 * Callers:
 *     _winrt::impl::invoke_winrt::Windows::Foundation::AsyncActionCompletedHandler_winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction_TaskViewFrame___IImmersiveMonitor___::promise_type_winrt::Windows::Foundation::IAsyncAction_void__enum_winrt::Windows::Foundation::AsyncStatus__::_1_::catch$5 @ 0x1802C0D87 (_winrt--impl--invoke_winrt--Windows--Foundation--AsyncActionCompletedHandler_winrt-_ea_1802C0D87.c)
 * Callees:
 *     WINRT_IMPL_GetProcAddress @ 0x1801C798C (WINRT_IMPL_GetProcAddress.c)
 *     LoadLibraryW_0 @ 0x1801C8394 (LoadLibraryW_0.c)
 */

void ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEB_WPEBDAEAP6AHHHPEAX__EP6AHHH2__E_Z()
{
  HMODULE LibraryW_0; // rax
  void *ProcAddress; // rax

  if ( !`winrt::impl::invoke<winrt::Windows::Foundation::AsyncActionCompletedHandler,winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,TaskViewFrame *,IImmersiveMonitor *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>,enum winrt::Windows::Foundation::AsyncStatus>'::`4'::handler )
  {
    LibraryW_0 = LoadLibraryW_0(L"combase.dll");
    ProcAddress = WINRT_IMPL_GetProcAddress(LibraryW_0, "RoTransformError");
    if ( !ProcAddress )
      ProcAddress = winrt::impl::fallback_RoTransformError;
    `winrt::impl::invoke<winrt::Windows::Foundation::AsyncActionCompletedHandler,winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,TaskViewFrame *,IImmersiveMonitor *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>,enum winrt::Windows::Foundation::AsyncStatus>'::`4'::handler = (__int64)ProcAddress;
  }
}
