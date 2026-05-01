/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a8635596ed7ae5e31c94755e25628c9f___::_scalar_deleting_destructor_ @ 0x18078D000
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _lambda_a8635596ed7ae5e31c94755e25628c9f_::__lambda_a8635596ed7ae5e31c94755e25628c9f_ @ 0x18078CE68 (_lambda_a8635596ed7ae5e31c94755e25628c9f_--__lambda_a8635596ed7ae5e31c94755e25628c9f_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a8635596ed7ae5e31c94755e25628c9f___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_a8635596ed7ae5e31c94755e25628c9f_::__lambda_a8635596ed7ae5e31c94755e25628c9f_((Platform::WeakReference *)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
