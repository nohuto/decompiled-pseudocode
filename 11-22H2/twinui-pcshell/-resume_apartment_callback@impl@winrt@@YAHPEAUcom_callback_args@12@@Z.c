/*
 * XREFs of ?resume_apartment_callback@impl@winrt@@YAHPEAUcom_callback_args@12@@Z @ 0x1801C0880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::resume_apartment_callback(winrt::impl *this, struct winrt::impl::com_callback_args *a2)
{
  (**((void (__fastcall ***)(_QWORD, struct winrt::impl::com_callback_args *))this + 1))(*((_QWORD *)this + 1), a2);
  return 0LL;
}
