/*
 * XREFs of ??0?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@QEAA@AEBV012@@Z @ 0x180182BE4
 * Callers:
 *     ?CreateHRPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@@Z @ 0x180186584 (-CreateHRPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exc.c)
 *     ?CreatePVPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@@Z @ 0x18018690C (-CreatePVPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncPVPrincipal@@Uerr_exceptio.c)
 *     ?CreateStringVectorPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@P6A?AV?$com_ptr_t@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@3@PEBG@Z@Z @ 0x180186E5C (-CreateStringVectorPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncStringPrincipal@.c)
 *     std::_Func_impl_no_alloc__lambda_07471f410bb64c4d3d31f6ab24fa2971__void_unsigned_short_const___::_Copy @ 0x18018CA90 (std--_Func_impl_no_alloc__lambda_07471f410bb64c4d3d31f6ab24fa2971__void_unsigned_sh_ea_18018CA90.c)
 *     std::_Func_impl_no_alloc__lambda_824b94053d2fecabe388e187688ff60e__void_long_::_Copy @ 0x18018CAE0 (std--_Func_impl_no_alloc__lambda_824b94053d2fecabe388e187688ff60e__void_long_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARIANT_const_&_::_Copy @ 0x18018CB20 (std--_Func_impl_no_alloc__lambda_82df5eb55bcd175fe38d7bfb3ca3561b__void_tagPROPVARI_ea_18018CB20.c)
 *     std::_Func_impl_no_alloc__lambda_902f91128e69d2cf33c0410a5e5ad4c7__void_long_::_Copy @ 0x18018CB60 (std--_Func_impl_no_alloc__lambda_902f91128e69d2cf33c0410a5e5ad4c7__void_long_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_f331ad8aa7f9e8b97a1a62f842df472b__void_long_::_Copy @ 0x18018CBA0 (std--_Func_impl_no_alloc__lambda_f331ad8aa7f9e8b97a1a62f842df472b__void_long_--_Copy.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 */

_QWORD *__fastcall Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 *v3; // rcx

  *a1 = *a2;
  v3 = a1 + 1;
  *v3 = a2[1];
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v3);
  return a1;
}
