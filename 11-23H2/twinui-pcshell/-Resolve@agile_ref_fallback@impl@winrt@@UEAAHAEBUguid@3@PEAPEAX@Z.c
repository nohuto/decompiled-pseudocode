/*
 * XREFs of ?Resolve@agile_ref_fallback@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180411230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::agile_ref_fallback::Resolve(
        winrt::impl::agile_ref_fallback *this,
        const struct winrt::guid *a2,
        void **a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct winrt::guid *, void **))(**((_QWORD **)this + 1) + 40LL))(
           *((_QWORD *)this + 1),
           *((unsigned int *)this + 4),
           a2,
           a3);
}
