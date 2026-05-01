/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1e36923a9b749c25b7f1ddb2e1df24d1__&_::_scalar_deleting_destructor_ @ 0x1801B4CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1e36923a9b749c25b7f1ddb2e1df24d1__&_::_CTaskWrapper__lambda_1e36923a9b749c25b7f1ddb2e1df24d1__&_ @ 0x1801B4BB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1e36923a9b749c25b7f1ddb2e1df24d1__-_--_CTas.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1e36923a9b749c25b7f1ddb2e1df24d1____::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1e36923a9b749c25b7f1ddb2e1df24d1____::_CTaskWrapper__lambda_1e36923a9b749c25b7f1ddb2e1df24d1____((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
