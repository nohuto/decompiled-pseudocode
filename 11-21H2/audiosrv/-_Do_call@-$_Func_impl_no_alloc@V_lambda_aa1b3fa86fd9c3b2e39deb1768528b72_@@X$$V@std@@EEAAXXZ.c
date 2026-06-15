/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V_lambda_aa1b3fa86fd9c3b2e39deb1768528b72_@@X$$V@std@@EEAAXXZ @ 0x180064AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180063328 (--1-$unique_storage@U-$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1-release_operati.c)
 *     ?acquire@operation_guard@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180064D70 (-acquire@operation_guard@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVope.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Func_impl_no_alloc<_lambda_aa1b3fa86fd9c3b2e39deb1768528b72_,void,>::_Do_call(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  wil::operation_guard::acquire(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL), &v5);
  if ( v5 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v3 = *(_QWORD *)(v2 + 128);
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v3 + 24LL))(v3, 0LL, v2 + 84);
  }
  return __1__unique_storage_U__resource_policy_PEAVoperation_guard_wil__P6AXPEAV12___E_1_release_operation_guard_reference_details_2_YAX0_ZU__integral_constant__K_00_wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil__IEAA_XZ(&v5);
}
