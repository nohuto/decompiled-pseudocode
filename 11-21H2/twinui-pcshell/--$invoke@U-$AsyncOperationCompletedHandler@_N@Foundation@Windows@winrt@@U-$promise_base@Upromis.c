/*
 * XREFs of ??$invoke@U?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@U?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@4@W4AsyncStatus@234@@impl@winrt@@YA_NAEBU?$AsyncOperationCompletedHandler@_N@Foundation@Windows@1@AEBU?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@01@AEBW4AsyncStatus@341@@Z @ 0x1801C2C78
 * Callers:
 *     ?Completed@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXAEBU?$AsyncOperationCompletedHandler@_N@Foundation@Windows@3@@Z @ 0x1801C5E1C (-Completed@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Wind.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801CEE28 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1801CEE28.c)
 * Callees:
 *     ??R?$AsyncOperationCompletedHandler@I@Foundation@Windows@winrt@@QEBAXAEBU?$IAsyncOperation@I@123@AEBW4AsyncStatus@123@@Z @ 0x18056C878 (--R-$AsyncOperationCompletedHandler@I@Foundation@Windows@winrt@@QEBAXAEBU-$IAsyncOperation@I@123.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::impl::invoke<winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>,winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>,enum winrt::Windows::Foundation::AsyncStatus>(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2 + 16;
  try
  {
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<unsigned int>::operator()();
  }
  catch ( ... )
  {
    v3 = *(_DWORD *)winrt::to_hresult(&v5);
    ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBDAEAP6AHHHPEAX__EP6AHHH1__E_Z(
      v4,
      &`winrt::impl::invoke<winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>,winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>,enum winrt::Windows::Foundation::AsyncStatus>'::`4'::handler);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>,winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>,enum winrt::Windows::Foundation::AsyncStatus>'::`4'::handler)(
      v3,
      0LL,
      0LL);
    return v3 != -2147417848 && v3 != -2147023174 && v3 != -1996357631;
  }
  return 1;
}
