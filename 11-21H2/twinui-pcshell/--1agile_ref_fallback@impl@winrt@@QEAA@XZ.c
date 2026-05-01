/*
 * XREFs of ??1agile_ref_fallback@impl@winrt@@QEAA@XZ @ 0x180341668
 * Callers:
 *     ?Release@agile_ref_fallback@impl@winrt@@UEAAIXZ @ 0x180343380 (-Release@agile_ref_fallback@impl@winrt@@UEAAIXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall winrt::impl::agile_ref_fallback::~agile_ref_fallback(winrt::impl::agile_ref_fallback *this)
{
  __int64 v1; // rdx
  __int64 *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = *((unsigned int *)this + 4);
  *(_QWORD *)this = &winrt::impl::agile_ref_fallback::`vftable';
  v2 = (__int64 *)((char *)this + 8);
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 1) + 32LL))(*((_QWORD *)this + 1), v1);
  if ( *v2 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v2);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, v3, v4, v5);
}
