/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_09eec0bbc0ade630acfbce7628848781___::_scalar_deleting_destructor_ @ 0x1801B0CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_09eec0bbc0ade630acfbce7628848781___::_CTaskWrapper__lambda_09eec0bbc0ade630acfbce7628848781___ @ 0x1801AF518 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_09eec0bbc0ade630acfbce7628848781___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_09eec0bbc0ade630acfbce7628848781___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_09eec0bbc0ade630acfbce7628848781___::_CTaskWrapper__lambda_09eec0bbc0ade630acfbce7628848781___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
