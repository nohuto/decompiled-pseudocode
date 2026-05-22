/*
 * XREFs of ?CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ @ 0x180166A0C
 * Callers:
 *     ?CreateHRPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@@Z @ 0x180166F34 (-CreateHRPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exc.c)
 *     ?CreatePVPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@@Z @ 0x1801672B4 (-CreatePVPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncPVPrincipal@@Uerr_exceptio.c)
 *     ?CreateStringVectorPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@P6A?AV?$com_ptr_t@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@3@PEBG@Z@Z @ 0x1801677F0 (-CreateStringVectorPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncStringPrincipal@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1800894A0 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@w.c)
 *     ??$_Move_unchecked@PEAV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@PEAV12@@std@@YAPEAV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@PEAV12@00@Z @ 0x180162D64 (--$_Move_unchecked@PEAV-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@PEAV.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_AsyncPVPrincipal_wil::err_exception_policy_________lambda_c91dbc00eed29fc6671fbd913f651dd6___ @ 0x1801630FC (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_AsyncPVP.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_AsyncStringPrincipal_wil::err_exception_policy_________lambda_63372103619f2071dae56b01713f6f7a___ @ 0x1801631A4 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_AsyncStr.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCConstantManagerClient::CleanupPrincipals(MPCConstantManagerClient *this)
{
  __int64 *v2; // rbx
  __int64 **v3; // rax
  __int64 *v4; // rbx
  __int64 *v5; // rsi
  __int64 *i; // rbx
  __int64 *j; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // rbx
  __int64 *v11; // rbx
  __int64 **v12; // rax
  __int64 *v13; // rbx
  __int64 *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 7);
  v3 = std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_AsyncPVPrincipal_wil::err_exception_policy_________lambda_c91dbc00eed29fc6671fbd913f651dd6___(
         &v14,
         *((__int64 **)this + 6),
         v2);
  if ( *v3 != v2 )
  {
    v4 = std::_Move_unchecked<wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy> *,wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy> *>(
           v2,
           *((__int64 **)this + 7),
           *v3);
    std::_Destroy_range<std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(
      v4,
      *((__int64 **)this + 7));
    *((_QWORD *)this + 7) = v4;
  }
  v5 = (__int64 *)*((_QWORD *)this + 10);
  for ( i = (__int64 *)*((_QWORD *)this + 9); i != v5 && *(_BYTE *)(*i + 120); ++i )
    ;
  if ( i != v5 )
  {
    for ( j = i + 1; j != v5; ++j )
    {
      v8 = *j;
      if ( *(_BYTE *)(*j + 120) )
      {
        *j = 0LL;
        v9 = *i;
        *i = v8;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
        ++i;
      }
    }
    if ( i != v5 )
    {
      v10 = std::_Move_unchecked<wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy> *,wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy> *>(
              v5,
              *((__int64 **)this + 10),
              i);
      std::_Destroy_range<std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(
        v10,
        *((__int64 **)this + 10));
      *((_QWORD *)this + 10) = v10;
    }
  }
  v11 = (__int64 *)*((_QWORD *)this + 13);
  v12 = std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_AsyncStringPrincipal_wil::err_exception_policy_________lambda_63372103619f2071dae56b01713f6f7a___(
          &v14,
          *((__int64 **)this + 12),
          v11);
  if ( *v12 != v11 )
  {
    v13 = std::_Move_unchecked<wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy> *,wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy> *>(
            v11,
            *((__int64 **)this + 13),
            *v12);
    std::_Destroy_range<std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(
      v13,
      *((__int64 **)this + 13));
    *((_QWORD *)this + 13) = v13;
  }
}
