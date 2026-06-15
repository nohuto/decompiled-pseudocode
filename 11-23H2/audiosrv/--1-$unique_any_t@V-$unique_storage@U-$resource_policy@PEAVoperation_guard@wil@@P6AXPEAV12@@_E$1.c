/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F1D70
 * Callers:
 *     _std::_Func_impl_no_alloc__lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3__void_bool_::_Do_call_::_1_::dtor$0 @ 0x1800F43B1 (_std--_Func_impl_no_alloc__lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3__void_bool_--_Do_call_--_1_--.c)
 *     _std::_Func_impl_no_alloc__lambda_b461a9ffe5f5cec38e175d7dd8469474__void_::_Do_call_::_1_::dtor$0 @ 0x1800F445C (_std--_Func_impl_no_alloc__lambda_b461a9ffe5f5cec38e175d7dd8469474__void_--_Do_call_--_1_--dtor$.c)
 *     _std::_Func_impl_no_alloc__lambda_aaa43ca83dfd3d10ea8db9a45d6dafd8__void_bool_::_Do_call_::_1_::dtor$0 @ 0x1800F44E1 (_std--_Func_impl_no_alloc__lambda_aaa43ca83dfd3d10ea8db9a45d6dafd8__void_bool_--_Do_call_--_1_--.c)
 * Callees:
 *     <none>
 */

void __fastcall __1__unique_any_t_V__unique_storage_U__resource_policy_PEAVoperation_guard_wil__P6AXPEAV12___E_1_release_operation_guard_reference_details_2_YAX0_ZU__integral_constant__K_00_wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil___wil__QEAA_XZ(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx

  v1 = *a1;
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd(v1 + 1, 0xFFFFFFFF) == 1 )
    {
      *v1 = 1;
      WakeByAddressAll((PVOID)v1);
    }
  }
}
