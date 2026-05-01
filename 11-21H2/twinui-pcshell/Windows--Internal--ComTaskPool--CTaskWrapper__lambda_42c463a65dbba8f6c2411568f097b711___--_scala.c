/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_42c463a65dbba8f6c2411568f097b711___::_scalar_deleting_destructor_ @ 0x1803D5960
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _lambda_42c463a65dbba8f6c2411568f097b711_::__lambda_42c463a65dbba8f6c2411568f097b711_ @ 0x1803D511C (_lambda_42c463a65dbba8f6c2411568f097b711_--__lambda_42c463a65dbba8f6c2411568f097b711_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_42c463a65dbba8f6c2411568f097b711___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_42c463a65dbba8f6c2411568f097b711_::__lambda_42c463a65dbba8f6c2411568f097b711_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
