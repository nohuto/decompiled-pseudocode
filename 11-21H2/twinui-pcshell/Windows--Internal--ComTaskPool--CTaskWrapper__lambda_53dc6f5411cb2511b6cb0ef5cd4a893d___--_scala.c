/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d___::_scalar_deleting_destructor_ @ 0x1801B70E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d___::_CTaskWrapper__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d___ @ 0x1801B684C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d___::_CTaskWrapper__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
