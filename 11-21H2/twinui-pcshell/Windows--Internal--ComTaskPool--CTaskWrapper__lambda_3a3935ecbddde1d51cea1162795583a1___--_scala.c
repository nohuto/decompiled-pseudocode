/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3a3935ecbddde1d51cea1162795583a1___::_scalar_deleting_destructor_ @ 0x18019D390
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c68e2bcff9edbcbf4d5161b5e9e65fdb___::_CTaskWrapper__lambda_c68e2bcff9edbcbf4d5161b5e9e65fdb___ @ 0x18019B9DC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c68e2bcff9edbcbf4d5161b5e9e65fdb___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3a3935ecbddde1d51cea1162795583a1___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c68e2bcff9edbcbf4d5161b5e9e65fdb___::_CTaskWrapper__lambda_c68e2bcff9edbcbf4d5161b5e9e65fdb___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
