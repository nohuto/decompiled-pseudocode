/*
 * XREFs of ?acquire@operation_guard@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180064D70
 * Callers:
 *     ??1operation_guard@wil@@QEAA@XZ @ 0x180063360 (--1operation_guard@wil@@QEAA@XZ.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_@@X_N@std@@EEAAX$$QEA_N@Z @ 0x180064A80 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_@@X_N@std@@EEAAX$$QEA_.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_aa1b3fa86fd9c3b2e39deb1768528b72_@@X$$V@std@@EEAAXXZ @ 0x180064AE0 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_aa1b3fa86fd9c3b2e39deb1768528b72_@@X$$V@std@@EEAAXXZ.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_aaa43ca83dfd3d10ea8db9a45d6dafd8_@@X_N@std@@EEAAX$$QEA_N@Z @ 0x180064B60 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_aaa43ca83dfd3d10ea8db9a45d6dafd8_@@X_N@std@@EEAAX$$QEA_.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil::operation_guard::acquire(__int64 a1, _QWORD *a2)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 4));
  if ( *(_BYTE *)(a1 + 8) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4), 0xFFFFFFFF) == 1 )
    {
      *(_DWORD *)a1 = 1;
      WakeByAddressAll((PVOID)a1);
    }
    *a2 = 0LL;
  }
  else
  {
    *a2 = a1;
  }
  return a2;
}
