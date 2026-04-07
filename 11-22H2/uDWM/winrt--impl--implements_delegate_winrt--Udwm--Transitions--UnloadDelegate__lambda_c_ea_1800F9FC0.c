/*
 * XREFs of winrt::impl::implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_c60948a4075e9d25cd4406f3dd63722d___::Release @ 0x1800F9FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x18009AF94 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     winrt::impl::delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_c60948a4075e9d25cd4406f3dd63722d___::_scalar_deleting_destructor_ @ 0x1800F9394 (winrt--impl--delegate_winrt--Udwm--Transitions--UnloadDelegate__lambda_c60948a4075e9d25cd4406f3d.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_c60948a4075e9d25cd4406f3dd63722d___::Release(
        __int64 a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--((volatile signed __int32 *)(a1 + 24));
  if ( !v2 && a1 )
    winrt::impl::delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_c60948a4075e9d25cd4406f3dd63722d___::_scalar_deleting_destructor_(a1);
  return v2;
}
