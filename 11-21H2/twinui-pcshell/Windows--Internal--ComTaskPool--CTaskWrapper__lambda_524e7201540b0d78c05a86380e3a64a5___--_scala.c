/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_524e7201540b0d78c05a86380e3a64a5___::_scalar_deleting_destructor_ @ 0x1803769A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _lambda_524e7201540b0d78c05a86380e3a64a5_::__lambda_524e7201540b0d78c05a86380e3a64a5_ @ 0x180376280 (_lambda_524e7201540b0d78c05a86380e3a64a5_--__lambda_524e7201540b0d78c05a86380e3a64a5_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_524e7201540b0d78c05a86380e3a64a5___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  lambda_524e7201540b0d78c05a86380e3a64a5_::__lambda_524e7201540b0d78c05a86380e3a64a5_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
