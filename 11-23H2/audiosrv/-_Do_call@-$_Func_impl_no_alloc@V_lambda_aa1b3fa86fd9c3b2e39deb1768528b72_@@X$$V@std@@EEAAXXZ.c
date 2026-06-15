/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V_lambda_aa1b3fa86fd9c3b2e39deb1768528b72_@@X$$V@std@@EEAAXXZ @ 0x1800F43D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?acquire@operation_guard@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVoperation_guard@wil@@P6AXPEAV12@@_E$1?release_operation_guard_reference@details@2@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800F4660 (-acquire@operation_guard@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAVope.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc<_lambda_aa1b3fa86fd9c3b2e39deb1768528b72_,void,>::_Do_call(__int64 a1)
{
  volatile signed __int32 *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rcx
  PVOID v5; // rcx
  PVOID Address; // [rsp+38h] [rbp+10h] BYREF

  wil::operation_guard::acquire(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL), &Address);
  v2 = (volatile signed __int32 *)Address;
  if ( Address )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_QWORD *)(v3 + 128);
    if ( v4 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v4 + 24LL))(v4, 0LL, v3 + 84);
  }
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 1, 0xFFFFFFFF) == 1 )
    {
      v5 = Address;
      *(_DWORD *)Address = 1;
      WakeByAddressAll(v5);
    }
  }
}
