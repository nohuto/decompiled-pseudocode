/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_82ad92f4bbaa298f2056d3bffcd54c39___::_scalar_deleting_destructor_ @ 0x180192460
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b66f12b602a8ccb9baf4448cdd4fbda7___::_CTaskWrapper__lambda_b66f12b602a8ccb9baf4448cdd4fbda7___ @ 0x180191D80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b66f12b602a8ccb9baf4448cdd4fbda7___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_82ad92f4bbaa298f2056d3bffcd54c39___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b66f12b602a8ccb9baf4448cdd4fbda7___::_CTaskWrapper__lambda_b66f12b602a8ccb9baf4448cdd4fbda7___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
