/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a8dc140887cec83d93fc1ab35d00b62d___::_scalar_deleting_destructor_ @ 0x1801B0EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a8dc140887cec83d93fc1ab35d00b62d___::_CTaskWrapper__lambda_a8dc140887cec83d93fc1ab35d00b62d___ @ 0x1801AF658 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a8dc140887cec83d93fc1ab35d00b62d___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a8dc140887cec83d93fc1ab35d00b62d___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a8dc140887cec83d93fc1ab35d00b62d___::_CTaskWrapper__lambda_a8dc140887cec83d93fc1ab35d00b62d___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
