/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_AsyncPVPrincipal_wil::err_exception_policy_________lambda_c91dbc00eed29fc6671fbd913f651dd6___ @ 0x18019051C
 * Callers:
 *     ?CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ @ 0x180193E6C (-CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_AsyncPVPrincipal_wil::err_exception_policy_________lambda_c91dbc00eed29fc6671fbd913f651dd6___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *j; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx

  for ( i = a2; i != a3; ++i )
  {
    if ( !*(_BYTE *)(*i + 184) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 1; j != a3; ++j )
    {
      v7 = *j;
      if ( *(_BYTE *)(*j + 184) )
      {
        *j = 0LL;
        v8 = *i;
        *i = v7;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        ++i;
      }
    }
  }
  *a1 = i;
  return a1;
}
