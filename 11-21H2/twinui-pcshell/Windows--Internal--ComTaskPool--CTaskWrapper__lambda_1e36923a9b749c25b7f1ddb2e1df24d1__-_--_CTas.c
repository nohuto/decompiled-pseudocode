/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1e36923a9b749c25b7f1ddb2e1df24d1__&_::_CTaskWrapper__lambda_1e36923a9b749c25b7f1ddb2e1df24d1__&_ @ 0x1801B4BB0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1e36923a9b749c25b7f1ddb2e1df24d1__&_::_scalar_deleting_destructor_ @ 0x1801B4CF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1e36923a9b749c25b7f1ddb2e1df24d1__-_--_scal.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1e36923a9b749c25b7f1ddb2e1df24d1____::_CTaskWrapper__lambda_1e36923a9b749c25b7f1ddb2e1df24d1____(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
