/*
 * XREFs of ??0resume_apartment_context@impl@winrt@@QEAA@AEBU012@@Z @ 0x18034C634
 * Callers:
 *     _lambda_66881fa05591413bac4099d171e5aec0_::_lambda_66881fa05591413bac4099d171e5aec0_ @ 0x1801D7390 (_lambda_66881fa05591413bac4099d171e5aec0_--_lambda_66881fa05591413bac4099d171e5aec0_.c)
 *     _lambda_ead74eb18ddaf5d60afd1f95853bb976_::_lambda_ead74eb18ddaf5d60afd1f95853bb976_ @ 0x1801D73D8 (_lambda_ead74eb18ddaf5d60afd1f95853bb976_--_lambda_ead74eb18ddaf5d60afd1f95853bb976_.c)
 *     ?await_suspend@apartment_context@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180350FE8 (-await_suspend@apartment_context@winrt@@QEBAXU-$coroutine_handle@X@experimental@std@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

winrt::impl::resume_apartment_context *__fastcall winrt::impl::resume_apartment_context::resume_apartment_context(
        winrt::impl::resume_apartment_context *this,
        const struct winrt::impl::resume_apartment_context *a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)a2;
  *(_QWORD *)this = *(_QWORD *)a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  return this;
}
