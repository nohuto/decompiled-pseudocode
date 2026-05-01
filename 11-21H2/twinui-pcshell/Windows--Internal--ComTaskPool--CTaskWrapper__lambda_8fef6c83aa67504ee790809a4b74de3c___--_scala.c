/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8fef6c83aa67504ee790809a4b74de3c___::_scalar_deleting_destructor_ @ 0x180198370
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8fef6c83aa67504ee790809a4b74de3c___::_CTaskWrapper__lambda_8fef6c83aa67504ee790809a4b74de3c___ @ 0x180197EE8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8fef6c83aa67504ee790809a4b74de3c___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8fef6c83aa67504ee790809a4b74de3c___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8fef6c83aa67504ee790809a4b74de3c___::_CTaskWrapper__lambda_8fef6c83aa67504ee790809a4b74de3c___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
