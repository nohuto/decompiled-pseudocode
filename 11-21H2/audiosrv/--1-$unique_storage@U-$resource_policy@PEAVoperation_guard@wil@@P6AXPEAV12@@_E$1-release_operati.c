/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180063328
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18006331C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1.c)
 *     ??1operation_guard@wil@@QEAA@XZ @ 0x180063360 (--1operation_guard@wil@@QEAA@XZ.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_@@X_N@std@@EEAAX$$QEA_N@Z @ 0x180064A80 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_@@X_N@std@@EEAAX$$QEA_.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_aa1b3fa86fd9c3b2e39deb1768528b72_@@X$$V@std@@EEAAXXZ @ 0x180064AE0 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_aa1b3fa86fd9c3b2e39deb1768528b72_@@X$$V@std@@EEAAXXZ.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_aaa43ca83dfd3d10ea8db9a45d6dafd8_@@X_N@std@@EEAAX$$QEA_N@Z @ 0x180064B60 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_aaa43ca83dfd3d10ea8db9a45d6dafd8_@@X_N@std@@EEAAX$$QEA_.c)
 * Callees:
 *     ??$invoke@P6AXPEAVoperation_guard@wil@@@_EAEAPEAV12@@wistd@@YAX$$QEAP6AXPEAVoperation_guard@wil@@@_EAEAPEAV12@@Z @ 0x180062F6C (--$invoke@P6AXPEAVoperation_guard@wil@@@_EAEAPEAV12@@wistd@@YAX$$QEAP6AXPEAVoperation_guard@wil@.c)
 */

__int64 __fastcall __1__unique_storage_U__resource_policy_PEAVoperation_guard_wil__P6AXPEAV12___E_1_release_operation_guard_reference_details_2_YAX0_ZU__integral_constant__K_00_wistd__PEAV12_PEAV12__0A___T_details_wil___details_wil__IEAA_XZ(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  void (__fastcall *v3)(wil::details *__hidden, struct wil::operation_guard *); // [rsp+38h] [rbp+10h] BYREF

  result = *a1;
  if ( *a1 )
  {
    v2 = *a1;
    v3 = wil::details::release_operation_guard_reference;
    return _EAEAPEAV12::invoke<void (*)(wil::operation_guard *) throw(unsigned __int8,wil::operation_guard * &),wistd,wil::AX$$QEAP6AXPEAVoperation_guard>(
             (__int64 (__fastcall **)(_QWORD))&v3,
             &v2);
  }
  return result;
}
