/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f3af541e54fed362ec31214e5f0f3de2___::_scalar_deleting_destructor_ @ 0x1805B5D60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _lambda_f3af541e54fed362ec31214e5f0f3de2_::__lambda_f3af541e54fed362ec31214e5f0f3de2_ @ 0x1805B5B14 (_lambda_f3af541e54fed362ec31214e5f0f3de2_--__lambda_f3af541e54fed362ec31214e5f0f3de2_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f3af541e54fed362ec31214e5f0f3de2___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  lambda_f3af541e54fed362ec31214e5f0f3de2_::__lambda_f3af541e54fed362ec31214e5f0f3de2_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
