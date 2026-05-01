/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_666d22edc2a9b06a02075e2b448fb99f___::_scalar_deleting_destructor_ @ 0x1801B0E20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_666d22edc2a9b06a02075e2b448fb99f___::_CTaskWrapper__lambda_666d22edc2a9b06a02075e2b448fb99f___ @ 0x1801AF5E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_666d22edc2a9b06a02075e2b448fb99f___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_666d22edc2a9b06a02075e2b448fb99f___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_666d22edc2a9b06a02075e2b448fb99f___::_CTaskWrapper__lambda_666d22edc2a9b06a02075e2b448fb99f___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
