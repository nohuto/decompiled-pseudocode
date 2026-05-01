/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_136c33c4afb22965c6bbfc180a837019___::_scalar_deleting_destructor_ @ 0x180447C60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _lambda_136c33c4afb22965c6bbfc180a837019_::__lambda_136c33c4afb22965c6bbfc180a837019_ @ 0x180447A40 (_lambda_136c33c4afb22965c6bbfc180a837019_--__lambda_136c33c4afb22965c6bbfc180a837019_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_136c33c4afb22965c6bbfc180a837019___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_136c33c4afb22965c6bbfc180a837019_::__lambda_136c33c4afb22965c6bbfc180a837019_((Platform::WeakReference *)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
