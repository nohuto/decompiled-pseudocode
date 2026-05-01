/*
 * XREFs of winrt::impl::root_implements_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_4820608d764e205befb540f09a70bd1e____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::NonDelegatingGetRuntimeClassName @ 0x1805B41F8
 * Callers:
 *     winrt::impl::produce_base_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_4820608d764e205befb540f09a70bd1e____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_void_::GetRuntimeClassName @ 0x1805B3FB0 (winrt--impl--produce_base_winrt--Windows--Internal--Shell--SnapComponent--implement_ea_1805B3FB0.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_4820608d764e205befb540f09a70bd1e____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::NonDelegatingGetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF

  try
  {
    v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
    v4 = *v3;
    *v3 = 0LL;
    *a2 = v4;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v9, v5, v6, v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v9);
  }
  return result;
}
