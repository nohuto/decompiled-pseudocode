/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8337cec3c4c00d5a2902422a142059f___::_scalar_deleting_destructor_ @ 0x1801E8CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8337cec3c4c00d5a2902422a142059f___::_CTaskWrapper__lambda_d8337cec3c4c00d5a2902422a142059f___ @ 0x1801E8C7C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d8337cec3c4c00d5a2902422a142059f___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8337cec3c4c00d5a2902422a142059f___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8337cec3c4c00d5a2902422a142059f___::_CTaskWrapper__lambda_d8337cec3c4c00d5a2902422a142059f___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
