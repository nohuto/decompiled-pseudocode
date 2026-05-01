/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f35c72982d94b155c6e22210e02e73fe___::_scalar_deleting_destructor_ @ 0x1803769F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _lambda_f35c72982d94b155c6e22210e02e73fe_::__lambda_f35c72982d94b155c6e22210e02e73fe_ @ 0x1803762B0 (_lambda_f35c72982d94b155c6e22210e02e73fe_--__lambda_f35c72982d94b155c6e22210e02e73fe_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f35c72982d94b155c6e22210e02e73fe___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  lambda_f35c72982d94b155c6e22210e02e73fe_::__lambda_f35c72982d94b155c6e22210e02e73fe_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
