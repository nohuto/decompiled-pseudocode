/*
 * XREFs of ?Release@error_info_fallback@impl@winrt@@UEAAIXZ @ 0x1800D7E10
 * Callers:
 *     ?Release@error_info_fallback@impl@winrt@@W7EAAIXZ @ 0x180066540 (-Release@error_info_fallback@impl@winrt@@W7EAAIXZ.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18005BE70 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x18009AF94 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::error_info_fallback::Release(winrt::impl::error_info_fallback *this)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--((volatile signed __int32 *)this + 8);
  if ( !v2 && this )
  {
    winrt::handle_type<winrt::impl::hstring_traits>::close((void **)this + 3);
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    (*(void (__fastcall **)(WPF::HeapBase *, winrt::impl::error_info_fallback *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  }
  return v2;
}
