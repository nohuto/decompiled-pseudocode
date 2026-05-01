/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4c75bdc15ce1f75b1b69cd90803054c___::_scalar_deleting_destructor_ @ 0x18019D450
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4c75bdc15ce1f75b1b69cd90803054c___::_CTaskWrapper__lambda_f4c75bdc15ce1f75b1b69cd90803054c___ @ 0x18019BA54 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f4c75bdc15ce1f75b1b69cd90803054c___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4c75bdc15ce1f75b1b69cd90803054c___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4c75bdc15ce1f75b1b69cd90803054c___::_CTaskWrapper__lambda_f4c75bdc15ce1f75b1b69cd90803054c___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
