/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c6ba9d0e3b7f29cae293d336d79dd692___::_CTaskWrapper__lambda_c6ba9d0e3b7f29cae293d336d79dd692___ @ 0x180258494
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c6ba9d0e3b7f29cae293d336d79dd692___::_scalar_deleting_destructor_ @ 0x1802586F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c6ba9d0e3b7f29cae293d336d79dd692___--_scala.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c6ba9d0e3b7f29cae293d336d79dd692___::_CTaskWrapper__lambda_c6ba9d0e3b7f29cae293d336d79dd692___(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
