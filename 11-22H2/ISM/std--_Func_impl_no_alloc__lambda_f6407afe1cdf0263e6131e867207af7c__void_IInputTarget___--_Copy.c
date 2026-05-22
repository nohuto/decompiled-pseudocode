/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f6407afe1cdf0263e6131e867207af7c__void_IInputTarget___::_Copy @ 0x18002D1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_f6407afe1cdf0263e6131e867207af7c__void_IInputTarget___::_Copy(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_180211DB0;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 24);
  return result;
}
