/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e93b07e05eb73953e8a67c4fda015070___::_scalar_deleting_destructor_ @ 0x1800A3280
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e93b07e05eb73953e8a67c4fda015070_::__lambda_e93b07e05eb73953e8a67c4fda015070_ @ 0x1800A3564 (_lambda_e93b07e05eb73953e8a67c4fda015070_--__lambda_e93b07e05eb73953e8a67c4fda015070_.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e93b07e05eb73953e8a67c4fda015070___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_e93b07e05eb73953e8a67c4fda015070_::__lambda_e93b07e05eb73953e8a67c4fda015070_(a1 + 4);
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x170uLL);
  return a1;
}
