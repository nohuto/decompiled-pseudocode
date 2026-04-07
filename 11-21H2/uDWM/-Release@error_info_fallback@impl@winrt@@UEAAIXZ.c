/*
 * XREFs of ?Release@error_info_fallback@impl@winrt@@UEAAIXZ @ 0x1800D3190
 * Callers:
 *     ?Release@error_info_fallback@impl@winrt@@W7EAAIXZ @ 0x1800638C0 (-Release@error_info_fallback@impl@winrt@@W7EAAIXZ.c)
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x18004518C (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18005FA60 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::error_info_fallback::Release(winrt::impl::error_info_fallback *this)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--((volatile signed __int32 *)this + 8);
  if ( !v2 && this )
  {
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)this + 3);
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    (*(void (__fastcall **)(WPF::HeapBase *, winrt::impl::error_info_fallback *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  }
  return v2;
}
