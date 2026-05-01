/*
 * XREFs of ?Release@error_info_fallback@impl@winrt@@UEAAIXZ @ 0x1802D8D70
 * Callers:
 *     ?Release@error_info_fallback@impl@winrt@@W7EAAIXZ @ 0x1801EAE00 (-Release@error_info_fallback@impl@winrt@@W7EAAIXZ.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::error_info_fallback::Release(
        winrt::impl::error_info_fallback *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  v6 = winrt::impl::atomic_ref_count::operator--((volatile signed __int32 *)this + 8, a2, a3, a4);
  if ( !v6 && this )
  {
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)this + 3, v5, v7, v8);
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, v9, v10, v11);
    operator delete(this);
  }
  return v6;
}
