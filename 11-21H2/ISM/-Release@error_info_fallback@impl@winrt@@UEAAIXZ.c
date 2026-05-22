/*
 * XREFs of ?Release@error_info_fallback@impl@winrt@@UEAAIXZ @ 0x1800824D0
 * Callers:
 *     ?Release@error_info_fallback@impl@winrt@@W7EAAIXZ @ 0x18004EBA0 (-Release@error_info_fallback@impl@winrt@@W7EAAIXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x180081AD0 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180082F9C (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::error_info_fallback::Release(
        winrt::impl::error_info_fallback *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  v5 = winrt::impl::atomic_ref_count::operator--((volatile signed __int32 *)this + 8, a2, a3, a4);
  if ( !v5 && this )
  {
    winrt::handle_type<winrt::impl::hstring_traits>::close((char *)this + 24);
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, v6, v7, v8);
    operator delete(this);
  }
  return v5;
}
