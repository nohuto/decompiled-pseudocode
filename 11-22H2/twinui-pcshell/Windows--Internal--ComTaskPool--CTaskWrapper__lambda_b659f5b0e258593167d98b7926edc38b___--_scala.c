/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b___::_scalar_deleting_destructor_ @ 0x1801E5580
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b___::_CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b___ @ 0x1801E511C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b___::_CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
