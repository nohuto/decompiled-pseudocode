/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9e570927e665d205f933b0ae213f3c70___::_scalar_deleting_destructor_ @ 0x1801E9E70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9e570927e665d205f933b0ae213f3c70___::_CTaskWrapper__lambda_9e570927e665d205f933b0ae213f3c70___ @ 0x1801E877C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9e570927e665d205f933b0ae213f3c70___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9e570927e665d205f933b0ae213f3c70___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9e570927e665d205f933b0ae213f3c70___::_CTaskWrapper__lambda_9e570927e665d205f933b0ae213f3c70___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
