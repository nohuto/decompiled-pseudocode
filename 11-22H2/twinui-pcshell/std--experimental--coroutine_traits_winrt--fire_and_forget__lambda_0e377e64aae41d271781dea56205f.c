/*
 * XREFs of std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_0e377e64aae41d271781dea56205f73a__const___enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&_::promise_type::await_transform_winrt::apartment_context_&_ @ 0x1801FB834
 * Callers:
 *     _lambda_0e377e64aae41d271781dea56205f73a_$_ResumeCoro$1::operator() @ 0x1801FE7B0 (_lambda_0e377e64aae41d271781dea56205f73a_$_ResumeCoro$1--operator().c)
 * Callees:
 *     ??0?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA@AEAUapartment_context@2@PEAUcancellable_promise@2@@Z @ 0x18041667C (--0-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA@AEAUapartment_context@2@PEAUc.c)
 */

__int64 __fastcall std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_0e377e64aae41d271781dea56205f73a__const___enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const___::promise_type::await_transform_winrt::apartment_context___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  winrt::impl::notify_awaiter<winrt::apartment_context &>::notify_awaiter<winrt::apartment_context &>(a2, a3);
  return a2;
}
