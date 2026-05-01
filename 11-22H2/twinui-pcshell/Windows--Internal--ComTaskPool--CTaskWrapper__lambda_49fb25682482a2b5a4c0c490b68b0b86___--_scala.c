/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_49fb25682482a2b5a4c0c490b68b0b86___::_scalar_deleting_destructor_ @ 0x1801F9720
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_49fb25682482a2b5a4c0c490b68b0b86___::_CTaskWrapper__lambda_49fb25682482a2b5a4c0c490b68b0b86___ @ 0x1801F76F8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_49fb25682482a2b5a4c0c490b68b0b86___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_49fb25682482a2b5a4c0c490b68b0b86___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_49fb25682482a2b5a4c0c490b68b0b86___::_CTaskWrapper__lambda_49fb25682482a2b5a4c0c490b68b0b86___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
