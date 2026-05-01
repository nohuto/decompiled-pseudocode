/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b534361c50cb4958853f48f5e7b1e06a___::_scalar_deleting_destructor_ @ 0x18001AE40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b534361c50cb4958853f48f5e7b1e06a_::__lambda_b534361c50cb4958853f48f5e7b1e06a_ @ 0x18001B398 (_lambda_b534361c50cb4958853f48f5e7b1e06a_--__lambda_b534361c50cb4958853f48f5e7b1e06a_.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b534361c50cb4958853f48f5e7b1e06a___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_b534361c50cb4958853f48f5e7b1e06a_::__lambda_b534361c50cb4958853f48f5e7b1e06a_(a1 + 4);
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x178uLL);
  return a1;
}
