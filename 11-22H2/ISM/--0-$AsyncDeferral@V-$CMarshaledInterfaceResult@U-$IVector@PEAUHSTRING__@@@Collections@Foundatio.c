/*
 * XREFs of ??0?$AsyncDeferral@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@QEAA@$$QEAV012@@Z @ 0x1801909C8
 * Callers:
 *     ?CreatePVPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@@Z @ 0x18019471C (-CreatePVPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncPVPrincipal@@Uerr_exceptio.c)
 *     ?CreateStringVectorPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@P6A?AV?$com_ptr_t@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@3@PEBG@Z@Z @ 0x180194C6C (-CreateStringVectorPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncStringPrincipal@.c)
 *     std::_Func_impl_no_alloc__lambda_07471f410bb64c4d3d31f6ab24fa2971__void_unsigned_short_const___::_Move @ 0x18019ACE0 (std--_Func_impl_no_alloc__lambda_07471f410bb64c4d3d31f6ab24fa2971__void_unsigned_sh_ea_18019ACE0.c)
 *     std::_Func_impl_no_alloc__lambda_824b94053d2fecabe388e187688ff60e__void_long_::_Move @ 0x18019AD30 (std--_Func_impl_no_alloc__lambda_824b94053d2fecabe388e187688ff60e__void_long_--_Move.c)
 *     std::_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARIANT_const_&_::_Move @ 0x18019AD60 (std--_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARI_ea_18019AD60.c)
 *     std::_Func_impl_no_alloc__lambda_902f91128e69d2cf33c0410a5e5ad4c7__void_long_::_Move @ 0x18019ADA0 (std--_Func_impl_no_alloc__lambda_902f91128e69d2cf33c0410a5e5ad4c7__void_long_--_Move.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>>::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rdx

  *a1 = *a2;
  v2 = a2 + 1;
  a1[1] = 0LL;
  if ( a1 + 1 != v2 )
  {
    a1[1] = *v2;
    *v2 = 0LL;
  }
  return a1;
}
