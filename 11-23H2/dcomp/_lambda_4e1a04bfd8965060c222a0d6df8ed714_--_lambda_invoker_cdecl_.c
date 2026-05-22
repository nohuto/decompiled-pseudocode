/*
 * XREFs of _lambda_4e1a04bfd8965060c222a0d6df8ed714_::_lambda_invoker_cdecl_ @ 0x1800805F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_4e1a04bfd8965060c222a0d6df8ed714_::_lambda_invoker_cdecl_(
        volatile signed __int32 *a1,
        volatile signed __int32 **a2)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement(a1 + 4);
  if ( (_DWORD)result == 1 )
    result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 80LL))(a1);
  *a2 = a1;
  return result;
}
