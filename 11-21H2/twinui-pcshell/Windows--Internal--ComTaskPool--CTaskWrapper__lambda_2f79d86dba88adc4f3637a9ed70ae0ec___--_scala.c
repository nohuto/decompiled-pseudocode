/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2f79d86dba88adc4f3637a9ed70ae0ec___::_scalar_deleting_destructor_ @ 0x1801B0D20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2f79d86dba88adc4f3637a9ed70ae0ec___::_CTaskWrapper__lambda_2f79d86dba88adc4f3637a9ed70ae0ec___ @ 0x1801AF540 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2f79d86dba88adc4f3637a9ed70ae0ec___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2f79d86dba88adc4f3637a9ed70ae0ec___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2f79d86dba88adc4f3637a9ed70ae0ec___::_CTaskWrapper__lambda_2f79d86dba88adc4f3637a9ed70ae0ec___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
