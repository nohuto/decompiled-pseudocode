/*
 * XREFs of ??$_Move_unchecked@PEAV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@PEAV12@@std@@YAPEAV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@PEAV12@00@Z @ 0x180190184
 * Callers:
 *     ?CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ @ 0x180193E6C (-CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Move_unchecked<wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy> *,wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy> *>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *i; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx

  for ( i = a1; i != a2; ++i )
  {
    v6 = *i;
    *i = 0LL;
    v7 = *a3;
    *a3 = v6;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    ++a3;
  }
  return a3;
}
