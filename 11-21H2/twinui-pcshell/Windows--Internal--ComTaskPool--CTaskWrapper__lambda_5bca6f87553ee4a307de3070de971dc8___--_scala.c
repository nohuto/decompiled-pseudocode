/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5bca6f87553ee4a307de3070de971dc8___::_scalar_deleting_destructor_ @ 0x1801B0DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5bca6f87553ee4a307de3070de971dc8___::_CTaskWrapper__lambda_5bca6f87553ee4a307de3070de971dc8___ @ 0x1801AF5B8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5bca6f87553ee4a307de3070de971dc8___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5bca6f87553ee4a307de3070de971dc8___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5bca6f87553ee4a307de3070de971dc8___::_CTaskWrapper__lambda_5bca6f87553ee4a307de3070de971dc8___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
