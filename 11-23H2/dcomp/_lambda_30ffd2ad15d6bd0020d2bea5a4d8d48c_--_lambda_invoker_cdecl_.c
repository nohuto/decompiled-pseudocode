/*
 * XREFs of _lambda_30ffd2ad15d6bd0020d2bea5a4d8d48c_::_lambda_invoker_cdecl_ @ 0x180081930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_30ffd2ad15d6bd0020d2bea5a4d8d48c_::_lambda_invoker_cdecl_(
        volatile signed __int32 *a1,
        __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1 + 4, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    LOBYTE(a2) = 1;
    return (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 64LL))(a1, a2);
  }
  return result;
}
