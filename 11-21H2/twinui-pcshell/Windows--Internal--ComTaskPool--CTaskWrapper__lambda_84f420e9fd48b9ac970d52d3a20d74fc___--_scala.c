/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_84f420e9fd48b9ac970d52d3a20d74fc___::_scalar_deleting_destructor_ @ 0x1801983B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_84f420e9fd48b9ac970d52d3a20d74fc___::_CTaskWrapper__lambda_84f420e9fd48b9ac970d52d3a20d74fc___ @ 0x180197F10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_84f420e9fd48b9ac970d52d3a20d74fc___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_84f420e9fd48b9ac970d52d3a20d74fc___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_84f420e9fd48b9ac970d52d3a20d74fc___::_CTaskWrapper__lambda_84f420e9fd48b9ac970d52d3a20d74fc___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
