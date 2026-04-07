/*
 * XREFs of winrt::impl::implements_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_298ff7ed3f48e3f8f0577bc4e02d17e0___::Release @ 0x1800F8490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x18009AF94 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009E730 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_298ff7ed3f48e3f8f0577bc4e02d17e0___::Release(
        __int64 a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--((volatile signed __int32 *)(a1 + 16));
  if ( !v2 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    if ( *(_QWORD *)(a1 + 8) )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)(a1 + 8));
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
  }
  return v2;
}
