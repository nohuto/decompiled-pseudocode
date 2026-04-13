/*
 * XREFs of _lambda_de7ca9b0ec13d6a85971aebf8330bbf3_::__lambda_de7ca9b0ec13d6a85971aebf8330bbf3_ @ 0x1800B3AC8
 * Callers:
 *     _UnlockActionHelper::Execute_::_1_::dtor$2 @ 0x1800F3D96 (_UnlockActionHelper--Execute_--_1_--dtor$2.c)
 *     _UnlockActionHelper::Execute_::_1_::dtor$11 @ 0x1800F3DBA (_UnlockActionHelper--Execute_--_1_--dtor$11.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_de7ca9b0ec13d6a85971aebf8330bbf3_::__lambda_de7ca9b0ec13d6a85971aebf8330bbf3_(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a1[1];
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
