/*
 * XREFs of ??$invoke@U?$AsyncOperationCompletedHandler@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@U?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@34@AEAUMeetAndChatFallbackContent@7834@@experimental@std@@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@4@W4AsyncStatus@234@@impl@winrt@@YA_NAEBU?$AsyncOperationCompletedHandler@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@1@AEBU?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@34@AEAUMeetAndChatFallbackContent@7834@@experimental@std@@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@01@AEBW4AsyncStatus@341@@Z @ 0x1806C70D8
 * Callers:
 *     ?Completed@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@34@AEAUMeetAndChatFallbackContent@7834@@experimental@std@@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXAEBU?$AsyncOperationCompletedHandler@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x1806C7848 (-Completed@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IVectorView@UMe.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@34@AEAUMeetAndChatFallbackContent@7834@@experimental@std@@U?$IAsyncOperation@U?$IVectorView@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1806C8A68 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1806C8A68.c)
 * Callees:
 *     ??R?$AsyncOperationCompletedHandler@I@Foundation@Windows@winrt@@QEBA@AEBU?$IAsyncOperation@I@123@AEBW4AsyncStatus@123@@Z @ 0x1802E7638 (--R-$AsyncOperationCompletedHandler@I@Foundation@Windows@winrt@@QEBA@AEBU-$IAsyncOperation@I@123.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::impl::invoke<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,winrt::Windows::Internal::Shell::MeetAndChatFallbackContent &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,void>,enum winrt::Windows::Foundation::AsyncStatus>(
        _QWORD *a1,
        __int64 a2,
        unsigned int *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2 + 16;
  try
  {
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<unsigned int>::operator()(a1, &v7, a3);
  }
  catch ( ... )
  {
    v4 = *winrt::to_hresult(&v7);
    ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBGPEBDAEAP6AHHHPEAX__EP6AHHH2__E_Z(
      v6,
      v5,
      &`winrt::impl::invoke<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,winrt::Windows::Internal::Shell::MeetAndChatFallbackContent &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,void>,enum winrt::Windows::Foundation::AsyncStatus>'::`4'::handler);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,winrt::Windows::Internal::Shell::MeetAndChatFallbackContent &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::MeetAndChatFallbackProp>>,void>,enum winrt::Windows::Foundation::AsyncStatus>'::`4'::handler)(
      v4,
      0LL,
      0LL);
    return v4 != -2147417848 && v4 != -2147023174 && v4 != -1996357631;
  }
  return 1;
}
