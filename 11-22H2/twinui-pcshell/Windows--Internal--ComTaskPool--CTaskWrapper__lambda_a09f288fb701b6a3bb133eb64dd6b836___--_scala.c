/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a09f288fb701b6a3bb133eb64dd6b836___::_scalar_deleting_destructor_ @ 0x1802091D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a09f288fb701b6a3bb133eb64dd6b836___::_CTaskWrapper__lambda_a09f288fb701b6a3bb133eb64dd6b836___ @ 0x180206960 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a09f288fb701b6a3bb133eb64dd6b836___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a09f288fb701b6a3bb133eb64dd6b836___::_scalar_deleting_destructor_(
        void *a1,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a09f288fb701b6a3bb133eb64dd6b836___::_CTaskWrapper__lambda_a09f288fb701b6a3bb133eb64dd6b836___(
    (__int64)a1,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
