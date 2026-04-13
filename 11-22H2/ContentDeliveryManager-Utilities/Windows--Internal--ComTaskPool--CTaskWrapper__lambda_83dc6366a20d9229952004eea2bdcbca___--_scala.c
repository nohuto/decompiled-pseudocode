/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_83dc6366a20d9229952004eea2bdcbca___::_scalar_deleting_destructor_ @ 0x1800679E0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_83dc6366a20d9229952004eea2bdcbca___::_CTaskWrapper__lambda_83dc6366a20d9229952004eea2bdcbca___ @ 0x180067190 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_83dc6366a20d9229952004eea2bdcbca___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_83dc6366a20d9229952004eea2bdcbca___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_83dc6366a20d9229952004eea2bdcbca___::_CTaskWrapper__lambda_83dc6366a20d9229952004eea2bdcbca___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
