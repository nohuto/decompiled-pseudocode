/*
 * XREFs of ?Release@error_info_fallback@impl@winrt@@UEAAIXZ @ 0x1800ABC50
 * Callers:
 *     ?Release@error_info_fallback@impl@winrt@@W7EAAIXZ @ 0x1800795B0 (-Release@error_info_fallback@impl@winrt@@W7EAAIXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800AB354 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC634 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::error_info_fallback::Release(winrt::impl::error_info_fallback *this)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--((volatile signed __int32 *)this + 8);
  if ( !v2 && this )
  {
    winrt::handle_type<winrt::impl::hstring_traits>::close((char *)this + 24);
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    operator delete(this);
  }
  return v2;
}
