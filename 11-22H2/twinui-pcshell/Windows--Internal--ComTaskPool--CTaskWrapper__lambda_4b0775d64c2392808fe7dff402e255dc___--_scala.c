/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4b0775d64c2392808fe7dff402e255dc___::_scalar_deleting_destructor_ @ 0x180209090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4b0775d64c2392808fe7dff402e255dc___::_CTaskWrapper__lambda_4b0775d64c2392808fe7dff402e255dc___ @ 0x180206898 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4b0775d64c2392808fe7dff402e255dc___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4b0775d64c2392808fe7dff402e255dc___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4b0775d64c2392808fe7dff402e255dc___::_CTaskWrapper__lambda_4b0775d64c2392808fe7dff402e255dc___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
