/*
 * XREFs of ??0?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA@AEAUapartment_context@2@PEAUcancellable_promise@2@@Z @ 0x18041667C
 * Callers:
 *     std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_0e377e64aae41d271781dea56205f73a__const___enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&_::promise_type::await_transform_winrt::apartment_context_&_ @ 0x1801FB834 (std--experimental--coroutine_traits_winrt--fire_and_forget__lambda_0e377e64aae41d271781dea56205f.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::notify_awaiter<winrt::apartment_context &>::notify_awaiter<winrt::apartment_context &>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a2;
  *(_QWORD *)a1 = *a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *(_DWORD *)(a1 + 8) = *((_DWORD *)a2 + 2);
  result = a1;
  *(_DWORD *)(a1 + 16) = 0;
  return result;
}
